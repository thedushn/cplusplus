// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <iomanip> 
#include <time.h> 
#include <stdlib.h> 
using namespace std;

#define HEADER    "  *****  Sine Function Table *****\n\n"
#define ABS(a)    ((a)<0 ? (a=a*(-1)) :a=a)
#define MAX(a,b) ((a)>(b)? (a) :(b))
int main() {
	int i;
	int x, y;
		
		cout << "input negative number to test ABS" << endl;
		
		cin >> i;
		
		ABS(i);
		cout << i<<endl;
		
		cout << "input  number 1"<<endl;
		cin >> x;
		
		cout << "input  number 2" << endl;
		cin >> y;
		
		cout << "the bigger number is" << endl;
		cout<<MAX(x, y)<<endl;


	
	
		return 0;
}
