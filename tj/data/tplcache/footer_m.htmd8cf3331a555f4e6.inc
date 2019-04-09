<?php
$z[0]=Array("global","",91,117);
$z[0][4]=array();
$z[0][4]['name']="cfg_powerby";
$z[1]=Array("field","(@me=='')? @me='active':@me='';",178,259);
$z[1][4]=array();
$z[1][4]['name']="typeid";
$z[1][4]['runphp']="yes";
$z[2]=Array("channelartlist","\n    <li><a class=\"{dede:field.currentstyle/}\" {dede:field name=typeid runphp=\"yes\"}\nglobal \$dsql;\n\$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\n\$row = \$dsql->GetOne(\$sql);      \n      @me=is_array(\$row)?'href=\"javascript:;\"':'';\n      {/dede:field} href=\"list.php?tid={dede:field.id/}\">{dede:field name='typename'/}</a> {dede:php}\n      \$id = \$refObj->Fields['id'];\n      \$sql = (\"SELECT * FROM dede_arctype where reid ='\$id'\");\n      \$db->SetQuery(\$sql);\n      \$db->Execute();\n      if(\$db->GetTotalRow()){\n      echo '\n      <ul class=\"subnav\" >\n        ';\n        while(\$row = \$db->GetArray()){\n        \$url = 'list.php?tid='.\$row[id];\n        echo \"\n        <li><a href=\".\$url.\">\".(\$row[typename]).\"</a></li>\n        \";\n        };\n        echo '\n      </ul>\n      ';\n      };\n      {/dede:php} </li>\n    ",308,1258);
$z[2][4]=array();
$z[2][4]['typeid']="top";
$z[2][4]['currentstyle']="active";
$z[3]=Array("global","",1405,1427);
$z[3][4]=array();
$z[3][4]['name']="cfg_tel";
$z[4]=Array("global","",1536,1558);
$z[4][4]=array();
$z[4][4]['name']="data_qq";

?>