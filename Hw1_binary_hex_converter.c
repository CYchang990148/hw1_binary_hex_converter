#include <stdio.h>
#include <math.h>

int main(){
	
	//binary
	int i, x, t;
	int bi[8];
	
	scanf("%d",&x);
	
	for(i=0;i<8;i++){
		t=pow(2,7-i);
		if(x>=t){
			bi[i]=1;
			x=x-t;
		}
		else{
			bi[i]=0;
		}
	}
	
	for(i=0;i<8;i++){
		printf("%d",bi[i]);
	}
	
	printf("\n");
	
	
	//hex
	int n1, n2;
	char hex[16]={48,49,50,51,52,53,54,55,56,57,65,66,67,68,69,70}; //0~F
	
	n1 = 8*bi[0] + 4*bi[1] + 2*bi[2] + 1*bi[3];
	n2 = 8*bi[4] + 4*bi[5] + 2*bi[6] + 1*bi[7];
	
	printf("%c%c",hex[n1],hex[n2]);
	
	return 0;
}