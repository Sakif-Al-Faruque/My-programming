(function(){
    const btns = document.querySelectorAll('.btn');
    const scr = document.querySelector('.screen');
    const cls = document.querySelector('.btn-clear');
    const equal = document.querySelector('.btn-equal');

    btns.forEach(function(btn){
        btn.addEventListener('click', function(){
            let exp = btn.getAttribute('data-num');
            scr.value += exp;
        });
    });

    equal.addEventListener('click', function(){
        let val = eval(scr.value);
        scr.value = val;
    });

    cls.addEventListener('click', function(){
        scr.value = ' ';
    });
})();