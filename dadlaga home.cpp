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
    cout << "Pages created successfully with Dark/Light mode!" << endl;

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
    
    file << ":root {";
    file << "  --bg-color: #312e2b;";
    file << "  --card-bg: #262421;";
    file << "  --text-color: #ffffff;";
    file << "  --text-sub: #cccccc;";
    file << "  --border-color: #444444;";
    file << "}";
    file << "[data-theme='light'] {";
    file << "  --bg-color: #f5f5f5;";
    file << "  --card-bg: #ffffff;";
    file << "  --text-color: #262421;";
    file << "  --text-sub: #555555;";
    file << "  --border-color: #cccccc;";
    file << "}";

    file << "body{";
    file << "margin:0;";
    file << "height:100vh;";
    file << "display:flex;";
    file << "justify-content:center;";
    file << "align-items:center;";
    file << "background:var(--bg-color);";
    file << "color:var(--text-color);";
    file << "font-family:Arial,sans-serif;";
    file << "transition: background 0.3s, color 0.3s;";
    file << "}";

    file << ".card{";
    file << "background:var(--card-bg);";
    file << "padding:40px;";
    file << "border-radius:15px;";
    file << "width:420px;";
    file << "text-align:center;";
    file << "box-shadow:0 0 20px rgba(0,0,0,0.4);";
    file << "transition: background 0.3s;";
    file << "}";

    file << "h1{";
    file << "color:var(--text-color);";
    file << "margin-bottom:10px;";
    file << "}";

    file << "p{";
    file << "color:var(--text-sub);";
    file << "margin-bottom:25px;";
    file << "}";

    file << "input{";
    file << "width:90%;";
    file << "padding:12px;";
    file << "margin:8px 0;";
    file << "border:1px solid var(--border-color);";
    file << "border-radius:8px;";
    file << "font-size:16px;";
    file << "background:transparent;";
    file << "color:var(--text-color);";
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
    
    file << "<script>";
    file << "document.documentElement.setAttribute('data-theme', localStorage.getItem('theme') || 'dark');";
    file << "</script>";
    file << "</head>";

    file << "<body>";
    file << "<div class='card'>";
    file << "<h1>CHECKERS ARENA</h1>";
    file << "<p>Welcome Back</p>";
    file << "<input id='username' placeholder='Username'>";
    file << "<input id='password' type='password' placeholder='Password'>";
    file << "<button onclick='login()'>LOGIN</button>";
    file << "<br><br>";
    file << "<a href='signup.html'>Create Account</a>";
    file << "</div>";
    file << "<script>";
    
    file << "function login(){";
    file << "let username=document.getElementById('username').value;";
    file << "let password=document.getElementById('password').value;";
    file << "let user=JSON.parse(localStorage.getItem('user'));";
    file << "if(!user){";
    file << "alert('No account found');";
    file << "return;";
    file << "}";
    file << "if(username===user.username && password===user.password){";
    file << "localStorage.setItem('loggedIn','true');";
    file << "location.href='home.html';";
    file << "}else{";
    file << "alert('Wrong username or password');";
    file << "}";
    file << "}";
    
    file << "</script>";
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
    
    file << ":root {";
    file << "  --bg-color: #312e2b;";
    file << "  --card-bg: #262421;";
    file << "  --text-color: #ffffff;";
    file << "  --text-sub: #cccccc;";
    file << "  --border-color: #444444;";
    file << "}";
    file << "[data-theme='light'] {";
    file << "  --bg-color: #f5f5f5;";
    file << "  --card-bg: #ffffff;";
    file << "  --text-color: #262421;";
    file << "  --text-sub: #555555;";
    file << "  --border-color: #cccccc;";
    file << "}";

    file << "body{";
    file << "margin:0;";
    file << "height:100vh;";
    file << "display:flex;";
    file << "justify-content:center;";
    file << "align-items:center;";
    file << "background:var(--bg-color);";
    file << "color:var(--text-color);";
    file << "font-family:Arial,sans-serif;";
    file << "transition: background 0.3s, color 0.3s;";
    file << "}";

    file << ".card{";
    file << "background:var(--card-bg);";
    file << "padding:40px;";
    file << "border-radius:15px;";
    file << "width:420px;";
    file << "text-align:center;";
    file << "box-shadow:0 0 20px rgba(0,0,0,0.4);";
    file << "transition: background 0.3s;";
    file << "}";

    file << "h1{";
    file << "color:var(--text-color);";
    file << "margin-bottom:10px;";
    file << "}";

    file << "p{";
    file << "color:var(--text-sub);";
    file << "margin-bottom:25px;";
    file << "}";

    file << "input{";
    file << "width:90%;";
    file << "padding:12px;";
    file << "margin:8px 0;";
    file << "border:1px solid var(--border-color);";
    file << "border-radius:8px;";
    file << "font-size:16px;";
    file << "background:transparent;";
    file << "color:var(--text-color);";
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
    
    file << "<script>";
    file << "document.documentElement.setAttribute('data-theme', localStorage.getItem('theme') || 'dark');";
    file << "</script>";
    file << "</head>";

    file << "<body>";
    file << "<div class='card'>";
    file << "<h1>CHECKERS ARENA</h1>";
    file << "<p>Create Account</p>";
    file << "<input id='username' placeholder='Username'>";
    file << "<input id='email' placeholder='Email'>";
    file << "<input id='password' type='password' placeholder='Password'>";
    file << "<input id='confirmPassword' type='password' placeholder='Confirm Password'>";
    file << "<button onclick='signup()'>CREATE ACCOUNT</button>";
    file << "<br><br>";
    file << "<a href='login.html'>Already have an account? Login</a>";
    file << "</div>";
    file << "<script>";
    
    file << "function signup(){";
    file << "let username=document.getElementById('username').value;";
    file << "let email=document.getElementById('email').value;";
    file << "let password=document.getElementById('password').value;";
    file << "let confirmPassword=document.getElementById('confirmPassword').value;";
    file << "if(username==''||email==''||password==''){";
    file << "alert('Fill all fields');";
    file << "return;";
    file << "}";
    file << "if(password!==confirmPassword){";
    file << "alert('Passwords do not match');";
    file << "return;";
    file << "}";
    file << "let user={";
    file << "username:username,";
    file << "email:email,";
    file << "password:password,";
    file << "rating:1200,";
    file << "wins:0,";
    file << "losses:0,";
    file << "games:0";
    file << "};";
    file << "localStorage.setItem('user',JSON.stringify(user));";
    file << "alert('Account Created Successfully!');";
    file << "location.href='login.html';";
    file << "}";
    
    file << "</script>";
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
    file << "<meta charset='UTF-8'>";
    file << "<title>Checkers Arena</title>";
    file << "<style>";
    file << "*{margin:0;padding:0;box-sizing:border-box;}";
    
    file << ":root {";
    file << "  --bg-gradient: linear-gradient(135deg,#1e1e1e,#312e2b,#1a1a1a);";
    file << "  --container-bg: rgba(38,36,33,0.88);";
    file << "  --card-bg: #1f1f1f;";
    file << "  --text-color: #ffffff;";
    file << "  --text-sub: #cccccc;";
    file << "}";
    file << "[data-theme='light'] {";
    file << "  --bg-gradient: linear-gradient(135deg,#e0e0e0,#f5f5f5,#d5d5d5);";
    file << "  --container-bg: rgba(255,255,255,0.9);";
    file << "  --card-bg: #eaeaea;";
    file << "  --text-color: #262421;";
    file << "  --text-sub: #555555;";
    file << "}";

    file << "body{";
    file << "height:100vh;";
    file << "display:flex;";
    file << "justify-content:center;";
    file << "align-items:center;";
    file << "font-family:Arial,sans-serif;";
    file << "background:var(--bg-gradient);";
    file << "overflow:hidden;";
    file << "transition: background 0.3s;";
    file << "}";

    file << ".container{";
    file << "width:850px;";
    file << "background:var(--container-bg);";
    file << "backdrop-filter:blur(12px);";
    file << "border-radius:25px;";
    file << "padding:40px;";
    file << "text-align:center;";
    file << "box-shadow:0 0 35px rgba(0,0,0,0.7);";
    file << "color:var(--text-color);";
    file << "animation:fadeIn 1s ease;";
    file << "transition: background 0.3s, color 0.3s;";
    file << "}";

    file << "@keyframes fadeIn{";
    file << "from{opacity:0;transform:translateY(40px);} ";
    file << "to{opacity:1;transform:translateY(0);} ";
    file << "}";

    file << ".logo{";
    file << "font-size:64px;";
    file << "font-weight:bold;";
    file << "letter-spacing:4px;";
    file << "margin-bottom:10px;";
    file << "text-shadow:0 0 20px #81b64c;";
    file << "}";

    file << ".subtitle{";
    file << "font-size:22px;";
    file << "color:var(--text-sub);";
    file << "margin-bottom:35px;";
    file << "}";

    file << ".playOptions {";
    file << "  display: flex;";
    file << "  justify-content: center;";
    file << "  gap: 20px;";
    file << "  margin-bottom: 25px;";
    file << "}";

    file << ".playBtn{";
    file << "width:260px;";
    file << "height:75px;";
    file << "font-size:22px;";
    file << "font-weight:bold;";
    file << "background:#81b64c;";
    file << "border:none;";
    file << "border-radius:15px;";
    file << "color:white;";
    file << "cursor:pointer;";
    file << "transition:0.3s;";
    file << "box-shadow:0 0 20px rgba(129,182,76,0.5);";
    file << "}";

    file << ".playBtn:hover{";
    file << "transform:scale(1.06);";
    file << "background:#93c85b;";
    file << "}";

    file << ".playBtn.pvp{ background: #4a752c; box-shadow:0 0 20px rgba(74,117,44,0.5); }";
    file << ".playBtn.pvp:hover{ background: #5c8f37; }";

    file << ".menu{";
    file << "margin-top:15px;";
    file << "}";

    file << ".menu button{";
    file << "width:180px;";
    file << "padding:12px;";
    file << "margin:8px;";
    file << "font-size:16px;";
    file << "background:#444;";
    file << "border:none;";
    file << "border-radius:12px;";
    file << "color:white;";
    file << "cursor:pointer;";
    file << "transition:0.3s;";
    file << "}";

    file << ".menu button:hover{";
    file << "background:#81b64c;";
    file << "transform:translateY(-3px);";
    file << "}";

    file << ".stats{";
    file << "display:flex;";
    file << "justify-content:center;";
    file << "gap:25px;";
    file << "margin-top:35px;";
    file << "}";

    file << ".card{";
    file << "width:180px;";
    file << "background:var(--card-bg);";
    file << "padding:20px;";
    file << "border-radius:15px;";
    file << "box-shadow:0 0 15px rgba(0,0,0,0.4);";
    file << "transition: background 0.3s;";
    file << "}";

    file << ".card h2{";
    file << "color:#81b64c;";
    file << "margin-bottom:10px;";
    file << "}";

    file << ".version{";
    file << "margin-top:30px;";
    file << "color:#999;";
    file << "}";
    file << "</style>";
    
    file << "<script>";
    file << "document.documentElement.setAttribute('data-theme', localStorage.getItem('theme') || 'dark');";
    file << "if(localStorage.getItem('loggedIn')!='true'){";
    file << "location.href='login.html';";
    file << "}";
    file << "function startGame(mode) {";
    file << "  localStorage.setItem('gameMode', mode);";
    file << "  location.href = 'game.html';";
    file << "}";
    file << "window.onload=function(){";
    file << "let user=JSON.parse(localStorage.getItem('user'));";
    file << "if(user){";
    file << "document.getElementById('rating').innerText=user.rating;";
    file << "document.getElementById('wins').innerText=user.wins;";
    file << "document.getElementById('games').innerText=user.games;";
    file << "}";
    file << "};";
    file << "</script>";
    file << "</head>";

    file << "<body>";
    file << "<div class='container'>";
    file << "<div class='logo'>CHECKERS ARENA</div>";
    file << "<div class='subtitle'>Ultimate Online Checkers Experience</div>";
    
    file << "<div class='playOptions'>";
    file << "  <button class='playBtn' onclick=\"startGame('bot')\">PLAY VS BOT</button>";
    file << "  <button class='playBtn pvp' onclick=\"startGame('pvp')\">PLAYER VS PLAYER</button>";
    file << "</div>";

    file << "<div class='menu'>";
    file << "<button onclick=\"location.href='leaderboard.html'\">Leaderboard</button>";
    file << "<button onclick=\"location.href='profile.html'\">Profile</button>";
    file << "<button onclick=\"location.href='settings.html'\">Settings</button>";
    file << "</div>";
    
    file << "<div class='stats'>";
    file << "<div class='card'><h2>Rating</h2><p id='rating'>1200</p></div>";
    file << "<div class='card'><h2>Wins</h2><p id='wins'>0</p></div>";
    file << "<div class='card'><h2>Games</h2><p id='games'>0</p></div>";
    file << "</div>";
    file << "<div class='version'>Version 2.0</div>";
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
    file << "<meta charset='UTF-8'>";
    file << "<title>Checkers Game</title>";
    file << "<style>";
    
    file << ":root {";
    file << "  --bg-color: #312e2b;";
    file << "  --panel-bg: #262421;";
    file << "  --text-color: #ffffff;";
    file << "  --board-white: #f0d9b5;";
    file << "  --board-black: #b58863;";
    file << "}";
    file << "[data-theme='light'] {";
    file << "  --bg-color: #f5f5f5;";
    file << "  --panel-bg: #ffffff;";
    file << "  --text-color: #262421;";
    file << "  --board-white: #f0d9b5;";
    file << "  --board-black: #b58863;";
    file << "}";

    file << "body{margin:0;background:var(--bg-color);font-family:Arial;color:var(--text-color);transition: background 0.3s, color 0.3s;}";
    
    // ??????????? ??????? ????????? ???? wrapper ??????
    file << ".board-wrapper { display: grid; grid-template-columns: 30px 480px; grid-template-rows: 30px 480px; margin-bottom: 20px; }";
    file << ".coord-row { grid-column: 2; display: flex; justify-content: space-around; align-items: center; font-weight: bold; font-size: 14px; color: var(--text-color); }";
    file << ".coord-col { grid-row: 2; display: flex; flex-direction: column; justify-content: space-around; align-items: center; font-weight: bold; font-size: 14px; color: var(--text-color); }";
    
    file << ".board{grid-column: 2; grid-row: 2; display:grid; grid-template-columns:repeat(8,60px); grid-template-rows:repeat(8,60px); border:4px solid var(--text-color); position: relative;}";
    file << ".cell{width:60px;height:60px;display:flex;justify-content:center;align-items:center;position: relative;}";
    file << ".white{background:var(--board-white);}";
    file << ".black{background:var(--board-black);}";
    file << ".piece{width:42px;height:42px;border-radius:50%;cursor:pointer;z-index: 2;}";
    file << ".red{background:radial-gradient(circle at 30% 30%, #ff7777, #990000);box-shadow:0 4px 10px black;}";
    file << ".blackPiece{background:radial-gradient(circle at 30% 30%, #777777, #000000);box-shadow:0 4px 10px black;}";
    file << ".selected{box-shadow:0 0 20px lime;transform:scale(1.1);}";
    
    // Highlight ?????? ????????? ???? CSS ??????
    file << ".suggested-move { width: 14px; height: 14px; background-color: rgba(0, 255, 0, 0.6); border-radius: 50%; pointer-events: none; position: absolute; z-index: 3; }";
    file << ".suggested-capture { box-shadow: inset 0 0 15px rgba(255, 0, 0, 0.6); }";
    
    file << ".restartBtn{margin-top:20px;padding:12px 25px;font-size:18px;background:#81b64c;border:none;border-radius:10px;color:white;cursor:pointer;}";
    file << ".gameLayout{display:flex;justify-content:center;align-items:flex-start;gap:30px;margin-top:20px;}";
    file << ".leftPanel{width:200px;background:var(--panel-bg);padding:20px;border-radius:10px;box-shadow:0 0 10px black;transition: background 0.3s;}";
    file << ".rightPanel{width:240px;height:520px;background:var(--panel-bg);padding:20px;border-radius:10px;box-shadow:0 0 10px black;overflow-y:auto;transition: background 0.3s;}";
    file << ".title{text-align:center;margin-top:20px;}";
    file << ".exitBtn{width:100%;padding:10px;background:#555;color:white;border:none;border-radius:5px;cursor:pointer;margin-top:15px;}";
    file << "</style>";
    
    file << "<script>";
    file << "document.documentElement.setAttribute('data-theme', localStorage.getItem('theme') || 'dark');";
    file << "</script>";
    file << "</head>";
    file << "<body>";

    file << "<h1 class='title'>CHECKERS ARENA</h1>";
    file << "<div class='gameLayout'>";
    file << "<div class='leftPanel'>";
    file << "<h3 id='gameModeText' style='color:#81b64c;text-align:center;'>Mode: Single</h3>";
    file << "<h2 id='turn'>Turn: Black</h2>";
    file << "<h3 id='blackTimer'>Black: 5:00</h3>";
    file << "<h3 id='redTimer'>Red: 5:00</h3>";
    file << "<h3 id='blackCaptured'>Black Captured: 0</h3>";
    file << "<h3 id='redCaptured'>Red Captured: 0</h3>";
    file << "<h3 id='moves'>Moves: 0</h3>";
    file << "<button class='exitBtn' onclick=\"location.href='home.html'\">Exit</button>";
    file << "</div>";
    
    // ????????? ????? ???? ??????? ?????
    file << "<div class='board-wrapper'>";
    file << "  <div class='coord-row'><div>A</div><div>B</div><div>C</div><div>D</div><div>E</div><div>F</div><div>G</div><div>H</div></div>";
    file << "  <div class='coord-col'><div>8</div><div>7</div><div>6</div><div>5</div><div>4</div><div>3</div><div>2</div><div>1</div></div>";
    file << "  <div class='board' id='board'></div>";
    file << "</div>";
    
    file << "<div class='rightPanel'>";
    file << "<h3>Move History</h3>";
    file << "<div id='history' style='font-size:14px; line-height:20px;'></div>";
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
    file << "let activeMoves=[];"; // ???????? ??????????? ???????? ???? ??????
    file << "let lastFrom=null; let lastTo=null;";
    file << "let blackTime=300; let redTime=300;";
    file << "let blackCaptured=0; let redCaptured=0;";
    file << "let moveCounter=0; let noCaptureMoves=0;";
    file << "let gameOver=false;";
    
    file << "let gameMode = localStorage.getItem('gameMode') || 'bot';";
    file << "let isBotMode = (gameMode === 'bot');";
    
    file << "let moveSound=new Audio('move.mp3');";
    file << "let captureSound=new Audio('capture.mp3');";
    file << "let winSound=new Audio('win.mp3');";
    file << "let isMultiCaptureMode=false;";
    file << "let botConsecutivePiece=null;";
    
    file << "document.getElementById('gameModeText').innerText = isBotMode ? 'Mode: vs BOT' : 'Mode: PVP';";

    file << "function playSound(audio){";
    file << "  try{audio.currentTime=0; let p=audio.play(); if(p&&p.catch)p.catch(()=>{});}catch(e){}";
    file << "}";

    file << "function getCaptureMovesForPiece(row, col) {";
    file << "  let piece = board[row][col];";
    file << "  if (!piece) return [];";
    file << "  let moves = [];";
    file << "  let isKing = (piece === 'B' || piece === 'R');";
    file << "  let enemyColors = (piece.toLowerCase() === 'b') ? ['r', 'R'] : ['b', 'B'];";
    file << "  let dirs = [[1,1], [1,-1], [-1,1], [-1,-1]];";
    file << "  if (isKing) {";
    file << "    for (let [dr, dc] of dirs) {";
    file << "      let r = row + dr; let c = col + dc;";
    file << "      let enemyFound = null;";
    file << "      while (r >= 0 && r < 8 && c >= 0 && c < 8) {";
    file << "        if (board[r][c] === '') {";
    file << "          if (enemyFound) moves.push({from:{row:row,col:col}, to:{row:r,col:c}, cap:enemyFound});";
    file << "        } else if (enemyColors.includes(board[r][c])) {";
    file << "          if (enemyFound) break;";
    file << "          enemyFound = {row:r, col:c};";
    file << "        } else { break; }";
    file << "        r += dr; c += dc;";
    file << "      }";
    file << "    }";
    file << "  } else {";
    file << "    for (let [dr, dc] of dirs) {";
    file << "      let enemyRow = row + dr; let enemyCol = col + dc;";
    file << "      let nextRow = row + dr * 2; let nextCol = col + dc * 2;";
    file << "      if (nextRow >= 0 && nextRow < 8 && nextCol >= 0 && nextCol < 8) {";
    file << "        if (enemyColors.includes(board[enemyRow][enemyCol]) && board[nextRow][nextCol] === '') {";
    file << "          moves.push({from:{row:row,col:col}, to:{row:nextRow,col:nextCol}, cap:{row:enemyRow,col:enemyCol}});";
    file << "        }";
    file << "      }";
    file << "    }";
    file << "  }";
    file << "  return moves;";
    file << "}";

    file << "function getNormalMovesForPiece(row, col) {";
    file << "  let piece = board[row][col];";
    file << "  if (!piece) return [];";
    file << "  let moves = [];";
    file << "  let isKing = (piece === 'B' || piece === 'R');";
    file << "  let dirs = [];";
    file << "  if (isKing) dirs = [[1,1], [1,-1], [-1,1], [-1,-1]];";
    file << "  else dirs = (piece === 'b') ? [[1,1], [1,-1]] : [[-1,1], [-1,-1]];";
    
    file << "  if (isKing) {";
    file << "    for (let [dr, dc] of dirs) {";
    file << "      let r = row + dr; let c = col + dc;";
    file << "      while (r >= 0 && r < 8 && c >= 0 && c < 8) {";
    file << "        if (board[r][c] === '') moves.push({from:{row:row,col:col}, to:{row:r,col:c}});";
    file << "        else break;";
    file << "        r += dr; c += dc;";
    file << "      }";
    file << "    }";
    file << "  } else {";
    file << "    for (let [dr, dc] of dirs) {";
    file << "      let r = row + dr; let c = col + dc;";
    file << "      if (r >= 0 && r < 8 && c >= 0 && c < 8 && board[r][c] === '') {";
    file << "        moves.push({from:{row:row,col:col}, to:{row:r,col:c}});";
    file << "      }";
    file << "    }";
    file << "  }";
    file << "  return moves;";
    file << "}";

    file << "function getAllCaptureMoves(turn) {";
    file << "  let moves = [];";
    file << "  for (let r=0; r<8; r++) {";
    file << "    for (let c=0; c<8; c++) {";
    file << "      if (board[r][c] && board[r][c].toLowerCase() === turn) {";
    file << "        moves.push(...getCaptureMovesForPiece(r, c));";
    file << "      }";
    file << "    }";
    file << "  }";
    file << "  return moves;";
    file << "}";

    // ?????? highlight ???? ???????? selectPiece-? ???????
    file << "function selectPiece(row, col) {";
    file << "  if (gameOver) return;";
    file << "  if (isBotMode && currentTurn === 'r') return;"; 
    file << "  if (isMultiCaptureMode) {";
    file << "    if (selected && selected.row === row && selected.col === col) return;";
    file << "  }";
    file << "  let piece = board[row][col];";
    file << "  if (!piece || piece.toLowerCase() !== currentTurn) return;";
    file << "  let allCaps = getAllCaptureMoves(currentTurn);";
    
    file << "  if (allCaps.length > 0) {";
    file << "    let thisPieceCaps = getCaptureMovesForPiece(row, col);";
    file << "    if (thisPieceCaps.length === 0) return;";
    file << "    activeMoves = thisPieceCaps;";
    file << "  } else {";
    file << "    activeMoves = getNormalMovesForPiece(row, col);";
    file << "  }";
    
    file << "  selected = {row:row, col:col};";
    file << "  drawBoard();";
    file << "}";

    file << "function convertToNotation(row, col) {";
    file << "  let letters = ['A','B','C','D','E','F','G','H'];";
    file << "  return letters[col] + (8 - row);";
    file << "}";

    file << "function movePiece(newRow, newCol) {";
    file << "  if (!selected || gameOver) return;";
    file << "  let oldRow = selected.row; let oldCol = selected.col;";
    file << "  let piece = board[oldRow][oldCol];";
    file << "  let validMove = activeMoves.find(m => m.to.row === newRow && m.to.col === newCol);";
    file << "  if (!validMove) return;";

    file << "  board[newRow][newCol] = piece;";
    file << "  board[oldRow][oldCol] = '';";
    file << "  let captured = false;";
    file << "  if (validMove.cap) {";
    file << "    board[validMove.cap.row][validMove.cap.col] = '';";
    file << "    captured = true;";
    file << "    if (currentTurn === 'b') {";
    file << "      blackCaptured++; document.getElementById('blackCaptured').innerText='Black Captured: '+blackCaptured;";
    file << "    } else {";
    file << "      redCaptured++; document.getElementById('redCaptured').innerText='Red Captured: '+redCaptured;";
    file << "    }";
    file << "    noCaptureMoves = 0;";
    file << "  } else { noCaptureMoves++; }";

    file << "  if (newRow === 7 && board[newRow][newCol] === 'b') board[newRow][newCol] = 'B';";
    file << "  if (newRow === 0 && board[newRow][newCol] === 'r') board[newRow][newCol] = 'R';";
    file << "  lastFrom = {row:oldRow, col:oldCol}; lastTo = {row:newRow, col:newCol};";
    
    // Notation ??????? ??????? ?????? (A3 -> B4 ??? ???)
    file << "  let moveString = convertToNotation(oldRow, oldCol) + ' &rarr; ' + convertToNotation(newRow, newCol);";
    file << "  document.getElementById('history').innerHTML += '<div>' + (currentTurn==='b' ? 'Black' : 'Red') + ': ' + moveString + '</div>';";
    file << "  if (captured) playSound(captureSound); else playSound(moveSound);";

    file << "  if (captured) {";
    file << "    let extraCaps = getCaptureMovesForPiece(newRow, newCol);";
    file << "    if (extraCaps.length > 0) {";
    file << "      isMultiCaptureMode = true;";
    file << "      selected = {row:newRow, col:newCol};";
    file << "      activeMoves = extraCaps;";
    file << "      drawBoard(); return;";
    file << "    }";
    file << "  }";

    file << "  isMultiCaptureMode = false; selected = null; activeMoves = [];";
    file << "  currentTurn = (currentTurn === 'b') ? 'r' : 'b';";
    file << "  moveCounter++; document.getElementById('moves').innerText='Moves: '+moveCounter;";
    file << "  document.getElementById('turn').innerText = (currentTurn === 'b') ? 'Turn: Black' : 'Turn: Red';";
    file << "  checkGameStatus();";
    file << "  drawBoard();";
    
    file << "  if (isBotMode && currentTurn === 'r' && !gameOver) {";
    file << "    setTimeout(makeBotMove, 800);";
    file << "  }";
    file << "}";

    file << "function makeBotMove() {";
    file << "  if (gameOver) return;";
    file << "  let validMove = null;";
    
    file << "  if (botConsecutivePiece) {";
    file << "    let extraCaps = getCaptureMovesForPiece(botConsecutivePiece.row, botConsecutivePiece.col);";
    file << "    if (extraCaps.length > 0) validMove = extraCaps[0];";
    file << "  } else {";
    file << "    let allCaps = getAllCaptureMoves('r');";
    file << "    if (allCaps.length > 0) {";
    file << "      validMove = allCaps[0];";
    file << "    } else {";
    file << "      let allNormalMoves = [];";
    file << "      for (let r = 0; r < 8; r++) {";
    file << "        for (let c = 0; c < 8; c++) {";
    file << "          if (board[r][c] && board[r][c].toLowerCase() === 'r') {";
    file << "            allNormalMoves.push(...getNormalMovesForPiece(r, c));";
    file << "          }";
    file << "        }";
    file << "      }";
    file << "      if (allNormalMoves.length === 0) return;";
    file << "      let randomIdx = Math.floor(Math.random() * allNormalMoves.length);";
    file << "      validMove = allNormalMoves[randomIdx];";
    file << "    }";
    file << "  }";
    
    file << "  if (!validMove) { botConsecutivePiece = null; return; }";
    
    file << "  let oldRow = validMove.from.row; let oldCol = validMove.from.col;";
    file << "  let newRow = validMove.to.row; let newCol = validMove.to.col;";
    file << "  let piece = board[oldRow][oldCol];";
    file << "  board[newRow][newCol] = piece;";
    file << "  board[oldRow][oldCol] = '';";
    file << "  let captured = false;";
    file << "  if (validMove.cap) {";
    file << "    board[validMove.cap.row][validMove.cap.col] = '';";
    file << "    captured = true;";
    file << "    redCaptured++; document.getElementById('redCaptured').innerText='Red Captured: '+redCaptured;";
    file << "    noCaptureMoves = 0;";
    file << "  } else { noCaptureMoves++; }";
    file << "  if (newRow === 0 && board[newRow][newCol] === 'r') board[newRow][newCol] = 'R';";
    file << "  lastFrom = {row:oldRow, col:oldCol}; lastTo = {row:newRow, col:newCol};";
    
    file << "  let moveString = convertToNotation(oldRow, oldCol) + ' &rarr; ' + convertToNotation(newRow, newCol);";
    file << "  document.getElementById('history').innerHTML += '<div style=\"color:#ff7777;\">Bot (Red): ' + moveString + '</div>';";
    file << "  if (captured) playSound(captureSound); else playSound(moveSound);";
    
    file << "  if (captured) {";
    file << "    let extraCaps = getCaptureMovesForPiece(newRow, newCol);";
    file << "    if (extraCaps.length > 0) {";
    file << "      botConsecutivePiece = {row:newRow, col:newCol};";
    file << "      setTimeout(makeBotMove, 600);";
    file << "      drawBoard(); return;";
    file << "    }";
    file << "  }";
    file << "  botConsecutivePiece = null;";
    file << "  currentTurn = 'b';";
    file << "  moveCounter++; document.getElementById('moves').innerText='Moves: '+moveCounter;";
    file << "  document.getElementById('turn').innerText = 'Turn: Black';";
    file << "  checkGameStatus();";
    file << "  drawBoard();";
    file << "}";

    file << "function checkGameStatus() {";
    file << "  let bCount = 0; let rCount = 0;";
    file << "  for(let r=0; r<8; r++){";
    file << "    for(let c=0; c<8; c++){";
    file << "      if(board[r][c] && board[r][c].toLowerCase()==='b') bCount++;";
    file << "      if(board[r][c] && board[r][c].toLowerCase()==='r') rCount++;";
    file << "    }";
    file << "  }";
    file << "  if(bCount===0) { gameOver=true; showWinner('RED WINS!'); return; }";
    file << "  if(rCount===0) { gameOver=true; showWinner('BLACK WINS!'); return; }";
    file << "  if(noCaptureMoves>=80) { gameOver=true; showWinner('DRAW (80 moves no capture)!'); return; }";
    file << "  let currentHasMoves = false;";
    file << "  for(let r=0; r<8; r++){";
    file << "    for(let c=0; c<8; c++){";
    file << "      if(board[r][c] && board[r][c].toLowerCase() === currentTurn) {";
    file << "        if(getCaptureMovesForPiece(r,c).length > 0 || getNormalMovesForPiece(r,c).length > 0) currentHasMoves = true;";
    file << "      }";
    file << "    }";
    file << "  }";
    file << "  if(!currentHasMoves) {";
    file << "    gameOver = true;";
    file << "    showWinner(currentTurn === 'b' ? 'RED WINS! (No moves)' : 'BLACK WINS! (No moves)');";
    file << "  }";
    file << "}";

    // ???????????? drawBoard ????? (Highlight ????? ????)
    file << "function drawBoard(){";
    file << "  let boardDiv=document.getElementById('board'); boardDiv.innerHTML='';";
    file << "  for(let row=0; row<8; row++){";
    file << "    for(let col=0; col<8; col++){";
    file << "      let cell=document.createElement('div');";
    file << "      cell.className='cell '+(((row+col)%2===0)?'white':'black');";
    file << "      if((lastFrom && lastFrom.row===row && lastFrom.col===col) || (lastTo && lastTo.row===row && lastTo.col===col)){";
    file << "        cell.style.background='#d6c24b';";
    file << "      }";
    
    // ??? ??? ??? ???? ????? ??????? ??????
    file << "      let moveFound = activeMoves.find(m => m.to.row === row && m.to.col === col);";
    file << "      if(moveFound) {";
    file << "        if(moveFound.cap) {";
    file << "          cell.classList.add('suggested-capture');"; // ???? ?????? ????????
    file << "        } else {";
    file << "          let dot = document.createElement('div');";
    file << "          dot.className = 'suggested-move';"; // ?????? ???????? ?????? ??????
    file << "          cell.appendChild(dot);";
    file << "        }";
    file << "      }";
    
    file << "      let piece=board[row][col];";
    file << "      if(piece!==''){";
    file << "        let p=document.createElement('div'); p.classList.add('piece');";
    file << "        p.classList.add((piece.toLowerCase()==='b')?'blackPiece':'red');";
    file << "        if(piece==='B'||piece==='R'){";
    file << "          p.innerHTML='&#9812;'; p.style.color='gold'; p.style.fontWeight='bold';";
    file << "          p.style.fontSize='28px'; p.style.display='flex'; p.style.justifyContent='center'; p.style.alignItems='center';";
    file << "        }";
    file << "        if(selected && selected.row===row && selected.col===col) p.classList.add('selected');";
    file << "        p.onclick=function(e){ e.stopPropagation(); selectPiece(row,col); };";
    file << "        cell.appendChild(p);";
    file << "      }";
    file << "      cell.onclick=function(){ if(!gameOver) { if(isBotMode && currentTurn==='r') return; movePiece(row,col); } };";
    file << "      boardDiv.appendChild(cell);";
    file << "    }";
    file << "  }";
    file << "}";

    file << "function restartGame(){";
    file << "  board=[['','b','','b','','b','','b'],['b','','b','','b','','b',''],['','b','','b','','b','','b'],['','','','','','','',''],['','','','','','','',''],['r','','r','','r','','r',''],['','r','','r','','r','','r'],['r','','r','','r','','r','']];";
    file << "  currentTurn='b'; selected=null; activeMoves=[]; lastFrom=null; lastTo=null; blackTime=300; redTime=300; blackCaptured=0; redCaptured=0; moveCounter=0; noCaptureMoves=0; gameOver=false; isMultiCaptureMode=false; botConsecutivePiece=null;";
    file << "  document.getElementById('blackCaptured').innerText='Black Captured: 0'; document.getElementById('redCaptured').innerText='Red Captured: 0'; document.getElementById('moves').innerText='Moves: 0'; document.getElementById('turn').innerText='Turn: Black'; document.getElementById('winnerPopup').style.display='none';";
    file << "  document.getElementById('history').innerHTML='';";
    file << "  document.getElementById('blackTimer').style.color='var(--text-color)'; document.getElementById('redTimer').style.color='var(--text-color)';";
    file << "  drawBoard();";
    file << "}";

    file << "function showWinner(text){";
    file << "gameOver=true;";
    file << "playSound(winSound);";
    file << "let user=JSON.parse(localStorage.getItem('user'));";
    file << "if(user){";
    file << "user.games++;";
    file << "if(text.includes('BLACK WINS')){";
    file << "user.wins++;";
    file << "user.rating+=25;";
    file << "}else if(text.includes('RED WINS')){";
    file << "user.losses++;";
    file << "if(user.rating>1000){";
    file << "user.rating-=10;";
    file << "}";
    file << "}";
    file << "localStorage.setItem('user',JSON.stringify(user));";
    file << "}";
    file << "document.getElementById('winnerText').innerText=text;";
    file << "document.getElementById('winnerPopup').style.display='flex';";
    file << "}";

    file << "setInterval(function(){";
    file << "  if(gameOver) return;";
    file << "  if(currentTurn==='b' && blackTime>0) blackTime--;";
    file << "  if(currentTurn==='r' && redTime>0) redTime--;";
    file << "  let bm=Math.floor(blackTime/60); let bs=blackTime%60;";
    file << "  let rm=Math.floor(redTime/60); let rs=redTime%60;";
    file << "  document.getElementById('blackTimer').innerText='Black: '+bm+':'+(bs<10?'0':'')+bs;";
    file << "  document.getElementById('redTimer').innerText='Red: '+rm+':'+(rs<10?'0':'')+rs;";
    file << "  if(blackTime<=0){ gameOver=true; showWinner('RED WINS ON TIME!'); }";
    file << "  if(redTime<=0){ gameOver=true; showWinner('BLACK WINS ON TIME!'); }";
    file << "},1000);";

    file << "drawBoard();";
    file << "</script>";

    file << "<div id='winnerPopup' style='display:none;position:fixed;top:0;left:0;width:100%;height:100%;background:rgba(0,0,0,0.8);justify-content:center;align-items:center;z-index:9999;'>";
    file << "<div style='background:var(--panel-bg);padding:40px;border-radius:15px;text-align:center;color:var(--text-color);'>";
    file << "<style>#winnerPopup button{padding:12px 25px;font-size:18px;background:#81b64c;color:white;border:none;border-radius:10px;cursor:pointer;margin:5px;} #winnerPopup button:hover{background:#93c85b;}</style>";
    file << "<h1 id='winnerText'>WINNER</h1>";
    file << "<button onclick='restartGame()'>Play Again</button><br><br>";
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
    
    file << ":root {";
    file << "  --bg-color: #312e2b;";
    file << "  --card-bg: #262421;";
    file << "  --text-color: #ffffff;";
    file << "  --border-color: #444444;";
    file << "}";
    file << "[data-theme='light'] {";
    file << "  --bg-color: #f5f5f5;";
    file << "  --card-bg: #ffffff;";
    file << "  --text-color: #262421;";
    file << "  --border-color: #cccccc;";
    file << "}";

    file << "body{";
    file << "margin:0;";
    file << "background:var(--bg-color);";
    file << "font-family:Arial,sans-serif;";
    file << "display:flex;";
    file << "justify-content:center;";
    file << "align-items:center;";
    file << "height:100vh;";
    file << "transition: background 0.3s;";
    file << "}";

    file << ".card{";
    file << "background:var(--card-bg);";
    file << "padding:40px;";
    file << "border-radius:15px;";
    file << "width:700px;";
    file << "box-shadow:0 0 20px rgba(0,0,0,0.4);";
    file << "transition: background 0.3s;";
    file << "}";

    file << "h1{";
    file << "color:var(--text-color);";
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
    file << "color:var(--text-color);";
    file << "border-bottom:1px solid var(--border-color);";
    file << "}";

    file << "tr:hover{";
    file << "background:rgba(129,182,76,0.2);";
    file << "}";
    
    file << "button{";
    file << "width:100%;";
    file << "padding:12px;";
    file << "margin-top:20px;";
    file << "background:#555;";
    file << "color:white;";
    file << "border:none;";
    file << "border-radius:8px;";
    file << "font-size:16px;";
    file << "cursor:pointer;";
    file << "}";
    file << "button:hover{ background:#666; }";
    file << "</style>";
    
    file << "<script>";
    file << "document.documentElement.setAttribute('data-theme', localStorage.getItem('theme') || 'dark');";
    file << "</script>";
    file << "</head>";

    file << "<body>";
    file << "<div class='card'>";
    file << "<h1>LEADERBOARD</h1>";
    file << "<table id='leaderboardTable'>";
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
    file << "<button onclick=\"location.href='home.html'\">Back to Home</button>";
    file << "</div>";
    
    file << "<script>";
    file << "window.onload = function() {";
    file << "  let user = JSON.parse(localStorage.getItem('user'));";
    file << "  if(user) {";
    file << "    let table = document.getElementById('leaderboardTable');";
    file << "    let row = table.insertRow(-1);";
    file << "    row.style.fontWeight = 'bold';";
    file << "    row.style.background = 'rgba(129,182,76,0.1)';";
    file << "    row.innerHTML = '<td>??</td><td>' + user.username + '</td><td>' + user.rating + '</td><td>' + user.wins + '</td>';";
    file << "  }";
    file << "};";
    file << "</script>";
    
    file << "</body>";
    file << "</html>";

    file.close();
}

