/*A program to convert any given polish expression into a reverse polish notation*/
#include <iostream>
#include <conio.h>
#include <vector>
#include <ctype.h>
using namespace std;
int main()
{
	//Phase 1 taking inputs from the user
	//Number of test cases
	int tc(0);
	cout<< "\n Enter the number of expressions:";
	cin>>tc;

	//Taking expressions as inputs
	vector < std::string > iVecExpressions, oVecVars , oVecOperators;  
	for(int i = 0; i<tc ; i++)
	{
		std::string inpString, outAlphaString , outOperatorString;
		cout << "\n Enter the " << i+1 << "th expression:";
        cin >> inpString;
        for(int j=0; j<inpString.length(); j++)
        {
        	if(int iA = isAlpha(inpString[j]))
        	{
        		outAlphaString += inpString[j];
        	}
        	else
        	{
        		
        	}

        }
	}

	//Phase 2 seperating the variables
	for(int i=0; i<tc; i++)
	{
		std::string inpString = iVec
	}
}
