#include <iostream>
#include <stdlib.h>

#include "boostdemo.h"

using namespace std;

int main(int argc, char* argv[]) {
   cout << "Hello, World" << endl;
   if (argc > 1) {
      cout << "Hello " << argv[1] << " too" << endl;
   }
   boost_demo();
   exit(0);
}

