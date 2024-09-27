int dsu_find(int n){
    if(par[n] == -1){
        return n;
    }
    int admin = dsu_find(par[n]);
    par[n] = admin;
    return admin;
}