<script type="text/javascript">
var x = ~sntp_time~;

if(x)
{
var date = new Date(x*1000);	
var iso = date.toISOString();
var date = iso.split("T")[0];
var time = iso.split("T")[1].substring(0, 8);    
document.getElementById('sntptime').innerHTML = date+" "+time+" "+"tz="+~cfg_tz~;

}

//var tzoffset = (new Date()).getTimezoneOffset() * 60000; //offset in milliseconds

var d = new Date(new Date()-((~sys_mactime~)/1000)+~cfg_tz~* 3600000);

var iso1 = d.toISOString();
var date1 = iso1.split("T")[0];
var time1 = iso1.split("T")[1].substring(0, 8);    
document.getElementById('starttime').innerHTML = date1+" "+time1+" "+"tz="+~cfg_tz~;



//document.getElementById('starttime').innerHTML= d.toLocaleDateString()+" "+d.toLocaleTimeString();
</script>