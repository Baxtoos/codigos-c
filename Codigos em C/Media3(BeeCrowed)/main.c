#include <stdio.h>

int main()
{
  double nota1, nota2, nota3, nota4, media, media_final;
  scanf("%lf%lf%lf%lf", &nota1, &nota2, &nota3, &nota4);

  media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4) + (nota4 * 1)) / 10;

  if (media >= 7.0)
  {
    printf("Media: %.1lf\nAluno aprovado.\n", media);
  }
  else if (media < 5.0)
  {
    printf("Media: %.1lf\nAluno reprovado.\n", media);
  }
  else
  {
    printf("Media: %.1lf\nAluno em exame.\n", media);

    double exame;
    scanf("%lf", &exame);

    media_final = (media + exame) / 2;

    if (media_final >= 5.0)
    {
      printf("Nota do exame: %.1lf\nAluno aprovado.\nMedia final: %.1lf\n", exame, media_final);
    }
    else
    {
      printf("Aluno reprovado.\n");
    }
  }

  return 0;
}
