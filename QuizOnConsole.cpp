/*
Quiz on console
this project is unique
in this project i created a single class which is the blueprint for creating all 50 questions
the user is asked to select the number of questions in the quiz
the questions and answers can be changed or edited anytime
1st section of code:
the main class named Qustion

2nd section of code:
cosists of 50 questions with answer
shuffle quiz questions



*/

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

// class, which is the blueprint for the objects to be created 
class Question { 
public:
    string question;
    string optionA;
    string optionB;
    string optionC;
    string optionD;
    char correctAnswer;
};

int main() {

    //array of max 50..
    Question questions[50];

    // Question 1
    questions[0].question = "What is the capital of Pakistan?";
    questions[0].optionA = "Lahore";
    questions[0].optionB = "Karachi";
    questions[0].optionC = "Islamabad";
    questions[0].optionD = "Peshawar";
    questions[0].correctAnswer = 'C';

    // Question 2
    questions[1].question = "When was Pakistan created?";
    questions[1].optionA = "1945";
    questions[1].optionB = "1947";
    questions[1].optionC = "1950";
    questions[1].optionD = "1952";
    questions[1].correctAnswer = 'B';

    // Question 3
    questions[2].question = "Who is the founder of Pakistan?";
    questions[2].optionA = "Allama Iqbal";
    questions[2].optionB = "Liaquat Ali Khan";
    questions[2].optionC = "Ayub Khan";
    questions[2].optionD = "Quaid-e-Azam Muhammad Ali Jinnah";
    questions[2].correctAnswer = 'D';

    // Question 4
    questions[3].question = "What is the national language of Pakistan?";
    questions[3].optionA = "Punjabi";
    questions[3].optionB = "Pashto";
    questions[3].optionC = "Urdu";
    questions[3].optionD = "Sindhi";
    questions[3].correctAnswer = 'C';

    // Question 5
    questions[4].question = "What is the national animal of Pakistan?";
    questions[4].optionA = "Lion";
    questions[4].optionB = "Snow Leopard";
    questions[4].optionC = "Tiger";
    questions[4].optionD = "Markhor";
    questions[4].correctAnswer = 'D';

    // Question 6
    questions[5].question = "Which is the largest city of Pakistan by population?";
    questions[5].optionA = "Islamabad";
    questions[5].optionB = "Lahore";
    questions[5].optionC = "Karachi";
    questions[5].optionD = "Faisalabad";
    questions[5].correctAnswer = 'C';

    // Question 7
    questions[6].question = "Which is the highest mountain in Pakistan?";
    questions[6].optionA = "Nanga Parbat";
    questions[6].optionB = "Broad Peak";
    questions[6].optionC = "K2";
    questions[6].optionD = "Tirich Mir";
    questions[6].correctAnswer = 'C';

    // Question 8
    questions[7].question = "What is the national flower of Pakistan?";
    questions[7].optionA = "Rose";
    questions[7].optionB = "Jasmine";
    questions[7].optionC = "Tulip";
    questions[7].optionD = "Sunflower";
    questions[7].correctAnswer = 'B';

    // Question 9
    questions[8].question = "Which river is the longest in Pakistan?";
    questions[8].optionA = "Chenab";
    questions[8].optionB = "Ravi";
    questions[8].optionC = "Indus";
    questions[8].optionD = "Jhelum";
    questions[8].correctAnswer = 'C';

    // Question 10
    questions[9].question = "What is the currency of Pakistan?";
    questions[9].optionA = "Rupee";
    questions[9].optionB = "Taka";
    questions[9].optionC = "Dinar";
    questions[9].optionD = "Riyal";
    questions[9].correctAnswer = 'A';

    // Question 11
    questions[10].question = "Who wrote the national anthem of Pakistan?";
    questions[10].optionA = "Allama Iqbal";
    questions[10].optionB = "Faiz Ahmed Faiz";
    questions[10].optionC = "Hafeez Jalandhari";
    questions[10].optionD = "Ahmad Faraz";
    questions[10].correctAnswer = 'C';

    // Question 12
    questions[11].question = "Which country is to the east of Pakistan?";
    questions[11].optionA = "Afghanistan";
    questions[11].optionB = "Iran";
    questions[11].optionC = "China";
    questions[11].optionD = "India";
    questions[11].correctAnswer = 'D';

    // Question 13
    questions[12].question = "What is the national bird of Pakistan?";
    questions[12].optionA = "Parrot";
    questions[12].optionB = "Chukar Partridge";
    questions[12].optionC = "Eagle";
    questions[12].optionD = "Peacock";
    questions[12].correctAnswer = 'B';

    // Question 14
    questions[13].question = "Which Pakistani became the first Muslim Nobel Peace Prize winner?";
    questions[13].optionA = "Imran Khan";
    questions[13].optionB = "Malala Yousafzai";
    questions[13].optionC = "Abdus Salam";
    questions[13].optionD = "Arfa Karim";
    questions[13].correctAnswer = 'B';

    // Question 15
    questions[14].question = "How many provinces does Pakistan have?";
    questions[14].optionA = "3";
    questions[14].optionB = "5";
    questions[14].optionC = "4";
    questions[14].optionD = "6";
    questions[14].correctAnswer = 'C';

    // Question 16
    questions[15].question = "Which city is known as the city of lights in Pakistan?";
    questions[15].optionA = "Lahore";
    questions[15].optionB = "Islamabad";
    questions[15].optionC = "Peshawar";
    questions[15].optionD = "Karachi";
    questions[15].correctAnswer = 'D';

    // Question 17
    questions[16].question = "What is the national sport of Pakistan?";
    questions[16].optionA = "Cricket";
    questions[16].optionB = "Hockey";
    questions[16].optionC = "Football";
    questions[16].optionD = "Kabaddi";
    questions[16].correctAnswer = 'B';

    // Question 18
    questions[17].question = "Which Pakistani cricketer is known as Shaheen?";
    questions[17].optionA = "Babar Azam";
    questions[17].optionB = "Shaheen Afridi";
    questions[17].optionC = "Wasim Akram";
    questions[17].optionD = "Shoaib Akhtar";
    questions[17].correctAnswer = 'B';

    // Question 19
    questions[18].question = "What is the total area of Pakistan in square kilometers?";
    questions[18].optionA = "581,000";
    questions[18].optionB = "881,913";
    questions[18].optionC = "700,000";
    questions[18].optionD = "1,000,000";
    questions[18].correctAnswer = 'B';

    // Question 20
    questions[19].question = "Which sea borders Pakistan to the south?";
    questions[19].optionA = "Red Sea";
    questions[19].optionB = "Arabian Sea";
    questions[19].optionC = "Indian Ocean";
    questions[19].optionD = "Persian Gulf";
    questions[19].correctAnswer = 'B';

    // Question 21
    questions[20].question = "Who was the first Prime Minister of Pakistan?";
    questions[20].optionA = "Ayub Khan";
    questions[20].optionB = "Zulfikar Ali Bhutto";
    questions[20].optionC = "Liaquat Ali Khan";
    questions[20].optionD = "Iskander Mirza";
    questions[20].correctAnswer = 'C';

    // Question 22
    questions[21].question = "Which Pakistani physicist won the Nobel Prize in Physics?";
    questions[21].optionA = "Pervez Hoodbhoy";
    questions[21].optionB = "Abdus Salam";
    questions[21].optionC = "AQ Khan";
    questions[21].optionD = "Samar Mubarakmand";
    questions[21].correctAnswer = 'B';

    // Question 23
    questions[22].question = "What is the name of Pakistan's intelligence agency?";
    questions[22].optionA = "RAW";
    questions[22].optionB = "CIA";
    questions[22].optionC = "ISI";
    questions[22].optionD = "MI6";
    questions[22].correctAnswer = 'C';

    // Question 24
    questions[23].question = "Which city is the capital of KPK province?";
    questions[23].optionA = "Quetta";
    questions[23].optionB = "Lahore";
    questions[23].optionC = "Multan";
    questions[23].optionD = "Peshawar";
    questions[23].correctAnswer = 'D';

    // Question 25
    questions[24].question = "What is the name of Pakistan's national cricket team's nickname?";
    questions[24].optionA = "Green Tigers";
    questions[24].optionB = "Shaheens";
    questions[24].optionC = "Green Shirts";
    questions[24].optionD = "Pakistan Lions";
    questions[24].correctAnswer = 'C';

    // Question 26
    questions[25].question = "Which dam is the largest in Pakistan?";
    questions[25].optionA = "Mangla Dam";
    questions[25].optionB = "Warsak Dam";
    questions[25].optionC = "Tarbela Dam";
    questions[25].optionD = "Chashma Dam";
    questions[25].correctAnswer = 'C';

    // Question 27
    questions[26].question = "What is the capital of Balochistan province?";
    questions[26].optionA = "Turbat";
    questions[26].optionB = "Quetta";
    questions[26].optionC = "Khuzdar";
    questions[26].optionD = "Gwadar";
    questions[26].correctAnswer = 'B';

    // Question 28
    questions[27].question = "Which Pakistani became the youngest Microsoft Certified Professional?";
    questions[27].optionA = "Malala Yousafzai";
    questions[27].optionB = "Arfa Karim";
    questions[27].optionC = "Sharmeen Obaid";
    questions[27].optionD = "Nergis Mavalvala";
    questions[27].correctAnswer = 'B';

    // Question 29
    questions[28].question = "What is the old name of Islamabad?";
    questions[28].optionA = "Rawalpindi was the old capital";
    questions[28].optionB = "Karachi was the old capital";
    questions[28].optionC = "Lahore was the old capital";
    questions[28].optionD = "Peshawar was the old capital";
    questions[28].correctAnswer = 'B';

    // Question 30
    questions[29].question = "Which country gifted Pakistan its first nuclear reactor?";
    questions[29].optionA = "China";
    questions[29].optionB = "Russia";
    questions[29].optionC = "USA";
    questions[29].optionD = "Canada";
    questions[29].correctAnswer = 'D';

    // Question 31
    questions[30].question = "What is the name of Pakistan's space agency?";
    questions[30].optionA = "ISRO";
    questions[30].optionB = "SUPARCO";
    questions[30].optionC = "NASA";
    questions[30].optionD = "SPARCO";
    questions[30].correctAnswer = 'B';

    // Question 32
    questions[31].question = "Which Pakistani won an Oscar award?";
    questions[31].optionA = "Imran Khan";
    questions[31].optionB = "Malala Yousafzai";
    questions[31].optionC = "Sharmeen Obaid Chinoy";
    questions[31].optionD = "Nusrat Fateh Ali Khan";
    questions[31].correctAnswer = 'C';

    // Question 33
    questions[32].question = "What is the second largest city of Pakistan?";
    questions[32].optionA = "Islamabad";
    questions[32].optionB = "Faisalabad";
    questions[32].optionC = "Lahore";
    questions[32].optionD = "Multan";
    questions[32].correctAnswer = 'C';

    // Question 34
    questions[33].question = "Which pass connects Pakistan with Afghanistan?";
    questions[33].optionA = "Bolan Pass";
    questions[33].optionB = "Khyber Pass";
    questions[33].optionC = "Karakoram Pass";
    questions[33].optionD = "Lowari Pass";
    questions[33].correctAnswer = 'B';

    // Question 35
    questions[34].question = "What is the largest desert in Pakistan?";
    questions[34].optionA = "Cholistan Desert";
    questions[34].optionB = "Thal Desert";
    questions[34].optionC = "Thar Desert";
    questions[34].optionD = "Kharan Desert";
    questions[34].correctAnswer = 'C';

    // Question 36
    questions[35].question = "Who designed the national flag of Pakistan?";
    questions[35].optionA = "Quaid-e-Azam";
    questions[35].optionB = "Allama Iqbal";
    questions[35].optionC = "Amiruddin Kidwai";
    questions[35].optionD = "Liaquat Ali Khan";
    questions[35].correctAnswer = 'C';

    // Question 37
    questions[36].question = "What does the green color in Pakistan's flag represent?";
    questions[36].optionA = "Peace";
    questions[36].optionB = "Muslim majority";
    questions[36].optionC = "Nature";
    questions[36].optionD = "Progress";
    questions[36].correctAnswer = 'B';

    // Question 38
    questions[37].question = "Which is the national tree of Pakistan?";
    questions[37].optionA = "Mango Tree";
    questions[37].optionB = "Deodar Tree";
    questions[37].optionC = "Neem Tree";
    questions[37].optionD = "Pine Tree";
    questions[37].correctAnswer = 'B';

    // Question 39
    questions[38].question = "What is the literacy rate of Pakistan approximately?";
    questions[38].optionA = "40%";
    questions[38].optionB = "70%";
    questions[38].optionC = "58%";
    questions[38].optionD = "80%";
    questions[38].correctAnswer = 'C';

    // Question 40
    questions[39].question = "Which Pakistani city is known as the city of gardens?";
    questions[39].optionA = "Islamabad";
    questions[39].optionB = "Multan";
    questions[39].optionC = "Lahore";
    questions[39].optionD = "Peshawar";
    questions[39].correctAnswer = 'C';

    // Question 41
    questions[40].question = "What is the name of Pakistan's national airline?";
    questions[40].optionA = "Air Blue";
    questions[40].optionB = "Pakistan International Airlines";
    questions[40].optionC = "Serene Air";
    questions[40].optionD = "Shaheen Air";
    questions[40].correctAnswer = 'B';

    // Question 42
    questions[41].question = "Which Pakistani cricketer is known as the Sultan of Swing?";
    questions[41].optionA = "Imran Khan";
    questions[41].optionB = "Waqar Younis";
    questions[41].optionC = "Wasim Akram";
    questions[41].optionD = "Shoaib Akhtar";
    questions[41].correctAnswer = 'C';

    // Question 43
    questions[42].question = "What is the height of K2 in meters?";
    questions[42].optionA = "7,000m";
    questions[42].optionB = "9,000m";
    questions[42].optionC = "8,611m";
    questions[42].optionD = "8,000m";
    questions[42].correctAnswer = 'C';

    // Question 44
    questions[43].question = "Which city is known as the heart of Pakistan?";
    questions[43].optionA = "Karachi";
    questions[43].optionB = "Islamabad";
    questions[43].optionC = "Peshawar";
    questions[43].optionD = "Lahore";
    questions[43].correctAnswer = 'D';

    // Question 45
    questions[44].question = "What is the name of Pakistan's parliament?";
    questions[44].optionA = "Lok Sabha";
    questions[44].optionB = "Majlis";
    questions[44].optionC = "Majlis-e-Shoora";
    questions[44].optionD = "Senate";
    questions[44].correctAnswer = 'C';

    // Question 46
    questions[45].question = "Which country is to the west of Pakistan?";
    questions[45].optionA = "India";
    questions[45].optionB = "China";
    questions[45].optionC = "Iran";
    questions[45].optionD = "Afghanistan";
    questions[45].correctAnswer = 'C';

    // Question 47
    questions[46].question = "What is the national fruit of Pakistan?";
    questions[46].optionA = "Apple";
    questions[46].optionB = "Mango";
    questions[46].optionC = "Banana";
    questions[46].optionD = "Orange";
    questions[46].correctAnswer = 'B';

    // Question 48
    questions[47].question = "Which Pakistani city is famous for its Sufi shrines?";
    questions[47].optionA = "Lahore";
    questions[47].optionB = "Karachi";
    questions[47].optionC = "Multan";
    questions[47].optionD = "Islamabad";
    questions[47].correctAnswer = 'C';

    // Question 49
    questions[48].question = "What is the name of the famous ancient city in Pakistan?";
    questions[48].optionA = "Taxila";
    questions[48].optionB = "Mohenjo-daro";
    questions[48].optionC = "Harappa";
    questions[48].optionD = "All of the above";
    questions[48].correctAnswer = 'D';

    // Question 50
    questions[49].question = "Which Pakistani city is known as the city of saints?";
    questions[49].optionA = "Lahore";
    questions[49].optionB = "Karachi";
    questions[49].optionC = "Multan";
    questions[49].optionD = "Quetta";
    questions[49].correctAnswer = 'C';

    // shuffle questions
    //this section was
                    // adjusted using claude, future correction must be done by claude
    srand(time(0));
    for(int i = 49; i > 0; i--)
     {
        int j = rand() % (i + 1);
        Question temp = questions[i];
        questions[i] = questions[j];
        questions[j] = temp;
    }

    // welcome message
    cout << "********************************" << endl;
    cout << "  PAKISTAN GENERAL KNOWLEDGE QUIZ" << endl;
    cout << "********************************" << endl;

    // ask how many questions
    int numQuestions;
    cout << "How many questions do you want? (max 50): ";
    cin >> numQuestions;

    //logical OR used, let you choose questions between 0 and 50, you cant exceed 50
    //while you cant chose 0 or less
    if(numQuestions > 50 || numQuestions <= 0) 
    {
        cout << "Invalid number! Please enter between 1 and 50." << endl;
        return 0;
    }

    // run quiz
    int score = 0;
    char answer;

    for(int i = 0; i < numQuestions; i++)
     {
        cout << "\nQuestion " << i+1 << "/" << numQuestions << ": " << questions[i].question << endl;
        cout << "A. " << questions[i].optionA << endl;
        cout << "B. " << questions[i].optionB << endl;
        cout << "C. " << questions[i].optionC << endl;
        cout << "D. " << questions[i].optionD << endl;
        cout << "Your answer (A/B/C/D): ";
        cin >> answer;
        answer = toupper(answer);

        if(answer == questions[i].correctAnswer) {
            cout << "Correct!" << endl;
            score++;
        }
         else
          {
            cout << "Wrong! Correct answer was: " << questions[i].correctAnswer << endl;
        }
    }

    // final score calculations and percentage tracker
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    " << endl;
    cout << "         QUIZ COMPLETE!" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "Your Score: " << score << "/" << numQuestions << endl;
    cout << "Percentage: " << (score * 100) / numQuestions << "%" << endl;

    if((score * 100) / numQuestions >= 80) 
    {
        cout << "Excellent! You know Pakistan very well!" << endl;
    }
     else if((score * 100) / numQuestions >= 50)
      {
        cout << "Good effort! Keep learning about Pakistan!" << endl;

    } 
    else 
    {
        cout << "Keep studying! You can do better!" << endl;
    }

    return 0;
}

