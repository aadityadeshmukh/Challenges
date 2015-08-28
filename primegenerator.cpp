#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

int Optimus(int BC1, int BC2)
{
	cout<<"\n\n*******";
	vector<int>

}

int main()
{
	//get the input from the user for number of test cases
	int numtest(0), bcArrSize(0);
	cout<<"Enter the number of test cases man:"<<endl;
	cin>>numtest;
	if(numtest < 1 || numtest>10)
	{
		cout<<"\n Invalid input. Min or Max number of test cases can be 1 or 10. Exiting...";
		getch();
		return 0;
	}
	//Loop to get user inputs for boundaries
	cout<<"\n Enter the inputs:"<<endl;
	vector<int> bcArray;
	for(int i = 0;i<numtest;i++)
	{
         int bound1(0),bound2(0);
         cin>>bound1;
         cin>>bound2;
         if(bound1 < 1 || bound2 < 1 || bound1 > 1000000000 || bound2 > 1000000000 || (bound2 - bound1) <= 100000 )
         {
         	cout<<"Invalid input. Exiting"<<endl;
         	return 0;
         }
         
         bcArray.push_back(bound1);
         bcArray.push_back(bound2);
	}

	//Preprocess Prime generator Algorithm data
	bcArrSize = bcArray.size();
	for(int i=0;i<bcArrSize;i++)
	{
		if(i%2!=0)
			Optimus(bcArray[i],bcArray[i+1]);
	}
	getch();
	return 0;
}

