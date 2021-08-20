#include <iostream>
#include "sub1.hpp"

using namespace std;

int main(int argc, char const* argv[])
{
    cout << "make test" << endl;
    sub1();
#ifdef NDEBUG
    cout <<  "NO DEBUG" << endl;
#else
    cout << "DEBUG" << endl;
#endif

    return 0;
}
