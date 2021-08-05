#include <iostream>
using namespace std;
//        Memory allocation using arrays
class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void intiCounter(void) { counter = 0; }
    void setprice(void);
    void displayPrice(void);
};
void Shop ::setprice(void)
{
    cout << "Enter the ID of the item " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter the price of the item " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The ID of the item is " << itemID[i] << " and the price of the item is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop dukan;
    dukan.intiCounter();        // it makes counter zero
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayPrice();
    return 0;
}