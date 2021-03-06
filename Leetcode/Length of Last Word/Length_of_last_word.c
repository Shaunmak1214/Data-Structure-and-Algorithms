
// Algorithm: 
// 	The approach is to find the index one lesser than starting index, and the ending index of the last word
// 	Therefore, we traverse the string from the end
//  Once the indices are found, we subtract it, if it is lesser than 0, it means there is no last word, so we return zero
//  Else, we return the length of the last word

// Length Of Last Word function
int lengthOfLastWord(char * s){

	// 'Pointer - 1', to find the ending index of the last word, initialised to last index of the word
    int i = strlen(s) - 1;

    // Moving the 'pointer - 1' towards left, until a non-space character is found or it reached an invalid value 
    while(i >= 0 && s[i] == ' ') i--;

    // 'Pointer - 2', to find the index one lesser than the starting index of the last word, initialised with the ending index of the last word
    int j = i;

    // Moving the 'pointer - 2' towards left, until a space is found or it reached an invlid value
    while(j >= 0 && s[j] != ' ') j--;

    // If the subraction of the indices gives value less than zero, return zero, else return the length of the last word
    return i - j < 0 ? 0 : i - j;
}