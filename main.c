
#include "ft_printf.h"
#include "limits.h"

int main()
{
	int	i;
	//printf("max:%ld, min:%ld\n", (long)INT_MAX, (long)INT_MIN);
	//ft_printf("max:%p, min:%p\n", (long)INT_MAX, (long)INT_MIN);

    i = printf("printf %p ", (void*)-1);
	ft_printf("printf result:%d\n", i);
	i = ft_printf("ft %p ", -1);
	ft_printf("ft result:%d\n", i);
}
