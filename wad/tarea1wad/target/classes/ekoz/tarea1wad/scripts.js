function calculateKrammer() {
    var x1 = parseFloat(document.getElementById("000").value);
    var y1 = parseFloat(document.getElementById("001").value);
    var z1 = parseFloat(document.getElementById("010").value);
    
    var x2 = parseFloat(document.getElementById("100").value);
    var y2 = parseFloat(document.getElementById("101").value);
    var z2 = parseFloat(document.getElementById("110").value);
    
    var m = (x1 * y2) - (y1 * x2);
    var mX = (z1 * y2) - (y1 * z2);
    var mY = (x1 * z2) - (z1 * x2);

    document.getElementById('results').innerHTML = res(m, mX, mY);
}

function res(m, mX, mY) {

    if (m != 0){
        var xF = mX / m;
        var yF = mY / m;

        return "The results are: X = '"+xF.toFixed(3)+"' : Y ='"+yF.toFixed(3)+"'";
    }
    else{
        return "Error, there is no resolution";
    }
}