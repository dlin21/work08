int mystrlen( char *s ) {
  int i = 0;
  while(s[i]) i++;
  return i;
}

char * mystrcpy( char *dest, char *source ) {
  int i;
  for(i=0; i<mystrlen(source); i++){
    dest[i]= source[i];
  }
  return dest;
}

char * mystrncat( char *dest, char *source, int n ) {
  int i;
  for(i=0; source[i]!='\0' && i<n; i++){
    dest[i+mystrlen(dest)]= source[i];
  }
  dest[i+mystrlen(dest)]='\0';
  return dest;
}

int mystrcmp(char *s1, char *s2 ) {
  int i = 0;
  while(*s1!='\0'||*s2!='\0'){
    if(s1[i]>s2[i]) return 1;
    if(s2[i]>s1[i]) return -1;
    i++;
  }
  return 0;
}

char * mystrchr( char *s, char c ) {
  while (*s!=c && *s!=0) s++;
  if (*s==c) return s;
  return 0;
}