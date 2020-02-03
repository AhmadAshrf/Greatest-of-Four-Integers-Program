#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
								//Print The Greatest of Four Integers Program.

// a function that take a 4 parameters
int max_of_four(int a, int b, int c, int d){
	//take the value from user
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	int max = 0;
	if (a > b && a > c && a > d)
		max = a;
	if (b > a && b > c && b > d)
		max = b;
	if (c > a && c > b && c > d)
		max = c;
	if (d > a && d > b && d > c)
		max = d;
	return max;
}


// callin' the => max_of_four => function in main body and put a 4 arguments
int main(){
	cout << max_of_four(1, 2, 3, 4);
	system("pause");
	return 0;
};
