/*
** my_strlen.c for my_strlen in /home/t3i/MY_FUNC
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Tue Oct 24 03:12:04 2017 NGO tri
** Last update Tue Oct 24 03:12:09 2017 NGO tri
*/
int     my_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    {
      i = i + 1;
    }
  return (i);
}
