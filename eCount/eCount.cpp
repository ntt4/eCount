// Count.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <string>


int main()
{
	//Welcome the user
	std::cout << "###############################\n";
	std::cout << "# Welcome to the auto-counter #\n";
	std::cout << "#                             #\n";
	std::cout << "# Why count for yourself when #\n";
	std::cout << "#    a computer can do it!    #\n";
	std::cout << "###############################\n";

	// Leave a space
	std::cout << "\n";


			/* 
			Ask the user for some variables and set them
			First, ask the user what they want to count from
			*/
			std::cout << "What number would you like to count from?\n";
			
			// Create the int
			int startNum;
			
			// Set the int from the users input
			std::cin >> startNum;

			// Leave a space
			std::cout << "\n";

			// Ask the user what they want to count to
			std::cout << "What number would you like to count to?\n";
			int selectNum;
			std::cin >> selectNum;




					/*
					Check to see if we can add the numbers up
					This 'if' statement checks if the value of startNum minus selectNum is greater than zero
					*/
					if (startNum - selectNum < 0)
					{
					}

					/*
					else, if the user has given us two numbers that would cause us to count down
					we pass this do while loop
					*/
					else
					{
						do
						{
							// Leave a space
							std::cout << "\n";
							//Appologise that we can't do a simple task, wait, then flush the display
							std::cout << "Sorry, I can not deal with decrasing numbers just yet.\n";
							std::cout << "\n"; std::cout << "\n";
							std::cout << "What number would you like to count from?\n";
							std::cin >> startNum;
							std::cout << "\n";
							std::cout << "What number would you like to count to?\n";
							std::cin >> selectNum;
						} while (startNum - selectNum > 0);
					}



			// Leave a space
			std::cout << "\n";

			// Offer the user to select how fast we count
			std::cout << "How fast would you like to count?\n";
			std::cout << "(1) Slow\n";
			std::cout << "(2) Normal\n";
			std::cout << "(3) Fast\n";
			std::cout << "(4) Faster\n";
			std::cout << "(5) Sonic Speed\n";

			// Create the countSpeed string
			std::string countSpeed;
			// Ask the user how fast they want to count, accepting the above offers
			std::cin >> countSpeed;
			// Create a new int to control the counting speed in ms
			int countSpeedms;

			// If given speed 'x'set countSpeedms to 'yyyy' else, etc
			if (countSpeed=="1")
			{
				countSpeedms = 2000;
			}
			else if (countSpeed=="2")
			{
				countSpeedms = 1000;
			}
			else if (countSpeed == "3")
			{
				countSpeedms = 500;
			}
			else if (countSpeed == "4")
			{
				countSpeedms = 250;
			}
			else if (countSpeed == "5")
			{
				countSpeedms = 1;
			}

	// Leave a space
	std::cout << "\n";

	// Next we confirm where we are counting from and to
	std::cout << "To confirm we are counting from " << startNum << " to " << selectNum << " at count speed " << countSpeed << std::endl;
	
	
	
	std::cout << "Is this correct? (y/n)?\n";
	
	std::string confirmStart;
	std::cin >> confirmStart;


if (confirmStart=="y")
	{
		std::cout << "Let's count!" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(2000));


		std::cout << startNum << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(countSpeedms));


		do
		{
			startNum = startNum++;
			std::cout << startNum << std::endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(countSpeedms));

		} while (startNum<selectNum);



		if (selectNum == startNum)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(500));
			std::cout << "We're done!" << std::endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(2000));
			std::cout << "G";
			std::this_thread::sleep_for(std::chrono::milliseconds(250));
			std::cout << "o";
			std::this_thread::sleep_for(std::chrono::milliseconds(250));
			std::cout << "o";
			std::this_thread::sleep_for(std::chrono::milliseconds(250));
			std::cout << "d";
			std::this_thread::sleep_for(std::chrono::milliseconds(250));
			std::cout << "b";
			std::this_thread::sleep_for(std::chrono::milliseconds(250));
			std::cout << "y";
			std::this_thread::sleep_for(std::chrono::milliseconds(250));
			std::cout << "e";
			std::this_thread::sleep_for(std::chrono::milliseconds(500));
			std::cout << "!";
			std::this_thread::sleep_for(std::chrono::milliseconds(10000));
		}

	}
	else
	{
		std::cout << "Let's start over..." << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(3000));
	}

	return 0;
}