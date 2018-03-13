#include <iostream>
using namespace std;

int& fnMaximum(int&, int&);

int main()
{
	int iVal1, iVal2;
	cout << "\nEnter two values" << endl;
	cin >> iVal1 >> iVal2;

	cout << "\nvalues are : iVal1 = " << iVal1 << " iVal2 = " << iVal2 << endl;	
	
	fnMaximum(iVal1,iVal2) = 0;
	
	cout << "\nvalues are : iVal1 = " << iVal1 << " iVal2 = " << iVal2 << endl;	
	
	return 0;
}

int& fnMaximum(int &a, int &b)
{
	if(a>b)
		return a;
	else
		return b;
} 
