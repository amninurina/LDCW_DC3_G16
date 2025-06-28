#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Calculate energy usage in kWh
float calculateEnergy(float watts, float hours, int days) {
    return (watts * hours * days) / 1000.0;
}

// Calculate carbon reduction
float calculateCarbonSaved(float energySaved) {
    const float CO2 = 0.92; // 0.92 kg CO2 per kWh
    return energySaved * CO2;
}

// Calculate cost savings from energy saved
float calculateCostSaved(float energySaved, float ratePerKwh = 0.50) {
    return energySaved * ratePerKwh;
}

// Display tips
void showTips() {

    cout << "=====================================================================================\n";
    cout << "            			 SMART LIVING TIPS FOR YOU \n";
    cout << "=====================================================================================\n";

    cout << "\n  1. Turn off appliances when not in use.";
    cout << "\n    > Save energy by switching off devices instead of leaving them on standby.";

    cout << "\n\n  2. Use energy-efficient LED bulbs.";
    cout << "\n    > LEDs use up to 80% less energy and last much longer than traditional bulbs.";

    cout << "\n\n  3. Unplug chargers to avoid phantom power.";
    cout << "\n    > Devices still draw power when plugged in, even if not in use.";

    cout << "\n\n  4. Use smart plugs or timers.";
    cout << "\n    > Automate on/off schedules for better energy control.";

    cout << "\n\n  5. Track your usage with energy apps.";
    cout << "\n    > Monitor your electricity usage and get insights to save more.";

    cout << "\n\n=====================================================================================\n";
    cout << " Every small step counts toward a greener planet! \n";
    cout << "=====================================================================================\n";

}

void showDeviceEstimates() {

    cout<<"=== Device Power Estimates ==="<<endl;

    cout << "\n--- Average Power Ratings for Common Devices ---\n";
    cout << "1. LED Light Bulb     : 10 - 15 Watts\n";
    cout << "2. Laptop             : 50 - 100 Watts\n";
    cout << "3. Fan                : 75 - 120 Watts\n";
    cout << "4. Television         : 100 - 150 Watts\n";
    cout << "5. Refrigerator       : 150 - 300 Watts\n";
    cout << "6. Air Conditioner    : 1000 - 2000 Watts\n";
    cout << "7. Washing Machine    : 400 - 1000 Watts\n";
    cout << "--------------------------------------------------\n";
}

void calculateWaterUsage(){

    cout << "\n ===Water Usage===" << endl;

    double shower, dishwashing, laundry;

    cout << "Enter daily shower time (minutes):";
    cin >> shower;
    cout << "Enter weekly dishwashing loads (eg: 7):";
    cin >> dishwashing;
    cout << "Enter weekly laundry loads (eg: 3):";
    cin >> laundry;

    //water usage calculations

    double dailyWater = (shower*13) + (dishwashing*12/7) + (laundry*26/7);
    double monthlyWater = dailyWater*30;
    double waterCost = monthlyWater*0.0005;


    cout << "\n===Water Usage Results==="<<endl;
    cout << "Daily Water Usage: " << dailyWater << " liters" << endl;
    cout << "Monthly Water Usage: " << monthlyWater << " liters" << endl;
    cout << "Estimated Monthly Water Cost: RM" << waterCost << endl;

    //warning
    if (dailyWater > 300) {
            cout << "\nWARNING: High water usage detected!" << endl;
            cout << "Tip: Install low-flow fixtures to reduce usage by 30%" << endl;
        }
}

void ecoScore(){
    int ecoScore = 0;
    char answer;

    cout << "Answer the following to get your Eco Score and Smart Living Tips.\n\n";

    // Q1
    do {
        cout << "Q1. Do you switch off lights when not in use? (y/n): ";
        cin >> answer;
    } while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N');
    if (answer == 'y' || answer == 'Y') ecoScore += 10;

    // Q2
    do {
        cout << "Q2. Do you use public transport at least 3 times a week? (y/n): ";
        cin >> answer;
    } while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N');
    if (answer == 'y' || answer == 'Y') ecoScore += 10;

    // Q3
    do {
        cout << "Q3. Do you recycle waste regularly? (y/n): ";
        cin >> answer;
    } while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N');
    if (answer == 'y' || answer == 'Y') ecoScore += 10;

    // Q4
    do {
        cout << "Q4. Do you use energy-saving devices (e.g., LED bulbs)? (y/n): ";
        cin >> answer;
    } while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N');
    if (answer == 'y' || answer == 'Y') ecoScore += 10;

    // Q5
    do {
        cout << "Q5. Do you unplug chargers when not in use? (y/n): ";
        cin >> answer;
    } while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N');
    if (answer == 'y' || answer == 'Y') ecoScore += 10;

    // Display score
    cout << "\nYour Eco Score is: " << ecoScore << "/50\n";

    if (ecoScore >= 40)
        cout << "Excellent! You're living a very green lifestyle.\n";
    else if (ecoScore >= 25)
        cout << "Good job! You can still make a few improvements.\n";
    else
        cout << "Try to adopt more eco-friendly habits.\n";
}

