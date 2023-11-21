function setBodyMinHeight() {
    
    const header_h = document.getElementById('header').offsetHeight;
    const nav_h = document.getElementById('nav').offsetHeight;
    const footer_h = document.getElementById('footer').offsetHeight;
    const body_h = document.getElementById('body');
    const windows_h = window.innerHeight;

    let r = windows_h - header_h - nav_h - footer_h

    // window.alert(header_h + " " + nav_h + " " + footer_h + " " + height)
    body_h.style.minHeight = r + "px";

}