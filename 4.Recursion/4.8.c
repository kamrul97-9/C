// recursion
//  বুঝি নাই
#include<stdio.h>

void recurse(int count)
{
    if( count > 5)
    {
        return;
    }
    recurse(count + 1);
    printf("Count = %d\n", count);

}

int main()
{
    recurse(1);
    return 0;
}

//Count = 5
//Count = 4
//Count = 3
//Count = 2
//Count = 1
