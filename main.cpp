//
//  main.cpp
//  Kaprekar
//
//  Created by Tanner Crook on 7/19/14.
//  Copyright (c) 2014 Tanner Crook. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;

/*void brandon() {
    while (true) {
        
        int maxDigits = 0;
        
		int *digits;
        digits = new int[maxDigits];
        
        cout << "Enter the number of digits you would like to test. --> ";
        cin >> maxDigits;
        cout << endl << endl;
        
        
        // initalize to 0
        for (int i = 0; i < maxDigits; i++) {
            digits[i] = 0;
            cout << digits[i] << " ";
        }
        
        // turn into single number
        stringstream ss;
        for (unsigned i = 0; i <= sizeof digits / sizeof digits [0]; ++i)
            ss << digits [i];
        int result;
        ss >> result;
        cout << "the result is: " << result;
        
        cout << endl << endl << endl;
        
        // start filling with numbers
        for (int i = 0; i < maxDigits; i++) {
            for (int j = 0; j <= 9; j++) {
                digits[i] = j;
            }
        }
        
    }
    
}


int main(int argc, const char * argv[])
{

    // insert code here...
    brandon();
    return 0;
}
*/

//-------------------------------------------------------------//
//
//  Created by Brandon Weathers on 7/20/14.
//  Copyright (c) 2014 Brandon Weathers. All Rights Reserved.
//

void sort();
void compare();
void cellCheck(int digits[], int length);
void convertToNumber();
void convertToArray();

int main()
{
	cout << "What digit length would you like to test?" << endl;
	cout << "Length: ";
	int length;
	cin >> length;

	//Creates the initial array for testing//
	int *digits;
	digits = new int[length];

	//Place Holder Array//
	int *prev;
	prev = new int[length];

	//Place Holder Array//
	int *cur;
	cur = new int[length];



	for (int i = 0; i < length; i++)
		digits[i] = 0;

	cellCheck(digits, length);

	do
	{
		
	} while (cur != prev);

	

	return 0;
}



void sort()
{


}



void compare()
{


}



void cellCheck(int digits[], int length)
{
	int flag = 0;
	
	cout << endl << digits[0] << digits[1] << digits[2] << endl;;
	
	for (int i = 0; i < length - 1; i++)
	{
		if (digits[i] == digits[i + 1])
		{
			flag = flag + 1;
		}
	}

	if (flag == length-1)
	{
		cout << endl;
		cout << "All values of the array are the same!" << endl;
		cout << "The array contains " << length << " " << digits[0] << "\'s." << endl << endl;
	}
	else
	{
		cout << endl;
		cout << "Not all values in this array are the same.  ";
		
		cout << "The values in the array are: ";
		for (int i = 0; i < length; i++)
			cout << digits[i] << " ";
		
		cout << endl << endl;
	}
		
}



void convertToNumber()
{
	//Something like this//
	/*
	int temp;
	stringstream convert(number);
	if (!(convert >> temp))
		temp = 0;

	cout << endl << endl;
	cout << temp + 1;
	*/
}



void convertToArray()
{

}