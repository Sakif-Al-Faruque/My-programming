const btn = document.querySelector('#b');
const para = document.querySelectorAll('p');

const quotes = [
    {
        quote: `The greatest glory in living lies not in never falling, but in rising every time we fall.`, 
        athor: '- Nelson Mandela'
    },
    {
        quote: `The way to get started is to quit talking and begin doing.`,
        athor: '- Walt Disney'
    },
    {
        quote: `Your time is limited, so don't waste it living someone else's life. Don't be trapped by dogma – which is living with the results of other people's thinking.`,
        athor: '- Steve Jobs'
    },
    {
        quote: `If life were predictable it would cease to be life, and be without flavor.`,
        athor: '- Eleanor Roosevelt'
    },
    {
        quote: `If you look at what you have in life, you'll always have more. If you look at what you don't have in life, you'll never have enough.`,
        athor: '- Oprah Winfrey'
    }
];


btn.addEventListener("click", function(){
    let randomNum = Math.floor(Math.random() * quotes.length);
    para[0].innerHTML = quotes[randomNum].quote;
    para[1].innerHTML = quotes[randomNum].author;
});