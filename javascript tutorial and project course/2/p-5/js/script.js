(function(){
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
        });
    });
})();