function calculateDaysBetweenDates(begin, end){
    var beginDate = new Date(begin);
    var endDate = new Date(end);
    var days = Math.round((endDate - beginDate) / (1000 * 60 * 60 * 24));
    return days;

}

console.log(calculateDaysBetweenDates('2017-01-13', '2017-12-22'));