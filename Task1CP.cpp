#include<iostream>
using namespace std;

string decideActivity(string temp, string humidity);

int main(){
    string temp, humidity, result;
    cout << "Enter temperature (warm / cold): ";
    cin >> temp;
    cout << "Enter humidity (dry or humid): ";
    cin >> humidity;
    result = decideActivity(temp, humidity);
    cout << result;
}

string decideActivity(string temp, string humidity){
    if(temp == "warm" && humidity == "dry"){
        return "Play Tennis";
    }
    if(temp == "warm" && humidity == "humid"){
        return "Swim";
    }
    if(temp == "cold" && humidity == "dry"){
        return "Play Basketball";
    }
    if(temp == "cold" && humidity == "humid"){
        return "Watch TV";
    }
}
