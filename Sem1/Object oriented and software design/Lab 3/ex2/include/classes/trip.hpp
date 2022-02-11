#ifndef TRIP
#define TRIP

#include "date.hpp"



class Trip {
    private:
        Date beginning;
        Date end;
        float price;
    public:
        Trip (uint8_t d1, uint8_t m1, int y1, char* wd1, uint8_t d2, uint8_t m2, int y2, char* wd2, float price_a);
        Trip (Date a, Date b, float price_a);
        void print_trip();
        friend std::ostream& operator<< (std::ostream& os, Trip d);
};

#endif