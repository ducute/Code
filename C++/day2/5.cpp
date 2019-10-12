#include<iostream>
using namespace std;
int main()
{
	int number_of_words = 0;
	string pervious = "";
	string current;
	while(cin>> current)
	{
	 ++number_of_words;
	 if(pervious == current)
		cout<<"word number"<<number_of_words<<"repated:"<<current<<"\n";
	 	pervious = current;
	}
}
