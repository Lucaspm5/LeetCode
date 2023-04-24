bool isValid(char * s){
    int size = strlen(s);

    char abertura[] = {"([{"};
    char fechamento[] = {")]}"};

    int auxiliary[size];
    int verificacion = -1;
    int valido = 1;

    for(int i = 0;i < size;i++){
        for(int j = 0;j < 3;j++){
            if(s[i] == abertura[j]) {auxiliary[++verificacion] = s[i];}
            else if(s[i] == fechamento[j])
            {
                if(verificacion == -1 || auxiliary[verificacion] != abertura[j])
                    {valido = 0; break;}
                verificacion--;
            }
        }
    }

    if(valido && verificacion == -1) return true;
    else return false;

    return NULL;
}
