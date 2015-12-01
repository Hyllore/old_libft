/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:22:46 by droly             #+#    #+#             */
/*   Updated: 2015/11/30 17:34:37 by droly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//int main()
//{
//	char s1[20] = "Bien ta vu";
//	char s2[20] = "Bien ta vu";
//	printf("%s\n", strcat(s1, "our"));
//	printf("%s\n", ft_strcat(s2, "our"));


//}

//int	main()
//{
//	printf("%d\n", ft_strcmp("a", "zzzz"));
//}

//int	main()
//{
//	printf("%d\n", ft_strlen("bonjour"));
//}

//int		main()
//{
//	printf("%s\n", ft_strnstr("ifohdinuhjonr", "hj", 42));
//}

//int		main()
//{
//	printf("%s\n", ft_strstr("bnjuo", ""));
//	printf("%s\n", strstr("bnjuo", ""));
//}

//int	main()
//{
//	char *str;
//	char *ps2;
//
//	str = "abcd";
//	ps2 = "abce";
//	printf("%d\n", ft_strncmp(str, ps2, 3));
//	printf("%d\n", strncmp(str, ps2, 3));
//}
//
//
//int	main()
//{
//	printf("%s\n", ft_strchr("bonjour", 'o'));
//}
//
//
//int main()
//{
//	printf("%s\n", ft_strrchr("bonjour", 'o'));
//}
//
//
//int main()
//{
//	printf("%s\n", ft_strdup("bonjour"));
//}
//
//
//int	main()
//{
//	printf("%d\n", ft_isalpha('F'));
//}
//
//
//
//int	main()
//{
//	printf("%d\n", ft_isdigit(6));
//}
//
//
//
//int main(void)
//{
//	printf("%d\n", ft_isalnum('6'));
//}
//
//
//
//int main()
//{
//	printf("%d\n", ft_isascii(120));
//	return (0);
//}
//
//
//
//int main()
//{
//	printf("%d\n", ft_isprint(':'));
//}
//
//
//
//int	main()
//{
//	printf("%d\n", ft_toupper(':'));
//}
//
//
//
//int main()
//{
//	printf("%d\n", ft_tolower('a'));
//}
//
//
//
//int main()
//{
//	char s[8] = "bonjour";
//	printf("%s\n", ft_memset(s, 'i', 4));
//}
//
//
//
//int	main()
//{
//	char v[10] = "bonjour";
//	printf("%s\n", ft_bzero(v, 3));
//}
//
//
//
//int main()
//{
//	char d[10] = "bonjour";
//	printf("%s\n", ft_memcpy(d,"itre", 10));
//}
//
//
//
//int	main()
//{
//	char dst[20] = "";
//	char dst1[20] = "";
//	printf("%s\n", ft_memccpy(dst, "salut", 'u', 10));
//	printf("%s\n", memccpy(dst1, "salut", 'u',10));
//}
//
//
//
//int main()
//{
//	char *s;
//	
//	s = (char*)malloc(sizeof(char) * 9);
//	printf("%s\n", ft_memmove(s, "pupille",14 ));
//	printf("%s\n", memmove(s, "pupille", 14));
//}
//
//
//int main ()
//{
//	printf("%s\n", ft_memchr("bonjour", 'u', 3));
//	printf("%s\n", memchr("bonjour", 'u', 3));
//}
//
//
//int main()
//{
//	printf("%d\n", ft_memcmp("bonj9our", "bonjour", 3));
//	printf("%d\n", memcmp("bonj9our", "bonjour", 3));
//}
//
//
//
//int main()
//{
//	char s[20] = "bonjour";
//	char s2[20] = "bonjour";
//	printf("%s\n", ft_strncat(s, "iou", 2));
//	printf("%s\n", strncat(s2, "iou", 2));
//
//}
//
//
//
//int main()
//{
//	printf("%d\n", ft_atoi("+-01235456789"));
//	printf("%d\n", atoi("+-01235456789"));
//}
//
//
//
//
int main()
{
	char s[20] = "hey";
	char s2[20] = "hello ";
	char s3[20] = "hey";
	char s4[20] = "hello ";
	printf("%zu\n", ft_strlcat(s3, s4, 2));
	printf("%zu\n", strlcat(s, s2, 2));
}
