int main()
{
    int s, e, n, i, flag, flagp;
    flagp = 0;

    printf(" enter range");
    scanf("%d %d", &s, &e);
    if (s % 2 == 0)
        s += 1;

    for (i = s; i <= e; i += 2)

    {
        flag = 1;

        for (n = 2; n <= (i / 2); n++)
            if (i % n == 1)
            {
                flag = 0;
                break;
            }

        if (flag == 1)

        
            printf("%d ", i);
            if (flagp == 1)
            {

                printf("%d %d", i - 2, i);
            flagp = 1;
        }
        return 0;
}