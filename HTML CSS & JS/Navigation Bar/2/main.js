const humberger_menu = document.querySelector(".burger");
const container = document.querySelector(".nav-links");

humberger_menu.addEventListener("click", () => {
    container.classList.toggle("active");
    humberger_menu.classList.toggle("active");
})