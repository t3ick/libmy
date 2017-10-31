/*
** my_strcmp.c for my_strcmp in /home/t3i/MY_FUNC
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Mon Oct 23 06:14:55 2017 NGO tri
** Last update Tue Oct 24 03:19:24 2017 NGO tri
*/
int	my_strncmp(char *s1, char *s2, int n)
{
  int i;

  i = 0;
  while(s1[i] == s2 [i] && s1[i] != '\0' && s2[i] != '\0' && i < n -1)
    i = i + 1;
  if (s1[i] > s2[i])
    return (1);
  else if (s1[i] < s2[i])
    return (-1);
  else
    return (0);
}
