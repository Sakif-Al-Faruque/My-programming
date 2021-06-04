function showTime(){
    const clock = document.getElementById("clock");

    let d = new Date();
    let h = d.getHours();
    let m = d.getMinutes();
    let s = d.getSeconds();

    let timeFormat = makeFormat(h);

    h = addZero(h);
    m = addZero(m);
    s = addZero(s);

    clock.innerHTML = `${h} : ${m} : ${s} ${timeFormat}`;
}

function makeFormat(time){
    let fm = 'AM';
    if(time > 12){
        fm = 'PM';
    }
    return fm;
}

function addZero(time){
    if(time < 10){
        time = "0" + time;
    }
    return time;
}

setInterval(showTime, 1000);