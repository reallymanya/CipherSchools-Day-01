/*Ques - 01 Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.

Sample Input :- Enter the first string: Hello
Enter the second string: World

Sample Output:- Concatenated string: HelloWorld*/

#include <iostream>
using namespace std;

int main(){
    string a;
    string b;

    cout << "Enter first string"<< endl;
    cin >> a;
    cout << "Enter second string"<< endl;
    cin >> b;

    cout << "Concatenated string: "<< a + b << endl;



}