#include<iostream>
#include<cstdlib>
#include"data.hpp"
#include"perceptron.hpp"

using namespace std;

int main()
{
	srand(time(0));
	sample train_data[1000];
	for(int i=0;i<1000;i++)
	{
		train_data[i].x_1=rand()%100;
		train_data[i].x_2=rand()%100;
		train_data[i].y=train_data[i].x_1+train_data[i].x_2-100>0?1:-1;
	}
	double w_1,w_2,b;
	perceptron(train_data,1000,w_1,w_2,b);
	cout<<w_1<<endl;
	cout<<w_2<<endl;
	cout<<b<<endl;
	return 0;
}
