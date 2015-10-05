//
// Created by levy_b on 6/17/15.
//

#include "utils.h"

int		av_length(char **av)
{
    int		i;

    i = 0;
    while (av[i])
        ++i;
    return (i);
}

t_bool		is_num(char *str)
{
    size_t	j;

    if (!str)
        return (FALSE);
    for (j = 0; str[j]; ++j)
    {
        if (str[j] < '0' || str[j] > '9')
        {
            fprintf(stderr, "%s is not a number\n", str);
            return (FALSE);
        }
    }
    return (TRUE);
}

t_bool		is_float(char *str)
{
    size_t	i;

    if (!str)
        return (FALSE);
    for (i = 0; str[i]; ++i)
    {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
        {
            fprintf(stderr, "%s is not a float number\n", str);
            return (FALSE);
        }
    }
    return (TRUE);
}
