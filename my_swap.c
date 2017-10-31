/*
** my_swap.c for my_swap in /home/t3i/MY_FUNC
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Tue Oct 24 02:29:19 2017 NGO tri
** Last update Thu Oct 26 04:59:22 2017 NGO tri
*/
void	my_swap(int *a, int *b)
{
  int s;
  int *c;

  c = &s;
  *c = *a;
  *a = *b;
  *b = *c;
}
