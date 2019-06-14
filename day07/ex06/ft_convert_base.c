#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[++i]);
	return (i);
}

int		base_index(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int		strlen_str_out(int value, char *base_to)
{
	int		str_out_len;

	str_out_len = 1;
	while (value > ft_strlen(base_to))
	{
		value = value / ft_strlen(base_to);
		str_out_len++;
	}
	return (str_out_len);
}

void	int_to_str(int value, char *base_to, char *str_out, int str_out_len)
{
	if (value <= (ft_strlen(base_to) - 1))
		str_out[str_out_len - 1] = base_to[value];
	if (value > (ft_strlen(base_to) - 1))
	{
		int_to_str((value / ft_strlen(base_to)), base_to, 
			str_out, str_out_len - 1);
		str_out[str_out_len - 1] = (base_to[value % ft_strlen(base_to)]);
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		value;
	int		i;
	int		str_out_len;
	char	*str_out;

	value = 0;
	i = 0;
	while (nbr[i])
	{
		value = value * ft_strlen(base_from) + base_index(nbr[i], base_from);
		i++;
	}
	str_out_len = strlen_str_out(value, base_to);
	str_out = (char*)malloc(sizeof(*str_out) * str_out_len + 1);
	int_to_str(value, base_to, str_out, str_out_len);
	str_out[str_out_len + 1] = '\0';
	free(str_out);
	return (str_out);
}
