#include <iostream>
#include <fstream>

using namespace std;

void createLoginPage();
void createSignupPage();
void createHomePage();
void createGamePage();
void createLeaderboardPage();
void createProfilePage();
void createSettingsPage();
int main()
{
    createLoginPage();
    createSignupPage();
    createHomePage();
	createGamePage();
	createLeaderboardPage();
	createProfilePage();
	createSettingsPage();
    cout << "Pages created successfully!" << endl;

    return 0;
}

void createLoginPage()
{
    ofstream file("login.html");

    file << "<!DOCTYPE html>";
    file << "<html>";

    file << "<head>";
    file << "<meta charset='UTF-8'>";
    file << "<title>Login</title>";

    file << "<style>";

    file << "body{";
    file << "margin:0;";
    file << "height:100vh;";
    file << "display:flex;";
    file << "justify-content:center;";
    file << "align-items:center;";
    file << "background:#312e2b;";
    file << "font-family:Arial,sans-serif;";
    file << "}";

    file << ".card{";
    file << "background:#262421;";
    file << "padding:40px;";
    file << "border-radius:15px;";
    file << "width:420px;";
    file << "text-align:center;";
    file << "box-shadow:0 0 20px rgba(0,0,0,0.4);";
    file << "}";

    file << "h1{";
    file << "color:white;";
    file << "margin-bottom:10px;";
    file << "}";

    file << "p{";
    file << "color:#cccccc;";
    file << "margin-bottom:25px;";
    file << "}";

    file << "input{";
    file << "width:90%;";
    file << "padding:12px;";
    file << "margin:8px 0;";
    file << "border:none;";
    file << "border-radius:8px;";
    file << "font-size:16px;";
    file << "}";


    file << "button{";
    file << "width:100%;";
    file << "padding:12px;";
    file << "margin-top:15px;";
    file << "background:#81b64c;";
    file << "color:white;";
    file << "border:none;";
    file << "border-radius:8px;";
    file << "font-size:18px;";
    file << "cursor:pointer;";
    file << "}";

    file << "button:hover{";
    file << "background:#6ea043;";
    file << "}";

    file << "a{";
    file << "color:#81b64c;";
    file << "text-decoration:none;";
    file << "}";

    file << "</style>";
    file << "</head>";

    file << "<body>";

    file << "<div class='card'>";

    file << "<h1>CHECKERS ARENA</h1>";
    file << "<p>Welcome Back</p>";

    file << "<input placeholder='Username'>";
    file << "<input type='password' placeholder='Password'>";

    file << "<button>LOGIN</button>";

    file << "<br><br>";
    file << "<a href='signup.html'>Create Account</a>";

    file << "</div>";

    file << "</body>";
    file << "</html>";

    file.close();
}

void createSignupPage()
{
    ofstream file("signup.html");

    file << "<!DOCTYPE html>";
    file << "<html>";

    file << "<head>";
    file << "<meta charset='UTF-8'>";
    file << "<title>Signup</title>";

    file << "<style>";

    file << "body{";
    file << "margin:0;";
    file << "height:100vh;";
    file << "display:flex;";
    file << "justify-content:center;";
    file << "align-items:center;";
    file << "background:#312e2b;";
    file << "font-family:Arial,sans-serif;";
    file << "}";

    file << ".card{";
    file << "background:#262421;";
    file << "padding:40px;";
    file << "border-radius:15px;";
    file << "width:420px;";
    file << "text-align:center;";
    file << "box-shadow:0 0 20px rgba(0,0,0,0.4);";
    file << "}";

    file << "h1{";
    file << "color:white;";
    file << "margin-bottom:10px;";
    file << "}";

    file << "p{";
    file << "color:#cccccc;";
    file << "margin-bottom:25px;";
    file << "}";

    file << "input{";
    file << "width:90%;";
    file << "padding:12px;";
    file << "margin:8px 0;";
    file << "border:none;";
    file << "border-radius:8px;";
    file << "font-size:16px;";
    file << "}";

    file << "button{";
    file << "width:100%;";
    file << "padding:12px;";
    file << "margin-top:15px;";
    file << "background:#81b64c;";
    file << "color:white;";
    file << "border:none;";
    file << "border-radius:8px;";
    file << "font-size:18px;";
    file << "cursor:pointer;";
    file << "}";

    file << "button:hover{";
    file << "background:#6ea043;";
    file << "}";

    file << "a{";
    file << "color:#81b64c;";
    file << "text-decoration:none;";
    file << "}";

    file << "</style>";
    file << "</head>";

    file << "<body>";

    file << "<div class='card'>";

    file << "<h1>CHECKERS ARENA</h1>";
    file << "<p>Create Account</p>";

    file << "<input placeholder='Username'>";
    file << "<input placeholder='Email'>";
    file << "<input type='password' placeholder='Password'>";
    file << "<input type='password' placeholder='Confirm Password'>";

    file << "<button>CREATE ACCOUNT</button>";

    file << "<br><br>";
    file << "<a href='login.html'>Already have an account? Login</a>";

    file << "</div>";

    file << "</body>";
    file << "</html>";

    file.close();
}

