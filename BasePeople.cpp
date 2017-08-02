#include "BasePeople.h"

using namespace icc::str;

ID BasePeople::currHumanID = APSEND_VALUE + 1;
#define L_LOG	_cwprintf

uint64_t icc::str::BasePeople::ageWhenBecomeChild = 5;
uint64_t icc::str::BasePeople::ageWhenBecomeTeen = 10;
uint64_t icc::str::BasePeople::ageWhenBecomeAdult = 15;
uint64_t icc::str::BasePeople::ageWhenBecomeInYears = 35;
uint64_t icc::str::BasePeople::ageWhenBecomeOld = 55;

icc::str::EPeopleType icc::str::BasePeople::CalcType(uint64_t age)
{
	//TODO write arr
	if (age < BasePeople::ageWhenBecomeChild)
		return EPeopleType::Baby;
	else if (age < BasePeople::ageWhenBecomeTeen)
		return EPeopleType::Child;
	else if (age < BasePeople::ageWhenBecomeAdult)
		return EPeopleType::Teen;
	else if (age < BasePeople::ageWhenBecomeInYears)
		return EPeopleType::Adult;
	else if (age < BasePeople::ageWhenBecomeOld)
		return EPeopleType::InYears;
	else
		return EPeopleType::Old;
}

icc::str::BasePeople* icc::str::BasePeople::CreateBaby(uint64_t currDay, ID fatherID, ID motherID, bool isMale)
{
	auto result = new BasePeople();
	result->birthday = currDay;

	result->id = ++currHumanID;
	result->fatherID = fatherID;
	result->motherID = motherID;
	result->isMale = isMale;
	result->currType = EPeopleType::Baby;

	L_LOG(L"create baby\n");
	return result;
}


