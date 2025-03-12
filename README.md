<h1 align="center">Heart Mining Game ❤♠</h1>
<h2 align="center"><i>C++ Based game</i></h2>
<p>The Hearts Mining Game is a console-based grid exploration game where players try to uncover hidden hearts. The game provides visual feedback by updating a 4×6 grid, allowing the player to reveal locations one at a time.</p>
<h3>Characeterictics of the System</h3>
<p>❤<b><i> Text-Based Console Game</i></b> 
<ul>Runs entirely in the console/terminal (no GUI).</ul>
<ul>Uses ASCII characters for visuals.</ul>
❤<b><i> Fixed Grid Layout</i></b>
<ul>The game uses a static 4×6 grid, meaning the positions of the hearts do not change dynamically.</ul>
❤<b><i> Hardcoded Heart Locations</i></b>
<ul>Hearts are placed at specific, predefined positions.</ul>
<ul>No randomization, so the game is predictable once learned.</ul>
❤<b><i> Interactive User Input</i></b> 
<ul>Uses cin to take single-character input for selections.</ul>
<ul>Uses switch-case for decision-making.</ul>
❤<b><i> Score & Feedback System</i></b>
<ul>Instant feedback after every move (win/loss message).</ul>
<ul>Final score calculation based on hearts collected.</p></ul>
<h3>Functional Components</h3>
⭕<b><i> Game Initialization</i></b>
<ul>The system starts by displaying game instructions and a 4×6 character grid.</ul>
<ul>The grid is initialized with alphabetic characters representing locations where hearts may be hidden.</ul>
⭕<b><i> Game Mechanics</i></b>
<ul>The player gets 10 initial chances to find 10 hidden hearts.</ul>
<ul>Each turn, the player inputs a letter (A-X) corresponding to a grid position.</ul>
<ul>The system checks if the selected letter contains a heart or is a miss:</ul>
<ul><b>Heart Found:</b> The system replaces the character with a heart symbol (♥) and updates the count.</ul>
<ul><b>Miss:</b> The system replaces the character with a miss symbol (♠) and continues.</ul>
⭕<b><i> Score Calculation</i></b>
<ul>Players earn 10 points per heart found.</ul>
<ul>The maximum score is 100 points (if all hearts are found).</ul>
⭕<b><i> Grid Display and Update</i></b>
<ul>After each input, the system updates and reprints the grid with the discovered symbols.</ul>
<ul>The bordered grid format helps the player track progress.</ul>
⭕<b><i> Replay Option</i></b>
<ul>After 10 turns, the player is given an option to play again.</ul>
<ul>If they choose 'Y', they get 3 more chances using the same grid.</ul>
<ul>The game ends if they refuse to continue.</ul>
<dl>
  <dt>Tool Used</dt>
  <dd> <a href="https://visualstudio.microsoft.com/" target="_blank" rel="norefferer">  <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/2/2c/Visual_Studio_Icon_2022.svg/1200px-Visual_Studio_Icon_2022.svg.png" alt="Microsoft Visual Studio" width="40" height="40"></a></dd>
  <dt>Language Used</dt>
  <dd><a href="https://www.w3schools.com/cpp/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="C++" width="40" height="40"/></a></dd>
</dl>
