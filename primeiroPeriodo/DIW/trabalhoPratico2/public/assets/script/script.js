function success () { 
    console.log(JSON.parse(this.responseText));
    let obj = JSON.parse(this.responseText);
    document.getElementById("nome").innerHTML = obj.name;
    document.getElementById("bio").innerHTML = obj.bio;
    document.getElementById("profilePic").innerHTML = `<img  class="img-fluid w-100 p-2 border rounded" src="${obj.avatar_url}" alt="foto do perfil">`;
    document.getElementById("location").innerHTML = obj.location
    
}
function error (err) { console.log('Erro: ', err); }
var xhr = new XMLHttpRequest();
xhr.onload = success;
xhr.onerror = error;
xhr.open('GET','https://api.github.com/users/LucasReis26');
xhr.send();