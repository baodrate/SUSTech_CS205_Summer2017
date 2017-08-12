#include <iostream>
  class YearToMonth {
    	short m_years;
		  short m_months;
		//Either we have methods to return
		//each one (clumsy), hide nothing, or
		//we allow the funcMon to see them

  	 friend std::ostream &operator<<(std::ostream &os,
                          const YearToMonth &ytm);
 
	public:
   		YearToMonth(short years=0);
   		YearToMonth(short years,short months);
   		void add(const YearToMonth ytm);
      friend std::ostream &operator<<(std::ostream &os,
                          const YearToMonth &ytm);
 };
//Don't use a namespace in a header file