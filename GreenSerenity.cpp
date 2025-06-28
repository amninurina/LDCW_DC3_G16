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
