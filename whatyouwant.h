

int firstChar(string line,string str){
    for (int i = 0;i<line.size();i++){
        if (line.substr(i,str.size()) == str && line[i+str.size()] == ' '){
            if ((i > 0 && line[i - 1] == ' ') || (i == 0)){
            int j=1;
            for (j;j<line.size();j++)
                if (line[i+str.size()+j] != ' '){
                    return i + str.size() + j;
                    break;
                }
            }
        }
    }
}

int lastChar(string line, int i){
    for (i;i<line.size();i++)
        if (line[i]==' ')
            return i-1;
}

string whatYouWant(string line,string str){
    return line.substr(firstChar(line,str),lastChar(line,firstChar(line,str))
     + 1 - firstChar(line,str));
}
