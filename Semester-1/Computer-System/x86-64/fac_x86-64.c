#include<stdio.h>
int fac(int n){
	if(n==0) return 1;
	return n*fac(n-1);
}
void main(){
	int N = 5;
	printf("%d! = %d\n", N, fac(N));
}
