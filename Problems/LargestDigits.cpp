#include "LargestDigits.h"

void LargestDigits::setup(int digits)
{
	aray[0] = (digits / 1) % 10;
	aray[1] = (digits / 10) % 10;
	aray[2] = (digits / 100) % 10;
	aray[3] = (digits / 1000) % 10;
}

void LargestDigits::checkForLargest()
{

}

void LargestDigits::checkForOrder()
{
	int placeholder[3];
	bool repeat = true;
	while (repeat == true)
	{
		if (aray[0] > aray[1] && aray[0] > aray[2] && aray[0] > aray[3])
		{
			repeat = false;
		}
		if (aray[0] < aray[1] || aray[0] < aray[2] || aray[0] < aray[3])
		{
			placeholder[2] = aray[3];
			placeholder[1] = aray[2];
			placeholder[0] = aray[1];
			aray[3] = aray[0];
			aray[2] = placeholder[2];
			aray[1] = placeholder[1];
			aray[0] = placeholder[0];
		}
		if (aray[1] < aray[2] || aray[0] < aray[3])
		{
			placeholder[1] = aray[3];
			placeholder[0] = aray[2];
			aray[3] = aray[1];
			aray[2] = placeholder[1];
			aray[1] = placeholder[0];
		}
		if (aray[2] < aray[3])
		{
			placeholder[0] = aray[3];
			aray[3] = aray[2];
			aray[2] = placeholder[0];
		}
	}
}
