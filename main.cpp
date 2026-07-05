#include <iostream>
#include <string>

int main() {
    std::string spacecraftName = "Day 1 SmallSat";
    double batteryPercent = 87.5;
    double temperatureC = 22.8;
    bool commsOnline = true;

    std::cout << "Spacecraft Health Report\n";
    std::cout << "------------------------\n";
    std::cout << "Name: " << spacecraftName << "\n";
    std::cout << "Battery: " << batteryPercent << "%\n";
    std::cout << "Temperature: " << temperatureC << " C\n";
    std::cout << "Comms Online: " << commsOnline << "\n";

    return 0;
}