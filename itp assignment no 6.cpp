//                        ASSIGNMENT NO 6
//                          
/*#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
int sales[5];
int store = 0;
int stars=0;

for (int i = 1; i <= 5; i++)
{
cout << "Enter today's sale for store " << i << ":";
cin >> sales[i];
}
cout << "\tSALES BAR CHART!!" << endl;
for (int i = 1; i <= 5; i++){
stars = sales[i]/100;
cout << "Store" << i << ":";

for (int y = 0; y < stars; y++)
{
cout << "*";
}
cout << endl;
}

system("PAUSE");
}*/

#include<iostream>
using namespace std;
int main()
{
	const int min=0;
	int store_1,store_2,store_3,store_4,store_5;
	int s1,s2,s3,s4,s5;
	cout<<"Enter today's sales of store 1:";
	cin>>s1;
	cout<<"Enter today's sales of store 2:";
	cin>>s2;
	cout<<"Enter today's sales of store 3:";
	cin>>s3;
	cout<<"Enter today's sales of store 4:";
	cin>>s4;
	cout<<"Enter today's sales of store 5:";
	cin>>s5;
	cout<<"\tSALES BAR CHART!!"<<endl;
	store_1=s1/100;
	store_2=s2/100;
	store_3=s3/100;
	store_4=s4/100;
	store_5=s5/100;
	cout<<"store 1:";
	for(int i=0;i<store_1;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	cout<<"store 2:";
	for(int i=0;i<store_2;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	cout<<"store 3:";
	for(int i=0;i<store_3;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	cout<<"store 4:";
	for(int i=0;i<store_4;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	cout<<"store 5:";
	for(int i=0;i<store_5;i++)
	{
		cout<<"*";
	}
	cout<<endl;
}

