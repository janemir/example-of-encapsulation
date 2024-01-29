#include <iostream>
using namespace std;

class CoffeeGrinder {
private:
    bool CheckVoltage() { // "checking the voltage with a coffee grinder"
        return true; // encoded
    }
public:
    void Start() { // "vjuhhh" - the coffee grinder is working; "beep beep" - a signal about an inappropriate voltage
        (CheckVoltage()) ? (cout << "vjuhhh" << endl) : (cout << "beep beep" << endl);
    }
};

int main() {
    CoffeeGrinder a;
    a.Start();
    return 0;
}
