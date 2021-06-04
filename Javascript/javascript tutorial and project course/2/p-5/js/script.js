(function(){
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
        });
    });
})();