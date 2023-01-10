function projectChange(value){
    document.getElementById("sma").style.display = "none";
    document.getElementById("ocr").style.display = "none";
    document.getElementById("finance").style.display = "none";
    document.getElementById("urlshort").style.display = "none";
    document.getElementById("tms").style.display = "none";
    document.getElementById("homepage").style.display = "none";
    switch(value) {
        case '1':
            document.getElementById("sma").style.display = "block";
            break;
        case '2':
            document.getElementById("ocr").style.display = "block";
            break;
        case '3':
            document.getElementById("finance").style.display = "block";
            break;
        case '4':
            document.getElementById("urlshort").style.display = "block";
            break;
        case '5':
            document.getElementById("tms").style.display = "block";
            break;
        case '6':
            document.getElementById("homepage").style.display = "block";
            break;
      }
}

var btnContainer = document.getElementById("nav");
var navlinks = btnContainer.getElementsByClassName("navlink");
for (var i = 0; i < navlinks.length; i++) {
  navlinks[i].addEventListener("click", function() {
    var current = document.getElementsByClassName("active");
    current[0].className = current[0].className.replace(" active", "");
    this.className += " active";
  });
}




