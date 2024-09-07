#include<assert.h>
#include "fac.h"

int main(void)
{
    assert(factorial(5) == 120);
    assert(factorial(4) == 24);
	
    return 0;
}