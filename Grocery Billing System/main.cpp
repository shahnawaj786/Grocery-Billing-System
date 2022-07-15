
#include <iostream>
#include<fstream>
using namespace std;
class shopping 
{
    private:
       int pcode;
       float price;
       float dis;
       string pname;
       public:
         void menu();
         void administrator();
         void buyer();
         void add();
         void edit();
         void rem();
         void list();
         void receipt();
};
void shopping:: menu()
{
    m:
    int choice;
    string email;
    string password;
    cout << "\t\t\t\t\t\t__________________________\n";
    cout << "\t\t\t\t\t\t__________________________\n";
    cout << "\t\t\t\t\t\t_________SuperMarket main Menu_______\n";
    cout<< "\t\t\t\t\t\t__________________________\n";
    cout << "\t\t\t\t\t\t                       \n";
    cout<< "\t\t\t\t\t|   1) Administrator   |\n";
    cout<< "\t\t\t\t\t|                     |\n";
    cout<< "\t\t\t\t\t|  2) Buyer           |\n";
    cout<< "\t\t\t\t\t|                     |\n";
    cout<< "\t\t\t\t\t|   3) exit            |\n";
    cout<< "\t\t\t\t\t|                     |\n";
    cout <<"\t\t\t\t\t|                      |\n";
    cout <<"\n\t\t\t Please select!";
    cin >> choice;
    switch(choice)
    {
        case 1:
              cout << "\t\t\t\t\t Please Login  \n";
              cout << "\t\t\t\t\t Please Enter Email  \n";
              cin>> email;
              cout << "\t\t\t\t\t Password     \n";
              cin >> password;
              if(email == "robby@email.com" &&  password ==  "robby@123"){
                  administrator();
              }
              else{
                  cout << "Invalid email/ password";
              }
              break;
        case 2:
              {
                  buyer();
              }
        case 3:
              {
                  exit(0);
              }
        default  :
              {
                  cout << "please select from the given options";
              }
    }
    goto m;
}
void shopping :: administrator()
{
    m:
    int choice;
    cout << "\n\n\n\t\t\t Administrator menu";
    cout << "\n\t\t\t|___________1) Add the product __________";
    cout << "\n\n\t\t\t|                      |";
    cout << "\n\t\t\t|___________2) Modify the product __________";
    cout << "\n\n\t\t\t|                      |";
    cout << "\n\t\t\t|___________3) Delete the product __________";
    cout << "\n\n\t\t\t|                      |";
    cout << "\n\t\t\t|___________4) Back to main menu __________";
    cout << "\n\n\t\t\t|                      |";
    cout <<"\n\n\n\t Please enter your choice";
    cin >> choice;
    switch(choice) 
    {
        case 1:
             add();
             break;
        case 2:
             edit();
             break;
        case 3:
             rem();
             break;
        case 4:
             menu();
             break;
        default:
             cout  << "invalid choide!";
    }
    goto m;
    
}
void shopping :: buyer()
{
    int choice;
    cout << "\t\t\t Buyer \n";
    cout << "\t\t\t _________  \n";
    cout << "                           \n";
    cout << "\t\t\t  1) Buy product \n";
    cout << "                        \n";
    cout << "\t\t\t   2) Go Back     /n";
    cout << "\t\t\t   Enter your choice :";
     cin >> choice;
     switch(choice)
     {
         m:
         case 1:
              receipt();
              break;
         case 2:
              menu();
              break;
         default:
              cout << "invalid choice";
     }
     goto m;
}
void shopping :: add()
{
    m:
    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n;
    cout << "\n\n\t\t ADD new product";
    cout << "\n\n\t Product code of the product   ";
    cin >> pcode;
    cout << "\n\n\t Name of the product";
    cin >> pname;
    cout << "\n\n\t Price of the product";
    cin >> price;
    cout << "\n\n\t Discount on the product";
    cin >> dis;
    data.open("database.txt", ios :: in);
    if(!data)
    {
        data.open("database.txt", ios :: app | ios :: out);
        data<< " " << pcode<< "  " << pname << "  " << price << " "<< dis << " \n";
        data.close();
        
    }
    else{
        data >> c >> n >> p >> d;
        while(!data.eof())
        {
            if(c == pcode)
            {
                token++;
            }
            data>>c>>n>>p>>d;
        }
        data.close();
    
    if(token == 1)
       goto m;
    else{
        data.open("database.txt", ios :: app | ios :: out);
        data<< " " << pcode<< "  " << pname << "  " << price << " "<< dis << " \n";
        data.close();
    }
    }
    cout << "\n\n\n \t\t Record inserted !";
    
}
void shopping :: edit()
{
    fstream data, data1;
    int pkey;
    int token = 0;
    int c;
    float p;
    float d;
    string n;
    cout << "\n\n\t\t Modity the record";
    cout << "\n\t\t Product code : ";
    cin >> pkey;
    data.open("database.txt", ios :: in);
    if(!data)
    {
        cout << "\n\n File doesnot exit!";
    }
    else{
        data1.open("database1.txt", ios :: app | ios :: out);
        data>>pcode>>pname>>price>>dis;
        while(!data.eof())
        {
            if(pkey == pcode) {
                cout << "\n\n\t\t Product new Code: ";
                cin >> c;
                cout << "\n\n\t\t Name of the product :";
                cin >>n;
                cout << "\n\n\t\t Price :";
                cin >> p;
                cout << "\n\t\t Discount :";
                cin >> d;
                data1<<" "<<c << " " << n << " "<< p << d<< "\n";
                cout << "\n\n\t\t Record edited ";
                token++;
            }
            else{
                data1<<" "<<pcode<< pname << " " << price <<" " << dis << "\n";
            }
            data>>pcode>> pname>> price>> dis;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt", "database.txt");
        if(token == 0) {
            cout << "\n\n Record Not found sorry!";
        }
    }
    
}
void shopping :: rem()
{
    fstream data, data1;
    int pkey;
    int token = 0;
    cout << "\n\n\t  Delete product";
    cout << "\n\n\t product code : ";
    cin >> pkey;
    data.open("database.txt", ios :: in);
    if(!data) 
    {
        cout << "File doesnt exist";
        
    }
    else{
        data1.open("database1.txt", ios :: app | ios :: out);
        data >> pcode >> pname >> price >> dis;
        while(!data.eof())
        {
            if(pcode == pkey)
            {
                cout << "\n\n\t product deleted successfully";
                token++;
            }
            else{
                data1<<" " << pcode <<" " << pname << " " << price << " " << dis << "\n";
                
            }
            data >> pcode >> pname >> price >> dis;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt", "database.txt");
        if(token == 0)
        {
            cout << "\n\n Record not found";
        }
    }
    
}
void shopping :: list() 
{
    fstream data;
    data.open("database.txt", ios:: in);
    cout << "\n\n|_______________________\n";
    cout <<"ProNo\t\t Name \t\t Price \n";
    cout << "\n\n|_______________________\n";
    data >> pcode >> pname >> price >> dis;
    while(!data.eof())
    {
        cout <<  pcode << "\t\t" << pname << "\t\t" << price << "\n";
        data >> pcode >> pname >> price >> dis;
    }
    data.close();
    
}
void shopping ::receipt() {
    
    fstream data;
    int arrc[100];
    int arrq[100];
    char choice;
    int c = 0;
    float amount;
    float dis = 0;
    float total = 0;
    cout << " \n\n\n\t\t\t receipt ";
    data.open("database.txt", ios :: in);
    if(!data)
    {
        cout << "\n\n Empty database";
    }
    else{
        data.close();
        list();
        cout << "\n______________________________\n";
        cout << "\n                               \n";
        cout <<" \n     Please place the order    \n";
        cout << "\n                               \n";
        cout << "\n______________________________\n";
        do
        {
            m:
            cout << "\n\n Enter Product code:";
            cin >> arrc[c];
            cout << "\n\nEnter the Product quantity: ";
            cin >> arrq[c];
            for(int i = 0; i < c; i++)
            {
                if(arrc[c] == arrc[i])
                {
                    cout << "\n\n Duplicate product code. Pleae try again!";
                    goto m;
                }
            }
            c++;
            cout << "\n\n Do you want to buy another product or not ? if yes then press y else no";
            cin >> choice;
        }
        while(choice == 'y');
        cout << "\n\n\t\t\t_____________________Receipt___________________\n";
        cout <<"\n Product No \t product Name \t product quantity\t  price\t Amount\t amount with discount";
        for(int i = 0; i < c; i++) {
            data.open("database.txt", ios :: in );
            data>> pcode>> pname >> price >> dis;
            while(!data.eof()) {
                if(pcode == arrc[i]) 
                {
                    amount = price  * arrq[i];
                    dis = amount -( amount * dis / 100);
                    total = total + dis;
                    cout << "\n" << pcode << "\t\t"<< pname << "\t\t"<<arrq[i] << "\t\t"<< price << "\t\t"<< amount<< "\t\t"<<dis;
                    
                }
                data >> pcode >> pname >> price >> dis;
            }
        }
        data.close();
        
    }
    cout << "\n\n\n_________________________________";
    cout <<"\n\n total amount : "<< total;
    
}
int main()
{
    shopping s;
    s.menu();
}