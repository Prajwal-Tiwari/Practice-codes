#include <stdio.h>
#include<string.h>
char *arr[] = {"harsh","anukul","vishal","bhavesh"};
int n = sizeof(arr) / sizeof(arr[0]);
char var[34];
int linearsearch()
{
    for (int i = 0; i < 4; i++)
    {
        if (var == arr[i])
            return i + 1;
    }
    return -1;
}
int main()
{
    printf("which element do you want to search: ");
    scanf("%s", &var);
    int result = linearsearch();
    if (result == -1)
    {
        printf("the element %s is not found in the list.\n ", var);
        main();
    }
    else
        printf("the element %s is present at no. %d position %d.", var, result,n);
    return 0;
}