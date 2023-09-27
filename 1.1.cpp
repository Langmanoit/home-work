/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (((a>=0 and a<=20) or (a>100 and a<200)) and a%2==0)
	{
	    cout << "Yes" << endl;
	}
	else
	{
	    cout << "No" << endl;
	}
}

