#include <iostream>
#include <unistd.h>

#define seconds *1000000

void updateTime()
{
    std:: cout << "Current time: \n";
    system("date");
    usleep(1 seconds);
    system("clear");
}

int main(int argc, char* argv[]) {
    
    system("clear");

    bool infinite = false;
    int duration;

    if (argc > 1)
    {
        duration = atoi(argv[1]);
    }
    else
    {
        infinite = true;
    }
     
    if (infinite)
    {
        while (true)
        {
            updateTime();
        }
    }
    else
    {
        for (int i = 0; i < duration; i++)
        {
            updateTime();
        }
    }
    
}
