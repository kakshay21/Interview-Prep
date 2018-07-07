#include<iostream>
using namespace std;

class Box {
    public:
    // The class should have the following functions : 
    // Constructors: 
    Box();
    Box(int length, int breadth, int height);
    Box(const Box &obj);

    int getLength(); // Return box's length
    int getBreadth (); // Return box's breadth
    int getHeight ();  //Return box's height
    long long CalculateVolume(); // Return the volume of the box

    //Overload operator < as specified
    //bool operator<(Box& b)
    bool operator<(const Box& B){
        if(this->box_length < B.box_length){
            return true;
        }
        else if((this->box_breadth < B.box_length)&&(this->box_length == B.box_length)){
            return true;
        }
        else if((this->box_height == B.box_height)&&(this->box_breadth == B.box_breadth)&&(this->box_length == B.box_length)){
            return true;
        }
        else{
            return false;
        }
    }
    //l,b,h are integers representing the dimensions of the box
    private:
    int box_length;
    int box_breadth;
    int box_height;

};

Box::Box(){
        this->box_length = 0;
        this->box_breadth = 0;
        this->box_height = 0;
    }
Box::Box(int length,int breadth,int height){
        this->box_length = length;
        this->box_breadth = breadth;
        this->box_height = height;
    }
Box::Box(const Box& obj){
        this->box_length = obj.box_length;
        this->box_breadth = obj.box_breadth;
        this->box_height = obj.box_height;
    }
int Box::getLength(){
        return this->box_length;
    }
int Box::getBreadth(){
        return this->box_breadth;
    }
int Box::getHeight(){
        return this->box_height;
    }
long long Box::CalculateVolume(){
        long long volume = box_length*box_breadth*box_height;
        return volume;
    }
//Overload operator << as specified
ostream& operator<< (ostream& out, Box& B){
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}
 
void check()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check();
}
