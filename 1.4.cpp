/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
	int a, b, b2;
	cin >> a, b;
	for (int i=0; i < a; i++)
	{
	    cin >> b2;
	    if (b2<b)
	    {
	        b=b2;
	    }
	}
    cout <<b<< endl;
	return 0;

}

