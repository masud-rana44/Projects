const humberger_menu = document.querySelector(".humberger-menu");
const container = document.querySelector(".container");

humberger_menu.addEventListener("click", () => {
    container.classList.toggle("active");
})