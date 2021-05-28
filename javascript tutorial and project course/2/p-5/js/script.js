(function(){
<<<<<<< HEAD
    const pictures = [
        "carbg-1",
        "carbg-2",
        "carbg-3",
        "carbg-4"
    ];
    var counter = 0;

    const sliders = document.querySelectorAll(".btn");
    const imgholder = document.querySelector(".img-container");

    

    

    sliders.forEach(function(btn){
        btn.addEventListener("click", function(event){
            let n = event.target;
            if(n.classList.contains('btn-left')){
                counter--;
                if(counter < 0){
                    counter = pictures.length - 1;
                }
            }else{
                counter++;
                if(counter > (pictures.length - 1)){
                    counter = 0;
                }
            }
            imgholder.style.backgroundImage = `url("img/${pictures[counter]}.jpg")`;
=======
    var counterValue = 0;

    const buttons = document.querySelectorAll('.counter-btn');
    const counter = document.getElementById('counter');

    buttons.forEach(function(btn){
        btn.addEventListener('click', function(event){
            let currBtn = event.target;

            //console.log(currBtn);
            if(currBtn.classList.contains('prevBtn')){
                counterValue--;
            }else if (currBtn.classList.contains('nextBtn')){
                counterValue++;
            }
            
            if(counterValue === 0){
                counter.style.color = '#061a00';
            }else if(counterValue < 0){
                counter.style.color = '#ff3300';
            }else if(counterValue > 0){
                counter.style.color = '#009933';
            }

            counter.textContent = counterValue;
>>>>>>> 0b03b1e4b754ec1ba53aa4d93d7de5d35036dc29
        });
    });
})();