#include <iostream>
using namespace std;
int main() {
float roofArea, rainfall, eﬃciency;
float collectedWater;
// Input values
cout << "Enter roof area (in square meters): ";
cin >> roofArea;
cout << "Enter annual rainfall (in millimeters): ";
cin >> rainfall;
cout << "Enter collection eﬃciency (in percentage): ";
cin >> eﬃciency;
// Convert eﬃciency percentage to decimal
eﬃciency = eﬃciency / 100;
// Calculate collected rainwater
// Formula:
// Water Collected (liters) = Roof Area × Rainfall × Eﬃciency
collectedWater = roofArea * rainfall * eﬃciency;
// Output result
cout << "\nPotential Rainwater Collected: "
<< collectedWater << " liters" << endl;
return 0;
}
