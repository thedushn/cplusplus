

#include "stdafx.h"
#include <iostream>
#include <thread>
#include <string>
#define PORT 8080
using namespace std;

void call_from_thread(int i ,int y) {
	cout << "Hello, World\n" << i << endl;
	cout <<y << endl;

}

	void getput(void);
	long sum(long, long, long=0, long=0);

int main() { 
	cout << "Please enter a line of text:\n"; 
getput();
cout << "\nBye bye!" << endl;
return 0;
}
void getput() {
	char c;
	if (cin.get(c) && c != '\n')
		getput();
	cout.put(c);
}