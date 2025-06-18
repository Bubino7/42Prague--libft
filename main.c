/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbubak <jbubak@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 08:59:07 by jbubak            #+#    #+#             */
/*   Updated: 2025/06/18 23:10:29 by jbubak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h> //memset
#include <strings.h> //bzero

	// ft_isalpha TEST CASE
/*int	main()
{
	char	c1 = 'a';
	char	c2 = 'A';
	char	c3 = '2';

	ft_isalpha(c1) ? printf("%c is alpha\n", c1) : printf("%c is not alpha\n", c1);
	ft_isalpha(c2) ? printf("%c is alpha\n", c2) : printf("%c is not alpha\n", c2);
	ft_isalpha(c3) ? printf("%c is alpha\n", c3) : printf("%c is not alpha\n", c3);
	return (0);
}*/


	// ft_isdigit TEST CASE
/*int	main()
{
	char	i1 = 's';
	char	i2 = '2';
	char	i3 = 'Z';

	ft_isdigit(i1) ? printf("%c is digit\n", i1) : printf("%c is not digit\n", i1);
	ft_isdigit(i2) ? printf("%c is digit\n", i2) : printf("%c is not digit\n", i2);
	ft_isdigit(i3) ? printf("%c is digit\n", i3) : printf("%c is not digit\n", i3);
	return (0);
}*/


	// ft_isalnum TEST CASE
/*int	main()
{
	char	i1 = 's';
	char	i2 = '2';
	char	i3 = 'Z';
	char	i4 = '\r';

	ft_isalnum(i1) ? printf("%c is alnum\n", i1) : printf("%c is not alnum\n", i1);
	ft_isalnum(i2) ? printf("%c is alnum\n", i2) : printf("%c is not alnum\n", i2);
	ft_isalnum(i3) ? printf("%c is alnum\n", i3) : printf("%c is not alnum\n", i3);
	ft_isalnum(i4) ? printf("%c is alnum\n", i4) : printf("%c is not alnum\n", i4);
	return (0);
}*/


	// ft_isascii TEST CASE
/*int	main()
{
	int	i1 = 127;
	int	i2 = -128;
	int	i3 = 0;

	ft_isascii(i1) ? printf("%i is ascii\n", i1) : printf("%i is not ascii\n", i1);
	ft_isascii(i2) ? printf("%i is ascii\n", i2) : printf("%i is not ascii\n", i2);
	ft_isascii(i3) ? printf("%i is ascii\n", i3) : printf("%i is not ascii\n", i3);
	return (0);
}*/


	// ft_isprint TEST CASE
/*int	main()
{
	char	i1 = '\r';
	char	i2 = 'A';
	char	i3 = '2';

	ft_isprint(i1) ? printf("%c is print\n", i1) : printf("%c is not print\n", i1);
	ft_isprint(i2) ? printf("%c is print\n", i2) : printf("%c is not print\n", i2);
	ft_isprint(i3) ? printf("%c is print\n", i3) : printf("%c is not print\n", i3);
	return (0);
}*/


	// ft_strlen TEST CASE
/*int	main()
{
	char	*str = "Hello, World!";

	printf("\nLength of the string: %d\n\n", ft_strlen(str));
	return (0);
}*/


	// ft_memset TEST CASE
/*int	main()
{
	char	str[] = "Hello, World!";
	char	str2[] = "Hello, World!";

	printf("\nInitial string: %s\n", str);
	ft_memset(str, 'X', 2);
	printf("Modified string: %s\n\n", str);
	printf("\nInitial string: %s\n", str2);
	memset(str2, 'X', 2);
	printf("Modified string: %s\n", str2);
	return (0);
}*/


	// ft_bzero TEST CASE
/*int	main()
{
	char	buff[5];
	unsigned int		i;

	i = 0;
	ft_bzero(buff, 6);
	while (i < sizeof(buff))
	{
		printf("%d ", buff[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/


	// ft_memcpy TEST CASE
/*int	main()
{
	char	src[] = "Hello World!";
	char	dest[20];

	memcpy(dest, src, sizeof(src));
	printf("copied string: %s\n", dest);
	ft_memcpy(dest, src, 10);
	printf("copied string: %s\n", dest);
	return (0);
}*/


	// ft_memmove TEST CASE
