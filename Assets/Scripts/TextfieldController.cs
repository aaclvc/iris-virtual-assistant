using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TextfieldController : MonoBehaviour
{
    // Start is called before the first frame update
    TMP_Text textfield;

    void Start()
    {
        textfield = GetComponent<TMP_Text>();
        textfield.text = "Hallo ich bin I.R.I.S.";
    }

    // Update is called once per frame
    void Update()
    {

    }
}
