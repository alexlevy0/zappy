#include "option.h"

int             main(int ac, char **av)
{
  t_data      data;

  if (!parse_data(ac, av, &data))
  {
    usage();
    return (EXIT_FAILURE);
  }

  init_client(&data);
  return (EXIT_SUCCESS);
}
