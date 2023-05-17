int init = []{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ofstream of("user.out");
    cout.rdbuf(of.rdbuf());
    for(string s; getline(cin,s); cout<<'\n'){
        stringstream ss(s.substr(1,s.size()-1));
        string data;
        vector<int> vec;
        while(getline(ss,data,',')){
            vec.push_back(stoi(data));
        }
        int j = vec.size()-1,i = 0;
        int max1 = 0;
        while(i<j){
            max1 = max(max1,vec[i++] + vec[j--]);
        }
        cout<<to_string(max1);
    }
    exit(0);
    return 0;
}();
