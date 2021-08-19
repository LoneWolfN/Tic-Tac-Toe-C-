// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
std::vector<std::string> introduction(std::vector<std::string> tictac)
{
	int no = 9;
	for (int i = 0; i < no; i++)
	{
		tictac.push_back("_");
	}
	return tictac;
}
void draw(std::vector<std::string> tictac)
{
	std::cout << "    1 2 3\n";
	for (int j = 0; j < tictac.size(); j++)
	{
		
		if (j == 2 || j == 5 || j == 8)
		{
			std::cout <<"|"<< tictac[j] << "\n";
		}
		else if (j == 0) 
		{
			std::cout <<"  A "<< tictac[j] << "|";
		}
		else if (j == 3)
		{
			std::cout << "  B " << tictac[j] << "|";
		}
		else if (j == 6)
		{
			std::cout << "  C " << tictac[j] << "|";
		}
		else
		{
			std::cout <<tictac[j];
		}
	}

}
std::vector<std::string> gameplayp1(std::vector<std::string> tictac) 
{
	std::string ans;
	std::cout << "Player 1s turn, enter your pos\n";
	std::cin >>ans;
	if (ans == "A1" || ans == "a1") 
	{
		tictac[0] = "X";
	}
	else if (ans == "A2" || ans == "a2")
	{
		tictac[1] = "X";
	}
	else if (ans == "A3" || ans == "a3")
	{
		tictac[2] = "X";
	}
	else if (ans == "B1" || ans == "b1")
	{
		tictac[3] = "X";
	}
	else if (ans == "B2" || ans == "b2")
	{
		tictac[4] = "X";
	}
	else if (ans == "B3" || ans == "b3")
	{
		tictac[5] = "X";
	}
	else if (ans == "C1" || ans == "c1")
	{
		tictac[6] = "X";
	}
	else if (ans == "C2" || ans == "c2")
	{
		tictac[7] = "X";
	}
	else if (ans == "C3" || ans == "c3")
	{
		tictac[8] = "X";
	}
	return (tictac);


}
std::vector<std::string> gameplayp2(std::vector<std::string> tictac)
{
	std::string ans;
	std::cout << "Player 2s turn, enter your pos\n";
	std::cin >> ans;
	if (ans == "A1" || ans == "a1")
	{
		tictac[0] = "O";
	}
	else if (ans == "A2" || ans == "a2")
	{
		tictac[1] = "O";
	}
	else if (ans == "A3" || ans == "a3")
	{
		tictac[2] = "O";
	}
	else if (ans == "B1" || ans == "b1")
	{
		tictac[3] = "O";
	}
	else if (ans == "B2" || ans == "b2")
	{
		tictac[4] = "O";
	}
	else if (ans == "B3" || ans == "b3")
	{
		tictac[5] = "O";
	}
	else if (ans == "C1" || ans == "c1")
	{
		tictac[6] = "O";
	}
	else if (ans == "C2" || ans == "c2")
	{
		tictac[7] = "O";
	}
	else if (ans == "C3" || ans == "c3")
	{
		tictac[8] = "O";
	}
	return (tictac);


}
bool wincheck(std::vector< std::string> tictac)
{
	if ((tictac[0] =="X" && tictac[1] =="X" && tictac[2]=="X") || (tictac[0] == "O" && tictac[1] == "O" && tictac[2] == "O"))
	{
		return true;
	}
	else if ((tictac[0] == "X" && tictac[4] == "X" && tictac[8] == "X") || (tictac[0] == "O" && tictac[4] == "O" && tictac[8] == "O"))
	{
		return true;
	}
	else if ((tictac[0] == "X" && tictac[3] == "X" && tictac[6] == "X") || (tictac[0] == "O" && tictac[3] == "O" && tictac[6] == "O"))
	{
		return true;
	}
	else if ((tictac[1] == "X" && tictac[4] == "X" && tictac[7] == "X") || (tictac[1] == "O" && tictac[4] == "O" && tictac[7] == "O"))
	{
		return true;
	}
	else if ((tictac[2] == "X" && tictac[4] == "X" && tictac[6] == "X") || (tictac[2] == "O" && tictac[4] == "O" && tictac[6] == "O"))
	{
		return true;
	}
	else if ((tictac[2] == "X" && tictac[5] == "X" && tictac[8] == "X") || (tictac[2] == "O" && tictac[5] == "O" && tictac[8] == "O"))
	{
		return true;
	}
	else if ((tictac[3] == "X" && tictac[4] == "X" && tictac[5] == "X") || (tictac[3] == "O" && tictac[4] == "O" && tictac[5] == "O"))
	{
		return true;
	}
	else if ((tictac[6] == "X" && tictac[7] == "X" && tictac[8] == "X") || (tictac[6] == "O" && tictac[7] == "O" && tictac[8] == "O"))
	{
		return true;
	}
	else 
	{
		return false;
	}
}


void gameplay(std::vector<std::string> tictac) 
{
	bool wincond = false;
	bool check = true;
	std::cout << wincond<<"\n";
	std::cout << check<<"\n";
	int winner;
	while (wincond == false) 
	{
		tictac=gameplayp1(tictac);
		draw(tictac);
		wincond = wincheck(tictac);
		if (wincond == true) 
		{
			winner = 1;
			break;
		}
		std::cout << wincond;
		tictac=gameplayp2(tictac);
		draw(tictac);
		wincond = wincheck(tictac);
		if (wincond==true)
		{
			winner = 2;
			break;
		}
	
	}
	if (winner == 1)
	{
		std::cout << "Player 1 Wins!";
	}
	else if (winner == 2)
	{
		std::cout << "Player 2 Wins!";
	}
	

}


int main() {
	
	std::cout << "Wlecome to Tic Tac Toe"<<"\n";
	std::cout<< "Choose player 1 / 2, 1=X,2=O\n";
	std::cout << "\n";
	std::vector<std::string> tictac;
	tictac = introduction(tictac);
	draw(tictac);
	std::cout << "\n";
	std::string ans;
	std::cout << "Player 1 goes first, enter the position to go to, A1, A2, A3, etc\n";
	gameplay(tictac);
}
