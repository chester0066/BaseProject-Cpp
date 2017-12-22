#include "../src/main.h"
#include <assert.h>

void testGetTriangleType() {
    assert(getTriangleType(3, 4, 5) == 0);
    assert(getTriangleType(6, 5, 3) ==-1);
    assert(getTriangleType(3, 5, 4) == 0);
    assert(getTriangleType(5, 5, 3) == 1);
    assert(getTriangleType(3, 5, 5) == 1);
    assert(getTriangleType(3, 5, 4) == 0);
    assert(getTriangleType(3, 4, 8) ==-2);

}
void getDrawCount(){
    assert(getDrawCount(-1)== 0);

}


int main() {
    assert(addNumber(5, 2) == 7);
    testGetTriangleType();
    return 0;
}