void createProfilePage()
{
    ofstream file("profile.html");

    file << "<!DOCTYPE html>";
    file << "<html>";
    file << "<head>";
    file << "<meta charset='UTF-8'>";
    file << "<title>Profile</title>";
    file << "<style>";
    
    file << ":root {";
    file << "  --bg-color: #312e2b;";
    file << "  --card-bg: #262421;";
    file << "  --text-color: #ffffff;";
    file << "  --border-color: #444444;";
    file << "}";
    file << "[data-theme='light'] {";
    file << "  --bg-color: #f5f5f5;";
    file << "  --card-bg: #ffffff;";
    file << "  --text-color: #262421;";
    file << "  --border-color: #cccccc;";
    file << "}";

    file << "body{";
    file << "background:var(--bg-color);";
    file << "color:var(--text-color);";
    file << "font-family:Arial;";
    file << "display:flex;";
    file << "justify-content:center;";
    file << "align-items:center;";
    file << "height:100vh;";
    file << "transition: background 0.3s, color 0.3s;";
    file << "}";
    
    file << ".card{";
    file << "background:var(--card-bg);";
    file << "width:500px;";
    file << "padding:30px;";
    file << "border-radius:20px;";
    file << "box-shadow:0 0 20px rgba(0,0,0,0.4);";
    file << "transition: background 0.3s;";
    file << "}";
    
    file << "hr{ border: 0; border-top: 1px solid var(--border-color); }";
    
    file << "button{";
    file << "width:100%;";
    file << "padding:12px;";
    file << "margin-top:20px;";
    file << "background:#555;";
    file << "color:white;";
    file << "border:none;";
    file << "border-radius:8px;";
    file << "font-size:16px;";
    file << "cursor:pointer;";
    file << "}";
    file << "button:hover{ background:#666; }";
    file << "</style>";
    
    file << "<script>";
    file << "document.documentElement.setAttribute('data-theme', localStorage.getItem('theme') || 'dark');";
    file << "</script>";
    file << "</head>";
    
    file << "<body>";
    file << "<div class='card'>";
    file << "<h1>PROFILE</h1>";
    file << "<hr>";
    file << "<h2 id='profileName'></h2>";
    file << "<p id='profileRating'></p>";
    file << "<p id='profileGames'></p>";
    file << "<p id='profileWins'></p>";
    file << "<p id='profileLosses'></p>";
    file << "<p id='profileWinRate'></p>";
    file << "<hr>";
    file << "<h3>Recent Results</h3>";
    file << "<p>Win vs Bat (+16)</p>";
    file << "<p>Win vs Tsetsgee (+12)</p>";
    file << "<p>Loss vs Bold (-14)</p>";
    file << "<button onclick=\"location.href='home.html'\">Back to Home</button>";
    file << "</div>";
    file << "<script>";

    file << "let user=JSON.parse(localStorage.getItem('user'));";
    file << "if(user){";
    file << "document.getElementById('profileName').innerText=user.username;";
    file << "document.getElementById('profileRating').innerHTML='<b>Rating:</b> '+user.rating;";
    file << "document.getElementById('profileGames').innerHTML='<b>Games:</b> '+user.games;";
    file << "document.getElementById('profileWins').innerHTML='<b>Wins:</b> '+user.wins;";
    file << "document.getElementById('profileLosses').innerHTML='<b>Losses:</b> '+user.losses;";
    file << "let winRate=0;";
    file << "if(user.games>0){";
    file << "winRate=Math.round((user.wins/user.games)*100);";
    file << "}";
    file << "document.getElementById('profileWinRate').innerHTML='<b>Win Rate:</b> '+winRate+'%';";
    file << "}";
    
    file << "</script>";
    file << "</body>";
    file << "</html>";

    file.close();
}

