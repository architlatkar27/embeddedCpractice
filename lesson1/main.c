int counter = 4;
int main(){
  int *cntr;
  cntr = &counter;
  while(*cntr < 10){
    *cntr++;
  }
}
