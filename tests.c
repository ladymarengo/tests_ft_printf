#include <stdlib.h>
#include <inttypes.h>
#include <limits.h>


char	*ft_strnew(size_t size)
{
	char		*new;
	size_t		i;

	new = (char *)malloc(sizeof(char) * (size + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;

	i = 0;
	new = ft_strnew(strlen(s1) + strlen(s2));
	if (new == NULL)
		return (NULL);
	while (*s1)
	{
		new[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		new[i] = *s2;
		i++;
		s2++;
	}
	new[i] = '\0';
	return (new);
}

char	**get_format_strings(char	*spec)
{
	char	**format_strings;

	format_strings = malloc(sizeof (char *) * 30);
	format_strings[0] = ft_strjoin("%", spec);
	format_strings[1] = ft_strjoin("%.1", spec);
	format_strings[2] = ft_strjoin("%10", spec);
	format_strings[3] = ft_strjoin("%-10", spec);
	format_strings[4] = ft_strjoin("%010", spec);
	format_strings[5] = ft_strjoin("%-010", spec);
	format_strings[6] = ft_strjoin("%#", spec);
	format_strings[7] = ft_strjoin("%#.0", spec);
	format_strings[8] = ft_strjoin("%.0", spec);
	format_strings[9] = ft_strjoin("% 10", spec);
	format_strings[10] = ft_strjoin("%+", spec);
	format_strings[11] = ft_strjoin("%.19", spec);
	format_strings[12] = ft_strjoin("%010.0", spec);
	format_strings[13] = ft_strjoin("%100", spec);
	format_strings[14] = ft_strjoin("%- 010", spec);
	format_strings[15] = ft_strjoin("%10.10", spec);
	format_strings[16] = ft_strjoin("%+7", spec);
	format_strings[17] = ft_strjoin("%+-.18", spec);
	format_strings[18] = ft_strjoin("%- 6", spec);
	format_strings[19] = ft_strjoin("%+.7", spec);
	format_strings[20] = ft_strjoin("%.", spec);
	format_strings[21] = ft_strjoin("%#010.0", spec);
	format_strings[22] = 0;

	return (format_strings);
}

char	**get_lengths()
{
	char	**lengths;

	lengths = malloc(sizeof (char *) * 6);
	lengths[0] = "";
	lengths[1] = "h";
	lengths[2] = "hh";
	lengths[3] = "l";
	lengths[4] = "ll";
	lengths[5] = 0;

	return (lengths);
}

char	**get_di()
{
	char	**di = malloc(sizeof(char *) * 3);
	di[0] = "d";
	di[1] = "i";
	di[2] = 0;
	
	return (di);
}

char	**get_oux()
{
	char	**oux = malloc(sizeof(char *) * 5);
	oux[0] = "o";
	oux[1] = "u";
	oux[2] = "x";
	oux[3] = "X";
	oux[4] = 0;
	
	return (oux);
}

double *get_double()
{
	double *doubles;

	doubles = malloc(sizeof (double) * 100);
	doubles[0] = 0.15;
	doubles[1] = -6.39384674839;
	doubles[2] = 1444565444646.6465424242242;
	doubles[3] = -1444565444646.6465424242242454654;
	doubles[4] = 0.15;
	doubles[5] = 0.25;
	doubles[6] = 0.35;
	doubles[7] = 0.45;
	doubles[8] = 0.55;
	doubles[9] = 0.65;
	doubles[10] = 0.75;
	doubles[11] = 0.85;
	doubles[12] = 0.95;
	doubles[13] = 1;
	doubles[14] = -1.5;
	doubles[15] = 9.99;
	doubles[16] = 0;

	return (doubles);
}

float *get_float()
{
	float *floats;

	floats = malloc(sizeof (float) * 100);
	floats[0] = 0.15;
	floats[1] = -6.39384674839;
	floats[2] = 1444565444646.6465424242242;
	floats[3] = -1444565444646.6465424242242454654;
	floats[4] = 0.15;
	floats[5] = 0.25;
	floats[6] = 0.35;
	floats[7] = 0.45;
	floats[8] = 0.55;
	floats[9] = 0.65;
	floats[10] = 0.75;
	floats[11] = 0.85;
	floats[12] = 0.95;
	floats[13] = 1;
	floats[14] = -1.5;
	floats[15] = 9.99;
	floats[16] = 0;

	return (floats);
}

long double *get_long_double()
{
	long double *long_doubles;

	long_doubles = malloc(sizeof (long double) * 100);
	long_doubles[0] = 0.15l;
	long_doubles[1] = -6.39384674839l;
	long_doubles[2] = 1444565444646.6465424242242l;
	long_doubles[3] = -1444565444646.6465424242242454654l;
	long_doubles[4] = 0.15l;
	long_doubles[5] = 0.25l;
	long_doubles[6] = 0.35l;
	long_doubles[7] = 0.45l;
	long_doubles[8] = 0.55l;
	long_doubles[9] = 0.65l;
	long_doubles[10] = 0.75l;
	long_doubles[11] = 0.85l;
	long_doubles[12] = 0.95l;
	long_doubles[13] = 1l;
	long_doubles[14] = -1.5l;
	long_doubles[15] = 9.99;
	long_doubles[16] = 0;

	return (long_doubles);
}

char *get_char()
{
	char *chars;

	chars = malloc(sizeof (char) * 100);
	chars[0] = 'a';
	chars[1] = 'A';
	chars[2] = '7';
	chars[3] = ' ';
	chars[4] = 1;
	chars[5] = 100;
	chars[6] = 255;
	chars[7] = 174;
	chars[8] = 0;

	return (chars);
}

char **get_string()
{
	char **strings;

	strings = malloc(sizeof (long double) * 100);
	strings[0] = "hello";
	strings[1] = "";
	strings[2] = "  ";
	strings[3] = " hey hey ";
	strings[4] = 0;

	return (strings);
}

intmax_t *get_signed()
{
	intmax_t *signeds;

	signeds = malloc(sizeof (intmax_t) * 100);
	signeds[0] = 1;
	signeds[1] = 100;
	signeds[2] = 2147483647;
	signeds[3] = -2147483648;
	signeds[4] = -1;
	signeds[5] = -100;
	signeds[6] = LLONG_MAX;
	signeds[7] = LLONG_MIN;
	signeds[8] = 0;

	return (signeds);
}

uintmax_t *get_unsigned()
{
	uintmax_t *unsigneds;

	unsigneds = malloc(sizeof (uintmax_t) * 100);
	unsigneds[0] = 1;
	unsigneds[1] = 100;
	unsigneds[2] = 2147483647;
	unsigneds[3] = 2147483648;
	unsigneds[4] = 12;
	unsigneds[5] = ULLONG_MAX;
	unsigneds[6] = 666;
	unsigneds[7] = 4294967295;
	unsigneds[8] = 0;

	return (unsigneds);
}
