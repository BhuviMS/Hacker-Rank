#include <iostream>
#include <iomanip>
#include <limits>
#include<string>
#include<stdio.h>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double b;
    string c;
    // Declare second integer, double, and String variables.
    cin>>a;
    cin>>b;
    cin>>ws;
	getline(cin,c,'\n');
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cout<<a+i<<endl;
    // Print the sum of both integer variables on a new line.
    cout<<setprecision(1)<<fixed<<d+b<<endl;
    // Print the sum of the double variables on a new line.
    s+=c;
    cout<<s<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
      return 0;
}
