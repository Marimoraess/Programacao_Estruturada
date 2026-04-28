
struct st_meuVetor{
    int max;
    int tam;
    int *v;
};
typedef struct st_meuVetor meuVetor;
meuVetor* aloca_vetor(int max){
    meuVetor *vetor=(meuVetor*)malloc(sizeof(meuVetor));
    vetor->v = (int*)malloc(max*sizeof(int));

    vetor->max=max;
    vetor->tam=0;
    return vetor;
}
void imp_vetor(meuVetor*vetor){
    printf("vetor= ");
    for(int i=0;i<vetor->max;i++)
    {
        printf("%d",vetor->v[i]);
    }
    printf("\n");
    
}
void libera(meuVetor*vetor){
    free(vetor);
}
