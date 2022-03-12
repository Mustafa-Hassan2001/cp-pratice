#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {

//Q.1:-
//1
//11
//111
//1111
//11111

//------------------------------//


//	int i , j;
//	for(i=1;i<=5;i++){
//		for(j=1;j<=i;j++){
//			printf("1");
//		}
//			printf("\n");
//}

//--------------------------------------------------



//Q.2:-
//11111
//1111
//111
//11
//1

//	int i , j;
//	for(i=5;i>=1;i--){
//		for(j=i;j>=1;j--){
//			printf("1");
//		}
//			printf("\n");
//	}
	
//------------------------------------------------------------------//


//Q.3:-
//numbers 1 to 10 

//	int i=0;                         //-------------------initialization
//	while(i<=10){                   //--------------------conditionc cheacking
//		printf("%d \n",i);          //--------------------increment/decrement
//	    i=i+1;
//	}

//----------------------------------------------------------------------


//Q.4:-
//for this series-----11111111111

//int i=1;
//while(i<=10){
//	printf("1");
//	i++;
//}


//int num ,i;
//printf("Enter number:");
//scanf("%d",&num); 
//
//for (i=2 ; i<=num-1 ; i++){
//	num%i==1;
//	break;
//
//if(num==1){
//	printf("%d is prime number",num);
//}
//else{
//	printf("%d is not prime number",num);
//}


//Q10: Write a program that takes N as input and prints the numbers from 1 to N and their
//squares and cubes in the following manner.
//Eg. N=10
//Number Square Cube
//1 1 1
//2 4 8
//3 9 81
//... .. ...
//10 100 1000

int i ,num ;
printf("Enter number:");
scanf("%d",&num);
for(i=1;i<=num;i++){
	printf("%d \t %d  \t %d\n",i,i*i,i*i*i);
}

































	
	
	return 0;
}
