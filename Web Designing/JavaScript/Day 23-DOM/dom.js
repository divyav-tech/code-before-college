function greetUser(){
    var name = document.getElementById("username").value;
    document.getElementById("greeting").innerHTML = "Hello," + name + "!";

}

function highlightInfo(){
    var infoElements = document.getElementsByClassName("info");
    for(var i = 0; i< infoElements.length ; i++){
        infoElements[i].classList.add("highlight");
    }
}
function updateStatus(){
    var status = document.querySelector(".status");
    status.innerHTML = "Status updated successfully!";
    status.style.color="blue";
}

function styleBoxes(){
    var boxes = document.querySelectorAll(".box");
    boxes.forEach(function(box){
        box.style.backgroundColor = "#def";
        box.style.fontStyle = "italic";
    });
}

function changeTitleColor(){
    var color = document.getElementById("colorInput").value;
    document.getElementById("mainTitle").style.color = color;
}

