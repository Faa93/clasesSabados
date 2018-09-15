
int getEmail(char*email[])
{
int retorno=-1;

char auxiliar[CHARLEN];
if(auxiliar != Null && strlen(email) <= CHARLEN && strlen(email) > 0)
{
fgets(auxiliar,CHARLEN,stdin);

strcpy(email, auxiliar);
}


return retorno;

}

