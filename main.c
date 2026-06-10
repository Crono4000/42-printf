
#include "ft_printf.h"
#include "limits.h"

int main()
{
	printf("max:%ld, min:%ld\n", (long)INT_MAX, (long)INT_MIN);
	ft_printf("max:%p, min:%p\n", (long)INT_MAX, (long)INT_MIN);

    //ft_printf("string:%s\n", "fuck");
}
