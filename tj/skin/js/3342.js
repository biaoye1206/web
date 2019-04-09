YY.Page.indexMain.prototype.interfaceFun = function () {

    if ($('.mlist.service').length) {
        this.layoutService();
    }
    if ($('#topSlider').length) {
        this.layoutTopSlider();
    }
    if ($('.mlist.video').length) {
        this.layoutAjaxVideo();
    }
    if ($('.mlist.project').length) {
        $('.mlist.project .item_link ').off("click")
        this.layoutAjaxProject();

    }
    $('.item_block').off('click')

};



YY.Page.baseMain.prototype.interfaceFun = function () {

    if ($('.mlist.service').length) {
        this.layoutSer();
    }



};
YY.Page.postMain.prototype.interfaceFun = function () {

    if ($('.mlistpost.project').length) {
        this.postPropost();
    }


};

YY.Page.postMain.prototype.postTeampost = function () {

    $('#postImg .postTeamSlider').owlCarousel({
        center: false,
        items: 1,
        loop: false,
        autoWidth: false,
        responsive: false,
        nav: true,
        navText: ['<i class="icon iconfont icon-back"></i>', '<i class="iconfont icon-more"></i>'],
        dots: false
    });
}

YY.Page.postMain.prototype.postPropost = function () {
    npostSliderApp = $('#postSlider .tab_content .content_list').addClass('owl-carousel owl-theme').owlCarousel({
        center: false,
        items: 1,
        loop: false,
        autoWidth: false,
        responsive: false,
        nav: true,
        navText: ['<i class="icon iconfont icon-back"></i>', '<i class="iconfont icon-more"></i>'],
        dots: false
    });
    npostSliderThumbApp = $('#postSlider .tab_button .content_list').addClass('owl-carousel owl-theme').owlCarousel({
        center: false,
        items: 3,
        loop: false,
        autoWidth: false,
        responsive: false,
        nav: false,
        dots: false,
        margin: 10
    });
    npostSliderApp.on('changed.owl.carousel', function (event) {
        var item = event.item.index;
        npostSliderThumbApp.trigger('to.owl.carousel', [item]);
        $('#postSlider .tab_button').find('.item_block').removeClass('current');
        $('#postSlider .tab_button').find('.item_block[data-tab-index="' + item + '"]').addClass('current');
    });
    $('#postSlider .tab_button').find('.owl-item').click(function () {
        var index = $(this).index();

        npostSliderApp.trigger('to.owl.carousel', [index]);
    });
};




YY.Page.indexMain.prototype.layoutTopSlider = function () {
    var $contentList = $('#indexPage #topSlider .content_list');
    var sliderHeight = $contentList.data("slider-height");

    if (sliderHeight == "0") {
        $('#indexPage #topSlider').height($(window).height());
    } else {
        $('#indexPage #topSlider').height(sliderHeight);
    }
    $(window).on("scroll", function () {
        $('#indexPage #topSlider .content_list').css("top", ((-$(window).scrollTop()) / 4) + "px");
    })


}



YY.Page.indexMain.prototype.layoutService = function () {
    $('.mlist.service .item_block').each(function (index, element) {
        if (!$('.move', element).length) {
            $(element).append(moveHtml);
        }
        $(this).on("mouseenter mouseleave", function (event) {
            var w = $(this).outerWidth();
            var h = $(this).outerHeight();

            var x = (event.offsetX - (w / 2)) * (w > h ? (h / w) : 1);
            var y = (event.offsetY - (h / 2)) * (h > w ? (w / h) : 1);

            var direction = Math.round((((Math.atan2(y, x) * (180 / Math.PI)) + 180) / 90) + 3) % 4;

            var start = {
                x: 0,
                y: 0
            };
            var end = {
                x: 0,
                y: 0
            };

            switch (direction) {
                case 0:
                    start.y = '-100%';
                    break;
                case 1:
                    start.x = '100%';
                    break;
                case 2:
                    start.y = '100%';
                    break;
                case 3:
                    start.x = '-100%';
                    break;
            };

            $move = $('.move', this);
            if (event.type == "mouseenter") {
                $move.stop().css({
                    left: start.x,
                    top: start.y
                })
                $move.animate({
                    left: end.x,
                    top: end.y
                }, 300);
            } else {
                $move.stop().animate({
                    left: start.x,
                    top: start.y
                }, 300);
            }

        });
    });
};
YY.Page.baseMain.prototype.layoutSer = function () {
    $('.mlist.service .item_block').each(function (index, element) {
        if (!$('.move', element).length) {
            $(element).append(moveHtml);
        }
        $(this).on("mouseenter mouseleave", function (event) {
            var w = $(this).outerWidth();
            var h = $(this).outerHeight();

            var x = (event.offsetX - (w / 2)) * (w > h ? (h / w) : 1);
            var y = (event.offsetY - (h / 2)) * (h > w ? (w / h) : 1);

            var direction = Math.round((((Math.atan2(y, x) * (180 / Math.PI)) + 180) / 90) + 3) % 4;

            var start = {
                x: 0,
                y: 0
            };
            var end = {
                x: 0,
                y: 0
            };

            switch (direction) {
                case 0:
                    start.y = '-100%';
                    break;
                case 1:
                    start.x = '100%';
                    break;
                case 2:
                    start.y = '100%';
                    break;
                case 3:
                    start.x = '-100%';
                    break;
            };

            $move = $('.move', this);
            if (event.type == "mouseenter") {
                $move.stop().css({
                    left: start.x,
                    top: start.y
                })
                $move.animate({
                    left: end.x,
                    top: end.y
                }, 300);
            } else {
                $move.stop().animate({
                    left: start.x,
                    top: start.y
                }, 300);
            }

        });
    });
};