void createHomePage()
{
    ofstream file("home.html");

    file << "<!DOCTYPE html>";
    file << "<html>";
    file << "<head>";
	file << "<title>Home</title>";
	
	file << "<style>";
	
	file << "body{";
	file << "margin:0;";
	file << "background:#312e2b;";
	file << "font-family:Arial;";
	file << "display:flex;";
	file << "justify-content:center;";
	file << "align-items:center;";
	file << "height:100vh;";
	file << "color:white;";
	file << "}";
	
	file << ".container{";
	file << "background:#262421;";
	file << "padding:40px;";
	file << "border-radius:20px;";
	file << "width:600px;";
	file << "text-align:center;";
	file << "box-shadow:0 0 20px black;";
	file << "}";
	
	file << "button{";
	file << "width:280px;";
	file << "padding:15px;";
	file << "margin:10px;";
	file << "font-size:20px;";
	file << "background:#81b64c;";
	file << "border:none;";
	file << "border-radius:10px;";
	file << "color:white;";
	file << "cursor:pointer;";
	file << "}";
	
	
	file << "button:hover{";
	file << "background:#93c85b;";
	file << "transform:scale(1.03);";
	file << "}";
	
	file << "</style>";
	
	file << "</head>";

    file << "<body>";
	file << "<div class='container'>";
    file << "<h1>CHECKERS ARENA</h1>";
	file << "<p>Play Checkers Against Your Friends</p>";
    file << "<button style='width:320px;height:70px;font-size:28px;' onclick=\"location.href='game.html'\">PLAY NOW</button>";

	file << "<button onclick=\"location.href='leaderboard.html'\">Leaderboard</button><br><br>";
	
	file << "<button onclick=\"location.href='profile.html'\">Profile</button><br><br>";
	
	file << "<button onclick=\"location.href='settings.html'\">Settings</button>";
	file << "<br><br>";
    file << "<small>Version 1.0</small>";
    file << "</div>";
	file << "</body>";
    
    file << "</html>";

    file.close();
}
void createGamePage()
{
    ofstream file("game.html");

    file << "<!DOCTYPE html>";
    file << "<html>";

    file << "<head>";

    file << "<title>Checkers Game</title>";

    file << "<style>";

    file << "body{";
	file << "margin:0;";
	file << "background:#312e2b;";
	file << "font-family:Arial;";
	file << "color:white;";
	file << "}";
    file << ".board{";
    file << "display:grid;";
    file << "grid-template-columns:repeat(8,60px);";
    file << "border:4px solid white;";
    file << "margin-bottom:20px;";
    file << "}";

    file << ".cell{";
    file << "width:60px;";
    file << "height:60px;";
    file << "display:flex;";
    file << "justify-content:center;";
    file << "align-items:center;";
    file << "}";

    file << ".white{background:#f0d9b5;}";
    file << ".black{background:#b58863;}";

    file << ".piece{";
    file << "width:42px;";
    file << "height:42px;";
    file << "border-radius:50%;";
    file << "}";

    file << ".red{";
	file << "background:radial-gradient(circle at 30% 30%, #ff7777, #990000);";
	file << "box-shadow:0 4px 10px black;";
	file << "}";
	
	file << ".blackPiece{";
	file << "background:radial-gradient(circle at 30% 30%, #777777, #000000);";
	file << "box-shadow:0 4px 10px black;";
	file << "}";
	
	file << ".selected{";
	file << "box-shadow:0 0 20px lime;";
	file << "transform:scale(1.1);";
	file << "}";
	file << ".restartBtn{";
	file << "margin-top:20px;";
	file << "padding:12px 25px;";
	file << "font-size:18px;";
	file << "background:#81b64c;";
	file << "border:none;";
	file << "border-radius:10px;";
	file << "color:white;";
	file << "cursor:pointer;";
	file << "}";
	file << ".gameLayout{";
	file << "display:flex;";
	file << "justify-content:center;";
	file << "align-items:flex-start;";
	file << "gap:30px;";
	file << "margin-top:20px;";
	file << "}";
	
	file << ".leftPanel{";
	file << "width:180px;";
	file << "background:#262421;";
	file << "padding:20px;";
	file << "border-radius:10px;";
	file << "box-shadow:0 0 10px black;";
	file << "}";

	
	file << ".rightPanel{";
	file << "width:220px;";
	file << "height:520px;";
	file << "background:#262421;";
	file << "padding:20px;";
	file << "border-radius:10px;";
	file << "box-shadow:0 0 10px black;";
	file << "overflow-y:auto;";
	file << "scrollbar-width:thin;";
	file << "}";
	
	file << ".title{";
	file << "text-align:center;";
	file << "margin-top:20px;";
	file << "}";
    file << "</style>";

    file << "</head>";

    file << "<body>";

    file << "<h1 class='title'>CHECKERS ARENA</h1>";

	file << "<div class='gameLayout'>";
	
	file << "<div class='leftPanel'>";
	
	file << "<h2 id='turn'>Turn: Black</h2>";
	
	file << "<h3 id='blackTimer'>Black: 5:00</h3>";
	file << "<h3 id='redTimer'>Red: 5:00</h3>";
	file << "<h3 id='blackCaptured'>Black Captured: 0</h3>";
	file << "<h3 id='redCaptured'>Red Captured: 0</h3>";
	file << "<h3 id='moves'>Moves: 0</h3>";
	file << "</div>";
	
	file << "<div class='board' id='board'>";
	
	file << "</div>";
	
	file << "<div class='rightPanel'>";
	
	file << "<h3>Move History</h3>";
	
	file << "<div id='history'></div>";
	
	file << "</div>";
	
	file << "</div>";
	file << "<button id='restartBtn' class='restartBtn' onclick='restartGame()' style='display:none;'>Restart Game</button>";
    file << "<script>";
    file << "let board=[";
	file << "['','b','','b','','b','','b'],";
	file << "['b','','b','','b','','b',''],";
	file << "['','b','','b','','b','','b'],";
	file << "['','','','','','','',''],";
	file << "['','','','','','','',''],";
	file << "['r','','r','','r','','r',''],";
	file << "['','r','','r','','r','','r'],";
	file << "['r','','r','','r','','r','']";
	file << "];";
	file << "let currentTurn='b';";
	file << "let selected=null;";
	file << "let lastFrom=null;";
	file << "let lastTo=null;";
	file << "let blackTime=300;";
	file << "let redTime=300;";
	file << "let blackCaptured=0;";
	file << "let redCaptured=0;";
	file << "let moveCounter=0;";
	file << "let noCaptureMoves=0;";
	file << "document.getElementById('history').innerHTML='';";
	file << "let gameOver=false;";
	file << "function selectPiece(row,col){";

	
	file << "let piece=board[row][col];";
	file << "let canCapture=false;";

	file << "if(piece=='b'||piece=='B'){";
	
	file << "if(row+2<8 && col+2<8){";
	file << "if((board[row+1][col+1]=='r'||board[row+1][col+1]=='R') && board[row+2][col+2]=='')canCapture=true;";
	file << "}";
	
	file << "if(row+2<8 && col-2>=0){";
	file << "if((board[row+1][col-1]=='r'||board[row+1][col-1]=='R') && board[row+2][col-2]=='')canCapture=true;";
	file << "}";
	
	file << "if(row-2>=0 && col+2<8){";
	file << "if((board[row-1][col+1]=='r'||board[row-1][col+1]=='R') && board[row-2][col+2]=='')canCapture=true;";
	file << "}";
	
	file << "if(row-2>=0 && col-2>=0){";
	file << "if((board[row-1][col-1]=='r'||board[row-1][col-1]=='R') && board[row-2][col-2]=='')canCapture=true;";
	file << "}";
	
	file << "}";
	
	file << "if(piece=='r'||piece=='R'){";
	
	file << "if(row+2<8 && col+2<8){";
	file << "if((board[row+1][col+1]=='b'||board[row+1][col+1]=='B') && board[row+2][col+2]=='')canCapture=true;";
	file << "}";
	
	file << "if(row+2<8 && col-2>=0){";
	file << "if((board[row+1][col-1]=='b'||board[row+1][col-1]=='B') && board[row+2][col-2]=='')canCapture=true;";
	file << "}";
	
	file << "if(row-2>=0 && col+2<8){";
	file << "if((board[row-1][col+1]=='b'||board[row-1][col+1]=='B') && board[row-2][col+2]=='')canCapture=true;";
	file << "}";
	
	file << "if(row-2>=0 && col-2>=0){";
	file << "if((board[row-1][col-1]=='b'||board[row-1][col-1]=='B') && board[row-2][col-2]=='')canCapture=true;";
	file << "}";
	
	file << "}";
	file << "if(currentTurn=='b' && piece!='b' && piece!='B')return;";
	
	file << "if(currentTurn=='r' && piece!='r' && piece!='R')return;";
	file << "if(piece=='B'||piece=='R')canCapture=true;";
	file << "if(playerMustCapture() && !canCapture)return;";
	file << "selected={row:row,col:col};";
	
	file << "drawBoard();";
	
	file << "}";
	file << "function movePiece(newRow,newCol){";
	file << "if(gameOver)return;";
	file << "if(!selected)return;";
	
	file << "let moveSuccess=false;";
	file << "let oldRow=selected.row;";
	file << "let oldCol=selected.col;";
	file << "let movingPiece=board[oldRow][oldCol];";
	file << "let isKing=(movingPiece=='B'||movingPiece=='R');";
	file << "if(board[newRow][newCol]!='')return;";
	
	file << "let rowDiff=newRow-oldRow;";
	file << "let colDiff=Math.abs(newCol-oldCol);";
	
	file << "if(currentTurn=='b'){";
	
	file << "if(!isKing && rowDiff==1 && colDiff==1){";

	file << "board[newRow][newCol]=movingPiece;";
	file << "board[oldRow][oldCol]='';";
	file << "moveSuccess=true;";
	file << "document.getElementById('history').innerHTML+=";
	file << "'<div>Black: '+(oldRow+1)+','+(oldCol+1)+' -> '+(newRow+1)+','+(newCol+1)+'</div>';";
	
	file << "currentTurn='r';";
	
	file << "}";
	
	file << "if(isKing && colDiff==Math.abs(rowDiff)){";
	
	file << "let rowStep=(rowDiff>0)?1:-1;";
	file << "let colStep=(newCol-oldCol>0)?1:-1;";
	
	file << "let enemyCount=0;";
	file << "let enemyRow=-1;";
	file << "let enemyCol=-1;";
	
	file << "for(let i=1;i<Math.abs(rowDiff);i++){";
	
	file << "let r=oldRow+i*rowStep;";
	file << "let c=oldCol+i*colStep;";
	
	file << "if(board[r][c]=='r'||board[r][c]=='R'){";
	file << "enemyCount++;";
	file << "enemyRow=r;";
	file << "enemyCol=c;";
	file << "}";
	
	file << "if(board[r][c]=='b'||board[r][c]=='B'){";
	file << "enemyCount=99;";
	file << "}";
	
	file << "}";
	
	file << "if(enemyCount==0){";
	
	file << "board[newRow][newCol]=movingPiece;";
	file << "board[oldRow][oldCol]='';";
	file << "moveSuccess=true;";
	file << "}";
	
	file << "if(enemyCount==1){";
	
	file << "board[enemyRow][enemyCol]='';";
	
	file << "board[newRow][newCol]=movingPiece;";
	file << "board[oldRow][oldCol]='';";
	file << "lastFrom={row:oldRow,col:oldCol};";
	file << "lastTo={row:newRow,col:newCol};";
	file << "moveSuccess=true;";
	file << "}";
	
	file << "let canCaptureAgain=false;";

	file << "for(let dr=-1;dr<=1;dr+=2){";
	file << "for(let dc=-1;dc<=1;dc+=2){";
	
	file << "for(let step=1;step<8;step++){"; 
	
	file << "let r1=newRow+dr*step;";
	file << "let c1=newCol+dc*step;";
	
	file << "let r2=newRow+dr*(step+1);";
	file << "let c2=newCol+dc*(step+1);";
	
	file << "if(r2<0||r2>=8||c2<0||c2>=8)break;";
	
	file << "if((board[r1][c1]=='r'||board[r1][c1]=='R') && board[r2][c2]==''){";
	file << "canCaptureAgain=true;";
	file << "}";
	
	file << "}";
	
	file << "}";
	
	file << "}";
	
	file << "if(!canCaptureAgain){";
	file << "currentTurn='r';";
	file << "}else{";
	file << "selected={row:newRow,col:newCol};";
	file << "}";
	
	file << "}";
		
	file << "if((rowDiff==2||rowDiff==-2)&&colDiff==2){";

	file << "let midRow=(oldRow+newRow)/2;";
	file << "let midCol=(oldCol+newCol)/2;";
	
	file << "if(board[midRow][midCol]=='r' || board[midRow][midCol]=='R'){";
	
	file << "board[midRow][midCol]='';";
	file << "noCaptureMoves=0;";
	file << "blackCaptured++;";
	file << "document.getElementById('blackCaptured').innerText='Black Captured: '+blackCaptured;";
	file << "board[newRow][newCol]=movingPiece;";
	
	file << "board[oldRow][oldCol]='';";
	file << "moveSuccess=true;";
	file << "document.getElementById('history').innerHTML+=";
	file << "'<div>Black captured!</div>';";
	file << "let canCaptureAgain=false;";
	file << "if(newRow+2<8 && newCol+2<8){";
	file << "if((board[newRow+1][newCol+1]=='r'||board[newRow+1][newCol+1]=='R') && board[newRow+2][newCol+2]==''){";
	file << "canCaptureAgain=true;";
	file << "}";
	file << "}";
	file << "if(newRow+2<8 && newCol-2>=0){";
	file << "if((board[newRow+1][newCol-1]=='r'||board[newRow+1][newCol-1]=='R') && board[newRow+2][newCol-2]==''){";
	file << "canCaptureAgain=true;";
	file << "}";
	file << "if(newRow-2>=0 && newCol+2<8){";
	file << "if((board[newRow-1][newCol+1]=='r'||board[newRow-1][newCol+1]=='R') && board[newRow-2][newCol+2]==''){";
	file << "canCaptureAgain=true;";
	file << "}";
	file << "}";
	
	file << "if(newRow-2>=0 && newCol-2>=0){";
	file << "if((board[newRow-1][newCol-1]=='r'||board[newRow-1][newCol-1]=='R') && board[newRow-2][newCol-2]==''){";
	file << "canCaptureAgain=true;";
	file << "}";
	file << "}";
	file << "}";
	file << "if(!canCaptureAgain){";
	file << "currentTurn='r';";
	file << "}else{";
	file << "selected={row:newRow,col:newCol};";
	file << "}";
	file << "if(newRow-2>=0 && newCol+2<8){";
	file << "if((board[newRow-1][newCol+1]=='r'||board[newRow-1][newCol+1]=='R') && board[newRow-2][newCol+2]==''){";
	file << "canCaptureAgain=true;";
	file << "}";
	file << "}";
	
	file << "if(newRow-2>=0 && newCol-2>=0){";
	file << "if((board[newRow-1][newCol-1]=='r'||board[newRow-1][newCol-1]=='R') && board[newRow-2][newCol-2]==''){";
	file << "canCaptureAgain=true;";
	file << "}";
	file << "}";
	file << "}";
	
	file << "}";
	
	file << "}";
	
	file << "else{";
	
	file << "if(!isKing && rowDiff==-1 && colDiff==1){";

	file << "board[newRow][newCol]=movingPiece;";
	file << "board[oldRow][oldCol]='';";
	file << "moveSuccess=true;";
	file << "document.getElementById('history').innerHTML+=";
	file << "'<div>Red: '+(oldRow+1)+','+(oldCol+1)+' -> '+(newRow+1)+','+(newCol+1)+'</div>';";
	
	file << "currentTurn='b';";
	
	file << "}";
	
	file << "if(isKing && colDiff==Math.abs(rowDiff)){";
	
	file << "let rowStep=(rowDiff>0)?1:-1;";
	file << "let colStep=(newCol-oldCol>0)?1:-1;";
	
	file << "let enemyCount=0;";
	file << "let enemyRow=-1;";
	file << "let enemyCol=-1;";
	file << "let kingCaptured=false;";
	
	file << "for(let i=1;i<Math.abs(rowDiff);i++){";
	
	file << "let r=oldRow+i*rowStep;";
	file << "let c=oldCol+i*colStep;";
	
	file << "if(board[r][c]=='b'||board[r][c]=='B'){";
	file << "enemyCount++;";
	file << "enemyRow=r;";
	file << "enemyCol=c;";
	file << "}";
	
	file << "if(board[r][c]=='r'||board[r][c]=='R'){";
	file << "enemyCount=99;";
	file << "}";
	
	file << "}";
	
	file << "if(enemyCount==0){";
	
	file << "board[newRow][newCol]=movingPiece;";
	file << "board[oldRow][oldCol]='';";
	file << "moveSuccess=true;";
	file << "}";
	
	file << "if(enemyCount==1){";

	file << "kingCaptured=true;";
	
	file << "board[enemyRow][enemyCol]='';";
	
	file << "board[newRow][newCol]=movingPiece;";
	file << "board[oldRow][oldCol]='';";
	file << "moveSuccess=true;";
	file << "}";
	
	file << "let canCaptureAgain=false;";

	file << "for(let dr=-1;dr<=1;dr+=2){";
	file << "for(let dc=-1;dc<=1;dc+=2){";
	
	file << "for(let step=1;step<8;step++){"; 
	
	file << "let r1=newRow+dr*step;";
	file << "let c1=newCol+dc*step;";
	
	file << "let r2=newRow+dr*(step+1);";
	file << "let c2=newCol+dc*(step+1);";
	
	file << "if(r2<0||r2>=8||c2<0||c2>=8)break;";
	
	file << "if((board[r1][c1]=='b'||board[r1][c1]=='B') && board[r2][c2]==''){";
	file << "canCaptureAgain=true;";
	file << "}";
	
	file << "}";
	
	file << "}";
	
	file << "}";
	file << "if(newRow==7 && board[newRow][newCol]=='b'){";
	file << "board[newRow][newCol]='B';";
	
	file << "if(newRow-2>=0 && newCol+2<8){";
	file << "if((board[newRow-1][newCol+1]=='r'||board[newRow-1][newCol+1]=='R') && board[newRow-2][newCol+2]=='') canCaptureAgain=true;";
	file << "}";
	
	file << "if(newRow-2>=0 && newCol-2>=0){";
	file << "if((board[newRow-1][newCol-1]=='r'||board[newRow-1][newCol-1]=='R') && board[newRow-2][newCol-2]=='') canCaptureAgain=true;";
	file << "}";
	
	file << "}";
	file << "if(kingCaptured){";

	file << "if(!canCaptureAgain){";
	file << "currentTurn='b';";
	file << "}else{";
	file << "selected={row:newRow,col:newCol};";
	file << "}";
	
	file << "}else{";
	file << "currentTurn='b';";
	file << "}";
	
	file << "}";
	file << "if((rowDiff==2||rowDiff==-2)&&colDiff==2){";

	file << "let midRow=(oldRow+newRow)/2;";
	file << "let midCol=(oldCol+newCol)/2;";
	
	file << "if(board[midRow][midCol]=='b' || board[midRow][midCol]=='B'){";
	
	file << "board[midRow][midCol]='';";
	file << "noCaptureMoves=0;";
	file << "redCaptured++;";
	file << "document.getElementById('redCaptured').innerText='Red Captured: '+redCaptured;";
	file << "board[newRow][newCol]=movingPiece;";
	file << "board[oldRow][oldCol]='';";
	file << "moveSuccess=true;";
	file << "document.getElementById('history').innerHTML+=";
	file << "'<div>Red captured!</div>';";
	file << "let canCaptureAgain=false;";

	file << "if(newRow-2>=0 && newCol+2<8){";
	file << "if((board[newRow-1][newCol+1]=='b'||board[newRow-1][newCol+1]=='B') && board[newRow-2][newCol+2]==''){";
	file << "canCaptureAgain=true;";
	file << "}";
	file << "if(newRow+2<8 && newCol+2<8){";
	file << "if((board[newRow+1][newCol+1]=='b'||board[newRow+1][newCol+1]=='B') && board[newRow+2][newCol+2]==''){";
	file << "canCaptureAgain=true;";
	file << "}";
	file << "}";
	
	file << "if(newRow+2<8 && newCol-2>=0){";
	file << "if((board[newRow+1][newCol-1]=='b'||board[newRow+1][newCol-1]=='B') && board[newRow+2][newCol-2]==''){";
	file << "canCaptureAgain=true;";
	file << "}";
	file << "}";
	file << "}";
	
	file << "if(newRow-2>=0 && newCol-2>=0){";
	file << "if((board[newRow-1][newCol-1]=='b'||board[newRow-1][newCol-1]=='B') && board[newRow-2][newCol-2]==''){";
	file << "canCaptureAgain=true;";
	file << "}";
	file << "}";
	file << "if(newRow==0 && board[newRow][newCol]=='r'){";
	file << "board[newRow][newCol]='R';";
	
	file << "if(newRow+2<8 && newCol+2<8){";
	file << "if((board[newRow+1][newCol+1]=='b'||board[newRow+1][newCol+1]=='B') && board[newRow+2][newCol+2]=='') canCaptureAgain=true;";
	file << "}";
	
	file << "if(newRow+2<8 && newCol-2>=0){";
	file << "if((board[newRow+1][newCol-1]=='b'||board[newRow+1][newCol-1]=='B') && board[newRow+2][newCol-2]=='') canCaptureAgain=true;";
	file << "}";
	
	file << "}";
	file << "if(!canCaptureAgain){";
	file << "currentTurn='b';";
	file << "}else{";
	file << "selected={row:newRow,col:newCol};";
	file << "}";
	file << "if(newRow+2<8 && newCol+2<8){";
	file << "if((board[newRow+1][newCol+1]=='b'||board[newRow+1][newCol+1]=='B') && board[newRow+2][newCol+2]==''){";
	file << "canCaptureAgain=true;";
	file << "}";
	file << "}";
	
	file << "if(newRow+2<8 && newCol-2>=0){";
	file << "if((board[newRow+1][newCol-1]=='b'||board[newRow+1][newCol-1]=='B') && board[newRow+2][newCol-2]==''){";
	file << "canCaptureAgain=true;";
	file << "}";
	file << "}";
	file << "}";
	
	file << "}";

	file << "}";
	file << "if(newRow==7 && board[newRow][newCol]=='b'){";
	file << "board[newRow][newCol]='B';";
	file << "}";
	
	file << "if(newRow==0 && board[newRow][newCol]=='r'){";
	file << "board[newRow][newCol]='R';";
	file << "}";	
	file << "if(!moveSuccess)return;";
	file << "noCaptureMoves++;";
	file << "moveCounter++;";
	file << "document.getElementById('moves').innerText='Moves: '+moveCounter;";
	file << "selected=null;";
	file << "document.getElementById('turn').innerText=";
	file << "(currentTurn=='b')?'Turn: Black':'Turn: Red';";
	file << "let blackCount=0;";
	file << "let redCount=0;";
	
	file << "for(let r=0;r<8;r++){";
	file << "for(let c=0;c<8;c++){";
	
	file << "if(board[r][c]=='b'||board[r][c]=='B')blackCount++;";
	
	file << "if(board[r][c]=='r'||board[r][c]=='R')redCount++;";
	
	file << "}";
	
	file << "}";
	file << "if(blackCount==0 && !gameOver){";
	file << "gameOver=true;";
	file << "showWinner('RED WINS!');";
	file << "}";
	
	file << "if(redCount==0 && !gameOver){";
	file << "gameOver=true;";
	file << "showWinner('BLACK WINS!');";
	file << "}";
	file << "if(noCaptureMoves>=80 && !gameOver){";
	file << "gameOver=true;";
	file << "showWinner('DRAW!');";
	file << "}";
	
	file << "if(blackTime<=0 && !gameOver){";
	
	file << "gameOver=true;";
	file << "alert('RED WINS ON TIME!');";
	file << "document.getElementById('restartBtn').style.display='block';";
	file << "}";
	
	file << "if(redTime<=0 && !gameOver){";
	file << "gameOver=true;";
	file << "alert('BLACK WINS ON TIME!');";
	file << "document.getElementById('restartBtn').style.display='block';";
	file << "}";
	file << "drawBoard();";
	
	file << "}";
	file << "function playerMustCapture(){";

	file << "for(let r=0;r<8;r++){";
	file << "for(let c=0;c<8;c++){";
	
	file << "let p=board[r][c];";
	
	file << "if(currentTurn=='b' && (p=='b'||p=='B')){";
	file << "if(p=='B'){";

	file << "for(let dr=-1;dr<=1;dr+=2){";
	file << "for(let dc=-1;dc<=1;dc+=2){";
	
	file << "let enemyFound=false;";
	
	file << "for(let step=1;step<8;step++){"; 
	
	file << "let nr=r+dr*step;";
	file << "let nc=c+dc*step;";
	
	file << "if(nr<0||nr>=8||nc<0||nc>=8)break;";
	
	file << "if(board[nr][nc]=='b'||board[nr][nc]=='B')break;";
	
	file << "if(board[nr][nc]=='r'||board[nr][nc]=='R'){";
	file << "if(enemyFound)break;";
	file << "enemyFound=true;";
	file << "}";
	
	file << "if(enemyFound && board[nr][nc]=='')return true;";
	
	file << "}";
	
	file << "}";
	
	file << "}";
	
	file << "}";
	file << "if(r+2<8&&c+2<8){";
	file << "if((board[r+1][c+1]=='r'||board[r+1][c+1]=='R')&&board[r+2][c+2]=='')return true;";
	file << "}";
	
	file << "if(r+2<8&&c-2>=0){";
	file << "if((board[r+1][c-1]=='r'||board[r+1][c-1]=='R')&&board[r+2][c-2]=='')return true;";
	file << "}";
	
	file << "}";
	
	file << "if(currentTurn=='r' && (p=='r'||p=='R')){";
	file << "if(p=='R'){";

	file << "for(let dr=-1;dr<=1;dr+=2){";
	file << "for(let dc=-1;dc<=1;dc+=2){";
	
	file << "let enemyFound=false;";
	
	file << "for(let step=1;step<8;step++){"; 
	
	file << "let nr=r+dr*step;";
	file << "let nc=c+dc*step;";
	
	file << "if(nr<0||nr>=8||nc<0||nc>=8)break;";
	
	file << "if(board[nr][nc]=='r'||board[nr][nc]=='R')break;";
	
	file << "if(board[nr][nc]=='b'||board[nr][nc]=='B'){";
	file << "if(enemyFound)break;";
	file << "enemyFound=true;";
	file << "}";
	
	file << "if(enemyFound && board[nr][nc]=='')return true;";
	
	file << "}";
	
	file << "}";
	
	file << "}";
	
	file << "}";
	file << "if(r-2>=0&&c+2<8){";
	file << "if((board[r-1][c+1]=='b'||board[r-1][c+1]=='B')&&board[r-2][c+2]=='')return true;";
	file << "}";
	
	file << "if(r-2>=0&&c-2>=0){";
	file << "if((board[r-1][c-1]=='b'||board[r-1][c-1]=='B')&&board[r-2][c-2]=='')return true;";
	file << "}";
	
	file << "}";
	
	file << "}";
	
	file << "}";
	
	file << "return false;";
	file << "}";
	file << "function hasAnyMove(player){";

	file << "for(let r=0;r<8;r++){";
	file << "for(let c=0;c<8;c++){";
	
	file << "let p=board[r][c];";
	
	file << "if(player=='b' && (p=='b'||p=='B')){";
	
	file << "if(p=='b'){";
	file << "if(r+1<8 && c+1<8 && board[r+1][c+1]=='') return true;";
	file << "if(r+1<8 && c-1>=0 && board[r+1][c-1]=='') return true;";
	file << "}";
	
	file << "if(p=='B'){";
	file << "for(let dr=-1;dr<=1;dr+=2){";
	file << "for(let dc=-1;dc<=1;dc+=2){";
	file << "for(let step=1;step<8;step++){";
	file << "let nr=r+dr*step;";
	file << "let nc=c+dc*step;";
	file << "if(nr<0||nr>=8||nc<0||nc>=8) break;";
	file << "if(board[nr][nc]=='') return true;";
	file << "break;";
	file << "}";
	file << "}";
	file << "}";
	file << "}";
	file << "}";
	
	file << "if(player=='r' && (p=='r'||p=='R')){";
	
	file << "if(p=='r'){";
	file << "if(r-1>=0 && c+1<8 && board[r-1][c+1]=='') return true;";
	file << "if(r-1>=0 && c-1>=0 && board[r-1][c-1]=='') return true;";
	file << "}";
	
	file << "if(p=='R'){";
	file << "for(let dr=-1;dr<=1;dr+=2){";
	file << "for(let dc=-1;dc<=1;dc+=2){";
	file << "for(let step=1;step<8;step++){";
	file << "let nr=r+dr*step;";
	file << "let nc=c+dc*step;";
	file << "if(nr<0||nr>=8||nc<0||nc>=8) break;";
	file << "if(board[nr][nc]=='') return true;";
	file << "break;";
	file << "}";
	file << "}";
	file << "}";
	file << "}";
	file << "}";
	
	file << "}"; 
	file << "}";
	
	file << "return playerMustCapture();";
	file << "}";
	file << "function drawBoard(){";

	file << "let boardDiv=document.getElementById('board');";
	
	file << "boardDiv.innerHTML='';";
	
	file << "for(let row=0;row<8;row++){";
	
	file << "for(let col=0;col<8;col++){";
	
	file << "let cell=document.createElement('div');";
	
	file << "cell.className='cell '+(((row+col)%2==0)?'white':'black');";
	file << "if(lastFrom && lastFrom.row==row && lastFrom.col==col){";
	file << "cell.style.background='#d6c24b';";
	file << "}";
	
	file << "if(lastTo && lastTo.row==row && lastTo.col==col){";
	file << "cell.style.background='#d6c24b';";
	file << "}";
	file << "let piece=board[row][col];";
	
	file << "if(piece!=''){";
	
	file << "let p=document.createElement('div');";
	
	file << "p.classList.add('piece');";
	
	file << "if(piece=='b'||piece=='B'){";
	file << "p.classList.add('blackPiece');";
	file << "}else{";
	file << "p.classList.add('red');";
	file << "}";
	file << "if(piece=='B'||piece=='R'){";
	file << "p.innerHTML='&#9812;';";
	file << "p.style.color='gold';";
	file << "p.style.fontWeight='bold';";
	file << "p.style.fontSize='28px';";
	file << "p.style.display='flex';";
	file << "p.style.justifyContent='center';";
	file << "p.style.alignItems='center';";
	file << "}";
		
	file << "if(selected && selected.row==row && selected.col==col){";

	file << "p.classList.add('selected');";
	
	file << "}";
	
	file << "p.onclick=function(e){";
	
	file << "e.stopPropagation();";
	
	file << "selectPiece(row,col);";
	
	file << "};";
	
	file << "cell.appendChild(p);";
	
	file << "}";
	
	file << "cell.onclick=function(){";
	
	file << "movePiece(row,col);";
	
	file << "};";
	
	file << "boardDiv.appendChild(cell);";
	
	file << "}";
	
	file << "}";
	
	file << "}";
	file << "function restartGame(){";
	file << "board=[";
	
	file << "['','b','','b','','b','','b'],";
	file << "['b','','b','','b','','b',''],";
	file << "['','b','','b','','b','','b'],";
	file << "['','','','','','','',''],";
	file << "['','','','','','','',''],";
	file << "['r','','r','','r','','r',''],";
	file << "['','r','','r','','r','','r'],";
	file << "['r','','r','','r','','r','']";
	
	file << "];";
	
	file << "currentTurn='b';";
	file << "selected=null;";
	file << "blackTime=300;";
	file << "redTime=300;";
	file << "blackCaptured=0;";
	file << "redCaptured=0;";
	file << "moveCounter=0;";
	file << "noCaptureMoves=0;";
	
	file << "document.getElementById('blackCaptured').innerText='Black Captured: 0';";
	file << "document.getElementById('redCaptured').innerText='Red Captured: 0';";
	file << "moveCounter=0;";
	file << "document.getElementById('moves').innerText='Moves: 0';";
	file << "document.getElementById('turn').innerText='Turn: Black';";
	file << "document.getElementById('winnerPopup').style.display='none';";
	file << "gameOver=false;";
	file << "drawBoard();";
	
	file << "}";
	file << "function showWinner(text){";
	file << "document.getElementById('winnerText').innerText=text;";
	file << "document.getElementById('winnerPopup').style.display='flex';";
	file << "}";
	file << "setInterval(function(){";

	file << "if(currentTurn=='b' && blackTime>0){";
	file << "blackTime--;";
	file << "}";
	
	file << "if(currentTurn=='r' && redTime>0){";
	file << "redTime--;";
	file << "}";
	
	file << "let bm=Math.floor(blackTime/60);";
	file << "let bs=blackTime%60;";
	
	file << "let rm=Math.floor(redTime/60);";
	file << "let rs=redTime%60;";
	
	file << "if(bs<10){";
	file << "bs='0'+bs;";
	file << "}";
	
	file << "if(rs<10){";
	file << "rs='0'+rs;";
	file << "}";
	
	file << "document.getElementById('blackTimer').innerText='Black: '+bm+':'+bs;";
	
	file << "document.getElementById('redTimer').innerText='Red: '+rm+':'+rs;";
	file << "if(blackTime<=30){";
	file << "document.getElementById('blackTimer').style.color='red';";
	file << "}";
	
	file << "if(redTime<=30){";
	file << "document.getElementById('redTimer').style.color='red';";
	file << "}";
	file << "if(blackTime<=0){";
	file << "showWinner('RED WINS ON TIME!');";
	file << "document.getElementById('restartBtn').style.display='block';";
	file << "}";
	
	file << "if(redTime<=0){";
	file << "showWinner('BLACK WINS ON TIME!');";
	file << "document.getElementById('restartBtn').style.display='block';";
	file << "}";
	file << "if(currentTurn=='b' && !hasAnyMove('b') && !gameOver){";
	file << "gameOver=true;";
	file << "showWinner('RED WINS! NO MOVES');";
	file << "}";
	
	file << "if(currentTurn=='r' && !hasAnyMove('r') && !gameOver){";
	file << "gameOver=true;";
	file << "showWinner('BLACK WINS! NO MOVES');";
	file << "}";
	file << "},1000);";
	
	file << "drawBoard();";
	
	file << "</script>";

	file << "<div id='winnerPopup' style='display:none;position:fixed;top:0;left:0;width:100%;height:100%;background:rgba(0,0,0,0.8);justify-content:center;align-items:center;z-index:9999;'>";
	file << "<div style='background:#262421;padding:40px;border-radius:15px;text-align:center;color:white;'>";
	file << "<style>";
	file << "#winnerPopup button{padding:12px 25px;font-size:18px;background:#81b64c;color:white;border:none;border-radius:10px;cursor:pointer;}";
	file << "#winnerPopup button:hover{background:#93c85b;}";
	file << "</style>";
	file << "<h1 id='winnerText'>WINNER</h1>";
	file << "<button onclick='restartGame()'>Play Again</button>";
	file << "<br><br>";
	file << "<button onclick=\"location.href='home.html'\">Return Home</button>";
	file << "</div>";
	file << "</div>";
	
	file << "</body>";
	file << "</html>";
	file.close();
}
void createLeaderboardPage()
{
    ofstream file("leaderboard.html");

    file << "<!DOCTYPE html>";
    file << "<html>";

    file << "<head>";
    file << "<meta charset='UTF-8'>";
    file << "<title>Leaderboard</title>";

    file << "<style>";

    file << "body{";
    file << "margin:0;";
    file << "background:#312e2b;";
    file << "font-family:Arial,sans-serif;";
    file << "display:flex;";
    file << "justify-content:center;";
    file << "align-items:center;";
    file << "height:100vh;";
    file << "}";

    file << ".card{";
    file << "background:#262421;";
    file << "padding:40px;";
    file << "border-radius:15px;";
    file << "width:700px;";
    file << "box-shadow:0 0 20px rgba(0,0,0,0.4);";
    file << "}";

    file << "h1{";
    file << "color:white;";
    file << "text-align:center;";
    file << "margin-bottom:25px;";
    file << "}";

    file << "table{";
    file << "width:100%;";
    file << "border-collapse:collapse;";
    file << "}";

    file << "th{";
    file << "background:#81b64c;";
    file << "color:white;";
    file << "padding:12px;";
    file << "}";

    file << "td{";
    file << "padding:12px;";
    file << "text-align:center;";
    file << "color:white;";
    file << "border-bottom:1px solid #444;";
    file << "}";

    file << "tr:hover{";
    file << "background:#333;";
    file << "}";

    file << "</style>";
    file << "</head>";

    file << "<body>";

    file << "<div class='card'>";

    file << "<h1>LEADERBOARD</h1>";

    file << "<table>";

    file << "<tr>";
    file << "<th>Rank</th>";
    file << "<th>Player</th>";
    file << "<th>Rating</th>";
    file << "<th>Wins</th>";
    file << "</tr>";

    file << "<tr>";
    file << "<td>#1</td>";
    file << "<td>Nandin</td>";
    file << "<td>1625</td>";
    file << "<td>15</td>";
    file << "</tr>";

    file << "<tr>";
    file << "<td>#2</td>";
    file << "<td>Bat</td>";
    file << "<td>1580</td>";
    file << "<td>12</td>";
    file << "</tr>";

    file << "<tr>";
    file << "<td>#3</td>";
    file << "<td>Tsetsgee</td>";
    file << "<td>1490</td>";
    file << "<td>9</td>";
    file << "</tr>";

    file << "</table>";

    file << "</div>";

    file << "</body>";
    file << "</html>";

    file.close();
}
void createProfilePage()
{
    ofstream file("profile.html");

    file << "<!DOCTYPE html>";
    file << "<html>";

    file << "<body>";
    file << "<style>";

	file << "body{";
	file << "background:#312e2b;";
	file << "color:white;";
	file << "font-family:Arial;";
	file << "display:flex;";
	file << "justify-content:center;";
	file << "align-items:center;";
	file << "height:100vh;";
	file << "}";
	
	file << ".card{";
	file << "background:#262421;";
	file << "width:500px;";
	file << "padding:30px;";
	file << "border-radius:20px;";
	file << "box-shadow:0 0 20px rgba(0,0,0,0.4);";
	file << "}";
	
	file << "</style>";
	file << "<div class='card'>";
    file << "<h1>PROFILE</h1>";

	file << "<hr>";
	
	file << "<h2>Nandin</h2>";
	
	file << "<p><b>Rating:</b> 1625</p>";
	
	file << "<p><b>Games:</b> 20</p>";
	file << "<p><b>Wins:</b> 15</p>";
	file << "<p><b>Losses:</b> 5</p>";
	
	file << "<p><b>Win Rate:</b> 75%</p>";
	
	file << "<hr>";
	
	file << "<h3>Recent Results</h3>";
	
	file << "<p>Win vs Bat (+16)</p>";
	file << "<p>Win vs Tsetsgee (+12)</p>";
	file << "<p>Loss vs Bold (-14)</p>";
	file << "</div>";
    file << "</body>";
    file << "</html>";

    file.close();
}
void createSettingsPage()
{
    ofstream file("settings.html");

    file << "<!DOCTYPE html>";
    file << "<html>";

    file << "<body>";
	file << "<style>";

	file << "body{";
	file << "background:#312e2b;";
	file << "display:flex;";
	file << "justify-content:center;";
	file << "align-items:center;";
	file << "height:100vh;";
	file << "font-family:Arial;";
	file << "}";
	
	file << ".card{";
	file << "background:#262421;";
	file << "padding:40px;";
	file << "border-radius:15px;";
	file << "width:450px;";
	file << "color:white;";
	file << "}";
	
	file << "button{";
	file << "width:100%;";
	file << "padding:12px;";
	file << "margin-top:10px;";
	file << "background:#81b64c;";
	file << "border:none;";
	file << "border-radius:8px;";
	file << "color:white;";
	file << "cursor:pointer;";
	file << "}";

	file << "</style>";
	
    file << "<div class='card'>";

	file << "<h1>SETTINGS</h1>";
	
	file << "<h3>Theme</h3>";
	
	file << "<button>Dark Mode</button>";
	file << "<button>Light Mode</button>";
	
	file << "<h3>Language</h3>";
	
	file << "<button>English</button>";
	file << "<button>Mongolian</button>";
	
	file << "</div>";

    file << "</body>";
    file << "</html>";

    file.close();
}