/*int	main()
{
	char	src[] = "ABCDEF";
	char	src2[] = "ABCDEF";

	printf("\nInitial arr: %s\n", src);
	memmove(src + 3, src, 3);
	printf("Copied arr: %s\n", src);
	printf("\nInitial arr: %s\n", src2);
	ft_memmove(src2 + 3, src2, 3);
	printf("Copied arr: %s\n", src2);
	return (0);
}*/


	// ft_strlcpy TEST CASE
/*int main()
{
    char dest[6];
    const char *src = "Hello, world!";
    size_t copied = ft_strlcpy(dest, src, sizeof(dest));
    printf("dest: %s\n", dest);
    printf("src length: %zu\n", copied);
    return 0;
}*/


	// ft_strlcat TEST CASE
/*int	main()
{
	char buffer[10] = "a";
    const char *to_add = "lorem ipsum dolor sit amet";
    size_t result;

    // Try to append "World!" to "Hello" in a buffer of size 12
    result = ft_strlcat(buffer, to_add, 0);

    printf("Resulting string: '%s'\n", buffer);
    printf("Total length tried to create: %zu\n", result);

    // Check for truncation
    if (result >= sizeof(buffer))
        printf("Truncation occurred!\n");
    else
        printf("No truncation.\n");

    return (0);
}*/


	// ft_toupper TEST CASE
/*int main() {
    char ch = 'b';
    printf("%c\n", ft_toupper(ch));

    ch = 'B';
    printf("%c\n", ft_toupper(ch));

    ch = '1';
    printf("%c\n", ft_toupper(ch));

    return 0;
}*/


	// ft_tolower TEST CASE
/*int main() {
    char ch = 'G';
    printf("%c\n", ft_tolower(ch));

    ch = 'g';
    printf("%c\n", ft_tolower(ch));

    ch = '!';
    printf("%c\n", ft_tolower(ch));

    return 0;
}*/


	// ft_strchr TEST CASE
/*int main() {
    const char *str = "Hello, world!";
    char *ptr = ft_strchr(str, 'o');
    if (ptr) {
        printf("Found 'o'\n");
		printf("%s\n\n", ptr);
	}
    else
        printf("'o' not found\n");

    ptr = ft_strchr(str, 'z');
    if (ptr) {
        printf("Found 'z'\n");
		printf("%s\n", ptr);
	}
    else
        printf("'z' not found\n");

    return 0;
}*/


	// ft_strrchr TEST CASE
/*int	main()
{
	const char	*str = "This is the best string.";
	char	*ptr = ft_strrchr(str, '\0');

	if (ptr) {
        printf("Found it\n");
		printf("%s\n\n", ptr);
	}
    else
        printf("Could not find it\n");

    return 0;
}*/


	// ft_strncmp TEST CASE
/*int	main()
{
	char	*str1 = "aaaaabb";
	char	*str2 = "aaaaabaa";
	char	*str3 = "aaaaabca";
	int		result;

	result = ft_strncmp(str1, str2, 2);
	printf("Result: %i\n", result);

	result = ft_strncmp(str1, str2, 7); // str1 > str2
	printf("Result: %i\n", result);

	result = ft_strncmp(str1, str3, 7); // str1 < str2
	printf("Result: %i\n", result);
	return (0);
}*/


	// ft_memchr TEST CASE
/*int	main()
{
	char	arr[] = "hello";
	char	*res = ft_memchr(arr, 'e', 0);

	printf("%s\n", res);
	return (0);
}*/


	// ft_memcmp TEST CASE
/*int	main()
{
	char a[] = {1, 2, 3};
	char b[] = {1, 2, 4};

	int result = ft_memcmp(a, b, 3);
	printf("%i\n", result);
	return (0);
}*/


	// ft_strnstr TEST CASE
/*int	main()
{
	const char	*haystack = "Hello, world!";
	const char	*needle = "wor";

	printf("%s\n", ft_strnstr(haystack, needle, 20));
	return (0);
}*/


	// ft_atoi TEST CASE
