#include <iostream>
using namespace std;
int main()
{

    int count;
    int cha;
    int numZ;
    int totalcost = 0;
    cout << "klient : "; 
    cin >> count; 
    cout << endl;
    
    for (int i = 1; i <= count; i++) 
    {
        cout << "zakazbl : ";
        cin >> cha; 
        cout << endl;
        for (int v = 1; v <= cha; v++)
        {
            cin >> numZ;
            switch (numZ) {
            case 1:
            
                totalcost += 15;
                cout << 228;
                break;
            
            case 2:
                totalcost += 10;
                break;
            case 3:
                totalcost += 5;
           
                break;
           
            }


        }
        
    }
    cout << totalcost;
}