#include <iostream>
#include <string>
using namespace std;

int main(){
            //This block will list out a limit of 5 fruits.
    string fruits[5]= {"Apple", "Banana", "Cherry", "Grape", "Orange"};
        cout << "Here are the fruits in the list." << endl;
             //Below is limit-based loop for list of fruits.
            for (string fruit : fruits){
                cout << fruit << '\n';
        }

    {       //New strings for bonus fruits entered by user.
    string bonusFruit1, bonusFruit2;
        cout << "Bonus if you can think of two more fruits!" << endl;
        cout << "Fruit 1? ";
        cin >> bonusFruit1, '\n';
        cout << "Fruit 2? ";
        cin >> bonusFruit2, '\n';
        cout << "Great! Here is the updated list of fruits!" << endl;
        
    string updatedFruits[7]= {"Apple", "Banana", "Cherry", "Grape", "Orange", bonusFruit1, bonusFruit2};
            //New limit-based loop including the 2 bonus fruits entered by user.
            for (string fruit : updatedFruits){
                cout << fruit << '\n';
        }
    }

     return 0;

}



