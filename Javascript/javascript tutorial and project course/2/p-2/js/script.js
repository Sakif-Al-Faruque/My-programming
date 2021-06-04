const btn = document.querySelector('#b');
const clrSpan = document.querySelector('#clr');

const clrs = ['#454851', '#D62839', '#F3D9DC', '#06A77D', '#8D86C9'];

btn.addEventListener("click", function(){
    let randomNum = Math.floor(Math.random() * clrs.length);
    const body = document.body;
    clrSpan.innerHTML = clrs[randomNum];
    body.style.background = clrs[randomNum];
});