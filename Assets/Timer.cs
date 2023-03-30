using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Timer : MonoBehaviour
{
    // public TMP_Text pointsTMP;
    //bool timerRunning = false;
    //public static Timer instance;
    //public float timeStart;
    //public int points = 0;
    public TMP_Text textTimer;
    public TMP_Text scoreText;
    public TMP_Text pointsTMP;
    public int scoreToWin = 15;
    public int scoreValue = 1;
    public float timeLimit = 60f;
    
    private float currentTime;
    private static int totalScore = 0;
    public int currentScore;

    void Start()
    {
        
      //  textTimer.text = timeStart.ToString();
        //ScoreUpdate(false);
        currentTime = timeLimit;
        currentScore = 0;
    }


    void Update()
    {
        if (currentScore >= scoreToWin)
        // ���� ����� ������ ������ ���������� �����, ������������� �������
        {
            RestartLevel();

        }
        else if (currentTime > 0)
        {
            // �����, ���� ����� ��� �� �������, �������� ������� �������
            currentTime -= Time.deltaTime;
            textTimer.text = "Time left: " + currentTime.ToString("0.00");
        }
        else
        {
            // ���� ����� ������� � ����� �� ������ ������ ���������� �����, ������������� �������
            RestartLevel();
        }
       /* if (timerRunning == true)
        {
            {
                timeStart -= Time.deltaTime;
                textTimer.text = Mathf.Round(timeStart).ToString();
            }
            if (timeStart < 0)
            {
                timeStart = 0;
            }
        }
       */

    }
    public void AddScore(int score)
    {
        // ��������� ���� � �������� ����� � ��������� ������� ����� �� ������
        totalScore += scoreValue;
       // textTimer.text = "Score: " + currentScore.ToString();
        pointsTMP.text = "Points: " + totalScore.ToString();
    }
    /* public void StartTimer()
     {
         if (!timerRunning)
         {
             Debug.Log("Start timer: " + timerRunning);
             timerRunning = true;
         }
     }
    */
    /*public void ScoreUpdate(bool ad)
    {

        // pointsTMP.text = points.ToString();

    }
    */
    private void RestartLevel()
    {
        // ��������� ������� ����� ������
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }


}