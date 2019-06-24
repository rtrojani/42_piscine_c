#include "ft_opp.h"
#include "ft.h"

t_op_ptr	asked_op(t_opp *gl_opptab, char char_operator)
{
	int		i;

	i = 0;
	while (i < NBR_OP)
	{
		if (char_operator == gl_opptab[i].char_operator[0])
			return(gl_opptab[i].t_fun_addr);
		i++;
	}
	return (&ft_usage);
}

void	ft_advanced_do_op(int a, char *operator, int b)
{
	t_op_ptr	t_fun_addr;
	char		char_operator;
	int			i;

	i = 0;
	while ((operator[i] >= 9 && operator[i] <= 13) || operator[i] == ' ')
		i++;
	char_operator = operator[i];
	if (char_operator == '/' && !b)
		ft_putstr("Stop : division by zero\n");
	else if (char_operator == '%' && !b)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		t_fun_addr = asked_op(gl_opptab, char_operator);
		if (t_fun_addr != &ft_usage)
			ft_putnbr(t_fun_addr(a, b));
		else
			t_fun_addr(a, b);
		ft_putchar('\n');
	}
}
