#include <iostream>
#include <vector>
using namespace std;

int Optimus(int BC1, int BC2)
{
	cout<<"\n\n*******";
	vector<int> pp, sp ,testprimes;
	//Get a list of potential pries by running a even number filter
	for(int i=BC1;i<=BC2;i++)
		if(i%2 != 0)
			pp.push_back(i);

	//Now find all the test primes before the 1st potential primes
	testprimes.push_back(2);
	for(int i=3;i<=pp[0];i++)
	{
		if(i%2 != 0) //only check odd values
			{
				int testsize = testprimes.size();
				bool isPrime = true;
				for(int j=0;j<testsize;j++)
				{
					if(i % testprimes[j]==0)
					{
						isPrime = false;
						break;
					}
				}

				if(isPrime)
					testprimes.push_back(i);
			}
	}

	//Now test all potential primes with test primes
	for(int i=0;i<pp.size();i++)
	{
		bool isPrime = true;
        for(int j=0;j<testprimes.size();j++)
        {
        	if(pp[i] % testprimes[j] == 0)
        	{
        		isPrime = false;
        		break;
        	}	
        }
        if(isPrime)
        {
        	sp.push_back(pp[i]);
        	testprimes.push_back(pp[i]);
        }
	}

	//Print the numbers
	for(int i=0;i<sp.size();i++)
		cout<<"\t"<<sp[i];

	return 1;
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
         if(bound1 < 1 || bound2 < 1 || bound1 > 1000000000 || bound2 > 1000000000 || (bound2 - bound1) >= 100000 )
         {
         	cout<<"Invalid input. Exiting"<<endl;
         	return 0;
         }
         
         bcArray.push_back(bound1);
         bcArray.push_back(bound2);
	}

	//Preprocess Prime generator Algorithm data
	bcArrSize = bcArray.size();
	for(int i=1;i<=bcArrSize;i++)
	{
		if(i%2!=0)
			Optimus(bcArray[i-1],bcArray[i]);
	}
	return 0;
}
