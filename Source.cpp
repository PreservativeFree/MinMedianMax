//From a list of 6 numbers find the average,
//the median, and check if the numbers are not all the same 1 3 5 6 7 8
//or if the numbers are not all different 3 3 4 5 6 7

#include <iostream>
#include <string>
using namespace std;

bool die(const string & msg);

int main () {

	string someSame, someDifferent;
	int a, b, c, d, e, f, minimum, maximum;
	double median, average;

	cout <<"Enter 6 numbers in order from smallest to largest: ";

	cin >>a >>b >>c >>d >>e >>f;

	if(cin.fail()) die("Input failure");

	if (a <= b && b <= c && c <= d && d <= e && e <= f) {
		minimum = a;
		maximum = f;
		median = (c + d)/2.0;
		average = (a+b+c+d+e+f)/6.0;
	} else
		die("The numbers are out of order.");

	if(a == b && b == c && c == d && d == e && e == f) {
		someSame = "The numbers are not all different.";
		someDifferent = " ";
	} else if(a == b || b == c || c == d || d == e || e == f) {
		someSame = "The numbers are not all different."; // Some are the same
		someDifferent = "The numbers are not all the same."; //Not all of them are the same
	} else {
		someSame = " "; //Because they are all different
		someDifferent = "The numbers are not all the same.";
	}

	cout <<"Minimum: " <<minimum <<endl <<"Median: " <<median
		<<endl <<"Average: " <<average <<endl <<"Maximum: " <<maximum <<endl
		<<someDifferent <<endl <<someSame <<endl ;
}

bool die(const string & msg) {
	cerr <<endl <<"Fatal error: " <<msg <<endl;
		exit(EXIT_FAILURE);
}
