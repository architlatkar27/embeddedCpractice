
int main(){
  int x = 10;
  int *ptr;
  ptr = &x;
  while(*ptr < 20){
    *ptr = *ptr + 1;
  } 
}
