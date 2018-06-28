#include <iostream> 
#include <string> 

using namespace std; 

int main()
{
    int anaya=0, amlo=0, meade=0, bronco=0; //Where we will save the options
    int option; 
    int i =1; 
    int x=0, y=0, maxy1, maxy2, maxx=15;
    while(1)
    {
        do 
        {  
            cout << "Which of the following candidates for the presidency you prefer?\n";
            cout << "1. Anaya\n" << "2. AMLO\n" << "3. Meade\n" << "4. El Bronco\n";
            cout << "You must choice a number!\n"<< "Choice: ";
            cin >> option;
            /*
            if((option >4 || option < 1) && option !=0)
            {
                cout << "Worng number!\n\n";
            }
            
            else if(option = 0)
            {
                break; 
            }
            */ 
           if (option < 4 || option >0)
           {
               if (option == 1)
               {
                   anaya = anaya + 1;
               }
               else if (option == 2)
               {
                   amlo = amlo + 1; 
               }
               else if (option == 3)
               {
                   meade = meade + 1;
               }
               else if (option == 4)
               {
                   bronco = bronco + 1; 
               }
           }
        } while(option != 0);
        cout << "Thanks for your information!\n"; 

        if (option == 0)
        {
            cout << "\nEnd of the Poll\n";
            break; 
        }
        
    }
    cout << "\nTabulated results: \n";
    while (i<5)
    {
        cout << '\t' << i;
        i++;
    }
    cout <<"\n\t" << anaya << '\t' << amlo << '\t' << meade << '\t' << bronco<< endl;

    if(anaya >= amlo && anaya >= meade && anaya >= bronco)
    {
        maxy2 = anaya*2;
        maxy1 = anaya;
    }
    else if (amlo >= anaya && amlo >=meade && amlo >= bronco)
    {
        maxy2 = amlo*2;
        maxy1 = amlo;
    } 
    else if (meade >= amlo && meade >= anaya && meade >= bronco)
    {
       maxy2 = meade*2 ;
       maxy1 = meade;
    }
    else if (bronco >= amlo && bronco >= anaya && bronco >=meade)
    {
        maxy2 = bronco*2;
        maxy1 = bronco;
    }
    
    cout << "Votes: \n";
    cout <<"\tmax " <<maxy1<< "\n"; 
    while(y < maxy1)
    {
        cout <<'\t'<< "  ."; // y - axis. 
        if (y < maxy1 - anaya) // Print for anaya
        { 
            cout <<'\t'<< "  "<< "  "; 
        
        }
        else if(maxy1 - anaya <= y && y < maxy1)
        {
            cout <<'\t'<< "  "<< "  |";
        }
        if (y < maxy1 - amlo) // Print for amlo
        { 
            cout <<'\t'<< "  "<< "  "; 
        
        }
        else if(maxy1 - amlo <= y && y < maxy1)
        {
            cout <<'\t'<< "  "<< "  |";
        }
        if (y < maxy1 - meade) // Print for meade
        { 
            cout <<'\t'<< "  "<< "  "; 
        
        }
        else if(maxy1 - meade <= y && y < maxy1)
        {
            cout <<'\t'<< "  "<< "  |";
        }
        if (y < maxy1 - bronco) // Print for bronco
        { 
            cout <<'\t'<< "  "<< "  "; 
        
        }
        else if(maxy1 - bronco <= y && y < maxy1)
        {
            cout <<'\t'<< "  "<< "  |";
        }
        cout << "\n";
        y++;
    }
    
    cout << '\t' << "  ";
    while(x < maxx*3)
    {
        cout << "-";
        x++;  
    }
    cout << "\n";
    cout <<"\t\t"<<"  Anaya"<<"\t"<<"  AMLO"<<"\t" <<"Meade"<<"\t"<<"Bronco\n\n";
}   