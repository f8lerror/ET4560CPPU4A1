/*
 * Ceci Coller
 * ET4560
 * Unit 4 Assignment 1
 * Challenges
 * Kinetic Energy
 * KE = 1/2 mv^2
 */

#include "stdafx.h"
#include <iostream>

using namespace std;

double kinetic(double m,double v);
int main()
{
    double mass, velocity,k;

    cout << "Enter the object’s mass in kilograms: ";
    cin >> mass;

    cout << "Enter the object’s velocity,in meters per second: ";
    cin >> velocity;

    k=kinetic(mass,velocity);
    cout << "The kinetic of the object is "<< k << endl;

    system("pause");


    return 0;
}

double kinetic(double m, double v)
{
    return 0.5*m*v*v;
}









/*Star Search Challenge 8 pp. 401
 * A particular talent competition has 5 judges, each of whom awards a score between 0 and 10 to each performer. Fractional
 * scores, such as 8.3 are allowed. A performer's final score is determined by dropping the highest and lowest score received,
 * then averaging the 3 remaining scores. */

#include <iostream>
#include <cmath>

using namespace std;

    unsigned int numPerformers;

    void getJudgeData(double&);
    void calScore(double&, double, double, double, double, double);
    double findLowest(double, double, double, double, double);
    double findHighest(double, double, double, double, double);

    int main()
    {
        double j1, j2, j3, j4, j5, avgScr; //Judges
        // Get number of performers
        cout << "Enter number of performers: " << " ";
        cin >> numPerformers;

        for (int i = 0; i < numPerformers; i++)
        {
            //Get info of Judge 1
            getJudgeData(j1);
            //Get info of Judge 2
            getJudgeData(j2);
            //Get info of Judge 3
            getJudgeData(j3);
            //Get info of Judge 4
            getJudgeData(j4);
            //Get info of Judge 5
            getJudgeData(j5);

            // Calculate the score
            calScore(avgScr, j1, j2, j3, j4, j5);
            cout << "Average Score for Performers " << (i+1) << " is " << avgScr << " points " << endl;






        }
        return 0;


    }

void getJudgeData(double& s)
{
    do{
        cout << "Enter Score between 0 and 10 from judge " << " ";
        cin >> s;



    }while (( s > 10 )||( s < 0 ));
}

void calScore(double&avgScore,double s1,double s2,double s3,double s4,double s5) {
    double lowest, highest, dropScore, totalScore;
    totalScore = s1 + s2 + s3 + s4 + s5;

    //getting lowest score
    lowest = findLowest(s1, s2, s3, s4, s5);

    //getting highest score
    highest = findHighest(s1, s2, s3, s4, s5);
    dropScore = totalScore - (lowest + highest);

    avgScore = dropScore / 3;
}


// Call by calScore and return lowest

    double findLowest(double a, double b, double c, double d, double e)
    {
        if( (a < b) && (a < c) && (a < d) && (a < e) )
        {
            return a;
        }
        else if( (b < a) && (b < c) && (b < d) && (b < e) )
        {
            return b;
        }
        else if((c<a)&&(c<b)&&(c<d)&&(c<e))
        {
            return c;
        }
        else if((d<a)&&(d<b)&&(d<c)&& (d<e))
        {
            return d;
        }
        else
        {
            return e;
        }
}


// Call by calScore and retunr highest

double findHighest(double a,double b,double c,double d,double e)
{
    if((a>b)&&(a>c) && (a>d) && (a>e))
    {
        return a;
    }
    else if((b>a)&& (b>c) && (b>d)&&(b>e))
    {
        return b;
    }
    else if((c>a)&&(c>b)&&(c>d)&&(c>e))
    {
        return c;
    }
    else if((d>a)&&(d>b)&&(d>c)&& (d>e))
    {
        return d;
    }
    else
    {
        return e;
    }
}








/* Present Value - page 401-402
 * Suppose you want to deposit a certain amount of money into a savings account and then
 * leave it alone to draw interest for the next 10 years. At the end of 10 years you would like
 * to have $10,000 in the account. How much do you need to deposit today to make that happen? To find out
 * you ned to use the following formula. P = F / (1 + r) ^n
 */

#include <iostream>
#include <math.h>


using namespace std;

int main() {

    double present_value;
/*    const float future_value = 10000;
    const float annual_interest_rate = .042;
    const float number_of_years = 10;*/

    float future_value;
    float annual_interest_rate;
    float number_of_years;

    //present_value = future_value / pow(1 + annual_interest_rate, number_of_years);

    cout << "How much do you want after 10 years: $" << endl;
    cin >> future_value;

    cout << "How much interest will it earn each year $" << endl;
    cin >> annual_interest_rate;

    cout << "How many years will it earn interest: " << endl;
    cin >> number_of_years;

    present_value = future_value / pow(1 + annual_interest_rate, number_of_years);

    cout << "You need to deposit $" << present_value << endl;


    //   cout << "You need to deposit $" << present_value << " to have earned $" << future_value << " in 10 years" << endl;
    cin.get();
    return 0;
}