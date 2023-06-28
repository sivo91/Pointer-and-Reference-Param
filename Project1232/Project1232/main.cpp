 
#include <iostream>
#include <string>
#include <cmath> 
#include <vector>
#include <iomanip>
#include <cstdlib> 
#include <ctime> 
#include <cmath> 

using namespace std;

void x(int &x) {  // reference parameter
	x = x * 2;
}

int main() 
{
	int num = 5;
	int& n = num; // reference to value num , copy of num
	int* ptr = &num; // pointer pointing to num

	cout << " value num " <<  num << endl;  // 5

	cout << " reference to value num " << n << endl; // 5

	cout << " address of value num " << &num << endl; 

	x(num);

	cout << " reference param " << num << endl; // 10

	
	cout << " *ptr " << *ptr << endl; // 10

	cout << " ptr " << ptr << endl;
	
	return 0;
}
