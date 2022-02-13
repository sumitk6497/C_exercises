#include <stdio.h>

float average(float arr[], int len);

int main()
{
	float avg, c[] = {23.4, 55, 22.6, 3, 40.5, 18};
	
	int len = sizeof(c)/sizeof(float);
	avg = average(c, len); 				/* Only name of array is passed as argument. */

	printf("Average age = %.2f\n",avg);			//27.08
	
	return 0;
}

float average(float arr[],int len)
{
	int i;
	float avg, sum = 0.0;
	
	for(i=0; i<len; ++i)
	{
	    sum += arr[i];
	}

	avg = (sum/len);

	return avg;
}
