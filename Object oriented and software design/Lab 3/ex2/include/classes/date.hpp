#ifndef DATE
#define DATE

#include <string.h>
#include <stdint.h>
#include <time.h>
#include <iostream>



class Date {
    private:
        uint8_t day;
        uint8_t month;
        int year;
        char * week_day; //Changed for Lab 2 purposes
    public:
        Date(uint8_t d, uint8_t m, int y, char* wk); //Changed for Lab 2 purposes : allocating memory
        Date(time_t t); //Changed for Lab 2 purposes : allocating memory
        Date(); //Changed for Lab 2 purposes : allocating memory
        Date(const Date& date); //Changed for Lab 2 purposes : allocating memory
        ~Date(); //Changed for Lab 2 purposes : frees memory
       	bool operator<(const Date &); 
       	int operator-(const Date &); 
	void print_date() const;
        void happy_birthday(char* n, Date& d) const; //Changed for Lab 2 purposes : pass by references
        friend std::ostream& operator<< (std::ostream& os, Date d);
        friend bool operator< (const Date &, const Date &);
       	friend int operator-(const Date &, const Date &); 
        int get_year() const;
        uint8_t get_day() const;
        uint8_t get_month() const;
};

#endif
