#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    stack<int> speedLimits, noOvertake;
    bool noSpeedLimit = false, canOvertake = true;
    int currentSpeed = 0, numViolations = 0;
    
    while (n--) {
        int eventType;
        cin >> eventType;
        
        if (eventType == 1) {
            int newSpeed;
            cin >> newSpeed;
            currentSpeed = newSpeed;
        } else if (eventType == 2) {
            if (!canOvertake || noOvertake.size() > 0) {
                numViolations++;
            }
        } else if (eventType == 3) {
            int newSpeedLimit;
            cin >> newSpeedLimit;
            while (speedLimits.size() > 0 && speedLimits.top() > newSpeedLimit) {
                speedLimits.pop();
            }
            speedLimits.push(newSpeedLimit);
        } else if (eventType == 4) {
            canOvertake = true;
            while (noOvertake.size() > 0) {
                noOvertake.pop();
            }
        } else if (eventType == 5) {
            noSpeedLimit = true;
        } else if (eventType == 6) {
            noOvertake.push(1);
            canOvertake = false;
        }
    }
    
    cout << numViolations << endl;
    
    return 0;
}
