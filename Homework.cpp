#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main(void)
{
	int *ptr1;
	int *ptr2;
	int *ptr3;
	double *ptr4;
	int num = 6, value = 8;
	double temp = 0.0;

//     Suppose you have the following 14 statements as a block of code in a program.
//     Some are valid and others are not (will not compile).
//     Mark the valid ones as true (T) and the others as false (F)
//     (You would need to remove the comments and the T F markings to run the program
//     of course.) 

ptr1 = &num;			
ptr2 = &value;	
	
ptr3 = ptr1;	//		T	F
ptr4 = &temp;	//		T	F
value = *ptr1;	//	T	F
//ptr4 = ptr1;	//		T	F
*ptr1 = *ptr2;	//	T	F
//ptr3 = ptr1 + ptr2;		//T	F
//ptr3 = ptr2 - ptr1;		//T	F
ptr1 = ptr3 + num;		//T	F
ptr2 = ptr3 - num;		//T	F
*ptr4 = *ptr4 + 35.6;	//T	F	
ptr1++;			//T	F
ptr2--;			//T	F
num = *ptr2++;	//	T	F

	system("pause");
	return 0;
}
