# Hw1 Binary and Hexadecimal Converter
## How it works
+ The program first reads an integer from the user.
  ```
  scanf("%d",&x);
  ```
+ The integer is then converted into its binary representation with a for loop:
  It iterates through each bit position (from left to right) and calculates whether the current bit should be 0 or 1 based on the powers of 2.
  ```
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
  ```
+ After the conversion completed, the binary representation is printed out.
  ```
  for(i=0;i<8;i++){
		printf("%d",bi[i]);
	}
  ```
+ Next, the program converts the binary representation into hexadecimal by dividing the binary number into two groups of 4 bits each and converting each group to its equivalent hexadecimal digit.
  ```
  int n1, n2;
	char hex[16]={48,49,50,51,52,53,54,55,56,57,65,66,67,68,69,70}; //0~F
	
	n1 = 8*bi[0] + 4*bi[1] + 2*bi[2] + 1*bi[3];
	n2 = 8*bi[4] + 4*bi[5] + 2*bi[6] + 1*bi[7];
  ```
+ Finally, the hexadecimal representation is printed out.
  ```
  printf("%c%c",hex[n1],hex[n2]);
  ```
## Results
### Input 1

### Input 2
