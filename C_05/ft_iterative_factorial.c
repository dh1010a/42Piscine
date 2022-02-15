//ex00
int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	result = 1;
	while (nb)
		result *= nb--;
	return (result);
}

//ex01
int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

//ex02
int ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (power)
	{
		result *= nb;
		power--;
	}
	return (result);
}

//ex03
int	ft_recursive_power(int nb, int power)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
//ex04
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}
//ex05
int ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

//ex06
int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1)
		return (0);
	
}
