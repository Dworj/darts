using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;

public class DestroyObject : MonoBehaviour
{
    private AudioSource boom;
    public int scoreValue = 1;
    public TMP_Text pointsTMP;
    public TMP_Text textTimer;
    public AudioClip soundClip;
    public float destroyDelay = 0.0001f;
    private static int totalScore = 0;
    public float timeLimit = 5f;
    public int requiredScore = 5;
    private float timer = 0f;
    private float currentTime;

    private void Start()
    {
        boom = GetComponent<AudioSource>();
        timer = timeLimit;
        currentTime = timeLimit;
    }

    private void OnTriggerEnter(Collider collider)
    {
        boom.Play();
        totalScore += scoreValue;
        pointsTMP.text =  totalScore.ToString();
        Destroy(gameObject, destroyDelay);
    }

    private void Update()
    {
        timer -= Time.deltaTime;
        if (timer <= 0 && totalScore < requiredScore)
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        }
        // Update the timer text
        currentTime -= Time.deltaTime;
        textTimer.text = "Time: " + Mathf.Round(currentTime).ToString();
    }
   
}









/*
private AudioSource boom;
public int scoreValue = 1;
public TMP_Text pointsTMP;
public AudioClip soundClip;
public float destroyDelay = 0.0001f;
private static int totalScore = 0;


private void Start()
{
    boom = GetComponent<AudioSource>();
}

private void OnTriggerEnter(Collider collider)
{
    {
        boom.Play();
        totalScore += scoreValue;
        pointsTMP.text = "Points: " + totalScore.ToString();  
         Destroy(gameObject, destroyDelay);


    }

}
*/


