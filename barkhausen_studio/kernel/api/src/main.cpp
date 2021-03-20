#include <include/barkhausen_studio.h>

#include <iostream>

int main(int argc, char *argv[])
{
    BarkhausenStudio barkhausen_studio{ argc, argv };

    return barkhausen_studio.run();
}