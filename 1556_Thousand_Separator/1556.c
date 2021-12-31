/* **************************************************************************************** */
/*                                                                                          */
/*                                                                 ******     ******        */
/*   1556.c                                             :+:      :+:    :+:   */
/*                                                               *  *  *  :+:  *  *  *      */
/*   By: mounadi05 <mounadi1337@gmail.com>                                                  */
/*                                                                 *               *        */
/*   Created: 2021/12/31 20:24:41 by mounadi05                      *   -------   *         */
/*   Updated: 2021/12/31 20:26:49 by amounadi         ###   ########.fr       */
/*                                                                                          */
/* **************************************************************************************** */

static	int	ncount(unsigned int n, int k)
{
	int		i;

	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	if (k < 0)
		i++;
	return (i);
}

static	int	dev(unsigned int n)
{
	int		i;

	i = 1;
	while (n > 1)
	{
		i *= 10;
		n--;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*res;
	unsigned int	i;
	unsigned int	nb;
    int a = 0;

	nb = n;
	i = 0;
	if (n < 0)
		nb = -n;
	len = ncount(nb, n) + 1;
	res = (char *)malloc(len + (len/3) + 1);
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[i++] = '-';
		len = len - 1;
	}
	while (--len > 0)
	{
		res[i++] = (nb / dev(len)) + '0';
		nb %= dev(len);
        a++;
        if ((len == 4 || len == 7 || len ==  10) && i < 4 )
        {
            res[i] = '.';
            i++;
            a = 0;
        }
        else if (a == 3 && len != 1)
        {
            res[i] = '.';
            a = 0;
            i++;
        }
	}
	res[i] = '\0';
	return (res);
}

char * thousandSeparator(int n){
    return (ft_itoa(n));    
}
