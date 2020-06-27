//
// Created by ELON on 6/26/2020.
//

#include "unary.h"
#include <iostream> 

int main()
{
    int money = 25;
    int bill = 15;

    int total = money - bill;

    std::cout << "We forgot to pay the bills " << total << std::endl;
    return (0);
}