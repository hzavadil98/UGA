#include "../include/others/utils.hpp"

bool before (Date& d1, Date& d2){
    if (d2.get_year() > d1.get_year()) {
        return true;
    }
    if (d2.get_year() == d1.get_year()){
        if (d2.get_month() > d1.get_month()){
            return true;
        }
        if (d2.get_month() == d1.get_month()){
            if (d2.get_day() > d1.get_day()) {
                return true;
            }
            return false;
        }
        return false;
    }
    return false;
}

int difference(Date& d1, Date& d2) {
    return (d1.get_year() - d2.get_year())*30*12 + (d1.get_month() - d2.get_month())*30 + (d1.get_day() - d2.get_day());
}

int duration(Date& d1, Date& d2) {
    if (before(d1, d2))
        return difference(d2, d1);
    else    
        return difference(d1, d2);
}
