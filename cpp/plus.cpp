
// Sample code to perform I/O:

#include <cstdio>

int maxPlus(int n, int m, int arr[][m]){
    int k, l, max = 0, intMax = 0;
    for(int i=1;i<n-1;i++){
        k = n-i;
        for(int j=1;j<m-1;j++){
            l = m-j;
                    if((i == k && j == l)||(i == k-1 && j == l)||(i == k+1 && j == l)||(i == k && j == l-1)||(i == k && j == l+1)){
                        continue;
                    }
                    else if((i-1 == k && j == l)||(i-1 == k-1 && j == l)||(i-1 == k+1 && j == l)||(i-1 == k && j == l-1)||(i-1 == k && j == l+1)){
                        continue;
                    }
                    else if((i+1 == k && j == l)||(i+1 == k-1 && j == l)||(i+1 == k+1 && j == l)||(i+1 == k && j == l-1)||(i+1 == k && j == l+1)){
                        continue;
                    }
                    else if((i == k && j-1 == l)||(i == k-1 && j-1 == l)||(i == k+1 && j-1 == l)||(i == k && j-1 == l-1)||(i == k && j-1 == l+1)){
                        continue;
                    }
                    else if((i == k && j+1 == l)||(i == k-1 && j+1 == l)||(i == k+1 && j+1 == l)||(i == k && j+1 == l-1)||(i == k && j+1 == l+1)){
                        continue;
                    }
                    else{
                        intMax = arr[i][j]*arr[k][l] + arr[i-1][j]*arr[k-1][l] + arr[i+1][j]*arr[k+1][l] + arr[i][j-1]*arr[k][l-1] + arr[i][j+1]*arr[k][l+1];
                        if(intMax > max) max = intMax;
                    }
            k--;    
            
        }
        l--;
    }
    return max;
}

int main() {
	int n, m;
	scanf("%d%d",&n,&m);
	int arr[n][m];
	for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	        scanf("%d",&arr[i][j]);
	    }
	}
	printf("%d",maxPlus(n, m, arr));
	return 0;
}
