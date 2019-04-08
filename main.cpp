#include <iostream>
#include <cstring>
#include "numsense.cpp"
#include "rndnum.cpp"
#include "miscellaneous.cpp"

int main()
{
	const std::string problemList[] = { "addition", "subtraction", "multiplication", "division", "power of", "multiply by five", "divide by five", "nth term", "multiply by fifty", "divide by fifty" };
	bool loop1 = true;
	
	NumSense math;
	RndNum rndNum;
	Miscellaneous misc;
	
	misc.clear();
	
	std::cout << "Built by Mrremrem." << std::endl;
	while (loop1)
	{
		int points = 0;
		bool loop2 = true;
		unsigned short mode = 0, problem = 0;
		
		std::cout << "\nWhich mode would you like to use? (0 = chronological order, 1 = random, 2 = a specific problem, 3 = quit)" << std::endl;
		std::cin >> mode;
		if (!(std::cin))
			std::cin.clear();
		
		if (mode == 2)
		{
			unsigned short i = 0;
			misc.clear();
			
			std::cout << "Type a problem number." << std::endl;
			
			for (auto j : problemList)
			{
				std::cout << ++i << ". " << j << std::endl;
			}
			
			std::cin >> problem;
			if (!(std::cin))
				std::cin.clear();
		}
		
		else if (mode == 3)
		{
			loop1 = false;
			loop2 = false;
		}
		
		misc.clear();
		
		while (loop2)
		{
			float answer = 0, responce = 0;
			
			switch (mode)
			{
				case 0:
					problem++;
					break;
				case 1:
					problem = rndNum.randInt(sizeof(problemList) / sizeof(problemList[0]));
					break;
				case 2:
					break;
				default:
					problem++;
					break;
			}
			
			switch (problem)
			{
				case 1: // addition
					answer = math.biOp(rndNum.randInt(5000), rndNum.randInt(5000), '+');
					break;
				case 2: // subtraction
					answer = math.biOp(rndNum.randInt(5000), rndNum.randFloat(1000), '-');
					break;
				case 3: // multiplication
					answer = math.biOp(rndNum.randInt(5000), rndNum.randInt(5000), '*');
					break;
				case 4: // division
					answer = math.biOp(rndNum.randInt(5000), rndNum.randInt(5000), '/');
					break;
				case 5: // power of
					answer = math.biOp(rndNum.randInt(5000), rndNum.randInt(5000), '^');
					break;
				case 6: // multiply by five
					answer = math.biOp(rndNum.randInt(5000), 5, '*');
					break;
				case 7: // divide by five
					answer = math.biOp(rndNum.randInt(5000), 5, '/');
					break;
				case 8:
					answer = math.nthTerm(rndNum.randInt(10, 10), rndNum.randInt(20), rndNum.randInt(15));
					break;
				case 9: // multiply by 50
					answer = math.biOp(rndNum.randInt(5000), 50, '*');
					break;
				case 10: // divide by 50
					answer = math.biOp(rndNum.randInt(5000), 50, '/');
					break;
				default:
					loop2 = false;
			}
			
			if (loop2 == true)
			{
				std::cin >> responce;
				if (!(std::cin))
					std::cin.clear();
				misc.clear();
				
				if (responce == answer)
				{
					points += 5;
					std::cout << "Five points have been added." << std::endl;
				}
				
				else
				{
					points -= 9;
					std::cout << "Nine points have been deducted. The correct answer from the previous problem is: " << answer << std::endl;
				}
				
				std::cout << "Total points: " << points << std::endl;
			}
			
		}
	}
	
	std::cout << "Press the enter key to exit." << std::endl;
	std::cin.get();
}