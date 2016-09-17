#ifndef PERCEPTRON
#define PERCEPTRON

#include"data.hpp"
void perceptron(sample train[],int sample_len,double &w_1,double &w_2,double &b)
{
	w_1=0.1;
	w_2=0.5;
	b=7;
	double l_r=0.1;
	double loss;
	while(true)
	{
		int i=0;
		for(i=0;i<sample_len;i++)
			if((w_1*train[i].x_1+w_2*train[i].x_2+b)*train[i].y<0)
			{
				w_1+=l_r*train[i].x_1*train[i].y;
				w_2+=l_r*train[i].x_2*train[i].y;
				b+=l_r*train[i].y;
				break;
			}
		if(i==sample_len)
			break;
	}
	return ;
}

#endif
