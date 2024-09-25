#include <QtWidgets>
#include "ejemplo2.h"

int main(int argc, char** argv)
{
    vector<int> *v = new vector<int>(TAM);
    ejemplo2 o;
    o.createVector(v);
    o.sortVector(v);
    cout << o.findSmallest(v) << endl;
    return 0;
}
