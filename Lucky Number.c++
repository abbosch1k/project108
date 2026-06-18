#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int lucky = rand()%10+1;

    cout << "Lucky Number: "
         << lucky;

    return 0;
}
