#include <iostream>
#include <iomanip>
using namespace std;

int listOfGadgets();
int itemTotal();


int main() {
 
    string firstName, lastName;
     

    cout << "Enter your first name:  ";
    cin >> firstName;
    cout << "Enter your last name:  ";
    cin >> lastName;

    listOfGadgets();
    
    itemTotal();
  
    
return 0;
}

int listOfGadgets()  {

    string gadgets[] = {"Wireless Mouse- R150.00", "Bluetooth Speaker- R250.00", "USB Flash Drive - R100.00", "Gaming Keyboard - R500.00", "Noice-Cancelling Headphones - R750.00", "Smartwatch - R1,200.00", "External Hard Drive - R1,000.00", "Portable Charger - R300.00"};
    int size = 8;

    for ( int i= 0; i < size; i++) {
        cout << i + 1 << ".  " << gadgets[i] << endl;
    }
    return 0;
}



int itemTotal() {
    int itemNumber1, itemNumber2;
    int quantity1, quantity2;
    double discount = 0;
    double subTotal = 0;
    double price1 = 0, price2 = 0;
    double finalTotal = 0;
     
    
    cout << "How many items would you like to purchase (up to 10) ?: ";
     cout << "Enter the item number (1-8): ";
     cin >> itemNumber1;
     cout << "Enter the quantity: ";
     cin >> quantity1;
     cout << "Enter the item number (1-8):";
     cin >> itemNumber2;
     cout << "Enter the quantity:";
     cin >> quantity2;
  
  
double prices[] = {150, 250, 100, 500, 750, 1200, 1000, 300};
price1 = prices[itemNumber1 - 1];
price2 = prices[itemNumber2 - 1];
  
if (itemNumber1 < 1 || itemNumber1 > 8 || itemNumber2 < 1 || itemNumber2 > 8) {
    cout << "Invalid item number entered." << endl;
    return 1;
}
   subTotal = (price1 * quantity1) + (price2 * quantity2);
   
     if (subTotal > 2000)
     discount = subTotal * 0.15;
     else 
      discount = 0;


     finalTotal = subTotal - discount;

cout << fixed << setprecision(2);
cout << "Subtotal: R" << subTotal << endl;
cout << "Discount: R" << discount << endl;
cout << "Final Total: R" << finalTotal << endl;

return 0;
}

 


