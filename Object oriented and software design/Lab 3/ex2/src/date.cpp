#include "../include/classes/date.hpp"


Date::Date(uint8_t d, uint8_t m, int y, char * wk) {
    if ((d > 31) || (m > 12)) {
        day = 1;
        month = 1;
        year = 1970;
    }
    else {
        day = d;
        month = m;
        year = y;
    }
    week_day = (char*) malloc(sizeof(char) * 100);
    strcpy(week_day, wk);
}
bool Date::operator<(const Date &rhs) {
	return ((30*12*(year-rhs.year)+30*(month-rhs.month)+(day-rhs.day)) < 0);
}
int Date::operator-(const Date &rhs) {
	return ((30*12*(year-rhs.year)+30*(month-rhs.month)+(day-rhs.day)));
}

Date::Date(time_t tt) {
    tm * t = localtime(&tt);
    day = t->tm_mday;
    month = t->tm_mon;
    year = t->tm_year;
    week_day = (char*) malloc(sizeof(char) * 100);//We allocate 100 bytes
    //of memory to store the string day of the week
    char * tmp = (char*)malloc(100);
    switch(t->tm_wday) {
        case 0:
            tmp = strcpy(tmp, "Sunday");
            break;
        case 1:
            tmp = strcpy(tmp, "Monday");
            break;
        case 2:
            tmp = strcpy(tmp, "Tuesday");
            break;
        case 3:
            tmp = strcpy(tmp, "Wednesday");
            break;
        case 4:
             tmp = strcpy(tmp, "Thursday");
            break;
        case 5:
            tmp = strcpy(tmp, "Friday");
            break;
        case 6:
            tmp = strcpy(tmp, "Satursday");
            break;
        default:
            std::cout << "Error occured in localtime week day finding..." << std::endl;
            exit(1);
    }
    strcpy(week_day, tmp); //We copy the corresponding
    //week day into the attribute week_day 
}

Date::Date() {
    day = 1;
    month = 1;
    year = 1970;
    week_day = (char*) malloc(sizeof(char) * 100);
    strcpy(week_day, "");
}

Date::Date(const Date& date){
    day = date.day;
    month = date.month;
    year = date.year;
    week_day = (char*) malloc(sizeof(char) * 100);
    strcpy(week_day, date.week_day);
}

void Date::print_date() const {
    std::cout << "Date corresponds to a " << week_day << " " << (int)day << "/" << (int)month << "/" << year << std::endl;
}

void Date::happy_birthday(char* n, Date& d) const{

    time_t tt = time(NULL);
    tm * time_today = localtime(&tt);
    if (time_today->tm_mday == (int)d.day && time_today->tm_mon+1 == (int)d.month){
        std::cout << "Happy birthday " << n << "!" << "You are " << -(d.year - time_today->tm_year-1900) << " years old !!" << std::endl;
    }
}

std::ostream& operator<< (std::ostream& os, Date d){
    os << d.week_day << " " << (int)d.day << "/" << (int)d.month << "/" << d.year << "  ";
    return os;
}
bool operator<(const Date &lhs, const Date &rhs){
	return ((30*12*(lhs.year-rhs.year)+30*(lhs.month-rhs.month)+(lhs.day-rhs.day)) < 0);
}
int operator-(const Date &lhs, const Date &rhs){
	return ((30*12*(lhs.year-rhs.year)+30*(lhs.month-rhs.month)+(lhs.day-rhs.day)));
}


Date::~Date() {
    free(this->week_day);
}

int Date::get_year() const{
    return year;
}

uint8_t Date::get_day() const{
    return day;
}

uint8_t Date::get_month() const{
    return month;
}
