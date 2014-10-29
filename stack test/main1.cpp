// Title:		Binary convertor using stacks
// Name:		Abdullah Alfouzan
// Course:		CSCI360
// Instructor:	Heda Samimi
// Due Data:	11/11/10
// Program Description: This program will convert any number between 1 and 32767 to its binary form
//			Input:
//					From Keyboard: 
//						- a Number between 1 and 32767
//			Output:
//					To the secreen:
//						- The Binary Equivalent of the number that been entered from the user.
//						- The original number that entered from the user.
#include<iostream>
#include<string>
using namespace std;


bool isEmpty ();		// To check if the list(stack) is empty or not.
void pop ();			// To output the last number of the binary equivalent list.
void push (int binary);	// To add a number to the binary equivlent list.



const int MAX = 15; // The maximum number of the binary equivlent is 15 digit.
int stack[MAX];		// The list of the binary equivlent digits
int top =-1;		// The top is the last item that been entered to the list.

int main()
{
	int binary =0; // holds single binary digit.
	int num =0;	// holds the number that entered from the user.
	int orginal=0; // the orginal that entered from the user.
	
			cout <<"Please Enter a number between 0 and 32767 " <<endl;
			cin >>num; // get a number from the user.
		while(num < 0 || num > 32767)
		{ 
		//if the number is negative or bigger than 32767, reEnter the number.
			cout <<"You entered wroung value, please make sure the number is between 0 and 32767" <<endl;
			cin >> num;
		}
			orginal = num;
	while(num !=0)
	{
		// while the number is not equal to 0 the loop will countinue to divid the number by 2
		// and get the reminder and push it to the list.
		binary = num%2; 
		push(binary);
		num = num/2;
	}

	cout << "the binary equivlent = ";
	while(!isEmpty ())
	{
		// outputting the binary equivlent of the number entered by the user.
		pop();
	}
	cout << endl;
	cout << "the orginal number = " << orginal << endl;
	return 0;
}

void push (int binary)
{
	// add the binary number to the list.
	top++;
	stack[top] = binary;
	
}

void pop ()
{
	// output the binary number from the list.
	cout << stack[top];
	top--;
}
bool isEmpty ()
{
	// check if the list is empty
		return (top == -1);
}