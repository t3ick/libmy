/*
** my_strcpy.c for my_strcpy in /home/t3i/MY_FUNC
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Tue Oct 24 04:20:31 2017 NGO tri
** Last update Tue Oct 24 04:21:16 2017 NGO tri
*/

char	*my_strcpy(char *dest, char *src)
{
  int i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return(dest);
}
