/*
** my_strncpy.c for my_strncpy in /home/t3i/MY_FUNC
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Tue Oct 24 04:24:26 2017 NGO tri
** Last update Tue Oct 24 04:24:52 2017 NGO tri
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      if (i >= n)
	{
	  dest[i] = '\0';
	}
      i = i + 1;
    }
  return(dest);
}
