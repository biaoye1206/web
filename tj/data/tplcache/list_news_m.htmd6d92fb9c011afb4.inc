<?php
$z[0]=Array("field","",311,340);
$z[0][4]=array();
$z[0][4]['name']="keywords";
$z[1]=Array("field","",379,438);
$z[1][4]=array();
$z[1][4]['name']="description";
$z[1][4]['function']="html2text(@me)";
$z[2]=Array("field","",1322,1341);
$z[2][4]=array();
$z[2][4]['name']="title";
$z[3]=Array("global","",1342,1368);
$z[3][4]=array();
$z[3][4]['name']="cfg_webname";
$z[4]=Array("list","\n              <div id=\"item_block_[field:global.autoindex/]\" class=\"item_block wow\"> <a href=\"view.php?aid=[field:id/]\" class=\"item_link clearfix\">\n                <div class=\"item_img\"> <img src=\"[field:picname/]\" alt=\"[field:title/]\" />\n                  <div class=\"item_mask\"></div>\n                </div>\n                <div class=\"item_wrapper clearfix\">\n                  <p class=\"date_wrap\"> <span class=\"year\">[field:pubdate function=\"MyDate('Y',@me)\"/]</span> <span class=\"md\">[field:pubdate function=\"MyDate('m-d',@me)\"/]</span> </p>\n                  <div class=\"item_info clearfix\">\n                    <p class=\"title ellipsis\">[field:title/]</p>\n                    <div class=\"description\">[field:description function=\"cn_substr(@me,120)\"/]... </div>\n                  </div>\n                </div>\n                </a>\n                <div class=\"o_ico\"></div>\n                <div class=\"line\"></div>\n              </div>\n              ",2082,3076);
$z[4][4]=array();
$z[4][4]['pagesize']="4";
$z[5]=Array("pagelist","",3247,3303);
$z[5][4]=array();
$z[5][4]['listitem']="pre,next,pageno";
$z[5][4]['listsize']="1";
$z[6]=Array("include","",3429,3468);
$z[6][4]=array();
$z[6][4]['filename']="footer_m.htm";
$z[7]=Array("type","list.php?tid=[field:id/]",3861,3920);
$z[7][4]=array();
$z[7][4]['typeid']="10";
$z[8]=Array("field","(@me==\"10\")? @me=\"active\":@me=\"\";",3929,4012);
$z[8][4]=array();
$z[8][4]['name']="typeid";
$z[8][4]['runphp']="yes";
$z[9]=Array("channel","\n        <li><a href=\"list.php?tid=[field:id/]\">[field:typename/]</a></li>\n        ",4038,4243);
$z[9][4]=array();
$z[9][4]['currentstyle']="<li><a href='~typelink~' class='active'>~typename~</a></li>";

?>