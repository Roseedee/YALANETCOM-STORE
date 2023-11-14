$(document).ready(function(){
    $(".product-group .product-group-item .product-group-item-content").click(function(){
      $(this).children('ul').slideToggle('500');
      // $(this).prev().css({'background-color':' yellow'});
    });
});