void createSettingsPage()
{
    ofstream file("settings.html");

    file << "<!DOCTYPE html>";
    file << "<html>";
    file << "<head>";
    file << "<meta charset='UTF-8'>";
    file << "<title>Settings</title>";
    file << "<style>";
    
    file << ":root {";
    file << "  --bg-color: #312e2b;";
    file << "  --card-bg: #262421;";
    file << "  --text-color: #ffffff;";
    file << "}";
    file << "[data-theme='light'] {";
    file << "  --bg-color: #f5f5f5;";
    file << "  --card-bg: #ffffff;";
    file << "  --text-color: #262421;";
    file << "}";

    file << "body{";
    file << "background:var(--bg-color);";
    file << "color:var(--text-color);";
    file << "display:flex;";
    file << "justify-content:center;";
    file << "align-items:center;";
    file << "height:100vh;";
    file << "font-family:Arial;";
    file << "transition: background 0.3s, color 0.3s;";
    file << "}";
    
    file << ".card{";
    file << "background:var(--card-bg);";
    file << "padding:40px;";
    file << "border-radius:15px;";
    file << "width:450px;";
    file << "box-shadow:0 0 20px rgba(0,0,0,0.4);";
    file << "transition: background 0.3s;";
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
    file << "font-size:16px;";
    file << "}";
    file << "button:hover{ background:#6ea043; }";
    
    file << ".theme-btn { font-weight: bold; }";
    file << ".back-btn { background:#555; margin-top:20px; }";
    file << ".back-btn:hover { background:#666; }";
    file << "</style>";
    
    file << "<script>";
    file << "document.documentElement.setAttribute('data-theme', localStorage.getItem('theme') || 'dark');";
    file << "</script>";
    file << "</head>";

    file << "<body>";
    file << "<div class='card'>";
    file << "<h1>SETTINGS</h1>";
    file << "<h3>Theme</h3>";
    file << "<button class='theme-btn' onclick='changeTheme(\"dark\")'>Dark Mode</button>";
    file << "<button class='theme-btn' onclick='changeTheme(\"light\")'>Light Mode</button>";
    file << "<h3>Language</h3>";
    file << "<button onclick='alert(\"Soon!\")'>English</button>";
    file << "<button onclick='alert(\"??????? ????!\")'>Mongolian</button>";
    file << "<button onclick='logout()'>Logout</button>";
    file << "<button class='back-btn' onclick=\"location.href='home.html'\">Back to Home</button>";
    file << "</div>";

    file << "<script>";
    file << "function changeTheme(theme) {";
    file << "  document.documentElement.setAttribute('data-theme', theme);";
    file << "  localStorage.setItem('theme', theme);";
    file << "}";
    file << "function logout(){";
    file << "localStorage.removeItem('loggedIn');";
    file << "location.href='login.html';";
    file << "}";
    file << "</script>";

    file << "</body>";
    file << "</html>";

    file.close();
}
