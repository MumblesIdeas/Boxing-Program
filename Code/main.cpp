//  main.cpp
//  Boxing Scoring
//
//  Created by Juan Segundo on 12/17/21.

/*

Program to score boxing.

Rounds have to be [1,12].
Anything greater 12 or less than 1.
Helps you

How many rounds?
Who is in the red corner? Name of fighter
Who is in the blue corner? Name of second fighter

How will a knockdowns be scored/asked?

What do the rules say about scoring?
Did anyone look visiably hurt?
Who was hurt the most?
Any knockdowns?

xcx

 */

#include <iostream>
#include <vector>

using namespace std;

#include <iostream> //must be included in all programs
#include <cmath>
#include "round_scoring.hpp"
#include "current rounds.hpp"

int main()
{

    currentrounds(rounds);

    char BlueCorner[50], RedCorner[50]; // why am I storing them in an array?

    std::cout << "This program is intended to help score boxing" << std::endl;

    return 0;
}

