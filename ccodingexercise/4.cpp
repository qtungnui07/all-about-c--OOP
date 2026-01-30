int Q4(string str){
    int num_of_words = 0;

    for (int i = 0; i < str.length(); i++){
        if (str[i] != ' ' && i == 0){
            // từ đầu tiên
            num_of_words++;
        }
        else if (str[i] != ' ' && str[i-1] == ' '){
            // chữ sau 1 hoặc nhiều dấu cách
            num_of_words++;
        }
        // else: gặp dấu cách hoặc 2 dấu cách liên tiếp -> không làm gì
    }
    return num_of_words;
}
