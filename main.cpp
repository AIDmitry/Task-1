#include <iostream>
#include "math.h"
using namespace std;

int main() {
    storage<typeof(int)> & obj = storage<typeof(int)>::Instance();
    obj.addTo(8);
    obj.addTo(5);
    obj.addTo(4);
    obj.Show();
    obj.deleteFrom(4);
    obj.Show();
    return 0;
}
