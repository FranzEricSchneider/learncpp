#include <iostream>
#include <random>

#include "ball_position.h"
#include "getRandomNumber.h"
#include "physics_constants.h"

int playHiLo(int num_to_guess)
{
    std::cout << "Let's play a game. I'm thinking of a number from 1-100,\nyou have 7 tries to guess what it is!\n";
    for (int i{0}; i < 7; ++i)
    {
        std::cout << "Guess " << i + 1 << ": ";
        int guess;
        std::cin >> guess;

        if (guess == num_to_guess)
        {
            std::cout << "You win! Well done\n";
            return 1;
        }
        else if (guess < num_to_guess)
        {
            std::cout << "Your guess was too low\n";
        }
        else if (guess > num_to_guess)
        {
            std::cout << "Your guess was too high\n";
        }
    }
    std::cout << "Sorry, you lose, the correct answer was " << num_to_guess << "\n";
    return 0;
}

char decideWhetherKeepPlaying()
{
    char kp;
    do
    {
        std::cout << "Would you like to keep playing? (y/n) ";
        std::cin >> kp;
    }
    while (kp != 'y' && kp != 'n');

    return kp;
}

int main()
{
    // QUIZ 1
//    std::cout << "Enter the initial height of the tower in meters (float): ";
//    double tower_height;
//    std::cin >> tower_height;
//
//    double ball_height{tower_height};
//    double time{0};
//    while (ball_height > 0)
//    {
//        ball_height = ballPosition(ball_height, time);
//        std::cout << "At " << time << " seconds the ball is at " << ball_height <<
//                     " / " << tower_height << " meters\n";
//        time += ball_height / 200;
//    }

    // QUIZ 2
    std::random_device rd;
    std::mt19937 mersenne(rd());
    char keep_playing{'y'};
    while(keep_playing == 'y')
    {
        int num_to_guess = getRandomNumber(1, 100, mersenne());
        playHiLo(num_to_guess);
        keep_playing = decideWhetherKeepPlaying();
    }

    std::cout << "Thanks for playing!";
    return 0;
}
