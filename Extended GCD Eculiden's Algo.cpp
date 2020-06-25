#include <bits/stdc++.h>
using namespace std;


int extendeGCD(int a, int b, int *x, int *y)
{
	if (a == 0)
	{
		*x = 0;
		*y = 1;
		return b;
	}

	int x1, y1;
	int gcd = extendeGCD(b%a, a, &x1, &y1);

	*x = y1 - (b/a) * x1;
	*y = x1;

	return gcd;
}

int main()
{
	int x, y, a,b ;
    cin>>a>>b;
	int g = extendeGCD(a, b, &x, &y);
	cout << g << endl;
    cout<<x<<" "<<y;
	return 0;
}
