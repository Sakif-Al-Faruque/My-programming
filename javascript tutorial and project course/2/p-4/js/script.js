(function(){
    const msg = document.getElementById('message');
    const form = document.getElementById('message-form');

    form.addEventListener('submit', function(event){
        //prevent refreshing
        event.preventDefault();
        
        //show the message
        let passingString = msg.value;

        if(passingString === ''){
            const feedback = document.querySelector('.feedback');
            feedback.classList.add('show');
            setTimeout(function(){
                feedback.classList.remove('show');
            }, 2000);
        }else{
            document.querySelector('.message-content').textContent = passingString;
            passingString = '';
        }

        
    });
})();