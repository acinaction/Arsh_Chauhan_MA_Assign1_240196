https://www.naukri.com/code360/problems/nth-root-of-m_1062679
int NthRoot(int n, int m) {
  int i; // I'll go from 1 to m and check whether the nth power equals m.
  int flag=0;
  for(i=1;i<=m;i++){
    if(pow(i,n)==m){ // The case when i's nth power is m 
      flag=1;
      break;
    }
    else if(pow(i,n)<m && pow(i+1,n)>m){ // Ahead of this i, all i's will have nth power greater than m. Hence no solution possible. 
      break;
    }
  }
  return flag==1?i:-1;
}