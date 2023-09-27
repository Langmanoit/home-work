/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a>> b >>c;
	if (a==b and b==c)
	{
	    cout << "Equa" << endl;
	    return 0;
	}
	else if ((a+1==b and b+1==c) or (a-1==b and b-1==c))
	{
	    cout << "Cons" << endl;
	}
	if (a>b and b>c)
	{
	    cout << "Incr" << endl;
	    return 0;
	}
	if (a<b and b<c)
	{
	    cout << "Decr" << endl;
	    return 0;
	}
	else
	{
	    cout << "none" << endl;
	}
}

