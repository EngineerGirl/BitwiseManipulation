/*
 ==============================================================================
 Name        : no_of_ones.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. All rights reserved.
 Description : Count number of ones in an int using cpp
 ==============================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <bitset>
#include <math.h>
using namespace std;

int no_of_ones(int a)
{int res=0;
double power;
int count=0;
	for(int i=0;i<32;i++)
	{
		res=a&(1<<i);
		power=pow(2.0,(double)i);
		if(res==power)
		{
			count++;
		}
		res=0;
	}
	return count;
}

int main()
{
	int result;
	int b=1022;
	bitset<32>x(b);
	cout<<x;
	result=no_of_ones(1022);
	cout<<endl;
	cout<<result<<endl;
system("pause");
return 0;
}
