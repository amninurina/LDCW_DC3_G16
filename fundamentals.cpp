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

// Display
void showTips() {

	system("CLS");

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

	system("CLS");

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
    cout << "Enter weekly dishwashing loads:";
    cin >> dishwashing;
    cout << "Enter weekly laundry loads:";
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
    if (dailyWater > 80) {
            cout << "\nWARNING: High water usage detected!" << endl;
            cout << "Tip: Install low-flow fixtures to reduce usage by 30%" << endl;
        }
}

void ecoScore(){
    int ecoScore = 0;
    char answer;

     cout << "Answer the following to get your Eco Score and Smart Living Tips.\n\n";

    // ECO SCORE SECTION
    cout << "Q1. Do you switch off lights when not in use? (y/n): ";
    cin >> answer;
    if (answer == 'y' || answer == 'Y') ecoScore += 10;

    cout << "Q2. Do you use public transport at least 3 times a week? (y/n): ";
    cin >> answer;
    if (answer == 'y' || answer == 'Y') ecoScore += 10;

    cout << "Q3. Do you recycle waste regularly? (y/n): ";
    cin >> answer;
    if (answer == 'y' || answer == 'Y') ecoScore += 10;

    cout << "Q4. Do you use energy-saving devices (e.g., LED bulbs)? (y/n): ";
    cin >> answer;
    if (answer == 'y' || answer == 'Y') ecoScore += 10;

    cout << "Q5. Do you unplug chargers when not in use? (y/n): ";
    cin >> answer;
    if (answer == 'y' || answer == 'Y') ecoScore += 10;

    // Show ECO SCORE
    cout << "\n Your Eco Score is: " << ecoScore << "/50\n";

    if (ecoScore >= 40)
        cout << " Excellent! You're living a very green lifestyle.\n";
    else if (ecoScore >= 25)
        cout << " Good job! You can still make a few improvements.\n";
    else
        cout << " Try to adopt more eco-friendly habits.\n";

}

void Quiz(){

    char answer;

    //question 1

    cout << "\n===== Green City,Smart Living Quiz =====\n";
    cout << "\nQ1.Which of the following best describes a Green City\n";
    cout << "  a) A city with lots of shopping malls and highways\n";
    cout << "  b) A city designed with nature and sustainability in mind\n";
    cout << "  c) A city without technology\n";


    do{
    cout << "\nEnter your answer (a/b/c): ";
    cin >> answer;

    if (answer == 'b' || answer == 'B') {
        cout << " Correct!.\n";
    }
    else if (answer =='a'|| answer =='A' || answer =='c' || answer =='C'){
        cout << "Not quite. Nice Try! \n";
    }
    }while (answer !='a'&& answer !='A' && answer !='c' && answer !='C' && answer !='b' && answer!='B');

    //question 2

    cout << "\nQ2.Smart homes help the environment by: \n";
    cout << "  a) Automatically managing energy usage efficiently\n";
    cout << "  b) Keeping all devices on 24/7\n";
    cout << "  c) Using more electricity for comfort\n";


    do{
    cout << "\nEnter your answer (a/b/c): ";
    cin >> answer;

    if (answer == 'a' || answer == 'A') {
        cout << " Correct!\n";
    }
    else if (answer =='b'|| answer =='B' || answer =='c' || answer =='C'){
        cout << "Not quite. Nice Try! \n";
    }
    }while (answer !='a'&& answer !='A' && answer !='c' && answer !='C' && answer !='b' && answer!='B');

    //question 3

    cout << "\nQ3.Your Carbon footprint refers to: \n";
    cout << "  a) How much carbon dioxide you produce from daily activities\n";
    cout << "  b) The number of shoes you own\n";
    cout << "  c) Your pollution scorecard\n";


    do{
    cout << "\nEnter your answer (a/b/c): ";
    cin >> answer;

    if (answer == 'a' || answer == 'A') {
        cout << " Correct!\n";
    }
    else if (answer =='b'|| answer =='B' || answer =='c' || answer =='C'){
        cout << "Not quite. Nice Try! \n";
    }
    }while (answer !='a'&& answer !='A' && answer !='c' && answer !='C' && answer !='b' && answer!='B');

    //question 4

    cout << "\nQ4.Urban greening refers to: \n";
    cout << "  a) Building green-colored houses\n";
    cout << "  b) Using green lights in traffic\n";
    cout << "  c) Planting more trees and creating green spaces in cities\n";


    do{
    cout << "\nEnter your answer (a/b/c): ";
    cin >> answer;

    if (answer == 'c' || answer == 'C') {
        cout << " Correct!\n";
    }
    else if (answer =='b'|| answer =='B' || answer =='a' || answer =='A'){
        cout << "Not quite. Nice Try! \n";
    }
    }while (answer !='a'&& answer !='A' && answer !='c' && answer !='C' && answer !='b' && answer!='B');

    //question 5

    cout << "\nQ5.Sustainable urban planning can lead to: \n";
    cout << "  a) Higher traffic congestion\n";
    cout << "  b) Better air quality and improved health\n";
    cout << "  c) More factories\n";


    do{
    cout << "\nEnter your answer (a/b/c): ";
    cin >> answer;

    if (answer == 'b' || answer == 'B') {
        cout << " Correct!\n";
    }
    else if (answer =='a'|| answer =='A' || answer =='c' || answer =='C'){
        cout << "Not quite. Nice Try! \n";
    }
    }while (answer !='a'&& answer !='A' && answer !='c' && answer !='C' && answer !='b' && answer!='B');

}


