#include<iostream>
using namespace std;

float calculateFruitPrice(string, string, double);

main() {
    string fruit, day;
    double quantity;
    cout << " Enter the fruit name: ";
    cin >> fruit;
    cout << " Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> day;
    cout << " Enter the quantity: ";
    cin >> quantity;
    
    float result = calculateFruitPrice(fruit, day, quantity);
    
    if (result == -1) {
        cout << "Error" << endl;
    } else {
        cout << "Total Price: " << result << endl;
    }

}

float calculateFruitPrice(string fruit, string day, double quantity) {
    double price;
    
    if(day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
        if(fruit == "banana") {
            price = quantity * 2.50;
        } else if(fruit == "apple")
        {
            price = quantity * 1.20;
        } else if(fruit == "orange")
        {
            price = quantity * 0.85;
        } else if(fruit == "grapefruit")
        {
            price = quantity * 1.45;
        } else if(fruit == "kiwi")
        {
            price = quantity * 2.70;
        } else if(fruit == "pineapple")
        {
            price = quantity * 5.50;
        } else if(fruit == "grapes")
        {
            price = quantity * 3.85;
        }
        return price;
    }
    
    if(day == "Saturday" || day == "Sunday") {
        if(fruit == "banana") {
            price = quantity * 2.70;
        } else if(fruit == "apple")
        {
            price = quantity * 1.25;
        } else if(fruit == "orange")
        {
            price = quantity * 0.90;
        } else if(fruit == "grapefruit")
        {
            price = quantity * 1.60;
        } else if(fruit == "kiwi")
        {
            price = quantity * 3.00;
        } else if(fruit == "pineapple")
        {
            price = quantity * 5.60;
        } else if(fruit == "grapes")
        {
            price = quantity * 4.20;
        }
        return price;
    }
    return -1;
}
