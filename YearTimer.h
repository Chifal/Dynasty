#pragma once

#include "CommonHeader.h"

namespace icc
{
	namespace str
	{
		class YearTimer
		{
		public:
			static const uint64_t FIRST_DAY_OF_MONTH = 1;
			YearTimer() = default;
			virtual ~YearTimer() = default;
			
			void	NextDay();

			uint64_t	GetDayOfMonth() const { return dayOfMonth; }
			uint64_t	GetDayOfYear() const { return dayOfYear; }
			uint64_t	GetMonth() const { return month; }
			uint64_t	GetYear() const { return year; }
		protected:
		private:
			YearTimer(const YearTimer& other);
			YearTimer& operator=(const YearTimer& copy);
		private:
			uint64_t	dayOfMonth = 1;
			uint64_t	dayOfYear = 1;
			uint64_t	month = 1;
			uint64_t	year = 1;
		};
	}
}