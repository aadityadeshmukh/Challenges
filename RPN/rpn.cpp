/*A program to convert any given polish expression into a reverse polish notation*/
#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
int main()
{
	//Phase 1 taking inputs from the user
	//Number of test cases
	int tc(0);
	cout<< "\n Enter the number of expressions:";
	cin>>tc;

	//Taking expressions as inputs
	vector < std::string > iVecExpressions;  
	for(int i = 0; i<tc ; i++)
	{
		std::string inpString;
		cout << "\n Enter the " << i+1 << "th expression:";
        cin >> inpString;
	}
}
