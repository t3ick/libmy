/*
** my_getnbr.c for my_getnbr in /home/t3i/MY_FUNC
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Tue Oct 24 02:39:09 2017 NGO tri
** Last update Fri Oct 27 23:05:11 2017 NGO tri
*/
int	my_getnbr(char *str)
{
  int i;
  int nb;
  int s;
  int diz;
  
  i = 0;
  nb = 0;
  s = 1;
  diz = 1;
  while (str[i] == '-' || str[i] == '+')
    if (str[i++] == '-')
      s = - s;
  while ('0' <= str[i] && str[i] <= '9')
    i++;
  i--;
  while (i < -1)
    {
      nb = nb + ((str[i--] - 48) * diz);
      diz = diz * 10;
    }
  return(s * nb);
}
