// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <iomanip> 
#include <time.h> 
#include <stdlib.h> 
using namespace std;
int main() {

	int i;

	cin >> i;
	if (i < 0 || i>65535) {
		cout << "mistakeru" << i << endl;
		return 0;
	}
	cout << i<<endl;
	
	srand(i);

	cout << (rand() % 100 + 1) << endl;
	
			
	
		return 0;
}
