/*Ques-02 Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.

Sample Input:- Enter grade 1: 85
Enter grade 2: 90
Enter grade 3: 78
Enter grade 4: 92
Enter grade 5: 88

Sample Output:- The average grade is: 86.6*/


#include <iostream>
using namespace std;
int main(){
int a,b,c,d,e;
float avg;
cout << "Enter grade 1: "<<endl;
cin >> a;
cout << "Enter grade 2: "<<endl;
cin >> b;
cout << "Enter grade 3: "<<endl;
cin >> c;
cout << "Enter grade 4: "<<endl;
cin >> d;
cout << "Enter grade 5: "<<endl;
cin >> e;
avg = (a+b+c+d+e)/5;
cout << "The average grade is: "<< avg <<endl;


}