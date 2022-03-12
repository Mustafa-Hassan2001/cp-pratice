#include <stdio.h>

int main()
{
	
//// Q.1 : multiply two number without using * ?
//
//  // without using * multiplaction done by adding first num secound num times 
//  // e.g:- 4 and 5 are two num so
//  //4+4+4+4+4=20     &&     4*5=20
// 
// 	
//   int x, y ;                        //declaring two integer variable
//   int product = 0;                 //initializing product to zero
//   int i;
//   printf("Enter two integers:\n");
//   scanf("%d%d", &x, &y);
// 
// if(y<0){                //this is becuase if user give negative num this 'if' make negative to positive.
//   y=-y;        
//   x=-x;
// }
//
// //suppose user give x=4 and y=3 two num  
//  
// for(i=1;i<=y;i++){                         //  (i=1;1<=3;1++)                           
// 	                                                        
// 	product=product+x;                     //product=0+4 = 4  then  product=4+4=8  then product=8+4=12   &&    4*3=12
// }                                         //it print 12 
//                                           
//   printf("\nProuduct of multiplying two numbers are = %d\n", product);    
//
//
//
//
////          -------- *-----------------------*----------------------
//
//
//
////Q.9:- Write a program to find the letter grade when the score is entered by the user 
////such that if the score is:
////90 OR ABOVE, grade = A
////80-89, grade = B
////70-79, grade = C
////60-69, grade = D
////50-59, grade = E
////BELOW 50, grade = Fail
//
//int sub1 , sub2 , sub3 , sub4 , sub5;
//const int total_marks=500;
//int obtain_marks;
//float precentage;
//
//printf("Enter marks of sbu1=");
//scanf("%d", &sub1);
//
//printf("Enter marks of sbu2=");
//scanf("%d", &sub2);
//
//printf("Enter marks of sbu3=");
//scanf("%d", &sub3);
//
//printf("Enter marks of sbu4=");
//scanf("%d",&sub4);
//
//printf("Enter marks of sbu5="); 
//scanf("%d",&sub5);
//
//
//obtain_marks= sub1 + sub2 + sub3 + sub4 + sub5 ;
//
//precentage=(obtain_marks*100)/total_marks;
//
//printf("The precentage is %f \n",precentage);
//
// if(precentage>=90){
//	printf("A\n");
//}
//else if(precentage>=80 || precentage<90){
//	printf("B\n");
//}
// else if(precentage>=70 || precentage<=79){
//	printf("C\n");
//} 
//else if(precentage>=60 || precentage<=69){
//	printf("D\n");
//}
//else {
//	printf("Fail\n");
//}
//
//
//// /          -------- *-----------------------*----------------------
//
//// Q.2:- Design a Case structure program for:
////a) Even or Not
////b) Prime or not
////c) Square or not
////d) default
//
//
//
//int num , i , square  ;
//char choise [10];
//printf("Enter number");
//scanf("%d",&num);
//printf("Enter e for even, \n p for prime, \n s for perfect square, \n choise= \t ");
//scanf("%s",&choise);
//
//swtich(choise){
//	case'e':
//	case'E':
//	        if(num%2==0){
//	        	printf("%d is even.",num);
//			}
//			else{
//				printf("%d is not even",num);
//			}
//			
//	case'p':
//	case'P':
//	        for(i=2;i<=num-1;i++){
//	       		if(num%i==0){
//	       			printf("%d is prime",num);
//				   }
//				else{
//					printf("%d is not prime",num);
//				}   
//		   }
//	case 's':
//	case 'S':
//		square=sqrt(num);
//		result=(square*square);
//		if(result==num){
//			printf("%d is square",num);
//		}
//		else{
//			printf("%d is not square",num);
//		}
//		
//	        		   		
//}
//
//
////          -------- *-----------------------*----------------------
//
//
////Q.3:-Write a program to print all multiples of 5 between 1 and 100 (including both 1 and 100).
//
//
//int i;
//printf("The all multiples of 5 between 1 and 100 are: \n");
//for(i=1;i<=100;i++){                                 // it start from 1 till 100
//	if(i%5==0)                                         // all num which divde from 5 and give  reminder 0  are the multiples
//	printf("%d,",i);                                   //5%5==0 ,10%5==5,...100%5==0
//}
//
////          -------- *-----------------------*----------------------
//
////Q.4:Write a program that will count all the even numbers up to a user-defined stopping point.
//
//int num , i;
//printf("Enter the number for your range is :");     
//scanf("%d",&num);            //if num==4:-
//for(i=1;i<=num;i++){         //2%2==0 , 4%2==0 6%2==0 it print 2,4,6.       
//	if(i%2==0)                //but 3%2==not 0  5%2==not 0  so odd num is not print.
//	printf("%d,",i);
//}
//
////          -------- *-----------------------*----------------------
//
////Q5: Write a program that will perform the following.
////a) Read in 5 separate numbers.
////b) Calculate the average of the five numbers.
////c) Find the smallest (minimum) and largest (maximum) of the five entered numbers.
////d) Write out the results found from steps b and c with a message describing what they are
//
//
//int   i , average, num_1 ,num_2, num_3 , num_4 ,num_5;  
//printf("Enter five numbers =");
//scanf("%d%d%d%d%d",&num_1,&num_2,&num_3,&num_4,&num_5);            //suppose 5 num are 2 3 4 6 7 
//
//// Finding average
//
//average=(num_1 + num_2 + num_3 + num_4 + num_5) / 5;              //(2+3+4+6+7)/5 = 5.
//printf("The average of your five number is %d\n",average);  
//
//// Finding maximun
//
//if(num_1>num_2 && num_1>num_3 && num_1>num_4 && num_1>num_5){        //2>3 , 2>4 , 2>6 , 2>7.
//	printf("%d is maximum number\n",num_1);
//}
//else if(num_2>num_1 && num_2>num_3 && num_2>num_4 && num_2>num_5){    //3>2 , 3>4 , 3>6 , 3>7.
//	printf("%d is maximum number\n",num_2);
//}
//else if(num_3>num_1 && num_3>num_2 && num_3>num_4 && num_3>num_5){    //4>3 , 4>2 , 4>6 , 4>7.
//	printf("%d is maximum number\n",num_3);
//}
//else if(num_4>num_1 && num_4>num_3 && num_4>num_2 && num_4>num_5){     //6>3 , 6>4 , 6>2 , 6>7.
//	printf("%d is maximum number\n",num_4);
//}
//else if(num_5>num_1 && num_5>num_3 && num_5>num_4 && num_5>num_2){      //7>3 , 7>4 , 7>2 , 7>6.   (TRUE)
//	printf("%d is maximum number\n",num_5);                              // 7 is the maximum number.
//}
//else{
//	printf("error");
//}
//
//// Finding minimun 
//
//if(num_1<num_2 && num_1<num_3 && num_1<num_4 && num_1<num_5){       //2<3 , 2<4 , 2<6 , 2<7.    (TRUE)
//	printf("%d is minimum  number\n",num_1);                         //2 is minimum number.
//}
//else if(num_2<num_1 && num_2<num_3 && num_2<num_4 && num_2<num_5){   //3<2 , 3<4 , 3<6 , 3<7.
//	printf("%d is minimum number\n",num_2);
//}
//else if(num_3<num_1 && num_3<num_2 && num_3<num_4 && num_3<num_5){   //4<3 , 4<2 , 4<6 , 4<7.
//	printf("%d is minimum number\n",num_3);
//}
//else if(num_4<num_1 && num_4<num_3 && num_4<num_2 && num_4<num_5){   //6<3 , 6<4 , 6<2 , 6<7.
//	printf("%d is minimum number \n",num_4);
//}
//else if(num_5>num_1 && num_5>num_3 && num_5>num_4 && num_5>num_2){   //7<3 , 7<4 , 7<6 , 7<2.
//	printf("%d is minimum number \n",num_5);
//}
////          -------- *-----------------------*----------------------
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////          -------- *-----------------------*----------------------
////Q10: Write a program that takes N as input and prints the numbers from 1 to N and their
////squares and cubes in the following manner.
////Eg. N=10
////Number Square Cube
////1 1 1
////2 4 8
////3 9 81
////... .. ...
////10 100 1000
//
//int i ,num ;
//printf("Enter number:");
//scanf("%d",&num);                              //4
//for(i=1;i<=num;i++){                           //(i=1;1<=4;1++)
//	printf("%d \t %d  \t %d\n",i,i*i,i*i*i);   // i=1:     1  1*1  1*1*1 ---------------- 1 1 1   
//}                                              //i=2:      2  2*2  2*2*2-----------------2 4 8



///=======================================
      
//int x, sum;                          
//sum = 0;                      
//printf("Enter number:");             
//scanf("%d",&x);                  
//while(x <= 0)                 
//{ sum = sum + x;            
// printf("%d",x);                  
//}	


//o ,''


////----------Fibonacci Series-----------------
//  int i, n;
//
//  // initialize first and second terms
//  
//  int t1 = 0, t2 = 1;
//
//  // initialize the next term (3rd term)
//  
//  int nextTerm = t1 + t2;
//
//  // get no. of terms from user
//  
//  printf("Enter the number of terms: ");
//  scanf("%d", &n);
//
//  // print the first two terms t1 and t2
//  
//  printf("Fibonacci Series: %d, %d, ", t1, t2);
//
//  // print 3rd to nth terms
//  
//  for (i = 3; i <= n; ++i) {
//    printf("%d, ", nextTerm);
//    t1 = t2;
//    t2 = nextTerm;
//    nextTerm = t1 + t2;
//  }


//============================================================================


//// TO CHEAK AMSTRONG SEIRES;

//   int num, Num, remainder, result = 0;
//    printf("Enter a three-digit integer: ");
//    scanf("%d", &num);
//    Num = num;
//
//    while (Num != 0) {
//       // remainder contains the last digit
//       
//        remainder = Num % 10;
//        
//       result += remainder * remainder * remainder;
//        
//       // removing last digit from the orignal number
//       
//       Num /= 10;
//    }
//
//    if (result == num)
//        printf("%d is an Armstrong number.", num);
//    else
//        printf("%d is not an Armstrong number.", num);


//=====================================================


//AMSTRONG SEIRES 1 FROM 1000.

// int i , x , reminder ,sum;
//printf("AMSTRONG SEIRES 1 FROM 1000.\n");
//for(i=1;i<=1000;i++){
//	sum=0;
//	x=i;
//	while(x!=0){
//		reminder=x%10;
//		sum+=(reminder*reminder*reminder);
//		x=x/10;
//	}
//	if(sum==i)
//	        printf("%d ,",i);
//} 






                                                  
//int i ,j , num;
//printf("Enter number");
//scanf("%d",&num);
//for(i=1;i<=num;i++){
//	for(j=i;j>=1;j--){
//		printf("%d",j%2);
//	}
//	
//	printf("\n");
//}




//int i ,j , space ,row ,k ;
//printf("Enter number = ");
//scanf("%d",&row);
//space=row+4-1;
//for(i=1;i<=row;i++){
//	for(k=space;k>=1;k--){
//      		printf("  ");
//		}
//		for(j=1;j<=i;j++){
//			printf("* ");
//		} 
//		printf("\n");
//        space--;
//
//	}

//   int i,j,spc,rows,k;
//   printf("Input number of rows : ");
//   scanf("%d",&rows);
//   spc=rows+4-1;
//   for(i=1;i<=rows;i++)
//   {
//         for(k=spc;k>=1;k--){
//              printf(" ");
//        }
//	   for(j=1;j<=i;j++){
//	   printf("* ");
//    }
//	printf("\n");
//    spc--;
//   }




//   int i,j,n;
//   printf("Input number of rows for this pattern :");
//   scanf("%d",&n);
//   for(i=0;i<n;i++)
//   {
//     for(j=1;j<=n-i;j++)
//     printf(" ");
//     for(j=1;j<=2*i-1;j++)
//       printf("*");
//     printf("\n");
//   }



//int i ,j , n=4;
//for(i=0;i<=n;i++){
//	for(j=1;j<=n-i;j++){
//		printf(" ");
//	}
//	for(j=1;j<=2*i-1;j++){
//		printf("*");
//	}
//	printf("\n");
//}
//for(i=n-1;i>=1;i--){
//	for(j=1;j<=n-i;j++){
//		printf(" ");
//	}
//	for(j=1;j<=2*i-1;j++){
//		printf("*");
//	}
//	printf("\n");
//}




























//int i ,j ;
//for(i=1;i<=5;i++){         //i=1 & j=1                              it print:1
//	for(j=1;j<=i;j++){        //i=2 & j=1 ,j=2                      it print:1 2
//		printf("%d",j);       //i=2 & j=1 ,j=2, j=3                 it print:1 2 3  
//	}                       //i=2 & j=1 ,j=2 ,j=3 ,j=4              it print:1 2 3 4
//	printf("\n");           //i=2 & j=1 ,j=2 ,j=3 ,j=4, j=5         it print:1 2 3 4 5
//}







//int i , j;
//for(i=5;i>=1;i--){           //i=5 & j=1 ,j=2, j=3, j=4 ,j=5  it print 1 2 3 4 5
//	for(j=1;j<=i;j++){       //i=4 & j=1 ,j=2, j=3, j=4       it print 1 2 3 4 
//		printf("%d \t",j);    //i=3 & j=1 ,j=2, j=3           it print 1 2 3
//	}                          //i=2 & j=1 ,j=2,              it print 1 2 
//	printf("\n");               //i=2 & j=1 ,j=2,             it print 1  
//}


























   return 0;
}
