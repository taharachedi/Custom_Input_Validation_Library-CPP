#pragma once
#include "clsDate.h"
using namespace std;


class clsPeriod
{
public:

	clsDate Start_Date;
	clsDate End_Date;

	clsPeriod(clsDate Start_Date, clsDate End_Date) {

		this->Start_Date = Start_Date; 
		this->End_Date = End_Date;
	}


	static bool Is_Overlap_Periods(clsPeriod Period1, clsPeriod Period2) {

		if (
			(clsDate::Compare_Dates(Period2.End_Date, Period1.Start_Date) == clsDate::enDateCompare::Before)
			||
			(clsDate::Compare_Dates(Period2.Start_Date, Period1.End_Date) == clsDate::enDateCompare::After)
			)
			return false;

		else
			return true;
	}
	bool Is_Overlap_With(clsPeriod Period2) {

		return Is_Overlap_Periods(*this, Period2);   
	}


	void Print() {

		cout << "Period Start : ";
		Start_Date.Print();

		cout << "Period End   : ";
		End_Date.Print(); 
	} 


	static short Period_Length_In_Days(clsPeriod Period, bool Include_End_Day = false) {

		return clsDate::Get_Difference_In_Days(Period.Start_Date, Period.End_Date, Include_End_Day);
	}
	short Period_Length_In_Days(bool Include_End_Day = false) {

		return Period_Length_In_Days(*this, Include_End_Day);
	}


	static bool Is_Date_In_Period(clsDate Date, clsPeriod Period) {

		return !(clsDate::Compare_Dates(Date, Period.Start_Date) == clsDate::enDateCompare::Before
			||
			clsDate::Compare_Dates(Date, Period.End_Date) == clsDate::enDateCompare::After);
	}
	bool Is_Date_In_Period(clsDate Date) {

		return Is_Date_In_Period(Date, *this);
	}


	static short Count_Overlap_Days(clsPeriod Period1, clsPeriod Period2) {

		if (!Is_Overlap_Periods(Period1, Period2))  
		{
			return 0;
		}

		short Period1Length = Period_Length_In_Days(Period1, true);
		short Period2Length = Period_Length_In_Days(Period2, true);

		short OverlapDays = 0;

		if (Period1Length < Period2Length)
		{

			while (clsDate::isDate1BeforeDate2(Period1.Start_Date, Period1.End_Date)) {

				if (Is_Date_In_Period(Period1.Start_Date,Period2))
				{
					OverlapDays++;
				}

				Period1.Start_Date = clsDate::Increase_Date_By_One_Day(Period1.Start_Date);
			}

		}


		else
		{
			while (clsDate::isDate1BeforeDate2(Period2.Start_Date, Period2.End_Date)) {

				if (Is_Date_In_Period(Period2.Start_Date, Period1))
				{
					OverlapDays++;
				}

				Period2.Start_Date = clsDate::Increase_Date_By_One_Day(Period2.Start_Date);
			}

		}

		return OverlapDays; 
	}

	short Count_Overlap_Days(clsPeriod Period2) {

		return Count_Overlap_Days(*this, Period2);   
	}

};