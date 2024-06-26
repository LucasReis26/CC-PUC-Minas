function success () { 
    console.log(JSON.parse(this.responseText));
    let obj = JSON.parse(this.responseText);

    document.getElementById("reposTitle").innerHTML = `<h2 class="fw-bold ms-3 mt-3">
    Repositórios(${obj.length})
  </h2>
  <hr class="m-3 border-3 opacity-75 border-dark rounded">`;

    let txt = ``;
    for(let i = 0; i < obj.length;i++)
    {
      txt += `<div class="col">
      <a class="text-decoration-none" href="repo.html?type=${i}">
        <div class="card">
        
        <div class="card-body">
            <h5 class="card-title">${obj[i].name}</h5>
            <p class="card-text">${obj[i].description}</p>
          </div>
        </div>
      </a>
    </div>`;
    }

    document.getElementById("repos").innerHTML = txt;
    
}
function error (err) { console.log('Erro: ', err); }
var xhr = new XMLHttpRequest();
xhr.onload = success;
xhr.onerror = error;
xhr.open('GET','https://api.github.com/users/LucasReis26/repos');
xhr.send();