<li><a class="{dede:field.currentstyle/}" {dede:field name=typeid runphp="yes"}
global $dsql;
$sql = "SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
$row = $dsql->GetOne($sql);      
      @me=is_array($row)?'href="javascript:;"':'';
      {/dede:field} href="list.php?tid={dede:field.id/}">{dede:field name='typename'/}</a> {dede:php}
      $id = $refObj->Fields['id'];
      $sql = ("SELECT * FROM dede_arctype where reid ='$id'");
      $db->SetQuery($sql);
      $db->Execute();
      if($db->GetTotalRow()){
      echo '
      <ul class="subnav" >
        ';
        while($row = $db->GetArray()){
        $url = 'list.php?tid='.$row[id];
        echo "
        <li><a href=".$url.">".($row[typename])."</a></li>
        ";
        };
        echo '
      </ul>
      ';
      };
      {/dede:php} </li>