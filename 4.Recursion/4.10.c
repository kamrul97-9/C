
// recursion with static variable
#include<stdio.h>

void recurse()
{
    static int count = 1;
    if( count > 5)
    {
        return;
    }
    printf("Count : %d\n", count);
    count = count + 1;
    recurse();

}

int main()
{
    recurse();
    return 0;
}

//Count : 1
//Count : 2
//Count : 3
//Count : 4
//Count : 5
