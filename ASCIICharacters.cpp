
#include <iostream>
using namespace std;

int main() {
    cout << "ASCII Codes and Characters:" << std::endl;
    cout << "--------------------------" << std::endl;

    for (int i = 0; i <= 127; ++i) {
        cout << "ASCII code " << i << " : " << static_cast<char>(i) << std::endl;
    }

    return 0;
}