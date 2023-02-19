/* structure basics */
#include <stdio.h>
struct rehan
{
    int length;
    int breadth;
    char c;
};
int main()
{
    struct rehan r = {2, 3};
    printf("\nArea is  sequal to %d", r.length * r.breadth);
    printf("\nsizeof(r) %d", sizeof(r)); // inside struct padding of memory is done
    return 0;
}