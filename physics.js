
    var i, mark = 0,correctanswer =0,wronganswer = 0,attented =0 ;
    var answer = ["c" , "a" , "d","a" , "b" , "d","d" , "c" , "a","c" , "a" , "c","c" , "b" , "d"];
    var ans = " ";

    function run(){
      if (ans == answer[i-1]) {
        mark = mark + 4;
        correctanswer = correctanswer + 1;
        attented = attented + 1;
      }
      else if (ans != answer[i-1]) {
        mark = mark - 1;
        wronganswer = wronganswer + 1;
        attented = attented + 1;
      }
    }



    function check()
    {
      for (i = 1; i < 16; i++) {
        if (i == 1) {
           ans = document.frm.q1.value;
        }
        else if (i == 2) {
           ans = document.frm.q2.value;
        }
        else if (i == 3) {
            ans = document.frm.q3.value;
        }
        else if (i == 4) {
           ans = document.frm.q4.value;
        }
        else if (i == 5) {
           ans = document.frm.q5.value;
        }
        else if (i == 6) {
             ans = document.frm.q6.value;
        }
        else if (i == 7) {
             ans = document.frm.q7.value;
        }
        else if (i == 8) {
             ans = document.frm.q8.value;
        }
        else if (i == 9) {
         ans = document.frm.q9.value;
        }
        else if (i == 10) {
           ans = document.frm.q10.value;
        }
        else if (i == 11) {
           ans = document.frm.q11.value;
        }
        else if (i == 12) {
           ans = document.frm.q12.value;
        }
        else if (i == 13) {
            ans = document.frm.q13.value;
        }
        else if (i == 14) {
            ans = document.frm.q14.value;
        }
        else if (i == 15) {
           ans = document.frm.q15.value;
        }
      run();
    }    //This is where the for loop ends
 //This is inside the function
    document.frm.attend.value = attented;
    document.frm.crct.value = correctanswer;
    document.frm.wrng.value = wronganswer;
    document.frm.score.value = mark;
  }
