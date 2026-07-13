const navMenu = document.querySelector('.nav-menu');
const navList = document.querySelector('.nav-list');

navMenu.addEventListener('click', () => {
    navMenu.classList.toggle('active');
    navList.classList.toggle('active');
});