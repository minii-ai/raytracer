#include <cassert>
#include <iostream>
#include "../include/canvas.h"

using namespace std;

int main()
{
    Canvas c = Canvas(10, 20);

    assert(c.width() == 10 && c.height() == 20);

    for (const vector<Color> &row : c.pixels())
    {
        for (const Color &color : row)
        {
            assert(color == Color(0, 0, 0));
        }
    }

    // writing pixel to canvas
    Color red = Color(1, 0, 0);
    c.write_pixel(2, 3, red);
    assert(c.pixel_at(2, 3) == red);

    string ppm = c.to_ppm();

    cout << ppm << endl;
}