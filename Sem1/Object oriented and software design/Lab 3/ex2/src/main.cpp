#include "../include/classes/date.hpp"
#include "../include/classes/trip.hpp"
#include "../include/others/utils.hpp"


int main(int argc, char** argv) {
    //if (argc != 5) return -1;

    Date debut;
    char wd[100] = "Monday";
    Date beginning(30, 8, 2021, wd);
    Date end(30, 9, 2022, wd);
    printf("%d\n",(int)(beginning<end)); 
    Date tmp(end);
    
    std::cout << beginning << std::endl;
    std::cout << end << std::endl;
    // print output for the different implementatiosns
    std::cout << "Duration (original): " << duration(beginning, end) << std::endl;
    std::cout << "Duration (member): " <<end.operator-(beginning)<< std::endl;
    std::cout << "Duration (friend): " <<operator-(end, beginning)<< std::endl;
    std::cout << "comparison - int (original): " << (duration(beginning, end)<0) << std::endl;
    std::cout << "comparison - int (member): " <<end.operator<(beginning)<< std::endl;
    std::cout << "comparison - int (friend): " <<operator<(end, beginning)<< std::endl;


    return 0;
}