/*int	main()
{
	char	*str = "   +-1234567890";

	printf("%i\n", ft_atoi(str));
	return (0);
}*/


	// ft_calloc TEST CASE
/*int	main()
{
	int	*ptr = (int *)ft_calloc(10, sizeof(int));

	for (int i = 0; i < 10; i++)
		printf("%d ", ptr[i]);
	return (0);
}*/


	// ft_strdup TEST CASE
/*int	main()
{
	char	*str = "Hello, World!";
	char	*dup = ft_strdup(str);

	printf("%s\n", dup);
	return (0);
}*/


	// ft_substr TEST CASE
/*int	main()
{
	char	*str = "Hello, World!";
	char	*substr = ft_substr(str, 9, 5);

	printf("%s\n", substr);
	return (0);
}*/


	// ft_strjoin TEST CASE
/*int	main()
{
	char	*str1 = "Hello, ";
	char	*str2 = "World!";
	char	*join = ft_strjoin(str1, str2);

	printf("%s\n", join);
	return (0);
}*/


	// ft_strtrim TEST CASE
/*int	main()
{
	char	*str = " -  Hello, World!  - ";
	char	*trim = ft_strtrim(str, " -");

	printf("%s\n", trim);
	return (0);
}*/


	// ft_split TEST CASE
/*int	main()
{
	char	*str = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
	char	**split = ft_split(str, ' ');

	for (int i = 0; split[i]; i++)
		printf("%s\n", split[i]);
	return (0);
}*/


	// ft_itoa TEST CASE
/*int	main()
{
	int		n = -214;
	char	*res = ft_itoa(n);

	printf("%s\n", res);
	return (0);
}*/


	// ft_strmapi TEST CASE
/*char	ft_toupper_wrapper(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

int	main()
{
	char	*str = "Hello, World!";
	char	*res = ft_strmapi(str, &ft_toupper_wrapper);

	printf("%s\n", res);
	return (0);
}*/


	// ft_striteri TEST CASE
/*void	ft_toupper_wrapper(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

int	main()
{
	char	str[] = "Hello, World!";
	ft_striteri(str, ft_toupper_wrapper);
	printf("%s\n", str);
	return (0);
}*/


	// ft_putchar_fd TEST CASE
/*int main()
{
    ft_putchar_fd('H', STDOUT_FILENO);
    ft_putchar_fd('i', STDOUT_FILENO);
    ft_putchar_fd('\n', STDOUT_FILENO);

    return (0);
}*/


	// ft_putstr_fd TEST CASE
/*int main(void)
{
    ft_putstr_fd("Hello, World!\n", STDOUT_FILENO);
    ft_putstr_fd("This is an error message\n", STDERR_FILENO);
    return (0);
}*/


	// ft_putendl_fd TEST CASE
/*int main(void)
{
    ft_putendl_fd("Hello, World!", STDOUT_FILENO);
    ft_putendl_fd("This is an error message", STDERR_FILENO);
    return (0);
}*/


	// ft_putnbr_fd TEST CASE
/*int main(void)
{
    ft_putnbr_fd(123, 1);
    return (0);
}*/


//	BONUS FUNCTIONS

	// ft_lstnew TEST CASE
/*int	main()
{
	t_list	*new = ft_lstnew("Hello, World!");

	printf("%s\n", (char *)new->content);
	return (0);
}*/


	// ft_lstadd_front TEST CASE
/*int	main()
{
	t_list	*lst = ft_lstnew("Hello, World!");
	t_list	*new = ft_lstnew("Hello, Moon!");
	t_list	*new2 = ft_lstnew("Hello, Jupiter!");

	ft_lstadd_front(&lst, new);
	ft_lstadd_front(&lst, new2);
	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);
	printf("%s\n", (char *)lst->next->next->content);
	return (0);
}*/


	// ft_lstsize TEST CASE
/*int	main()
{
	t_list	*lst = ft_lstnew("Hello, World!");
	t_list	*new = ft_lstnew("Hello, Moon!");
	t_list	*new2 = ft_lstnew("Hello, Jupiter!");

	ft_lstadd_front(&lst, new);
	ft_lstadd_front(&lst, new2);

	printf("%i\n", ft_lstsize(lst));
	return (0);
}*/


	// ft_lstlast TEST CASE
