function changeText(){
    var text = document.querySelector("#main");
    text.innerHTML = "Changed heading!!!";
    text.style.color="green";
}

function changeBgcolor(){
    var color = document.getElementById("colorInput").value;
    document.body.style.backgroundColor = color;
}

function reset(){
document.body.style.backgroundColor = "white";
}


function changebox(){
    var boxes = document.querySelectorAll(".box");
    boxes.forEach(function(box){
        box.style.backgroundColor = 'pink';
        box.style.fontWeight ="bold";
    })
}

function changePara(){
    var para =document.querySelector(".para");
    para.style.color ="red";
    para.style.fontWeight = "bold";
}

function greet(){
    var user = document.getElementById("user").value;
    alert("HELLO " + user);
}