#include <stdio.h>
#include "../ft_printf.h"

int	main(void)
{
	ft_printf("ft|%.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f|\n",
		0.15, 0.25, 0.35, 0.45, 0.55, 0.65, 0.75, 0.85, 0.95);
	printf("  |%.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f %.1f|\n\n",
		0.15, 0.25, 0.35, 0.45, 0.55, 0.65, 0.75, 0.85, 0.95);
	ft_printf("ft|%.1Lf %.1Lf %.1Lf %.1Lf %.1Lf %.1Lf %.1Lf %.1Lf %.1Lf|\n",
		0.15l, 0.25l, 0.35l, 0.45l, 0.55l, 0.65l, 0.75l, 0.85l, 0.95l);
	printf("  |%.1Lf %.1Lf %.1Lf %.1Lf %.1Lf %.1Lf %.1Lf %.1Lf %.1Lf|\n\n",
		0.15l, 0.25l, 0.35l, 0.45l, 0.55l, 0.65l, 0.75l, 0.85l, 0.95l);
	printf("|%d|\n", ft_printf("%"));
	printf("|%d|\n\n", printf("%"));
	ft_printf("{% 03d}\n", 0);
	printf("{% 03d}\n\n", 0);
	ft_printf("|%0.10d|\n", 42);
	printf("|%0.10d|\n", 42);
	//ft_printf("|%s|\n");

	ft_printf("%.f %.f %.f\n", 0.5, 1.5, 2.5);
	printf("%.f %.f %.f\n\n", 0.5, 1.5, 2.5);

	ft_printf("%.Lf %.Lf %.Lf\n", 0.5l, 1.5l, 2.5l);
	printf("%.Lf %.Lf %.Lf\n\n", 0.5l, 1.5l, 2.5l);

	printf("%d\n", ft_printf("%"));
	printf("%d\n", printf("%"));
	
	return (0);
}