/*int	main()
{
	t_list	*lst = ft_lstnew("Hello, World!");
	t_list	*new = ft_lstnew("Hello, Moon!");
	t_list	*new2 = ft_lstnew("Hello, Jupiter!");

	ft_lstadd_front(&lst, new);
	ft_lstadd_front(&lst, new2);

	printf("%s\n", (char *)ft_lstlast(lst)->content);
	return (0);
}*/


	// ft_lstadd_back TEST CASE
/*int	main()
{
	t_list	*lst = ft_lstnew("Hello, World!");
	t_list	*new = ft_lstnew("Hello, Moon!");

	ft_lstadd_back(&lst, new);
	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);
	return (0);
}*/


	// ft_lstdelone TEST CASE
/*void	del_string(void *content)
{
	if (content)
		free(content);
}

int main()
{
	char	*str = ft_strdup("Hello, World!");
	char	*str2 = ft_strdup("Hello, Moon!");
	t_list	*node = ft_lstnew(str);
	t_list	*node2 = ft_lstnew(str2);

	node->next = node2;
	printf("%s\n", (char *)node->content);
	printf("%s\n", (char *)node->next->content);
	ft_lstdelone(node2, &del_string);
	printf("%s\n", (char *)node->content);
	printf("%s\n", (char *)node->next->content);
    return (0);
}*/


	// ft_lstclear TEST CASE
/*void	del_string(void *content)
{
	if (content)
		free(content);
}

int main()
{
	char	*str = ft_strdup("Hello, World!");
	char	*str2 = ft_strdup("Hello, Moon!");
	char	*str3 = ft_strdup("Hello, Jupiter!");
	t_list	*node = ft_lstnew(str);
	t_list	*node2 = ft_lstnew(str2);
	t_list	*node3 = ft_lstnew(str3);

	node->next = node2;
	node2->next = node3;
	while (node)
	{
		printf("%s\n", (char *)node->content);
		node = node->next;
	}

	ft_lstclear(&node, &del_string);
	if (node == NULL)
		printf("\nnode is NULL\n");
    return (0);
}*/


	// ft_lstiter TEST CASE
/*void	ft_toupper_wrapper(void *content)
{
    char *str = (char *)content;
    int i = 0;

    while (str[i])
    {
        str[i] = ft_toupper(str[i]);
        i++;
    }
}

int	main()
{
	char	*str = ft_strdup("Hello, World!");
	char	*str2 = ft_strdup("Hello, Moon!");
	char	*str3 = ft_strdup("Hello, Jupiter!");
	t_list	*node = ft_lstnew(str);
	t_list	*node2 = ft_lstnew(str2);
	t_list	*node3 = ft_lstnew(str3);
	t_list	*list = node;

	node->next = node2;
	while (node)
	{
		printf("%s\n", (char *)node->content);
		node = node->next;
	}
	printf("%s\n", (char *)node3->content);
	ft_lstiter(list, &ft_toupper_wrapper);
	while (list)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
	printf("%s\n", (char *)node3->content);
	return (0);
}*/


	// ft_lstmap TEST CASE
void	*ft_toupper_wrapper(void *content)
{
    char *str = (char *)content;
    int i = 0;

    while (str[i])
    {
        str[i] = ft_toupper(str[i]);
        i++;
    }
	return (str);
}

void	del_string(void *content)
{
	if (content)
		free(content);
}

int main()
{
    char *str = ft_strdup("Hello, World!");
    char *str2 = ft_strdup("Hello, Moon!");
    t_list *node = ft_lstnew(str);
    t_list *node2 = ft_lstnew(str2);
    t_list *list;

    node->next = node2;
    printf("Original list:\n");
    t_list *curr = node;
    while (curr)
    {
        printf("%s\n", (char *)curr->content);
        curr = curr->next;
    }
    list = ft_lstmap(node, &ft_toupper_wrapper, &del_string);
    printf("New list:\n");
    curr = list;
    while (curr)
    {
        printf("%s\n", (char *)curr->content);
        curr = curr->next;
    }
    return (0);
}
