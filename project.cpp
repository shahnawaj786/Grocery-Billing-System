
#include <iostream>

using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0,Qshake = 0, Qchicken = 0;
    // food items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0,Sshake = 0, Schicken = 0;
    //total proce of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger= 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;
    cout <<"\n\t Quantity of items we have";
    cout << "\n Rooms availael";
    cin >> Qrooms;
    cout << "\n Quantity of pasta : ";
    cin >> Qpasta;
    cout << "\n Quantity of burger : ";
    cin >> Qburger;
     cout << "\n Quantity of noodles : ";
    cin >> Qnoodles;
     cout << "\n Quantity of shake : ";
    cin >> Qshake;
     cout << "\n Quantity of chicken roll : ";
    cin >> Qchicken;
    m:
    cout << "\n\t\t please select from givem menu options";
    cout << "\n\n1) Rooms";
    cout << "\n2) pasta";
    cout << "\n3) burger";
    cout << "\n4) noodles";
    cout << "\n5) shake";
    cout << "\n6) chickenRoll";
    cout << "\n7) Information regarding sales and collection";
    cout << "\n8) exit";
    cout << "\n\n Please enter your choice!";
    cin >> choice;
    switch(choice)
    {
        case 1:
             cout << "\n enter the number of rooms you want:";
             cin >> quant;
             if(Qrooms - Srooms >= quant)
             {
                 Srooms = Srooms + quant;
                 Total_rooms = Total_rooms + quant * 1200;
                 cout << "\n \n \t\t " << quant << "room/ rooms have been alloted to your";
                 
             }
             else{
                 cout << "\n\t only " << Qrooms - Srooms << "rooms remaining in hotel";
                 break;
             }
             case 2:
             cout << "\n enter pasta Quantity:";
             cin >> quant;
             if(Qpasta - Spasta >= quant)
             {
                 Spasta = Spasta+ quant;
                 Total_pasta = Total_pasta + quant * 250;
                 cout << "\n \n \t\t " << quant << " pasta is the order !";
                 
             }
             else{
                 cout << "\n\t only " << Qpasta - Spasta << "pasta remaining in hotel";
                 break;
             }
             case 3:
             cout << "\n enter burger quantity:";
             cin >> quant;
             if(Qburger - Sburger >= quant)
             {
                 Sburger = Sburger + quant;
                 Total_burger = Total_burger + quant * 120;
                 cout << "\n \n \t\t " << quant << "burger is the order";
                 
             }
             else{
                 cout << "\n\t only " << Qburger - Sburger << "burger remaining in hotel";
                 break;
             }
             case 4:
             cout << "\n enter noodles quanttity:";
             cin >> quant;
             if(Qnoodles - Snoodles >= quant)
             {
                 Snoodles = Snoodles + quant;
                 Total_noodles = Total_noodles + quant * 250;
                 cout << "\n \n \t\t " << quant << "noodles is the order";
                 
             }
             else{
                 cout << "\n\t only " << Qnoodles - Snoodles << "noodles remaining in hotel";
                 break;
             }
             case 5:
             cout << "\n enter shakes quantity";
             cin >> quant;
             if(Qshake - Sshake >= quant)
             {
                 Sshake = Sshake + quant;
                 Total_shake = Total_shake + quant * 250;
                 cout << "\n \n \t\t " << quant << "shakes is the order";
                 
             }
             else{
                 cout << "\n\t only " << Qshake - Sshake << "shake is remaing";
                 break;
             }
             case 6:
             cout << "\n enter the chickenRoll quanttity";
             cin >> quant;
             if(Qchicken - Schicken >= quant)
             {
                 Schicken = Schicken + quant;
                 Total_chicken = Total_chicken + quant * 120;
                 cout << "\n \n \t\t " << quant << "chickenRoll is order";
                 
             }
             else{
                 cout << "\n\t only " << Qrooms - Srooms << "chickenRoll is remaining in hotel";
                 break;
             }
             case 7:
                  cout << "\n\t\tDetails of sales and collection ";
                  cout << "\n \n number of rooms we had : " << Qrooms;
                  cout << "\n\n  number of rooms we gave for rent " << Srooms;
                  cout << "\n\n  remaining rooms : " << Qrooms - Srooms;
                  cout << "\n\n  Total rooms collection for the day" << Total_rooms;
                  
                  cout << "\n \n number of pastas we had : " << Qpasta;
                  cout << "\n\n  number of pastas we sold " << Spasta;
                  cout << "\n\n  remaining pastas : " << Qpasta - Spasta;
                  cout << "\n\n  Total pastas collection for the day" << Total_pasta;
                  
                  cout << "\n \n number of burger we had : " << Qburger;
                  cout << "\n\n  number of burger we sold " << Sburger;
                  cout << "\n\n  remaining burger : " << Qburger - Sburger;
                  cout << "\n\n  Total burger collection for the day" << Total_burger;
                  
                  cout << "\n \n number of noodles we had : " << Qnoodles;
                  cout << "\n\n  number of noodles we sold " << Snoodles;
                  cout << "\n\n  remaining noodles : " << Qnoodles - Snoodles;
                  cout << "\n\n  Total noodles collection for the day" << Total_noodles;
                  
                  cout << "\n \n number of chickenRoll we had : " << Qchicken;
                  cout << "\n\n  number of chickenRoll we sold " << Schicken;
                  cout << "\n\n  remaining chickenRoll : " << Qchicken - Schicken;
                  cout << "\n\n  Total chickenRoll collection for the day" << Total_chicken;
                  
             case 8:
                 exit(0);
                 
              default:
                   cout << "\n please select the number mentioned abobe !";
        
    }
    goto m;
    
    
    return 0;
}
