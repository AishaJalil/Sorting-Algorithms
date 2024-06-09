#include <iostream>
using namespace std;

int main()
{
	string arr[5]={"azt", "ball","door","egg","apple"};
	string min=arr[0],temp;
	cout<<"Unsorted string :       ";
	
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"  ";
	}
	
	
	
	
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<4; j++)
		{
			if(arr[i]<arr[j])
			{
				min=arr[j];
				temp=arr[i];
				arr[i]=min;
				arr[j]=temp;
				
			//	cout<<"i= "<<i<<", j = "<<j<<" min = "<<min<<endl;
			}
		}
	}
	
	
	cout<<"\n\nSorted string :       ";
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"  ";
	}
}
