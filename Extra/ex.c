#include <stdio.h>

int main()
{
    int a = 9, b = 10, c = 11;
    printf("c=%d,b=%d,a=%d", a++, --c - b, ++a + c - b);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int a = 0;
//     while (a)
//         ;
//     {
//         printf("infinity");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a=6.6+4.4;
//     if(printf("a=%d",a))
//     {
//         printf("yes");
//     }
//     else
//     {
//         printf("no");
//     }

// return 0;
// }