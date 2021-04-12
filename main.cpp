#include <iostream>
#include <unistd.h>

#define seconds *1000000

int main() {
    
    system("clear");
    while (true)
    {
        std:: cout << "Current time: \n";
        system("date");
        usleep(1 seconds);
        system("clear");
    }
}