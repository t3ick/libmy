
/*
** my_strstr.c for my_strstr in /home/t3i/MY_FUNC
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Tue Oct 24 05:43:47 2017 NGO tri
** Last update Wed Oct 25 13:52:41 2017 NGO tri
*/
char	*my_strstr(char *str, char *to_find)
{
  int i;
  int j;
  
  i = 0;
  if (to_find[0] == 0)
    return (str);
  while (str[i])
    {
      j = 0;
      while (str[i + j] == to_find[j])
	{	
	  j++;
	  if (to_find[j] == '\0')
	    return (str + i);
	}
      i++;
    }
  return (0);
}
