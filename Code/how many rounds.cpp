//
//  current rounds.cpp
//  Boxing Program
//
//  Created by Juan Segundo on 3/30/22.
//


#include <stdio.h>
#include <stdlib.h>
#include "current rounds.hpp"
// using namespace std;

int currentrounds()
{
    
    int four_rounds = 4;
    int six_rounds = 6;
    int eight_rounds = 8;    
    int ten_rounds = 10;
    int twelve_rounds = 12;
    int other_rounds = O_R; // I am not sure how to set this part up.
    /*
    For other_rounds, I think I can use an if-statement
    
    */

    (other_rounds > 0) && (other_rounds <= 12); // other_rounds has to be greater than zero, but less than or equal to twelve...rounds are between 1 and 12 rounds.

    std::cout << "How many rounds is this fight?" << std:: endl <<;
    int rounds;


    
    /*

    Can I use switch statements?

    
    std::cout << "This bout is for  _rounds. Correct?" << std::end;
    std::cout << "This bout is for  _rounds. Correct?" << std::end;
    std::cout << "This bout is for  _rounds. Correct?" << std::end;
    std::cout << "This bout is for  _rounds. Correct?" << std::end;
    std::cout << "This bout is for  _rounds. Correct?" << std::end;
    std::cout << "This bout is for  _rounds. Correct?" << std::end;
    
    */
    
    
    /*
    
    Can we use if statements?

    */




    rounds +! (12 rounds); // There can be less than 3 rounds.

    for (int i = 1; i < rounds; i++)
    { //    Inside the parenthese there's the
        std::cout << "The current round is " << rounds << std::endl;
    }

    while (rounds >= 1 && rounds <= 12)
        ;
    {
        std::cout << "This fight is scheduled for " << rounds << " rounds" << std::endl;
    }

    // I recoginze that I need a loop but I am not sure which one or

    // else {
    //   std::cout << "Generally, boxing rounds are either 4, 6, 8, 10, or 12 rounds.\n" << std::endl;
    // std::cout << "Fights cannot be more than 12 rounds.\nPlease eneter correct amound of rounds: " << std::endl;
    // How am I going to get the question above to repeat each time something is wrong? It ask the question twice but stops regardless if it is right or wrong.
    // }

    while (int rounds; rounds <= 12; rounds++;)
    { // This helps compare three numbers...checks if we have rounds that are  between 1 and 12
        cin >> rounds;
        cout << "Who's in the Blue corner? ";
    }
    cin >> BlueCorner;
    cout << "Who is in the Red corner? ";
    cin >> RedCorner;
}

cin >> rounds;

* /

    //  cout << "Who won round" << currentround << "?"; // Cool, so this displays regarless of the number we input.


