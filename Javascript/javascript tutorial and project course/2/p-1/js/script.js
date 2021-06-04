const btn = document.getElementById("btn");

const colors = ['#454851', '#D62839', '#F3D9DC', '#06A77D', '#8D86C9'];
/* console.log(colors.length); */

btn.addEventListener('click', function(){
    let randomNum = Math.floor((Math.random() * colors.length));
    console.log(randomNum);

    const body = document.body;
    body.style.background = colors[randomNum];

});