int main() {

    string username;
    char repeat;
    float powerRating=0, usageHours=0, energySavingPercent=0;
    int choice, usageDays;


cout << R"(
      W   W  EEEEE  L      CCCCC  OOOOO  M   M  EEEEE
      W   W  E      L     C      O     O MM MM  E
      W   W  E      L     C      O     O M M M  E
      W W W  EEEE   L     C      O     O M   M  EEEE
      WW WW  E      L     C      O     O M   M  E
      W   W  E      L     C      O     O M   M  E
      W   W  EEEEE  LLLLL  CCCCC  OOOOO  M   M  EEEEE)" << endl;

	cout << "\n=============================================================\n";
	cout << "      Green City, Smart Living: Sustainable Urban Futures \n";
	cout << "=============================================================\n";
	cout << "   Welcome! This interactive system helps you calculate\n";
	cout << "   your energy usage, carbon footprint, and learn tips\n";
	cout << "              for smarter, greener living.\n";
	cout << "-------------------------------------------------------------\n";

	cout << "\n Please enter your name to begin: ";
	getline(cin, username);

    system("CLS");

	do{

	cout << "=============================================================\n";
	cout << "      Green City, Smart Living: Sustainable Urban Futures \n";
	cout << "=============================================================\n";

	cout<<"\nHi "<<username<<", what would you like to do? ";

	cout<<"\n1. Calculate Energy & Carbon Footprint"<<endl;
	cout<<"2. Calculate Water Usage"<<endl;
	cout<<"3. Eco Score"<<endl;
	cout<<"4. Green City Quiz"<<endl;
	cout<<"5. Learn Smart Living Tips"<<endl;
	cout<<"6. View Device Power Estimates"<<endl;
	cout<<"7. Exit Program"<<endl;

	cout<<"\nEnter your choice: ";
	cin>>choice;

    // User input

	//Choice 1

	if(choice==1){

		system("CLS");
		cout<<"=== Calculate Energy & Carbon Footprint ==="<<endl;


    // Input power rating

    while (true) {
        cout << "\nEnter device power rating (Watts): ";
        cin >> powerRating;
        if (cin.fail() || powerRating <= 0) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a positive number.\n";
        } else {
            cin.ignore(10000, '\n');
            break;
        }
    }

    // Input: hours per day

    while (true) {
        cout << "\nHow many hours do you use it per day? ";
        cin >> usageHours;
        if (cin.fail() || usageHours <= 0) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a valid number of hours.\n";
        } else {
            cin.ignore(10000, '\n');
            break;
        }
    }

    // Input: number of days

    while (true) {
        cout << "\nHow many days do you use it? ";
        cin >> usageDays;
        if (cin.fail() || usageDays <= 0) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a valid number of days.\n";
        } else {
            cin.ignore(10000, '\n');
            break;
        }
    }

    // Input energy saving percentage

    while (true) {
        cout << "\nWhat is your estimated energy saving percentage due to smart usage (0-100)?: ";
        cin >> energySavingPercent;
        if (cin.fail() || energySavingPercent < 0 || energySavingPercent > 100) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a percentage between 0 and 100.\n";
        } else {
            cin.ignore(10000, '\n');
            break;
        }
    }

	    // Processes
	    float totalEnergyUsed = calculateEnergy(powerRating, usageHours, usageDays);
	    float energySaved = totalEnergyUsed * (energySavingPercent / 100);
	    float carbonSaved = calculateCarbonSaved(energySaved);
	    float costSaved = calculateCostSaved(energySaved);

	    // Print Output
	    cout<<"\n--- Eco Report for " << username << " ---"<<endl<<endl;
	    cout<<"1. Total Energy Used: " << totalEnergyUsed << " kWh"<<endl;
	    cout<<"2. Estimated Energy Saved: " << energySaved << " kWh"<<endl;
	    cout<<"3. Estimated CO2 Emissions Reduced: " << carbonSaved << " kg"<<endl;
	    cout<<"4. Estimated Electricity Bill Saved: RM " << costSaved << endl;

	}//end of choice 1

	//choice 2

    else if(choice==2){

    system("CLS");
		calculateWaterUsage();
	}

	//end of choice 2

	//choice 3
	 else if(choice==3){

    system("CLS");
		ecoScore();
	}

	//end of choice 3

	//choice 4
	 else if(choice==4){

    system("CLS");
		Quiz();
	}

	//end of choice 4

	//choice 5
	else if(choice==5){

    system("CLS");
		showTips();
	}
	//choice 5

	else if(choice==6){

    system("CLS");
		showDeviceEstimates();

	}//end of choice 6

	//choice 7

	else if(choice==5){

    system("CLS");
		cout<<"\nThank you for contributing to a smarter and greener city!"<<endl;
		exit(0);

	}//end of choice 7

	//option other than 1-7

	else{

		cin.ignore();
		cout<<"You've entered the wrong option! Exiting the program."<<endl;
		exit(0);
	}

    // Loop

    do{

    cout<<"\nDo you want to continue? [y/n]: ";
    cin>>repeat;

    system("CLS");

	}while(repeat!='y' && repeat!='n');


    }while(repeat=='y');

    cout<<"\nThank you for contributing to a smarter and greener city!"<<endl;

    return 0;

}//end of main
