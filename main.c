/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legunshi <legunshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 10:33:11 by legunshi          #+#    #+#             */
/*   Updated: 2021/03/30 21:11:42 by legunshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);

void	strlen_check()
{
	printf("\n | FT_STRLEN | \n");
	printf("test : %ld\n", ft_strlen("test"));
	printf("test,test : %ld\n", ft_strlen("test,test"));
	printf("test,test,test : %ld\n", ft_strlen("test,test,test"));
}

void	clear(char *buf, int bufsize)
{
	int	i;
	
	i = -1;
	while (++i < bufsize)
		buf[i] = 0;
}

void	strcmp_check()
{
	char	*s1 = "Hey";
	char	*s2 = "Hello";
	char	*s3 = "Hey";
	
	printf("\n | FT_STRCMP | \n");
	printf("test1 : %d\n", ft_strcmp(s1, s2));
	printf("test2 : %d\n", ft_strcmp(s2, s1));
	printf("test3 : %d\n", ft_strcmp(s1, s3));
}

void	strcpy_check()
{
	char	buf[40];
	char	*str1 = "";
	char	*str2 = "This is a libasm";
	char	*str3 = "Hello, my lovely friend, I wait you";
	
	printf("\n | FT_STRCPY | \n");
	clear(buf, 40);
	printf("test with empty string : %s\n", ft_strcpy(buf, str1));
	clear(buf, 40);
	printf("test with standart string : %s\n", ft_strcpy(buf, str2));
	clear(buf, 40);
	printf("test with long string : %s\n", ft_strcpy(buf, str3));
	clear(buf, 40);
}

int		main()
{
	strlen_check();
	strcpy_check();
	strcmp_check();
}