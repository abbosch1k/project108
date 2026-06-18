#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    cout << "Player: "
         << rand()%6+1
         << endl;

    cout << "Bot: "
         << rand()%6+1;

    return 0;
}
