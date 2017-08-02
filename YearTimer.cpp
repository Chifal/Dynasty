#include "YearTimer.h"

using namespace icc::str;
#define L_LOG	_cwprintf

void icc::str::YearTimer::NextDay()
{
	if (++dayOfMonth > 30)
	{
		dayOfMonth = 1;
		if (++month > 12)
		{
			month = 1;
			++year;
			dayOfYear = 1;
		}
		else
			++dayOfYear;
	}
	else
		++dayOfYear;

	L_LOG(L"next day: %d.%d.%d : %d\n", dayOfMonth, month, year, dayOfYear);
}
