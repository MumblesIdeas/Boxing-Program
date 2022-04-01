//
//  current rounds.cpp
//  Boxing Program
//
//  Created by Juan Segundo on 3/30/22.
//
#include <iostream>
#include "current rounds.hpp"
int currentrounds (){


    std::cout << "How many rounds is this fight?" << std::endl;

    for (int i=1; i < rounds; i++) {
        std::cout << "The current round is " << rounds << std::endl;

        


    }









    while (rounds >= 1 && rounds <= 12); {
        std::cout << "This fight is scheduled for " << rounds << " rounds" << std::endl;

    }

        // I recoginze that I need a loop but I am not sure which one or

   // else {
     //   std::cout << "Generally, boxing rounds are either 4, 6, 8, 10, or 12 rounds.\n" << std::endl;
       // std::cout << "Fights cannot be more than 12 rounds.\nPlease eneter correct amound of rounds: " << std::endl;
            // How am I going to get the question above to repeat each time something is wrong? It ask the question twice but stops regardless if it is right or wrong.
   // }

    while(int rounds; rounds<=12; rounds++; ) { // This helps compare three numbers...checks if we have rounds that are  between 1 and 12
        cin >> rounds;
        cout << "Who's in the Blue corner? ";
    }
    cin >> BlueCorner;
    cout << "Who is in the Red corner? ";
    cin >> RedCorner;
}

cin >> rounds;

}

*/

    //  cout << "Who won round" << currentround << "?"; // Cool, so this displays regarless of the number we input.
}







}
