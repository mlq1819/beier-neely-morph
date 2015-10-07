#include <iostream>
#include "GetTimeMs.h"
#include "morph_dlib.h"


using namespace std;


int main(int argc, char *argv[]) {
    uint64 start = GetTimeMs64();

    morph_image_dlib();

    uint64 end = GetTimeMs64();

    cout << end - start;
    return 0;
}

