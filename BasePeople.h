#pragma once

#include "CommonHeader.h"
namespace icc
{
	namespace str
	{
		enum class EPeopleType
		{
			Unknown,
			Baby,
			Child,
			Teen,
			Adult,
			InYears,
			Old
		};

		class BasePeople
		{
		private:
			static uint64_t	ageWhenBecomeChild;
			static uint64_t	ageWhenBecomeTeen;
			static uint64_t	ageWhenBecomeAdult;
			static uint64_t	ageWhenBecomeInYears;
			static uint64_t	ageWhenBecomeOld;
		public:
			virtual	~BasePeople() {}
			static	void	LoadAgeBorders();

			ID	id = APSEND_VALUE;
			ID	fatherID = APSEND_VALUE;
			ID	motherID = APSEND_VALUE;

			uint64_t	birthday = 0;	//number day in year
			uint64_t	age = 0;
			bool		isNeedPartyOnBirthday = false;

			bool		isMale = true;
			EPeopleType	currType = EPeopleType::Unknown;

			static	EPeopleType	CalcType(uint64_t age);

			static	BasePeople*	CreateBaby(uint64_t currDay, ID fatherID, ID motherID, bool isMale);
		protected:
		private:
			BasePeople() = default;
			BasePeople(const BasePeople& other) = delete;
			BasePeople& operator=(const BasePeople& copy);
		private:
			static	ID	currHumanID;
		};
	}
}
