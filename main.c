/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: legunshi <legunshi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 10:33:11 by legunshi          #+#    #+#             */
/*   Updated: 2021/04/01 18:02:24 by legunshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	strlen_check()
{
	char	*str = "1234567890";
	
	printf("------------------------------------");
	printf("\n | FT_STRLEN TEST | \n");
	printf("------------------------------------\n");
	printf("my ft_strlen test1    : %ld\n", ft_strlen("test"));
	printf("original strlen test1 : %ld\n", strlen("test"));
	printf("------------------------------------\n");
	printf("my ft_strlen test2    : %ld\n", ft_strlen(str));
	printf("original strlen test2 : %ld\n", strlen(str));
	printf("------------------------------------\n");
}

void	clear(char *buf, int bufsize)
{
	int	i;
	
	i = -1;
	while (++i < bufsize)
		buf[i] = 0;
}

void	strcpy_check()
{
	char	buf[40];
	char	*str1 = "";
	char	*str2 = "This is a libasm";
	char	*str3 = "Hello, my lovely friend, I wait you";
	
	printf("------------------------------------");
	printf("\n | FT_STRCPY | \n");
	printf("------------------------------------\n");
	clear(buf, 40);
	printf("my test with empty string       : %s\n", ft_strcpy(buf, str1));
	clear(buf, 40);
	printf("original test with empty string : %s\n", strcpy(buf, str1));
	printf("------------------------------------\n");
	clear(buf, 40);
	printf("my test with standart string       : %s\n", ft_strcpy(buf, str2));
	clear(buf, 40);
	printf("original test with standart string : %s\n", strcpy(buf, str2));
	printf("------------------------------------\n");
	clear(buf, 40);
	printf("my test with long string     : %s\n", ft_strcpy(buf, str3));
	clear(buf, 40);
	printf("origin test with long string : %s\n", strcpy(buf, str3));
	printf("------------------------------------\n");
}

void	strcmp_check()
{
	char	*s1 = "Hey";
	char	*s2 = "Hello";
	char	*s3 = "Hey";
	
	printf("------------------------------------");
	printf("\n | FT_STRCMP | \n");
	printf("------------------------------------\n");
	printf("my ft_strcmp test1  : %d\n", ft_strcmp(s1, s2));
	printf("origin strcmp test1 : %d\n", strcmp(s1, s2));
	printf("------------------------------------\n");
	printf("my ft_strcmp test2  : %d\n", ft_strcmp(s2, s1));
	printf("origin strcmp test2 : %d\n", strcmp(s2, s1));
	printf("------------------------------------\n");
	printf("my ft_strcmp test3  : %d\n", ft_strcmp(s1, s3));
	printf("origin strcmp test3 : %d\n", strcmp(s1, s3));
	printf("------------------------------------\n");
}

void	write_check()
{
	char	*s1 = "This is not empty string\n";
	char	*s2 = "";

	printf("------------------------------------");
	printf("\n | FT_WRITE | \n");
	printf("------------------------------------\n");
	printf("my ft_write test1    : %zu\n", ft_write(1, s1, 26));
	printf("original write test1 : %zu\n", write(1, s1, 26));
	printf("------------------------------------\n");
	printf("my ft_write test2    : %zu\n", ft_write(1, s2, 0));
	printf("original write test2 : %zu\n", write(1, s2, 0));
	printf("------------------------------------\n");
	printf("my ft_write test3    : %zd\n", ft_write(-1, s1, 26));
	printf("original write test3 : %zd\n", write(-1, s1, 26));
	printf("------------------------------------\n");
}

void	read_check()
{
	char	*buf1 = malloc(100);
	char	*buf2 = malloc(100);
	
	printf("------------------------------------");
	printf("\n | FT_READ | \n");
	printf("------------------------------------\n");
	int		fd = open("./maincc.c", O_RDONLY);
	int		orig_read = read(fd, buf1, 99);
	close(fd);
	printf("original read : %s, return value : %d\n", buf1, orig_read);
	fd = open("./maincc.c", O_RDONLY);
	int		my_ft_read = ft_read(fd, buf2, 99);
	close(fd);
	printf("my ft_read    : %s, return value : %d\n", buf2, my_ft_read);
	printf("------------------------------------\n");
	fd = open("./main.c", O_RDONLY);
	orig_read = read(fd, buf1, 99);
	close(fd);
	printf("original read : %s, return value : %d\n", buf1, orig_read);
	fd = open("./main.c", O_RDONLY);
	my_ft_read = ft_read(fd, buf2, 99);
	close(fd);
	printf("my ft_read    : %s, return value : %d\n", buf2, my_ft_read);
	printf("------------------------------------\n");
}

void	strdup_check()
{
	char	*s1 = "This is not empty string\n";
	char	*s2 = "";
	char	*s3 = ft_strdup(s1);
	char	*s4 = strdup(s1);

	printf("------------------------------------");
	printf("\n | FT_STRDUP | \n");
	printf("------------------------------------\n");
	printf("my ft_strdup test1    : %s\n", s3);
	printf("original strdup test1 : %s\n", s4);
	printf("------------------------------------\n");
	s3 = ft_strdup(s2);
	s4 = strdup(s2);
	printf("my ft_strdup test1    : %s\n", s3);
	printf("original strdup test1 : %s\n", s4);
	printf("------------------------------------\n");
}

int		main()
{
	printf("------------------------------------\n");
	printf("| TESTING START |\n");
	printf("------------------------------------\n");
	printf("\n");
	strlen_check();
	printf("\n");
	strcpy_check();
	printf("\n");
	strcmp_check();
	printf("\n");
	write_check();
	printf("\n");
	read_check();
	printf("\n");
	strdup_check();
	printf("\n");
	printf("------------------------------------\n");
	printf("| TESTING END |\n");
	printf("------------------------------------\n");
}