// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <iomanip> 
#include <time.h> 
#include <stdlib.h> 
using namespace std;
int guess(int i) {
	int n;
	char s;
	for (int y = 0; y < 3; y++) {

		cout << "Guess the number" << endl;
		cin >> n;
		if (n == i) {

			cout << "you guessed correctly" << endl;
			return 0;
		}
		cout << "try again" << endl;
	}
	cout << "do you want to try again" << endl;
	cout << "press f if you want to continue" << endl;
	cin >> s;
	if (strcmp(&s, "f")) {
	
		guess(i);
	}
	return 0;


}
int main() {

	int i;
	
	long sec;
	         // Take the number of seconds and srand( (unsigned)sec ); 
	//for (int y = 0; y < 4; y++) {
	//	srand(rand());
	//	i = rand();
	//	cout << i<<endl;
	//}

	do {
	
		srand(15);
		i = rand()%15;
		cout << i << endl;
	
	} while (i < 1 || i>15);
	cout << i << endl;
	guess(i);

	
	
		return 0;
}
