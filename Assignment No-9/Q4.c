
// 4. Accept number from user and display below pattern.
// Input : 4
// Output : # 1 * # 2 * # 3 * # 4 *

#include <stdio.h>
void Pattern(int);
int main()
{
    int iValue = 0;
    printf("Enter The Number");
    scanf("%d", &iValue);
    Pattern(iValue);
    return 0;
}
void Pattern(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t %d\t *\t", iCnt);
    }
}