var videoPlayer = function () {
    var $element = $('.mlist.video.module');
    var targetName = $element.hasClass('ff_slider') ? 'owl-item' : 'item_block';
    var $fixed = $('<div id="fixed_videoPost" class="fixed"></div>');
    var $fixedmack = $('<div class="fixed-mack"></div>').appendTo($fixed);
    var $container = $('<div class="fixed-container"></div>').appendTo($fixed);
    var $close = $('<div id="postControl"><div class="button close"><i class="icon iconfont icon-close"></i></div></div>').appendTo($container);
    var $iframe = $('<iframe class="v_iframe"></iframe>');
    var $info = $('<div class="info_box"></div>');
    var $popUpmack = $('<div class="popUpmack"></div>');
    var sliderApp = null;
    var $btn = $('<div class="fixed-btn"><a class="prev" href="javascript:;"><i class="icon iconfont icon-back"></i></a><a class="next" href="javascript:;"><i class="icon iconfont icon-more"></i></a></div>');


    function loadPost(url, info) {
        $('body').css("overflow", "hidden");
        $fixed.appendTo('body');
        $fixedmack.appendTo($fixed);
        $popUpmack.appendTo("body");
        $iframe.appendTo($container);
        $btn.appendTo($container)
        $info.appendTo($container).html(info);

        $('.v_iframe').attr({
            src: url
        });
        loadComplete();
    }

    function loadComplete() {
        $fixed.css({
            "visibility": "visible",
            "top": -$(window).height()
        });
        $fixedmack.css({
            "opacity": 0
        });
        $fixed.animate({
            top: 0
        }, 600, 'easeInOutExpo');
        $fixedmack.animate({
            "opacity": 1
        }, 600);
        $container.append($close);
        onInit();
    }

    function onInit() {
        $('.button.close', $close).on("click", function () {
            onUnInit();
        });
        $('.fixed-mack').on("click", function () {
            onUnInit();
        });
    }

    function onUnInit() {
        $close.off("click");
        var animateComplete = function () {
            $fixedmack.remove();
            $fixed.remove();
            $popUpmack.remove();
            $container.html("");
            $('body').css("overflow-y", "auto");
        };
        $fixedmack.animate({
            "opacity": 0
        }, 600);
        $fixed.animate({
            "top": -$(window).height()
        }, 600, 'easeInOutExpo', animateComplete);
    }

    var $items = $('.mlist.video.module .' + targetName);
    var current = 0;

    if ($items.length <= 1) $btn.addClass("disabled");

    $(".item_link", $element).on("click", function (event) {
        if ($(window).width() >= 1180) {
            console.log($(this).closest('.'+targetName));
            current = $(this).closest('.item_block').index();

            var url = $(this).attr('href');
            var info = $(".item_wrapper", this).html();
            loadPost(url, info);

            setBtnStatus();
        }
        return false;
    });

    function setBtnStatus() {
        if (current == 0) {
            $(".prev", $btn).addClass("disabled");
            $(".next", $btn).removeClass("disabled");
        } else if (current == $items.length - 1) {
            $(".prev", $btn).removeClass("disabled");
            $(".next", $btn).addClass("disabled");
        } else {
            $(".prev", $btn).removeClass("disabled");
            $(".next", $btn).removeClass("disabled");
        }

    };
    var alllowChange = 1;

    function onChange() {
        alllowChange = 0;
        setBtnStatus();

        var $item = $items.eq(current);
        var url = $(".item_link", $item).attr('href');
        var info = $(".item_wrapper", $item).html();
        $('.v_iframe').attr({
            src: url
        });

        $info.on('animationend webkitAnimationEnd oAnimationEnd MSAnimationEnd', function () {
            $info.off('animationend webkitAnimationEnd oAnimationEnd MSAnimationEnd');
            $info.removeClass('fadeInUp animated');


            alllowChange = 1;
        });
        $info.addClass('fadeInUp animated').html(info);
    }

    $(".prev", $btn).on("click", function () {
        // debugger;
        if (alllowChange && current > 0) {
            current--;
            onChange();
        }

        return false;
    });
    $(".next", $btn).on("click", function () {
        // debugger;
        if (alllowChange && current < $items.length - 1) {
            current++;
            onChange();
        }
        return false;
    });

};

YY.Page.indexMain.prototype.layoutAjaxVideo = videoPlayer
$(function () {
    if ($('.bodylist.bodyvideo').length) {
        videoPlayer()
    }
})