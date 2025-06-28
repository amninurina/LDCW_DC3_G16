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
