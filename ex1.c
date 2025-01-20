#include "stdio.h"

int get_bit(int num, int bit_num);


int main(void){
	int x;
	printf("enter the number: ");
	scanf("%d",&x);
	printf("the 4th least significant bit in %d = %d",x, get_bit(x,3));
return 0;	
}


int get_bit(int num, int bit_num){
	return ((num>>bit_num)&1);
}