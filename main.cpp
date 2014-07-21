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

int cellCheck(int digits[], int length);
int sortDescend(int digits[], int descend[], int length);
int sortAscend(int digits[], int ascend[], int length);
int difference(int descend[], int ascend[], int length);

int main()
{
	cout << "What digit length would you like to test?" << endl;
	cout << "Length: ";
	int length;
	cin >> length;

	//Creates the initial array for testing//
	int *digits;
	digits = new int[length];

	//Place Holder Array for Descending Order//
	int *descend;
	descend = new int[length];

	//Place Holder Array for Ascending Order//
	int *ascend;
	ascend = new int[length];

	//Place Holder Array for Difference//
	int *diff;
	diff = new int[length];

	//Place Holder Array//
	int *prev;
	prev = new int[length];

	//Place Holder Array//
	int *cur;
	cur = new int[length];


	//Fill Array With Zeros//
	for (int i = 0; i < length; i++)
			digits[i] = 0;

	*digits = cellCheck(digits, length);

	*descend = sortDescend(digits, descend, length);
	*ascend = sortAscend(digits, ascend, length);
	*diff = difference(descend, ascend, length);
	
	

	do
	{
		
	} while (cur != prev);

	

	return 0;
}



int cellCheck(int digits[], int length)
{
	int flag = 0;
		
	for (int i = 0; i < length - 1; i++)
	{
		if (digits[i] == digits[i + 1])
		{
			flag = flag + 1;
		}
	}

	if (flag == length - 1)
	{
		//Increments value by 1 if all numbers in array are the same.//
		std::stringstream ss;
		for (unsigned i = 0; i < length; ++i)
			ss << digits[i];
		
		int increment;
		ss >> increment;
		increment = increment + 1;
		
		for (int i = length - 1; i >= 0; i--)
		{
			digits[i] = increment % 10;
			increment /= 10;
		}

		return *digits;
	}
	
	/*
	else
	{
		cout << endl;
		cout << "Not all values in this array are the same.  ";
		
		cout << "The values in the array are: ";
		for (int i = 0; i < length; i++)
			cout << digits[i] << " ";
		
		cout << endl << endl;
	}
	*/
}



int sortDescend(int digits[], int descend[], int length)
{
	for (int i = 0; i < length; i++)
	{
		descend[i] = digits[i];
	}
	
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - 1; j++)
		{
			if (descend[j] < descend[j + 1])
			{
				int temp;
				temp = descend[j];
				descend[j] = descend[j + 1];
				descend[j + 1] = temp;
			}
		}
	}
	
	
	return *descend;
}

int sortAscend(int digits[], int ascend[], int length)
{
	for (int i = 0; i < length; i++)
	{
		ascend[i] = digits[i];
	}

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - 1; j++)
		{
			if (ascend[j] > ascend[j + 1])
			{
				int temp;
				temp = ascend[j];
				ascend[j] = ascend[j + 1];
				ascend[j + 1] = temp;
			}
		}
	}
	
	return *ascend;
}



int difference(int descend[], int ascend[], int length)
{

	for (int i = 0; i < length; i++)
	{
		
	}
	return 0;
}