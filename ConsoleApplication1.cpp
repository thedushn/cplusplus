// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <iomanip> 
using namespace std;

using namespace std;
int main() {
	
	int i;
	int y;
	for (i = 1; i <= 10; i++) {
	
	
		cout <<setw(4)<< i ;
		
	}
	for (int t = 1,y=1; t <= 10; t++,y++) {
		cout << endl;
		for ( i = 1; i <= 10; i++) {

			//cout << y;
			int g;
			g = i * y;
			cout << setw(4) << g;
		}
	}
	
	
	
	
			
	
		return 0;
}
