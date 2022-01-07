#include "../include/classes/trip.hpp"
#include "../include/classes/date.hpp"

Trip::Trip(uint8_t d1, uint8_t m1, int y1, char* wd1, uint8_t d2, uint8_t m2, int y2, char* wd2, float price_a) {
    beginning = Date(d1, m1, y1, wd1);
    end = Date(d2, m2,y2, wd2);
    price = price_a;
};

Trip::Trip (Date a, Date b, float price_a) {
    beginning = a;
    end = b;
    price = price_a;
}

void Trip::print_trip(){
    std::cout << beginning << end << price << std::endl;
}

std::ostream& operator<< (std::ostream& os, Trip d){
    os <<  d.beginning << d.end << d.price;
    return os;
}
