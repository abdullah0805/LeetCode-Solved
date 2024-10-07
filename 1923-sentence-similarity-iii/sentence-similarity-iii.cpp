class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> arr1, arr2;
        string dum = "";
        for(int i = 0;sentence1[i] != '\0';i++){
            if(sentence1[i] == ' '){
                arr1.push_back(dum);
                dum = "";
            }
            else
                dum += sentence1[i];
        }
        if (!dum.empty()) arr1.push_back(dum);

        dum = "";
        for(int i = 0;sentence2[i] != '\0';i++){
            if(sentence2[i] == ' '){
                arr2.push_back(dum);
                dum = "";
            }
            else
                dum += sentence2[i];
        }
        if (!dum.empty()) arr2.push_back(dum);

        if (arr1.size() > arr2.size()) swap(arr1, arr2);

        int i = 0;
        while (i < arr1.size() && arr1[i] == arr2[i]) i++;

        int j = 0;
        while (j < arr1.size() && arr1[arr1.size() - 1 - j] == arr2[arr2.size() - 1 - j]) j++;

        return i + j >= arr1.size();
    }
};