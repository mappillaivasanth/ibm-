#include <stdio.h>

int main()
{
    int amnt=12000,org_amnt=10000,profit;
    printf("The selling price of the article is Rs %d\n",amnt);
    printf("The oringinal cost of this article is Rs %d\n",org_amnt);
    profit=amnt-org_amnt;
    printf("The profit of the article is Rs %d",profit);

    return 0;
}
