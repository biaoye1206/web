<?php
$z[0]=Array("field","",311,333);
$z[0][4]=array();
$z[0][4]['name']="keywords";
$z[1]=Array("field","",372,424);
$z[1][4]=array();
$z[1][4]['name']="description";
$z[1][4]['function']="html2text(@me)";
$z[2]=Array("field","",1216,1235);
$z[2][4]=array();
$z[2][4]['name']="title";
$z[3]=Array("global","",1236,1262);
$z[3][4]=array();
$z[3][4]['name']="cfg_webname";
$z[4]=Array("productimagelist","[field:global name=autoindex runphp='yes'](@me==0)? @me='\n              <div id=\"postSlider\" class=\"team_tabs mlist\">\n                <div class=\"tab_content\">\n                  <div class=\"content_list slider\">':@me='';[/field:global]",1924,2206);
$z[4][4]=array();
$z[5]=Array("productimagelist","\n                    <div class=\"item_block_[field:global name=autoindex/]\">\n                      <div class=\"wrapper\">\n                        <div class=\"item_img\"> <img src=\"[field:imgsrc/]\" /> </div>\n                      </div>\n                    </div>\n                    ",2227,2555);
$z[5][4]=array();
$z[6]=Array("productimagelist","[field:global name=autoindex runphp='yes'](@me==0)? @me='</div>\n                  <div class=\"clear\"></div>\n                </div>\n              </div>\n              ':@me='';[/field:global]",2576,2813);
$z[6][4]=array();
$z[7]=Array("field","",3030,3049);
$z[7][4]=array();
$z[7][4]['name']="title";
$z[8]=Array("field","",3096,3121);
$z[8][4]=array();
$z[8][4]['name']="description";
$z[9]=Array("field","",3262,3280);
$z[9][4]=array();
$z[9][4]['name']="body";
$z[10]=Array("arclist","\n                            <div id=\"project_item_[field:global.autoindex/]\" class=\"item_block wow\" style=\"animation-delay:.[field:global.autoindex/]s\"> <a href=\"view.php?aid=[field:id/]\" class=\"item_link clearfix\">\n                              <div class=\"item_img\"> <img src=\"[field:picname/]\" alt=\"[field:title/]\" />\n                                <div class=\"item_mask\"></div>\n                              </div>\n                              <div class=\"item_wrapper\">\n                                <div class=\"item_info\">\n                                  <p class=\"title ellipsis\">[field:title/]</p>\n                                  <p class=\"line\"></p>\n                                  <p class=\"subtitle ellipsis\">[field:description/]...</p>\n                                </div>\n                              </div>\n                              </a> </div>\n                            ",3599,4552);
$z[10][4]=array();
$z[10][4]['typeid']="1";
$z[10][4]['row']="4";
$z[11]=Array("include","",4977,5016);
$z[11][4]=array();
$z[11][4]['filename']="footer_m.htm";

?>