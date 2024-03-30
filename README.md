# 1. 42-Porto-Common Core-Libft
## My first library, libft.

### String & Char Functions:

1. ```ft_strchr```: char	*ft_strchr(char *str, char c);<br />
         **Desctiption:** Finds the first occurrence of c in the string pointed by *str.
         **Return Value:** Pointer to the beggining of the occurrence of c in the string pointed by *str
2. ```ft_strdup```: char	*ft_strdup(char *s);
         **Desctiption:** Duplicates the string pointed by *s.
         **Return Value:** Returns the duplicated string.
3. ```ft_striteri```: void	ft_striteri(char *s, void (*f)(unsigned int, char*));
         **Desctiption:** Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument.
         **Return Value:** None.
4. ```ft_strjoin```: char	*ft_strjoin(char const *s1, char const *s2);
         **Desctiption:** Allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
         **Return Value:** The new string.
5. ```ft_strlcat```: int	ft_strlcat(char *dst, char *src, int n);
         **Desctiption:** Concatenate the string pointed by *src into the string pointed by *dst, while n size.
         **Return Value:** size of dst + src.
6. ```ft_strlcpy```: int	ft_strlcpy(char *dst, char *src, int n);
         **Desctiption:** Copy the string pointed by *src into the string pointed by *dst, while n size.
         **Return Value:** size of the src string.
7. ```ft_strlen```: int	ft_strlen(char const *str);
         **Desctiption:** Calculates the size of a string.
         **Return Value:** Size of the string.
8. ```ft_strmapi```: char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
         **Desctiption:** Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.
         **Return Value:** The string created from the successive applications of ’f’.
9. ```ft_strncmp```: int	ft_strncmp(char const *s1, char const *s2, size_t n);
         **Desctiption:** Compares the strings s1 and s2 while n size.
         **Return Value:** returns a positive value if s1 > s2, a negative value if s1 < s2 and 0 if s1 = s2.
10. ```ft_strnstr```: char	*ft_strnstr(char *origin, char *find, int n);
         **Desctiption:** Finds the first occurrence of find in the string origin.
         **Return Value:** Returns the origin string begginning in the first occurrence of find.
11. ```ft_strrchr```: char	*ft_strrchr(char *str, char c);
         **Desctiption:** Finds the last occurrence of c in the string str.
         **Return Value:** Returns the last occurence of c in str string.
12. ```ft_strtrim```: char	*ft_strtrim(char const *s1, char const *set);
         **Desctiption:** Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
         **Return Value:** The trimmed string.
13. ```ft_substr```: char	*ft_substr(char const *s, unsigned int start, size_t len);
         **Desctiption:** Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
         **Return Value:** The substring.

### Memory Manipulation Functions:

1. ```ft_strchr```: char	*ft_strchr(char *str, char c);
         **Desctiption:** Finds the first occurrence of c in the string pointed by *str.
         **Return Value:** Pointer to the beggining of the occurrence of c in the string pointed by *str
