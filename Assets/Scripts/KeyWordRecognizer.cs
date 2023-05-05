using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyWordRecognizer
{
    //private string keyWord;
    public string KeyWord { get; set; }


    public KeyWordRecognizer(string keyWord)
    {
        KeyWord = keyWord;
    }

    public bool ContainsKeyWord(string word)
    {
        return word.Contains(KeyWord);
    }
}
