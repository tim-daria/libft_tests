/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:54:24 by dtimofee          #+#    #+#             */
/*   Updated: 2024/11/29 14:05:27 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void	test_isalpha(void)
{
	printf("Test for ft_isalpha: %d, %d, %d\n", ft_isalpha('J'), ft_isalpha('!'), ft_isalpha(117));
	printf("Test for isalpha: %d, %d, %d\n", isalpha('J'), isalpha('!'), isalpha(117));
}

void	test_isdigit(void)
{
	printf("Test for ft_isdigit: %d, %d, %d\n", ft_isdigit('J'), ft_isdigit('!'), ft_isdigit('7'));
	printf("Test for isdigit: %d, %d, %d\n", isdigit('J'), isdigit('!'), isdigit('7'));
}
void	test_isalnum(void)
{
	printf("Test for ft_isalnum: %d, %d, %d\n", ft_isalnum('!'), ft_isalnum('K'), ft_isalnum('7'));
	printf("Test for isalnum: %d, %d, %d\n", isalnum('!'), isalnum('K'), isalnum('7'));
}
void	test_isascii(void)
{
	printf("Test for ft_isascii: %d, %d, %d\n", ft_isascii(-1), ft_isascii(300), ft_isascii('D'));
	printf("Test for isascii: %d, %d, %d\n", isascii(-1), isascii(300), isascii('D'));
}
void	test_isprint(void)
{
	printf("Test for ft_isprint: %d, %d, %d\n", ft_isprint('\n'), ft_isprint(86), ft_isprint('D'));
	printf("Test for isprint: %d, %d, %d\n", isprint('\n'), isprint(86), isprint('D'));
}
void	test_toupper(void)
{
	printf("Test for ft_toupper: %c, %c, %c\n", ft_toupper('r'), ft_toupper('g'), ft_toupper('D'));
	printf("Test for toupper: %c, %c, %c\n", toupper('r'), toupper('g'), toupper('D'));
}
void	test_tolower(void)
{
	printf("Test for ft_tolower: %c, %c, %c\n", ft_tolower('r'), ft_tolower('G'), ft_tolower('d'));
	printf("Test for tolower: %c, %c, %c\n", tolower('r'), tolower('G'), tolower('d'));
}
void	test_strlen(void)
{
	printf("Test for ft_strlen: %zu, %zu, %zu\n", ft_strlen("Hello"), ft_strlen(""), ft_strlen("I don't like this day"));
	printf("Test for strlen: %zu, %zu, %zu\n", strlen("Hello"), strlen(""), strlen("I don't like this day"));
}
void	test_memset(void)
{
	char b [100] = "Hello, World!";

	printf("Test for ft_memset: %s\n", (char*) ft_memset(b, '*', 5));
	printf("Test for memset: %s\n", (char*) memset(b, '*', 5));
	printf("Test for ft_memset: %s\n", (char*) ft_memset(b, 300, 5));
	printf("Test for memset: %s\n", (char*) memset(b, 300, 5));
}
void	test_bzero(void)
{
	char b [100] = "Hello, World!";
	int arr[5] = {1, 2, 3, 4, 5};

	ft_bzero(b, 3), ft_bzero(arr, 2);
	printf("Test for ft_bzero with string: %s\n", b);
	printf("Test for ft_bzero with array:");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	char c [100] = "Hello, World!";
	int arr1[5] = {1, 2, 3, 4, 5};
	bzero(c, 3), bzero(arr1, 2);
	printf("Test for bzero with string: %s\n", c);
	printf("Test for bzero with array:");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}
void	test_strlcpy(void)
{
	char	dst[100] = "";
	const char	src[] = "school 42";

	printf("Test for ft_strlcpy: Length of source - %zu. Destination - %s\n", ft_strlcpy(dst, src, 6), dst);
}
void	test_strlcat(void)
{
	char	dst[] = "Hello";
	const char	src[] = "school 42";

	printf("Test for ft_strlcat: Length of source + destination- %zu. Destination - %s\n", ft_strlcat(dst, src, 3), dst);
}
void	test_strncmp(void)
{
	char s1 [] = "Hello, world";
	char s2 [] = "Hello";
	char	a1[] = "test\200";
	char	a2[] = "test\0";

	printf("Test for ft_strncmp: %d\n", ft_strncmp(s1, s2, 7));
	printf("Test for strncmp: %d\n", strncmp(s1, s2, 7));
	printf("Test for ft_strncmp: %d\n", ft_strncmp(a1, a2, 6));
	printf("Test for strncmp: %d\n", strncmp(a1, a2, 6));
}
void	test_memcpy(void)
{
	char	dst [100]= "Hello ";
	char	src[] = "world";

	printf("Test for memcpy: %s\n", (char *) memcpy(dst, src, 3));

	char	dest [100]= "Hello ";
	char	sorc[] = "world";
	printf("Test for ft_memcpy: %s\n", (char *) ft_memcpy(dest, sorc, 3));
}
void	test_memmove(void)
{
	char	src[] = "School 42!";
	char	dst[100] = "Hello";

	//dst = src + 1;
	printf("Test for memmove: %s\n", (char *) memmove(dst + 5, src, 10) - 5);
	char	sorc[] = "School 42!";
	char	dest[100] = "Hello";

	//dest = sorc + 1;
	printf("Test for ft_memmove: %s\n", (char *) ft_memmove(dest + 5, sorc, 10) - 5);
}
void	test_strchr(void)
{
	char b [] = "Hello, World!";

	printf("Test for ft_strchr: %ld\n", (long)ft_strchr(b, 65));
	printf("Test for strchr: %ld\n", (long)strchr(b, 65));

	char bb [] = "Hello, World!";

	printf("Test for ft_strchr: %s\n", ft_strchr(bb, 'l'));
	printf("Test for strchr: %s\n", strchr(bb, 'l'));

	printf("Test for ft_strchr: %s\n", ft_strchr(bb, 't' + 256));
	printf("Test for strchr: %s\n", strchr(bb, 't' + 256));
}
void	test_strrchr(void)
{
	char b [] = "Hello, World!";

	printf("Test for ft_strrchr: %ld\n", (long)ft_strchr(b, 65));
	printf("Test for strrchr: %ld\n", (long)strchr(b, 65));

	char bb [] = "Hello, World!";

	printf("Test for ft_strrchr: %s\n", ft_strrchr(bb, '\0'));
	printf("Test for strrchr: %s\n", strrchr(bb, '\0'));

	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
 	char *d1 = strrchr(src, '\0');
 	char *d2 = ft_strrchr(src, '\0');

	int	i = d1 - src;
	int	j = d2 - src;
	printf("Test for ft_strrchr:%d\n", j);
	printf("Test for strrchr:%d\n", i);

	char *src1 = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
 	char *d3 = strrchr(src, 's');
 	char *d4 = ft_strrchr(src, 's');

	i = d3 - src1;
	j = d4 - src1;
	printf("Test for ft_strrchr:%d\n", j);
	printf("Test for strrchr:%d\n", i);

	// char *str = "test";
	// char *str2 = str + 1;
	// int i = str2 - str;
}
void	test_memchr(void)
{
	char b [] = "Hello, World!";

	printf("Test for ft_memchr: %ld\n", (long)ft_memchr(b, 65, 10));
	printf("Test for memchr: %ld\n", (long)memchr(b, 65, 10));

	char bb [] = "Hello, World!";

	printf("Test for ft_memchr: %s\n", (char *)ft_memchr(bb, 'l', 2));
	printf("Test for memchr: %s\n", (char *)memchr(bb, 'l', 2));

	char numbers[10] = {1, 2, 3, 4, 5, 0, 6, 7, 8, 9};

	printf("Index of target character: %d\n", (int) ((char *) ft_memchr(numbers, 6, 10) - numbers));
	printf("Index of target character: %d\n", (int) ((char *) memchr(numbers, 6, 10) - numbers));
}
void	test_memcmp(void)
{
	char s1 [] = "Hello, world!";
	char s2 [] = "Hello";

	printf("Test for ft_memcmp: %d\n", ft_memcmp(s1, s2, 3));
	printf("Test for memcmp: %d\n", memcmp(s1, s2, 3));
	printf("Test for ft_memcmp: %d\n", ft_memcmp("t\256", "t\0", 2));
	printf("Test for memcmp: %d\n", memcmp("t\256", "t\0", 2));
}
void	test_strnstr(void)
{
	// char big [] = "Hello, world";
	// char little [] = "lo, w";

	// printf("Test for ft_strnstr: %s\n", ft_strnstr(big, little, 10));
	// printf("Test for strnstr: %s\n", strnstr(big, little, 10));

	// printf("Test for ft_strnstr: %s\n", ft_strnstr("abcdefgh", "abc", 3));
	// printf("Test for strnstr: %s\n", strnstr("abcdefgh", "abc", 3));
	printf("Test for ft_strnstr: %s\n", ft_strnstr("", "abc", 4294967295));
}
void	test_atoi(void)
{
	const char nptr [] = " \n-767868484";

	printf("Test for ft_atoi: %d\n", ft_atoi(nptr));
	printf("Test for atoi: %d\n", atoi(nptr));
}
void	test_strdup(void)
{
	char	s [] = "Hello";
	char	*dest;

	dest = strdup(s);
	printf("Test for strdup: %s\n", dest);
	free(dest);

	char	*dst;

	dst = ft_strdup(s);
	printf("Test for ft_strdup: %s\n", dst);
	free(dst);
}
void	test_calloc(void)
{
	char	*dest;

	dest = calloc(5, sizeof(char));
	printf("Test for calloc: %p\n", dest);
	free(dest);

	char *dst;

	dst = ft_calloc(5, sizeof(char));
	printf("Test for ft_calloc: %p\n", dst);
	free(dst);

	size_t nmemb = 5;
	size_t size = 0;
	size_t	i = 0;
	dest = calloc(nmemb,size);
	printf("Test for calloc: %p\n", dest);
	while (i < nmemb)
	{
		printf("%d ", dest[i]);
		i++;
	}
	printf("\n");
	free(dest);

	dst = ft_calloc(nmemb,size);
	printf("Test for ft_calloc: %p\n", dst);
	i = 0;
	while (i < nmemb)
	{
		printf("%d ", dest[i]);
		i++;
	}
	printf("\n");
	free(dst);
}
void	test_substr(void)
{
	char	s[] = "School 42";
	char	*str;

	str = ft_substr(s, 3, 5);
	printf("Test for ft_substr: %s\n", str);
	free(str);

	// char	*s0;
	// char	*str0;

	// s0 = NULL;
	// str0 = ft_substr(s0, 3, 5);
	// printf("Test for ft_substr: %s\n", str0);
	// free(str0);

	char	*str1;

	str1 = ft_substr(s, 3, 10);
	printf("Test for ft_substr: %s\n", str1);
	free(str1);

	char	*str2;
	char	s1[] = "Hello";

	str2 = ft_substr(s1, 5, 3);
	printf("Test for ft_substr: %s\n", str2);
	free(str2);
}
void	test_strjoin(void)
{
	char	*str;
	const char	s1[] = "Hello ";
	const char	s2[] = "school 42";

	str = ft_strjoin(s1, s2);
	printf("Test for ft_strjoin: %s\n", str);
	free(str);

	const char	s[] = "";
	const char	s0[] = "school 42";

	str = ft_strjoin(s, s0);
	printf("Test for ft_strjoin: %s\n", str);
	free(str);

	const char	s3[] = "+";
	const char	s4[] = "Hello";

	str = ft_strjoin(s3, s4);
	printf("Test for ft_strjoin: %s\n", str);
	free(str);
}
void	test_strtrim(void)
{
	char	*str;
	const char	s1[] = "Hello, world yellow";
	const char	s2[] = "whelo";

	str = ft_strtrim(s1, s2);
	printf("Test for ft_strtrim: %s\n", str);
	free(str);

	const char	s[] = "hello, world yellow";

	str = ft_strtrim(s, s2);
	printf("Test for ft_strtrim: %s\n", str);
	free(str);

	const char	s3[] = "";

	str = ft_strtrim(s1, s3);
	printf("Test for ft_strtrim: %s\n", str);
	free(str);
}

char	**free_array(char **str_array)
{
	int i = 0;

	while (str_array && str_array[i])
		free (str_array[i++]);
	free (str_array);
	return (NULL);
}

int	count_words(const char *s, char c);
void	test_split(void)
{
	char	**str;
	char	s1[] = "lllllHello, world lllyellow";
	char	c = 'l';
	unsigned int	i;
	unsigned int	words_count;
	// printf("Test for word_counter: %d\n", word_counter(s1, s));
	i = 0;
	words_count = count_words(s1,c);
	str = ft_split(s1, c);
	printf("Test for ft_split:\n");
	while (i < words_count)
	{
		printf("%s\n", str[i]);
		i++;
	}
	free_array(str);

	char	s2[] = "lllllHello, world lllyellow";
	char	c2 = '.';

	i = 0;
	words_count = count_words(s2,c2);
	str = ft_split(s2, c2);
	printf("Test for ft_split:\n");
	while (i < words_count)
	{
		printf("%s\n", str[i]);
		i++;
	}
	free_array(str);
}
void	test_itoa(void)
{
	char	*str;

	str = ft_itoa(0);
	printf("Test for ft_itoa: %s\n", str);
	free(str);

	str = ft_itoa(5467);
	printf("Test for ft_itoa: %s\n", str);
	free(str);

	str = ft_itoa(-2147483648);
	printf("Test for ft_itoa: %s\n", str);
	free(str);

	str = ft_itoa(2147483647);
	printf("Test for ft_itoa: %s\n", str);
	free(str);

	str = ft_itoa(-2147);
	printf("Test for ft_itoa: %s\n", str);
	free(str);
}

char	lower(unsigned int i, char c)
{
	if (c >= 'A' && c <= 'Z' && i < 1000)
	{
		c = c + 32;
		i++;
	}
	return (c);
}
void	test_strmapi(void)
{
	char	s[] = "School 42";
	char	*str;

	str = ft_strmapi(s, lower);
	printf("Test for ft_strmapi: %s -> %s\n", s, str);
	free(str);
}
void	next(unsigned int i, char *s)
{
	if (*s >= 'a' && *s <= 'z' && i < 1000)
		*s = *s + 1;
}

void	test_striteri(void)
{
	char	s[] = "School 42";

	printf("Test for ft_striteri: %s -> ", s);
	ft_striteri(s, next);
	printf("%s\n", s);
}
void	test_putchar_fd(void)
{
	printf("Test for ft_putchar_fd:");
	ft_putchar_fd('H', 1);
	printf("\n");
}
void	test_putstr_fd(void)
{
	printf("Test for ft_putstr_fd:");
	ft_putstr_fd("School 42", 1);
	printf("\n");
}
void	test_putendl_fd(void)
{
	printf("Test for ft_putendl_fd:");
	ft_putendl_fd("School 42 is the best", 1);
}
void	test_putnbr_fd(void)
{
	printf("Test for ft_putnbr_fd:\n");
	ft_putnbr_fd(345, 1);

	printf("Test for ft_putnbr_fd:\n");
	ft_putnbr_fd(0, 1);

	printf("Test for ft_putnbr_fd:\n");
	ft_putnbr_fd(-7654, 1);

	printf("Test for ft_putnbr_fd:\n");
	ft_putnbr_fd(INT_MIN, 1);
}
void	test_lstnew(void)
{
	t_list	*node;
	int	a;

	a = 7;
	node = ft_lstnew(&a);
	printf("Test for ft_lstnew:%d\n", *(int*)(node->content));
	free (node);
}

void free_int(void *i)
{
	(void)i;
}
void	test_lstadd_front_size(void)
{
	t_list*	lst = ft_lstnew((void *)3);
	t_list*	b = ft_lstnew((void *)5);
	t_list*	c = ft_lstnew((void *)7);

	ft_lstadd_front(&lst, b);
	ft_lstadd_front(&lst, c);
	printf("Test for ft_lstadd_front_size:%d\n", ft_lstsize(lst));
	ft_lstclear (&lst, &free_int);
}
void	test_lstlast(void)
{
	t_list	*lst = ft_lstnew((void *)65);
	t_list	*b = ft_lstnew((void *)49);
	t_list	*c = ft_lstnew((void *)7);

	ft_lstadd_front(&lst, b);
	ft_lstadd_front(&lst, c);
	printf("Test for ft_lstlast:%d\n", *(int*)ft_lstlast(lst));
	ft_lstclear (&lst, &free_int);
}

void	test_lstadd_back_size(void)
{
	t_list*	lst = ft_lstnew((void *)8);
	t_list*	b = ft_lstnew((void *)35);
	t_list*	c = ft_lstnew((void *)71);

	ft_lstadd_back(&lst, b);
	ft_lstadd_front(&lst, c);
	printf("Test for ft_lstadd_back_size:%d\n", ft_lstsize(lst));
	printf("Test for ft_lstlast:%d\n", *(int*)ft_lstlast(lst));
	ft_lstclear (&lst, &free_int);

	t_list*	lst1 = NULL;
	t_list*	b1 = ft_lstnew((void *)35);
	t_list*	c1 = ft_lstnew((void *)71);

	ft_lstadd_back(&lst1, b1);
	ft_lstadd_front(&lst1, c1);
	printf("Test for ft_lstadd_back_size:%d\n", ft_lstsize(lst1));
	printf("Test for ft_lstlast:%d\n", *(int*)ft_lstlast(lst1));
	ft_lstclear (&lst1, &free_int);
}
void	del(void *b)
{
	free(b);
}
void	test_lstdelone(void)
{
	int *contentlst = malloc(sizeof(int));
	if (contentlst == NULL)
		return;
	*contentlst = 8;
	t_list *lst = ft_lstnew(contentlst);
	int *contentb = malloc(sizeof(int));
	if (contentb == NULL)
		return;
	*contentb = 35;
	t_list *b = ft_lstnew(contentb);
	ft_lstadd_back(&lst, b);
	printf("Test for ft_lstadd_back_size:%d\n", ft_lstsize(lst));
	printf("Test for ft_lstlast:%d\n", *(int*)ft_lstlast(lst));
	ft_lstdelone(ft_lstlast(lst), del);
	lst->next = NULL;
	printf("Test for ft_lstadd_back_size:%d\n", ft_lstsize(lst));
	printf("Test for ft_lstlast:%d\n", *(int*)ft_lstlast(lst));
	del(lst->content);
	free(lst);
}
void	test_lstclear(void)
{
	int *contentlst = malloc(sizeof(int));
	if (contentlst == NULL)
		return;
	*contentlst = 8;
	t_list *lst = ft_lstnew(contentlst);
	int *contentb = malloc(sizeof(int));
	if (contentb == NULL)
		return;
	*contentb = 35;
	t_list *b = ft_lstnew(contentb);
	int *contentc = malloc(sizeof(int));
	if (contentc == NULL)
		return;
	*contentc = 71;
	t_list *c = ft_lstnew(contentc);
	ft_lstadd_back(&lst, b);
	ft_lstadd_front(&lst, c);
	printf("Test for ft_lstclear: Size before - %d\n", ft_lstsize(lst));
	printf("Test for ft_lstclear: Last node before - %d\n", *(int*)ft_lstlast(lst));
	ft_lstclear(&lst, del);
	printf("Test for ft_lstclear: Size after - %d\n", ft_lstsize(lst));
}
void	increase(void *content)
{
	*(int*)content += 1;
}
void	test_lstiteri(void)
{
	int *contentlst = malloc(sizeof(int));
	if (contentlst == NULL)
		return;
	*contentlst = 8;
	t_list *lst = ft_lstnew(contentlst);
	int *contentb = malloc(sizeof(int));
	if (contentb == NULL)
		return;
	*contentb = 35;
	t_list *b = ft_lstnew(contentb);
	int *contentc = malloc(sizeof(int));
	if (contentc == NULL)
		return;
	*contentc = 71;
	t_list *c = ft_lstnew(contentc);
	ft_lstadd_back(&lst, b);
	ft_lstadd_front(&lst, c);
	t_list	*temp;
	temp = lst;
	printf("Test for ft_lstiteri: Before - ");
	while (temp)
	{
		printf("%d ", *(int*)temp->content);
		temp = temp->next;
	}
	ft_lstiter(lst, increase);
	printf("Test for ft_lstiteri: After - ");
	temp = lst;
	while (temp)
	{
		printf("%d ", *(int*)temp->content);
		temp = temp->next;
	}
	printf("\n");
	ft_lstclear(&lst, del);
	// free(contentlst);
	// free(contentb);
	// free(contentc);
}
void	*decrease(void *content)
{
	int	*new_content = malloc(sizeof(int));
	*new_content = *(int*)content - 1;
	return (void*)(new_content);
}
void	test_lstmap(void)
{
	int *contentlst = malloc(sizeof(int));
	*contentlst = 8;
	t_list *lst = ft_lstnew(contentlst);
	int *contentb = malloc(sizeof(int));
	*contentb = 35;
	t_list *b = ft_lstnew(contentb);
	int *contentc = malloc(sizeof(int));
	*contentc = 71;
	t_list *c = ft_lstnew(contentc);
	ft_lstadd_back(&lst, b);
	ft_lstadd_front(&lst, c);

	t_list	*temp;
	temp = lst;
	printf("Test for ft_lstmap: Before - ");
	while (temp)
	{
		printf("%d ", *(int*)temp->content);
		temp = temp->next;
	}
	t_list	*new;
	t_list	*copy;
	new = ft_lstmap(lst, decrease, del);
	copy = new;
	printf("Test for ft_lstiteri: After - ");
	while (copy)
	{
		printf("%d ", *(int*)copy->content);
		copy = copy->next;
	}
	printf("\n");
	ft_lstclear(&new, del);
	ft_lstclear(&lst, del);
}
int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_toupper();
	test_tolower();
	test_strlen();
	test_memset();
	test_bzero();
	test_strlcpy();
	test_strlcat();
	test_strncmp();
	test_memcpy();
	test_memmove();
	test_strchr();
	test_strrchr();
	test_memchr();
	test_memcmp();
	test_strnstr();
	test_atoi();
	test_strdup();
	test_calloc();
	test_substr();
	test_strjoin();
	test_strtrim();
	test_split();
	test_itoa();
	test_strmapi();
	test_striteri();
	test_putchar_fd();
	test_putstr_fd();
	test_putendl_fd();
	test_putnbr_fd();
	test_lstnew();
	test_lstadd_front_size();
	test_lstlast();
	test_lstadd_back_size();
	test_lstdelone();
	test_lstclear();
	test_lstiteri();
	test_lstmap();
}
