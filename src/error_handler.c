#include "../includes/push_swap.h"

static void check_empty(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 1)
        exit(0);
    i = 1;
    while (argv[i])
    {
        j = 0;
        
        if (argv[i][0] == '\0')
            exit_with_error();
        i++;
    }
}

static void check_digit(char **argv)
{
    int i;
    int j;

    i = 1;
    while (argv[i])
    {
        j = 0;
        if ((argv[i][j] == '-') || (argv[i][j] == '+'))
            j++;
        if (!argv[i][j])
            exit_with_error();
        while (argv[i][j])
        {
            if (!ft_isdigit(argv[i][j]))
                exit_with_error();
            j++;
        }
        i++;
    }
}

static void check_limit(char **argv)
{
    int     i;
    long    number;

    i = 1;
    while (argv[i])
    {
        number = ft_atol(argv[i]);
        if (number > INT_MAX || number < INT_MIN)
            exit_with_error();
        i++;
    }
}

static void check_duplicates(char **argv)
{
    int i;
    int j;
    int number;

    i = 1;
    while (argv[i])
    {
        number = ft_atoi(argv[i]);
        j = i + 1;
        while (argv[j])
        {
            if (number == ft_atoi(argv[j]))
                exit_with_error();
            j++;
        }
        i++;
    }
}

void    check_errors(int argc, char **argv)
{
    check_empty(argc, argv);
    check_digit(argv);
    check_limit(argv);
    check_duplicates(argv);
}
