var canvas;
var ctx;

var head;
var apple;
var ball;

var dots;
var apple_x;
var apple_y;

var leftDirection = false;
var rightDirection = true;
var upDirection = false;
var downDirection = false;
var inGame = true;

const DOT_Size = 10;
const ALL_Dots = 900;
const MAX_Rand = 29;
const DELAY = 140;
const C_Height = 300;
const C_Width = 300;

const LEFT_KEY = 37;
const RIGHT_KEY = 39;
const UP_KEY = 38;
const DOWN_KEY = 40;

var x = new Array(ALL_Dots);
var y = new Array(ALL_Dots);

function start()
{

    canvas = document.getElementById('mycanvas');
    ctx = canvas.getContext('2d');

    loadImages();
    createSnake();
    locateApple();
    setTimeout("gamecycle()" , DELAY);

}

function loadImages()   {

    head = new image();
    head.src = 'E:/aswnss/inkscape/head.png';

    ball = new image();
    ball.src = 'E:/aswnss/inkscape/ball.png';

    apple = new image();
    apple.src = 'E:/aswnss/inkscape/apple.png';
}

function createSnake() {

    dots =3;
    for ( var z =0; z < dots; z++) {
      x[z] = 50 -z * 10;
      y[z] = 50;
    }
}

function checkApple()   {

    if((x[0] == apple_x) && (y[0] == apple_y)) {
        dots++;
        locateApple();

    }
}

function doDraw ()  {

    ctx.clearRect(0, 0, C_Width, C_Height);

    if(inGame){

        ctx.drawImage(apple, apple_x, apple_y);

        for(var z = 0; z < dots; z++)   {

            if(z==0)    {
             ctx.drawImage(head, x[z], y[z]);
             }
             else   {
             ctx.drawImage(head, x[z], y[z]);
             }
            }

        }
    else {
        gameOver();
    }
    }

function gameOver() {
    ctx.fillstyle = 'white';
    ctx.textBaseline = 'middile';
    ctx.textAlign = 'center';
    ctx.font ='normal bold 18px serif';

    ctx.fillText('Game Over', C_Width/2, C_Height/2);
}

function 
