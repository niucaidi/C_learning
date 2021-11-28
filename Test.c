// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int arr0[5] = {1,2,3};
//     char arr1[5] = {'a','b','c'};
//     short arr2[5] = {3,7,9};
//     long arr3[5] = {123456,1445644,547658};
//     long long arr4[5] = {1234567890,9876543210,6789012345};
//     float arr5[5] = {3.14,1.5,9.8};
//     double arr6[6] = {3.1415678,1.5355462,9.812343443};
//     printf("%d\n",strlen(arr0));
//     return 0;
// }

#include <stdio.h>

int main()
{
    int a = 1;
    int b = (++a)+(++a)+(++a);
    printf("%d\n",b);

    return 0;
}