void Quiz() {

    char answer;
    int score = 0; // Initialize score

    // Question 1
    cout << "\n===== Green City, Smart Living Quiz =====\n";
    cout << "\nQ1. Which of the following best describes a Green City?\n";
    cout << "  a) A city with lots of shopping malls and highways\n";
    cout << "  b) A city designed with nature and sustainability in mind\n";
    cout << "  c) A city without technology\n";

    do {
        cout << "\nEnter your answer (a/b/c): ";
        cin >> answer;

        if (answer == 'b' || answer == 'B') {
            cout << "Correct!\n";
            score++;
        } else if (answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C') {
            cout << "Not quite. Nice try!\n";
        }
    } while (answer != 'a' && answer != 'A' && answer != 'b' && answer != 'B' && answer != 'c' && answer != 'C');

    // Question 2
    cout << "\nQ2. Smart homes help the environment by:\n";
    cout << "  a) Automatically managing energy usage efficiently\n";
    cout << "  b) Keeping all devices on 24/7\n";
    cout << "  c) Using more electricity for comfort\n";

    do {
        cout << "\nEnter your answer (a/b/c): ";
        cin >> answer;

        if (answer == 'a' || answer == 'A') {
            cout << "Correct!\n";
            score++;
        } else if (answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C') {
            cout << "Not quite. Nice try!\n";
        }
    } while (answer != 'a' && answer != 'A' && answer != 'b' && answer != 'B' && answer != 'c' && answer != 'C');

    // Question 3
    cout << "\nQ3. Your carbon footprint refers to:\n";
    cout << "  a) How much carbon dioxide you produce from daily activities\n";
    cout << "  b) The number of shoes you own\n";
    cout << "  c) Your pollution scorecard\n";

    do {
        cout << "\nEnter your answer (a/b/c): ";
        cin >> answer;

        if (answer == 'a' || answer == 'A') {
            cout << "Correct!\n";
            score++;
        } else if (answer == 'b' || answer == 'B' || answer == 'c' || answer == 'C') {
            cout << "Not quite. Nice try!\n";
        }
    } while (answer != 'a' && answer != 'A' && answer != 'b' && answer != 'B' && answer != 'c' && answer != 'C');

    // Question 4
    cout << "\nQ4. Urban greening refers to:\n";
    cout << "  a) Building green-colored houses\n";
    cout << "  b) Using green lights in traffic\n";
    cout << "  c) Planting more trees and creating green spaces in cities\n";

    do {
        cout << "\nEnter your answer (a/b/c): ";
        cin >> answer;

        if (answer == 'c' || answer == 'C') {
            cout << "Correct!\n";
            score++;
        } else if (answer == 'a' || answer == 'A' || answer == 'b' || answer == 'B') {
            cout << "Not quite. Nice try!\n";
        }
    } while (answer != 'a' && answer != 'A' && answer != 'b' && answer != 'B' && answer != 'c' && answer != 'C');

    // Question 5
    cout << "\nQ5. Sustainable urban planning can lead to:\n";
    cout << "  a) Higher traffic congestion\n";
    cout << "  b) Better air quality and improved health\n";
    cout << "  c) More factories\n";

    do {
        cout << "\nEnter your answer (a/b/c): ";
        cin >> answer;

        if (answer == 'b' || answer == 'B') {
            cout << "Correct!\n";
            score++;
        } else if (answer == 'a' || answer == 'A' || answer == 'c' || answer == 'C') {
            cout << "Not quite. Nice try!\n";
        }
    } while (answer != 'a' && answer != 'A' && answer != 'b' && answer != 'B' && answer != 'c' && answer != 'C');

    // Final score
    cout << "\n===== Quiz Completed! =====\n";
    cout << "You scored " << score << " out of 5.\n";

    if (score == 5)
        cout << "Excellent job! 🌱\n";
    else if (score >= 3)
        cout << "Well done! You’re on your way to greener living.\n";
    else
        cout << "Keep learning! Every step helps build a greener future.\n";
}
