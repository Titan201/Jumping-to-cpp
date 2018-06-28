#include <iostream> 
#include <string> 

using namespace std; 


void printBoard(char square[]);
void makingMove(int player, int move, char square[]);
int WasTheGameWon(char square[], int player);

void printBoard(char square[])
{
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}
 

void makingMove(int player,int move, char square[])
{
    if (player == 1)
    {
        square[ move ] = 'X'; 
    }
    else if (player == 2)
    {
        square[ move ] = 'O';
    }
    
}
int WasTheGameWon(char square[],int player)
{
    char symbol; 
    if (player == 1)
    {
        symbol = 'X'; 
    }
    else if (player == 2)
    {
        symbol = 'O'; 
    }
    
    if(square[1] == symbol && square[2] == symbol && square[3] == symbol )
    {
        cout << "\nPlayer "<< player<<" won the game\n";
        return 1; 
    }
    else if (square[4] == symbol && square[5] == symbol && square[6] == symbol )
    {
        cout << "\nPlayer "<< player<<" won the game\n";
        return 1; 
    }
    else if (square[7] == symbol && square[8] == symbol && square[9] == symbol )
    {
        cout << "\nPlayer "<< player<<" won the game\n";
        return 1; 
    }
    else if (square[1] == symbol && square[4] == symbol && square[7] == symbol )
    {
        cout << "\nPlayer "<< player<<" won the game\n";
        return 1; 
    }
    else if (square[2] == symbol && square[5] == symbol && square[8] == symbol )
    {
        cout << "\nPlayer "<< player<<" won the game\n";
        return 1; 
    }
    else if (square[3] == symbol && square[6] == symbol && square[9] == symbol )
    {
        cout << "\nPlayer "<< player<<" won the game\n";
        return 1; 
    }
    else if (square[1] == symbol && square[5] == symbol && square[9] == symbol )
    {
        cout << "\nPlayer "<< player<<" won the game\n";
        return 1; 
    }
    else if (square[3] == symbol && square[5] == symbol && square[7] == symbol )
    {
        cout << "\nPlayer "<< player<<" won the game\n";
        return 1; 
    }
}

int main()
{
    char square[ 10 ] = {'0','1','2','3','4','5','6','7','8','9'};

    while(1) 
    { 
        int move, player = 1;
        string signal; 
        int gameResponse; 

        cout << "Do you wanna play a game? Yes or No ? ";
        cin >> signal;  
        
        if (signal == "No")
        {
            return 0;
        }
        else
        {
            while(1)
            {
                do
                {
                    printBoard(square); 
                    cout << "Turn of player "<< player<<endl;
                    cout << "In which square do you wanna move? ";
                    cin >> move;
                } while(move > 9 || move < 0);
                
                makingMove(player, move, square);  
                gameResponse = WasTheGameWon(square, player); 
                if (gameResponse == 1)
                {
                    break; 
                }
                // Changing the player
                if (player == 1)
                {
                    player = 2; 
                }
                else if (player == 2)
                {
                    player = 1; 
                }
            }
            
        }
    }
}