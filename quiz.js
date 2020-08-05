const quizContainer = document.getElementById('quiz');
const resultsContainer = document.getElementById('results')
const submitButton = document.getElementById('submit');

const myQuestions = [
  {
    question: "Which of the following pair is not correct?",
    answer :{
      a:"Temperature - Thermometer",
      b: "Atmospheric pressure – Barometer",
      c: "Relative density - Hygrometer",
      d: "Unit of charge - Coulomb"
    },
    correctAnswer: "c"
  },
  {
    question : "One of the combinations from the fundamental physical constants is hc/G . The unit of this expression is",
    answer : {
      a:"kg",
      b:"m",
      c:"s",
      d:"none of these"
    },
    correctAnswer:"a"
  },
  {
    question : "Which one of the following is not a derived unit?",
    answer : {
      a:"Frequency",
      b:"Planck's constant",
      c:"Gravitational constant",
      d:"Electric current"
    },
    correctAnswer : "d"
  },
  {
    question : "The radius of a ball is (5.4 +/- 0.2)cm. The percentage error in the volume of the ball is",
    answer : {
      a:"11%",
      b:"4%",
      c:"7%",
      d:"9% "
    },
    correctAnswer : ""
  }
];

function buildQuiz()
{
  //variable to store HTML output
  const output = [];

  //for each question..
  myQuestions.forEach(
    (currentQuestion, questionNumber) = >{ 
//variable to store the list of the possible answers

    const answer = [];
    //for each available answer...
    for (letter in currentQuestion.answers){

      //..add a HTML radio submitButton

      answer.push(
        <label>
        <input type="radio" name="question${questionNumber}" value="${letter}">
                  ${letter} :
                  ${currentQuestion.answers[letter]}
                </label>`
              );
            }

            // add this question and its answers to the output
            output.push(
              `<div class="question"> ${currentQuestion.question} </div>
              <div class="answers"> ${answers.join('')} </div>
            );
          }
        );

        // finally combine our output list into one string of HTML and put it on the page
        quizContainer.innerHTML = output.join('');
      }


function showResults()
{

}

buildQuiz();

submitButton.addEventListener('click', showResults);
