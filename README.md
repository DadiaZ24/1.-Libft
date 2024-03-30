# 1. 42-Porto-Common Core-Libft
## My first library, libft.

### String & Char Functions:

1. ```ft_strchr:``` char	*ft_strchr(char *str, char c);<br /><br />
         **Desctiption:** Finds the first occurrence of c in the string pointed by *str.<br />
         **Return Value:** Pointer to the beggining of the occurrence of c in the string pointed by *str<br />
2. ```ft_strdup```: char	*ft_strdup(char *s);<br /><br />
         **Desctiption:** Duplicates the string pointed by *s.<br />
         **Return Value:** Returns the duplicated string.<br />
3. ```ft_striteri```: void	ft_striteri(char *s, void (*f)(unsigned int, char*));<br /><br />
         **Desctiption:** Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument.<br />
         **Return Value:** None.<br />
4. ```ft_strjoin```: char	*ft_strjoin(char const *s1, char const *s2);<br /><br />
         **Desctiption:** Allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.<br />
         **Return Value:** The new string.<br />
5. ```ft_strlcat```: int	ft_strlcat(char *dst, char *src, int n);<br /><br />
         **Desctiption:** Concatenate the string pointed by *src into the string pointed by *dst, while n size.
         **Return Value:** size of dst + src.<br />
6. ```ft_strlcpy```: int	ft_strlcpy(char *dst, char *src, int n);<br /><br />
         **Desctiption:** Copy the string pointed by *src into the string pointed by *dst, while n size.<br />
         **Return Value:** size of the src string.<br />
7. ```ft_strlen```: int	ft_strlen(char const *str);<br /><br />
         **Desctiption:** Calculates the size of a string.<br />
         **Return Value:** Size of the string.<br />
8. ```ft_strmapi```: char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));<br /><br />
         **Desctiption:** Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.<br />
         **Return Value:** The string created from the successive applications of ’f’.<br />
9. ```ft_strncmp```: int	ft_strncmp(char const *s1, char const *s2, size_t n);<br />
         **Desctiption:** Compares the strings s1 and s2 while n size.<br />
         **Return Value:** returns a positive value if s1 > s2, a negative value if s1 < s2 and 0 if s1 = s2.<br />
10. ```ft_strnstr```: char	*ft_strnstr(char *origin, char *find, int n);<br />
         **Desctiption:** Finds the first occurrence of find in the string origin.<br />
         **Return Value:** Returns the origin string begginning in the first occurrence of find.<br />
11. ```ft_strrchr```: char	*ft_strrchr(char *str, char c);<br />
         **Desctiption:** Finds the last occurrence of c in the string str.<br />
         **Return Value:** Returns the last occurence of c in str string.<br />
12. ```ft_strtrim```: char	*ft_strtrim(char const *s1, char const *set);<br />
         **Desctiption:** Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.<br />
         **Return Value:** The trimmed string.<br />
13. ```ft_substr```: char	*ft_substr(char const *s, unsigned int start, size_t len);<br />
         **Desctiption:** Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.<br />
         **Return Value:** The substring.<br />
<br />
### Memory Manipulation Functions:<br />
<br />
1. ```ft_strchr```: char	*ft_strchr(char *str, char c);<br />
         **Desctiption:** Finds the first occurrence of c in the string pointed by *str.<br />
         **Return Value:** Pointer to the beggining of the occurrence of c in the string pointed by *str<br />
