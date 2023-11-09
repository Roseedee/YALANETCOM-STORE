$(document).ready(function(){
    $(".product-group .product-item .product-item-content").click(function(){
      $(this).children('ul').slideToggle('500');
      $(this).prev().css({'background-color':' yellow'});
    });
});