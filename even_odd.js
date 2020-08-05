function check() {
  if (isNaN(document.num.num1.value) || document.num.num1.value == NULL)
  {
      alert("Enter a Number Please");
  }
  else {  var x;
      x=Number(document.num.num1.value);
      if (x%2==0) {
        alert("The number is Even");
      }
      else {
        alert("The Number is odd");
      }
 }
}
