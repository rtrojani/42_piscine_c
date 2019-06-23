#include "op.h"

void	define_ops(t_op ops[NBR_OP])
{
	ops[0].t_fun_addr = &add;
	ops[0].operator = '+';
	ops[1].t_fun_addr = &sub;
	ops[1].operator = '-';
	ops[2].t_fun_addr = &mul;
	ops[2].operator = '*';
	ops[3].t_fun_addr = &div;
	ops[3].operator = '/';
	ops[4].t_fun_addr = &mod;
	ops[4].operator = '%';
}

t_op_ptr	asked_op(t_op ops[NBR_OP], char char_operator)
{
	int		i;

	i = 0;
	while (i < NBR_OP)
	{
		if (char_operator == ops[i].operator)
			return(ops[i].t_fun_addr);
		i++;
	}
	return (0);
}

void	do_op(int a, char *operator, int b)
{
	t_op		ops[NBR_OP];
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
		define_ops(ops);
		t_fun_addr = asked_op(ops, char_operator);
		if (!t_fun_addr)
			ft_putnbr(0);
		else
			ft_putnbr(t_fun_addr(a, b));
		ft_putchar('\n');
	}
}
