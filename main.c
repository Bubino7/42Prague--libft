/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbubak <jbubak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 08:59:07 by jbubak            #+#    #+#             */
/*   Updated: 2025/06/03 19:55:51 by jbubak           ###   ########.fr       */
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
	char buffer[12] = "Hello";
    const char *to_add = "World!";
    size_t result;

    // Try to append "World!" to "Hello" in a buffer of size 12
    result = ft_strlcat(buffer, to_add, sizeof(buffer));

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
	char	*ptr = ft_strrchr(str, 't');

	if (ptr) {
        printf("Found 't'\n");
		printf("%s\n\n", ptr);
	}
    else
        printf("'t' not found\n");

    ptr = ft_strchr(str, 'z');
    if (ptr) {
        printf("Found 'z'\n");
		printf("%s\n", ptr);
	}
    else
        printf("'z' not found\n");

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
