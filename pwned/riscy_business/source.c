#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//pwned4{d4mn_1_d1dnt_w4nt_r1scv_us1n5_m4tr1c3s_21}
static uint64_t p = 3469726572228118207;
static uint64_t enc_flag1[7][7 ] = {{869392752706575774, 3123907396981650894, 274295296742648296, 2772329878395072217, 869906725123343197, 2390099717843400579, 579005858571039933},
{1553713866872702893, 1199626941878748874, 2736342249689584569, 3363601135107975220, 2944266267128709539, 1531270340770762446, 3366855247947819110},
{2937358623694357861, 1939690019469463575, 80730839558519911, 516455847975734889, 3135397770503016458, 2380108400983995362, 3000102268588710206},
{378983684524040297, 1472923761420090023, 2657259189604410857, 1110300951051575806, 21756987135518129, 2593418507371231627, 1396403839184144351},
{1890232339380515787, 2564723942926280254, 541077029701180309, 668633270839694679, 2169063445956953987, 224994413012333286, 1965490705027386074},
{2352592847057501769, 567087372751580892, 2592573235755645677, 1397884689130763769, 2398567838281973524, 2699022108990461901, 2741965397075783249},
{3186026342864593609, 2378420806090763877, 2323923874426929991, 1129209124578291305, 2438287211898561365, 3244937962031186892, 22098991405192020},
};
static uint64_t enc_flag2[7][7 ] = {{2122683592088238157, 3185158261199318771, 2349307539511492527, 51138442649046749, 611262005301780525, 1434600351821657574, 1302413410070203399},
{2005454808119296992, 394424040529305105, 2396022278151937307, 3420139638314332674, 2428666249492388143, 1304076042817007191, 693353841988529042},
{2210126767436137404, 2536201983621758381, 2392147594739798340, 388702820722757270, 1999640679315503249, 2770802256285032493, 2055726500504540664},
{2828382848985629636, 1004483684717709877, 3315387987421021895, 3236211141664711310, 1720451164216931961, 2968560388924130442, 1275487015431541466},
{4193589154678692, 464396298984942439, 2356814333602151406, 1608279184975590821, 3324884768125058782, 2159281650251922530, 2485387102363957262},
{2359835113164560676, 1155216527382528693, 1241470510812426464, 243245462432997899, 1433352036661240628, 3217158960236338080, 2043827177944542933},
{2881693290974960562, 1471697961228321438, 3220592579929346383, 1987366344803391566, 2499168810400026207, 381768643753997527, 1495159658770527415},
};
static uint64_t enc_flag3[7][7 ] = {{1948603390215431035, 440042497584964499, 58184865633119229, 163445191982782259, 1344018780964428039, 198233789401085911, 1246817458947754390},
{3367428348687789197, 1395359465693153846, 1845503113766355498, 495218822016702027, 2426689593828413902, 2819384185479812274, 1879630448417563376},
{638601842567327468, 3355845858821217534, 1795266504018294753, 1156872029831465837, 318415702920095031, 1791675924445631325, 2599867165513051822},
{796215693028045649, 2476175386992192948, 1136939872483499637, 2301989343012449059, 3072245585811355188, 715200915632424837, 2881354123750962106},
{3328090747093021645, 3387772659888886047, 2353346109250222267, 999864796277592806, 1197443323590973208, 2806681622897047448, 2066561803965737684},
{596689119266564281, 2279194867582711080, 1474802896434110462, 1322483500774575503, 1577140687045928507, 1187520919703441872, 2530854699103658487},
{2025893799654836346, 600705929901810892, 884153097149185779, 2817680880387080593, 1558787541253258106, 1156140923879327327, 706874341853967487},
} ;
static uint64_t enc_flag4[7][7 ] = {{980078849054137998, 1710240634156321923, 583083047963418899, 1583591974261151772, 724501527697177316, 1965316496042061394, 876311675627708133},
{3430963612436620772, 916781791031407293, 1378985152870254290, 533544259915335908, 1914587331601813292, 1048923533679364198, 2892918471670462985},
{2227168166784803279, 2282692053252190272, 3274721372386708540, 2248005171199956508, 488528800756229633, 478203631082410013, 1736088921673985910},
{2630877441501656065, 713637596984164656, 727940799874476570, 3165446847942116295, 482597237771608677, 931446626651587332, 2174149384310530021},
{2741092203076066724, 1842753614377404274, 2103488672846914998, 505295716530075839, 1476668550803348909, 1213028122982424444, 20208332125706671},
{1531865394741595535, 2786532579720491097, 524916091861161868, 2734291090732344825, 2784834217380410945, 1937150277212736140, 394598405078069858},
{3409276396839404504, 2040088873480881227, 2825721148956942993, 2528175260720948335, 3234623464409733632, 652129823148689017, 3111181863805820441},
};
static uint64_t enc_flag5[7][7 ] = {{2418874600904023337, 22406729094078352, 1856026886756161713, 1660304956941000937, 271276210454266581, 1548731661254024152, 3363279725956141360},
{1034471718005293931, 1414374074844072016, 1921432099815460641, 2022407866599803205, 988092548284568118, 2136942628897958849, 1399566434979307019},
{2551011603796438747, 646691608489276924, 2119246811975322957, 1525983298459960898, 232191996381761227, 1261298410127322334, 908888656501997025},
{2245234232220181015, 2378733074439586816, 744287461270256345, 766194208097880435, 1833856230728294875, 1671856931804582552, 2956893095508801738},
{228759635567084749, 1965150889629229022, 2638254621643298891, 2181399800149415193, 2850688479583731852, 869851255933912413, 269799304008901913},
{792326304222269885, 1165746483675931005, 1535090893932425334, 251258113026929117, 876380781564371521, 3342657324084397753, 2453546554437618951},
{2601260311877995627, 2747013384348057661, 3417623490048612705, 1558959332546750350, 2981081715252833204, 1979847769265086637, 1786048713944097170},
};
static uint64_t enc_flag6[7][7 ] = {{88174272168148285, 1517147994966503975, 929115108112705045, 197279642422666463, 3396631697116747580, 2977667140567257904, 3270344726645079527},
{1594441814343637637, 3200529176765890906, 1147854047119379522, 2598048272358654042, 768041213777526272, 85832099940356260, 2487518518309533039},
{3137586440118329132, 3318244037734533925, 916674776614797916, 1327728762537791835, 2112185184428058163, 609555305348917517, 1450475008772730480},
{3160632778684933254, 1199905846394847466, 107069265298975813, 500737885160254868, 108651313741059664, 958547854542906233, 3377918874830236389},
{2668287069370338933, 3296554629649157667, 1890136110277891867, 2790870597636774407, 928802990844962014, 599705761565175114, 449530482796599889},
{684608663781252885, 163828647382013133, 919753860451990983, 3338993346552995322, 2373658263931656849, 1247904443556746027, 2078944600505432669},
{3308920373705804390, 221838534787693430, 1843430047957332494, 1656159112924291395, 2216125893735633941, 207923277730685585, 366651848604069955},
};
static uint64_t enc_flag7[7][7 ] = {{463615881783896974, 2939368447820447809, 1604218371864058386, 2928026403474683057, 2981309242779441516, 1344261994149937292, 2589944959978412870},
{2326408769890838991, 299350968882574715, 2502428418490065276, 643429075870653002, 445342035293101489, 857614329597118830, 2531631461540360089},
{1877853139649500533, 639878066645522705, 2946187991698591051, 1501879486305070362, 2353876286341529508, 808955236247611419, 1650859350357361361},
{2005994228817290787, 1588899892924302522, 2605911132833988249, 753057643486931170, 285637124438499376, 945938667244117835, 2451722991393095176},
{2836246937865950489, 2028461355662020196, 2525779870388371205, 3418913593908479198, 1686185091454794675, 1493041857608840293, 1983822170030316712},
{700060789620031379, 1600363066010866876, 831644857708690057, 2322123102170405796, 2578109585979443880, 1550033720571093503, 2535759140004997547},
{642462556381740093, 2545359444851293266, 757259255013142828, 139223529068594842, 1139120915816564093, 801326159180659612, 1270520261440980869},
};






static uint64_t beeg_yoshi[7][7] ={{375566877478545277 , 2963470066555387146 , 1034431732462250314 , 1096052522777621704 , 966726340814324260 , 2312808208602313728 , 2907804859883349555} , {2949062098533289437 , 1957129311596127718 , 2456012614040215831 , 5994564119965166 , 548816838846919710 , 2380634432242336228 , 1748601951870102145} , {472019223552114398 , 1518737730593601700 , 3390004047774294419 , 1805625029469648044 , 598679125429739514 , 1665597553982367426 , 1285277968503540042} , {2961189828386439397 , 866999723809507887 , 3391629504755701335 , 3428316069373416911 , 874902437344635643 , 3068095183648393752 , 1261189746469056227} , {613435458185279999 , 2456249157520398525 , 2951312215556724256 , 3046841459564705313 , 576553155703453927 , 86910304885107406 , 2871479624587693317} , {2161728794373590728 , 1367427337525595116 , 1686338019966952225 , 1563871609089857931 , 270876372562903161 , 943475285994326381 , 2811154736940917695} , {2300315486841274571 , 1589959687645788693 , 453888117229900400 , 2983005388551658162 , 37531775908612719 , 1670207313296143478 , 937106862855613514} };


int array_iter(int n)
{
    int x = n;
    int y = (x + 1) / 2;
    while (y < x)
    {
        x = y;
        y = (x + n / x) / 2;
    }
    return x;
}



int array_valid(int l)
{
    int x = l / 2;
    int checked[100] = {0};
    checked[x] = 1;
    while (x * x != l)
    {
        x = (x + (l / x)) / 2;
        if (checked[x] == 1) return 0;
        checked[x] = 1;
    }
    return 1;
}

// modular addition of two uint64_t's and it is overflow safe

uint64_t add_mod(uint64_t a, uint64_t b, uint64_t m) {
  // may omit these 2 steps if a < b and a < m are known before the call.
  a %= m;
  b %= m;

  uint64_t sum = a + b;
  if (sum >= m || sum < a) {
    sum -= m;
  }
  return sum;
}

// modular multiplication
uint64_t mulmod(uint64_t a, uint64_t b, uint64_t m) {
    int64_t res = 0;
    while (a != 0) {
        if (a & 1) res = (res + b) % m;
        a >>= 1;
        b = (b << 1) % m;
    }
    return res;
}


// function that returns an array
void array_mul(uint64_t * l1, uint64_t * l2, uint64_t * l3 ,uint64_t p, int X, int Y, int Z)
{
    // int X, Y = len(l1), len(l2)
    // int Z = list_iter(X)
    // // assert X == Y
    // assert list_valid(X)
    
    uint64_t prod_list[Z];

    uint64_t sum_list = 0;
    prod_list[0] = mulmod(l1[ 7 * 0 + 0], l2[0 * 7 + 0], p);
prod_list[1] = mulmod(l1[ 7 * 0 + 1], l2[1 * 7 + 0], p);
prod_list[2] = mulmod(l1[ 7 * 0 + 2], l2[2 * 7 + 0], p);
prod_list[3] = mulmod(l1[ 7 * 0 + 3], l2[3 * 7 + 0], p);
prod_list[4] = mulmod(l1[ 7 * 0 + 4], l2[4 * 7 + 0], p);
prod_list[5] = mulmod(l1[ 7 * 0 + 5], l2[5 * 7 + 0], p);
prod_list[6] = mulmod(l1[ 7 * 0 + 6], l2[6 * 7 + 0], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 0 + 0 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 0 + 0], l2[0 * 7 + 1], p);
prod_list[1] = mulmod(l1[ 7 * 0 + 1], l2[1 * 7 + 1], p);
prod_list[2] = mulmod(l1[ 7 * 0 + 2], l2[2 * 7 + 1], p);
prod_list[3] = mulmod(l1[ 7 * 0 + 3], l2[3 * 7 + 1], p);
prod_list[4] = mulmod(l1[ 7 * 0 + 4], l2[4 * 7 + 1], p);
prod_list[5] = mulmod(l1[ 7 * 0 + 5], l2[5 * 7 + 1], p);
prod_list[6] = mulmod(l1[ 7 * 0 + 6], l2[6 * 7 + 1], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 0 + 1 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 0 + 0], l2[0 * 7 + 2], p);
prod_list[1] = mulmod(l1[ 7 * 0 + 1], l2[1 * 7 + 2], p);
prod_list[2] = mulmod(l1[ 7 * 0 + 2], l2[2 * 7 + 2], p);
prod_list[3] = mulmod(l1[ 7 * 0 + 3], l2[3 * 7 + 2], p);
prod_list[4] = mulmod(l1[ 7 * 0 + 4], l2[4 * 7 + 2], p);
prod_list[5] = mulmod(l1[ 7 * 0 + 5], l2[5 * 7 + 2], p);
prod_list[6] = mulmod(l1[ 7 * 0 + 6], l2[6 * 7 + 2], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 0 + 2 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 0 + 0], l2[0 * 7 + 3], p);
prod_list[1] = mulmod(l1[ 7 * 0 + 1], l2[1 * 7 + 3], p);
prod_list[2] = mulmod(l1[ 7 * 0 + 2], l2[2 * 7 + 3], p);
prod_list[3] = mulmod(l1[ 7 * 0 + 3], l2[3 * 7 + 3], p);
prod_list[4] = mulmod(l1[ 7 * 0 + 4], l2[4 * 7 + 3], p);
prod_list[5] = mulmod(l1[ 7 * 0 + 5], l2[5 * 7 + 3], p);
prod_list[6] = mulmod(l1[ 7 * 0 + 6], l2[6 * 7 + 3], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 0 + 3 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 0 + 0], l2[0 * 7 + 4], p);
prod_list[1] = mulmod(l1[ 7 * 0 + 1], l2[1 * 7 + 4], p);
prod_list[2] = mulmod(l1[ 7 * 0 + 2], l2[2 * 7 + 4], p);
prod_list[3] = mulmod(l1[ 7 * 0 + 3], l2[3 * 7 + 4], p);
prod_list[4] = mulmod(l1[ 7 * 0 + 4], l2[4 * 7 + 4], p);
prod_list[5] = mulmod(l1[ 7 * 0 + 5], l2[5 * 7 + 4], p);
prod_list[6] = mulmod(l1[ 7 * 0 + 6], l2[6 * 7 + 4], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 0 + 4 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 0 + 0], l2[0 * 7 + 5], p);
prod_list[1] = mulmod(l1[ 7 * 0 + 1], l2[1 * 7 + 5], p);
prod_list[2] = mulmod(l1[ 7 * 0 + 2], l2[2 * 7 + 5], p);
prod_list[3] = mulmod(l1[ 7 * 0 + 3], l2[3 * 7 + 5], p);
prod_list[4] = mulmod(l1[ 7 * 0 + 4], l2[4 * 7 + 5], p);
prod_list[5] = mulmod(l1[ 7 * 0 + 5], l2[5 * 7 + 5], p);
prod_list[6] = mulmod(l1[ 7 * 0 + 6], l2[6 * 7 + 5], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 0 + 5 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 0 + 0], l2[0 * 7 + 6], p);
prod_list[1] = mulmod(l1[ 7 * 0 + 1], l2[1 * 7 + 6], p);
prod_list[2] = mulmod(l1[ 7 * 0 + 2], l2[2 * 7 + 6], p);
prod_list[3] = mulmod(l1[ 7 * 0 + 3], l2[3 * 7 + 6], p);
prod_list[4] = mulmod(l1[ 7 * 0 + 4], l2[4 * 7 + 6], p);
prod_list[5] = mulmod(l1[ 7 * 0 + 5], l2[5 * 7 + 6], p);
prod_list[6] = mulmod(l1[ 7 * 0 + 6], l2[6 * 7 + 6], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 0 + 6 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 1 + 0], l2[0 * 7 + 0], p);
prod_list[1] = mulmod(l1[ 7 * 1 + 1], l2[1 * 7 + 0], p);
prod_list[2] = mulmod(l1[ 7 * 1 + 2], l2[2 * 7 + 0], p);
prod_list[3] = mulmod(l1[ 7 * 1 + 3], l2[3 * 7 + 0], p);
prod_list[4] = mulmod(l1[ 7 * 1 + 4], l2[4 * 7 + 0], p);
prod_list[5] = mulmod(l1[ 7 * 1 + 5], l2[5 * 7 + 0], p);
prod_list[6] = mulmod(l1[ 7 * 1 + 6], l2[6 * 7 + 0], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 1 + 0 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 1 + 0], l2[0 * 7 + 1], p);
prod_list[1] = mulmod(l1[ 7 * 1 + 1], l2[1 * 7 + 1], p);
prod_list[2] = mulmod(l1[ 7 * 1 + 2], l2[2 * 7 + 1], p);
prod_list[3] = mulmod(l1[ 7 * 1 + 3], l2[3 * 7 + 1], p);
prod_list[4] = mulmod(l1[ 7 * 1 + 4], l2[4 * 7 + 1], p);
prod_list[5] = mulmod(l1[ 7 * 1 + 5], l2[5 * 7 + 1], p);
prod_list[6] = mulmod(l1[ 7 * 1 + 6], l2[6 * 7 + 1], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 1 + 1 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 1 + 0], l2[0 * 7 + 2], p);
prod_list[1] = mulmod(l1[ 7 * 1 + 1], l2[1 * 7 + 2], p);
prod_list[2] = mulmod(l1[ 7 * 1 + 2], l2[2 * 7 + 2], p);
prod_list[3] = mulmod(l1[ 7 * 1 + 3], l2[3 * 7 + 2], p);
prod_list[4] = mulmod(l1[ 7 * 1 + 4], l2[4 * 7 + 2], p);
prod_list[5] = mulmod(l1[ 7 * 1 + 5], l2[5 * 7 + 2], p);
prod_list[6] = mulmod(l1[ 7 * 1 + 6], l2[6 * 7 + 2], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 1 + 2 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 1 + 0], l2[0 * 7 + 3], p);
prod_list[1] = mulmod(l1[ 7 * 1 + 1], l2[1 * 7 + 3], p);
prod_list[2] = mulmod(l1[ 7 * 1 + 2], l2[2 * 7 + 3], p);
prod_list[3] = mulmod(l1[ 7 * 1 + 3], l2[3 * 7 + 3], p);
prod_list[4] = mulmod(l1[ 7 * 1 + 4], l2[4 * 7 + 3], p);
prod_list[5] = mulmod(l1[ 7 * 1 + 5], l2[5 * 7 + 3], p);
prod_list[6] = mulmod(l1[ 7 * 1 + 6], l2[6 * 7 + 3], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 1 + 3 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 1 + 0], l2[0 * 7 + 4], p);
prod_list[1] = mulmod(l1[ 7 * 1 + 1], l2[1 * 7 + 4], p);
prod_list[2] = mulmod(l1[ 7 * 1 + 2], l2[2 * 7 + 4], p);
prod_list[3] = mulmod(l1[ 7 * 1 + 3], l2[3 * 7 + 4], p);
prod_list[4] = mulmod(l1[ 7 * 1 + 4], l2[4 * 7 + 4], p);
prod_list[5] = mulmod(l1[ 7 * 1 + 5], l2[5 * 7 + 4], p);
prod_list[6] = mulmod(l1[ 7 * 1 + 6], l2[6 * 7 + 4], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 1 + 4 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 1 + 0], l2[0 * 7 + 5], p);
prod_list[1] = mulmod(l1[ 7 * 1 + 1], l2[1 * 7 + 5], p);
prod_list[2] = mulmod(l1[ 7 * 1 + 2], l2[2 * 7 + 5], p);
prod_list[3] = mulmod(l1[ 7 * 1 + 3], l2[3 * 7 + 5], p);
prod_list[4] = mulmod(l1[ 7 * 1 + 4], l2[4 * 7 + 5], p);
prod_list[5] = mulmod(l1[ 7 * 1 + 5], l2[5 * 7 + 5], p);
prod_list[6] = mulmod(l1[ 7 * 1 + 6], l2[6 * 7 + 5], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 1 + 5 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 1 + 0], l2[0 * 7 + 6], p);
prod_list[1] = mulmod(l1[ 7 * 1 + 1], l2[1 * 7 + 6], p);
prod_list[2] = mulmod(l1[ 7 * 1 + 2], l2[2 * 7 + 6], p);
prod_list[3] = mulmod(l1[ 7 * 1 + 3], l2[3 * 7 + 6], p);
prod_list[4] = mulmod(l1[ 7 * 1 + 4], l2[4 * 7 + 6], p);
prod_list[5] = mulmod(l1[ 7 * 1 + 5], l2[5 * 7 + 6], p);
prod_list[6] = mulmod(l1[ 7 * 1 + 6], l2[6 * 7 + 6], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 1 + 6 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 2 + 0], l2[0 * 7 + 0], p);
prod_list[1] = mulmod(l1[ 7 * 2 + 1], l2[1 * 7 + 0], p);
prod_list[2] = mulmod(l1[ 7 * 2 + 2], l2[2 * 7 + 0], p);
prod_list[3] = mulmod(l1[ 7 * 2 + 3], l2[3 * 7 + 0], p);
prod_list[4] = mulmod(l1[ 7 * 2 + 4], l2[4 * 7 + 0], p);
prod_list[5] = mulmod(l1[ 7 * 2 + 5], l2[5 * 7 + 0], p);
prod_list[6] = mulmod(l1[ 7 * 2 + 6], l2[6 * 7 + 0], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 2 + 0 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 2 + 0], l2[0 * 7 + 1], p);
prod_list[1] = mulmod(l1[ 7 * 2 + 1], l2[1 * 7 + 1], p);
prod_list[2] = mulmod(l1[ 7 * 2 + 2], l2[2 * 7 + 1], p);
prod_list[3] = mulmod(l1[ 7 * 2 + 3], l2[3 * 7 + 1], p);
prod_list[4] = mulmod(l1[ 7 * 2 + 4], l2[4 * 7 + 1], p);
prod_list[5] = mulmod(l1[ 7 * 2 + 5], l2[5 * 7 + 1], p);
prod_list[6] = mulmod(l1[ 7 * 2 + 6], l2[6 * 7 + 1], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 2 + 1 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 2 + 0], l2[0 * 7 + 2], p);
prod_list[1] = mulmod(l1[ 7 * 2 + 1], l2[1 * 7 + 2], p);
prod_list[2] = mulmod(l1[ 7 * 2 + 2], l2[2 * 7 + 2], p);
prod_list[3] = mulmod(l1[ 7 * 2 + 3], l2[3 * 7 + 2], p);
prod_list[4] = mulmod(l1[ 7 * 2 + 4], l2[4 * 7 + 2], p);
prod_list[5] = mulmod(l1[ 7 * 2 + 5], l2[5 * 7 + 2], p);
prod_list[6] = mulmod(l1[ 7 * 2 + 6], l2[6 * 7 + 2], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 2 + 2 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 2 + 0], l2[0 * 7 + 3], p);
prod_list[1] = mulmod(l1[ 7 * 2 + 1], l2[1 * 7 + 3], p);
prod_list[2] = mulmod(l1[ 7 * 2 + 2], l2[2 * 7 + 3], p);
prod_list[3] = mulmod(l1[ 7 * 2 + 3], l2[3 * 7 + 3], p);
prod_list[4] = mulmod(l1[ 7 * 2 + 4], l2[4 * 7 + 3], p);
prod_list[5] = mulmod(l1[ 7 * 2 + 5], l2[5 * 7 + 3], p);
prod_list[6] = mulmod(l1[ 7 * 2 + 6], l2[6 * 7 + 3], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 2 + 3 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 2 + 0], l2[0 * 7 + 4], p);
prod_list[1] = mulmod(l1[ 7 * 2 + 1], l2[1 * 7 + 4], p);
prod_list[2] = mulmod(l1[ 7 * 2 + 2], l2[2 * 7 + 4], p);
prod_list[3] = mulmod(l1[ 7 * 2 + 3], l2[3 * 7 + 4], p);
prod_list[4] = mulmod(l1[ 7 * 2 + 4], l2[4 * 7 + 4], p);
prod_list[5] = mulmod(l1[ 7 * 2 + 5], l2[5 * 7 + 4], p);
prod_list[6] = mulmod(l1[ 7 * 2 + 6], l2[6 * 7 + 4], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 2 + 4 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 2 + 0], l2[0 * 7 + 5], p);
prod_list[1] = mulmod(l1[ 7 * 2 + 1], l2[1 * 7 + 5], p);
prod_list[2] = mulmod(l1[ 7 * 2 + 2], l2[2 * 7 + 5], p);
prod_list[3] = mulmod(l1[ 7 * 2 + 3], l2[3 * 7 + 5], p);
prod_list[4] = mulmod(l1[ 7 * 2 + 4], l2[4 * 7 + 5], p);
prod_list[5] = mulmod(l1[ 7 * 2 + 5], l2[5 * 7 + 5], p);
prod_list[6] = mulmod(l1[ 7 * 2 + 6], l2[6 * 7 + 5], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 2 + 5 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 2 + 0], l2[0 * 7 + 6], p);
prod_list[1] = mulmod(l1[ 7 * 2 + 1], l2[1 * 7 + 6], p);
prod_list[2] = mulmod(l1[ 7 * 2 + 2], l2[2 * 7 + 6], p);
prod_list[3] = mulmod(l1[ 7 * 2 + 3], l2[3 * 7 + 6], p);
prod_list[4] = mulmod(l1[ 7 * 2 + 4], l2[4 * 7 + 6], p);
prod_list[5] = mulmod(l1[ 7 * 2 + 5], l2[5 * 7 + 6], p);
prod_list[6] = mulmod(l1[ 7 * 2 + 6], l2[6 * 7 + 6], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 2 + 6 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 3 + 0], l2[0 * 7 + 0], p);
prod_list[1] = mulmod(l1[ 7 * 3 + 1], l2[1 * 7 + 0], p);
prod_list[2] = mulmod(l1[ 7 * 3 + 2], l2[2 * 7 + 0], p);
prod_list[3] = mulmod(l1[ 7 * 3 + 3], l2[3 * 7 + 0], p);
prod_list[4] = mulmod(l1[ 7 * 3 + 4], l2[4 * 7 + 0], p);
prod_list[5] = mulmod(l1[ 7 * 3 + 5], l2[5 * 7 + 0], p);
prod_list[6] = mulmod(l1[ 7 * 3 + 6], l2[6 * 7 + 0], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 3 + 0 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 3 + 0], l2[0 * 7 + 1], p);
prod_list[1] = mulmod(l1[ 7 * 3 + 1], l2[1 * 7 + 1], p);
prod_list[2] = mulmod(l1[ 7 * 3 + 2], l2[2 * 7 + 1], p);
prod_list[3] = mulmod(l1[ 7 * 3 + 3], l2[3 * 7 + 1], p);
prod_list[4] = mulmod(l1[ 7 * 3 + 4], l2[4 * 7 + 1], p);
prod_list[5] = mulmod(l1[ 7 * 3 + 5], l2[5 * 7 + 1], p);
prod_list[6] = mulmod(l1[ 7 * 3 + 6], l2[6 * 7 + 1], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 3 + 1 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 3 + 0], l2[0 * 7 + 2], p);
prod_list[1] = mulmod(l1[ 7 * 3 + 1], l2[1 * 7 + 2], p);
prod_list[2] = mulmod(l1[ 7 * 3 + 2], l2[2 * 7 + 2], p);
prod_list[3] = mulmod(l1[ 7 * 3 + 3], l2[3 * 7 + 2], p);
prod_list[4] = mulmod(l1[ 7 * 3 + 4], l2[4 * 7 + 2], p);
prod_list[5] = mulmod(l1[ 7 * 3 + 5], l2[5 * 7 + 2], p);
prod_list[6] = mulmod(l1[ 7 * 3 + 6], l2[6 * 7 + 2], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 3 + 2 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 3 + 0], l2[0 * 7 + 3], p);
prod_list[1] = mulmod(l1[ 7 * 3 + 1], l2[1 * 7 + 3], p);
prod_list[2] = mulmod(l1[ 7 * 3 + 2], l2[2 * 7 + 3], p);
prod_list[3] = mulmod(l1[ 7 * 3 + 3], l2[3 * 7 + 3], p);
prod_list[4] = mulmod(l1[ 7 * 3 + 4], l2[4 * 7 + 3], p);
prod_list[5] = mulmod(l1[ 7 * 3 + 5], l2[5 * 7 + 3], p);
prod_list[6] = mulmod(l1[ 7 * 3 + 6], l2[6 * 7 + 3], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 3 + 3 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 3 + 0], l2[0 * 7 + 4], p);
prod_list[1] = mulmod(l1[ 7 * 3 + 1], l2[1 * 7 + 4], p);
prod_list[2] = mulmod(l1[ 7 * 3 + 2], l2[2 * 7 + 4], p);
prod_list[3] = mulmod(l1[ 7 * 3 + 3], l2[3 * 7 + 4], p);
prod_list[4] = mulmod(l1[ 7 * 3 + 4], l2[4 * 7 + 4], p);
prod_list[5] = mulmod(l1[ 7 * 3 + 5], l2[5 * 7 + 4], p);
prod_list[6] = mulmod(l1[ 7 * 3 + 6], l2[6 * 7 + 4], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 3 + 4 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 3 + 0], l2[0 * 7 + 5], p);
prod_list[1] = mulmod(l1[ 7 * 3 + 1], l2[1 * 7 + 5], p);
prod_list[2] = mulmod(l1[ 7 * 3 + 2], l2[2 * 7 + 5], p);
prod_list[3] = mulmod(l1[ 7 * 3 + 3], l2[3 * 7 + 5], p);
prod_list[4] = mulmod(l1[ 7 * 3 + 4], l2[4 * 7 + 5], p);
prod_list[5] = mulmod(l1[ 7 * 3 + 5], l2[5 * 7 + 5], p);
prod_list[6] = mulmod(l1[ 7 * 3 + 6], l2[6 * 7 + 5], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 3 + 5 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 3 + 0], l2[0 * 7 + 6], p);
prod_list[1] = mulmod(l1[ 7 * 3 + 1], l2[1 * 7 + 6], p);
prod_list[2] = mulmod(l1[ 7 * 3 + 2], l2[2 * 7 + 6], p);
prod_list[3] = mulmod(l1[ 7 * 3 + 3], l2[3 * 7 + 6], p);
prod_list[4] = mulmod(l1[ 7 * 3 + 4], l2[4 * 7 + 6], p);
prod_list[5] = mulmod(l1[ 7 * 3 + 5], l2[5 * 7 + 6], p);
prod_list[6] = mulmod(l1[ 7 * 3 + 6], l2[6 * 7 + 6], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 3 + 6 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 4 + 0], l2[0 * 7 + 0], p);
prod_list[1] = mulmod(l1[ 7 * 4 + 1], l2[1 * 7 + 0], p);
prod_list[2] = mulmod(l1[ 7 * 4 + 2], l2[2 * 7 + 0], p);
prod_list[3] = mulmod(l1[ 7 * 4 + 3], l2[3 * 7 + 0], p);
prod_list[4] = mulmod(l1[ 7 * 4 + 4], l2[4 * 7 + 0], p);
prod_list[5] = mulmod(l1[ 7 * 4 + 5], l2[5 * 7 + 0], p);
prod_list[6] = mulmod(l1[ 7 * 4 + 6], l2[6 * 7 + 0], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 4 + 0 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 4 + 0], l2[0 * 7 + 1], p);
prod_list[1] = mulmod(l1[ 7 * 4 + 1], l2[1 * 7 + 1], p);
prod_list[2] = mulmod(l1[ 7 * 4 + 2], l2[2 * 7 + 1], p);
prod_list[3] = mulmod(l1[ 7 * 4 + 3], l2[3 * 7 + 1], p);
prod_list[4] = mulmod(l1[ 7 * 4 + 4], l2[4 * 7 + 1], p);
prod_list[5] = mulmod(l1[ 7 * 4 + 5], l2[5 * 7 + 1], p);
prod_list[6] = mulmod(l1[ 7 * 4 + 6], l2[6 * 7 + 1], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 4 + 1 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 4 + 0], l2[0 * 7 + 2], p);
prod_list[1] = mulmod(l1[ 7 * 4 + 1], l2[1 * 7 + 2], p);
prod_list[2] = mulmod(l1[ 7 * 4 + 2], l2[2 * 7 + 2], p);
prod_list[3] = mulmod(l1[ 7 * 4 + 3], l2[3 * 7 + 2], p);
prod_list[4] = mulmod(l1[ 7 * 4 + 4], l2[4 * 7 + 2], p);
prod_list[5] = mulmod(l1[ 7 * 4 + 5], l2[5 * 7 + 2], p);
prod_list[6] = mulmod(l1[ 7 * 4 + 6], l2[6 * 7 + 2], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 4 + 2 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 4 + 0], l2[0 * 7 + 3], p);
prod_list[1] = mulmod(l1[ 7 * 4 + 1], l2[1 * 7 + 3], p);
prod_list[2] = mulmod(l1[ 7 * 4 + 2], l2[2 * 7 + 3], p);
prod_list[3] = mulmod(l1[ 7 * 4 + 3], l2[3 * 7 + 3], p);
prod_list[4] = mulmod(l1[ 7 * 4 + 4], l2[4 * 7 + 3], p);
prod_list[5] = mulmod(l1[ 7 * 4 + 5], l2[5 * 7 + 3], p);
prod_list[6] = mulmod(l1[ 7 * 4 + 6], l2[6 * 7 + 3], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 4 + 3 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 4 + 0], l2[0 * 7 + 4], p);
prod_list[1] = mulmod(l1[ 7 * 4 + 1], l2[1 * 7 + 4], p);
prod_list[2] = mulmod(l1[ 7 * 4 + 2], l2[2 * 7 + 4], p);
prod_list[3] = mulmod(l1[ 7 * 4 + 3], l2[3 * 7 + 4], p);
prod_list[4] = mulmod(l1[ 7 * 4 + 4], l2[4 * 7 + 4], p);
prod_list[5] = mulmod(l1[ 7 * 4 + 5], l2[5 * 7 + 4], p);
prod_list[6] = mulmod(l1[ 7 * 4 + 6], l2[6 * 7 + 4], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 4 + 4 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 4 + 0], l2[0 * 7 + 5], p);
prod_list[1] = mulmod(l1[ 7 * 4 + 1], l2[1 * 7 + 5], p);
prod_list[2] = mulmod(l1[ 7 * 4 + 2], l2[2 * 7 + 5], p);
prod_list[3] = mulmod(l1[ 7 * 4 + 3], l2[3 * 7 + 5], p);
prod_list[4] = mulmod(l1[ 7 * 4 + 4], l2[4 * 7 + 5], p);
prod_list[5] = mulmod(l1[ 7 * 4 + 5], l2[5 * 7 + 5], p);
prod_list[6] = mulmod(l1[ 7 * 4 + 6], l2[6 * 7 + 5], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 4 + 5 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 4 + 0], l2[0 * 7 + 6], p);
prod_list[1] = mulmod(l1[ 7 * 4 + 1], l2[1 * 7 + 6], p);
prod_list[2] = mulmod(l1[ 7 * 4 + 2], l2[2 * 7 + 6], p);
prod_list[3] = mulmod(l1[ 7 * 4 + 3], l2[3 * 7 + 6], p);
prod_list[4] = mulmod(l1[ 7 * 4 + 4], l2[4 * 7 + 6], p);
prod_list[5] = mulmod(l1[ 7 * 4 + 5], l2[5 * 7 + 6], p);
prod_list[6] = mulmod(l1[ 7 * 4 + 6], l2[6 * 7 + 6], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 4 + 6 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 5 + 0], l2[0 * 7 + 0], p);
prod_list[1] = mulmod(l1[ 7 * 5 + 1], l2[1 * 7 + 0], p);
prod_list[2] = mulmod(l1[ 7 * 5 + 2], l2[2 * 7 + 0], p);
prod_list[3] = mulmod(l1[ 7 * 5 + 3], l2[3 * 7 + 0], p);
prod_list[4] = mulmod(l1[ 7 * 5 + 4], l2[4 * 7 + 0], p);
prod_list[5] = mulmod(l1[ 7 * 5 + 5], l2[5 * 7 + 0], p);
prod_list[6] = mulmod(l1[ 7 * 5 + 6], l2[6 * 7 + 0], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 5 + 0 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 5 + 0], l2[0 * 7 + 1], p);
prod_list[1] = mulmod(l1[ 7 * 5 + 1], l2[1 * 7 + 1], p);
prod_list[2] = mulmod(l1[ 7 * 5 + 2], l2[2 * 7 + 1], p);
prod_list[3] = mulmod(l1[ 7 * 5 + 3], l2[3 * 7 + 1], p);
prod_list[4] = mulmod(l1[ 7 * 5 + 4], l2[4 * 7 + 1], p);
prod_list[5] = mulmod(l1[ 7 * 5 + 5], l2[5 * 7 + 1], p);
prod_list[6] = mulmod(l1[ 7 * 5 + 6], l2[6 * 7 + 1], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 5 + 1 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 5 + 0], l2[0 * 7 + 2], p);
prod_list[1] = mulmod(l1[ 7 * 5 + 1], l2[1 * 7 + 2], p);
prod_list[2] = mulmod(l1[ 7 * 5 + 2], l2[2 * 7 + 2], p);
prod_list[3] = mulmod(l1[ 7 * 5 + 3], l2[3 * 7 + 2], p);
prod_list[4] = mulmod(l1[ 7 * 5 + 4], l2[4 * 7 + 2], p);
prod_list[5] = mulmod(l1[ 7 * 5 + 5], l2[5 * 7 + 2], p);
prod_list[6] = mulmod(l1[ 7 * 5 + 6], l2[6 * 7 + 2], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 5 + 2 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 5 + 0], l2[0 * 7 + 3], p);
prod_list[1] = mulmod(l1[ 7 * 5 + 1], l2[1 * 7 + 3], p);
prod_list[2] = mulmod(l1[ 7 * 5 + 2], l2[2 * 7 + 3], p);
prod_list[3] = mulmod(l1[ 7 * 5 + 3], l2[3 * 7 + 3], p);
prod_list[4] = mulmod(l1[ 7 * 5 + 4], l2[4 * 7 + 3], p);
prod_list[5] = mulmod(l1[ 7 * 5 + 5], l2[5 * 7 + 3], p);
prod_list[6] = mulmod(l1[ 7 * 5 + 6], l2[6 * 7 + 3], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 5 + 3 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 5 + 0], l2[0 * 7 + 4], p);
prod_list[1] = mulmod(l1[ 7 * 5 + 1], l2[1 * 7 + 4], p);
prod_list[2] = mulmod(l1[ 7 * 5 + 2], l2[2 * 7 + 4], p);
prod_list[3] = mulmod(l1[ 7 * 5 + 3], l2[3 * 7 + 4], p);
prod_list[4] = mulmod(l1[ 7 * 5 + 4], l2[4 * 7 + 4], p);
prod_list[5] = mulmod(l1[ 7 * 5 + 5], l2[5 * 7 + 4], p);
prod_list[6] = mulmod(l1[ 7 * 5 + 6], l2[6 * 7 + 4], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 5 + 4 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 5 + 0], l2[0 * 7 + 5], p);
prod_list[1] = mulmod(l1[ 7 * 5 + 1], l2[1 * 7 + 5], p);
prod_list[2] = mulmod(l1[ 7 * 5 + 2], l2[2 * 7 + 5], p);
prod_list[3] = mulmod(l1[ 7 * 5 + 3], l2[3 * 7 + 5], p);
prod_list[4] = mulmod(l1[ 7 * 5 + 4], l2[4 * 7 + 5], p);
prod_list[5] = mulmod(l1[ 7 * 5 + 5], l2[5 * 7 + 5], p);
prod_list[6] = mulmod(l1[ 7 * 5 + 6], l2[6 * 7 + 5], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 5 + 5 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 5 + 0], l2[0 * 7 + 6], p);
prod_list[1] = mulmod(l1[ 7 * 5 + 1], l2[1 * 7 + 6], p);
prod_list[2] = mulmod(l1[ 7 * 5 + 2], l2[2 * 7 + 6], p);
prod_list[3] = mulmod(l1[ 7 * 5 + 3], l2[3 * 7 + 6], p);
prod_list[4] = mulmod(l1[ 7 * 5 + 4], l2[4 * 7 + 6], p);
prod_list[5] = mulmod(l1[ 7 * 5 + 5], l2[5 * 7 + 6], p);
prod_list[6] = mulmod(l1[ 7 * 5 + 6], l2[6 * 7 + 6], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 5 + 6 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 6 + 0], l2[0 * 7 + 0], p);
prod_list[1] = mulmod(l1[ 7 * 6 + 1], l2[1 * 7 + 0], p);
prod_list[2] = mulmod(l1[ 7 * 6 + 2], l2[2 * 7 + 0], p);
prod_list[3] = mulmod(l1[ 7 * 6 + 3], l2[3 * 7 + 0], p);
prod_list[4] = mulmod(l1[ 7 * 6 + 4], l2[4 * 7 + 0], p);
prod_list[5] = mulmod(l1[ 7 * 6 + 5], l2[5 * 7 + 0], p);
prod_list[6] = mulmod(l1[ 7 * 6 + 6], l2[6 * 7 + 0], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 6 + 0 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 6 + 0], l2[0 * 7 + 1], p);
prod_list[1] = mulmod(l1[ 7 * 6 + 1], l2[1 * 7 + 1], p);
prod_list[2] = mulmod(l1[ 7 * 6 + 2], l2[2 * 7 + 1], p);
prod_list[3] = mulmod(l1[ 7 * 6 + 3], l2[3 * 7 + 1], p);
prod_list[4] = mulmod(l1[ 7 * 6 + 4], l2[4 * 7 + 1], p);
prod_list[5] = mulmod(l1[ 7 * 6 + 5], l2[5 * 7 + 1], p);
prod_list[6] = mulmod(l1[ 7 * 6 + 6], l2[6 * 7 + 1], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 6 + 1 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 6 + 0], l2[0 * 7 + 2], p);
prod_list[1] = mulmod(l1[ 7 * 6 + 1], l2[1 * 7 + 2], p);
prod_list[2] = mulmod(l1[ 7 * 6 + 2], l2[2 * 7 + 2], p);
prod_list[3] = mulmod(l1[ 7 * 6 + 3], l2[3 * 7 + 2], p);
prod_list[4] = mulmod(l1[ 7 * 6 + 4], l2[4 * 7 + 2], p);
prod_list[5] = mulmod(l1[ 7 * 6 + 5], l2[5 * 7 + 2], p);
prod_list[6] = mulmod(l1[ 7 * 6 + 6], l2[6 * 7 + 2], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 6 + 2 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 6 + 0], l2[0 * 7 + 3], p);
prod_list[1] = mulmod(l1[ 7 * 6 + 1], l2[1 * 7 + 3], p);
prod_list[2] = mulmod(l1[ 7 * 6 + 2], l2[2 * 7 + 3], p);
prod_list[3] = mulmod(l1[ 7 * 6 + 3], l2[3 * 7 + 3], p);
prod_list[4] = mulmod(l1[ 7 * 6 + 4], l2[4 * 7 + 3], p);
prod_list[5] = mulmod(l1[ 7 * 6 + 5], l2[5 * 7 + 3], p);
prod_list[6] = mulmod(l1[ 7 * 6 + 6], l2[6 * 7 + 3], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 6 + 3 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 6 + 0], l2[0 * 7 + 4], p);
prod_list[1] = mulmod(l1[ 7 * 6 + 1], l2[1 * 7 + 4], p);
prod_list[2] = mulmod(l1[ 7 * 6 + 2], l2[2 * 7 + 4], p);
prod_list[3] = mulmod(l1[ 7 * 6 + 3], l2[3 * 7 + 4], p);
prod_list[4] = mulmod(l1[ 7 * 6 + 4], l2[4 * 7 + 4], p);
prod_list[5] = mulmod(l1[ 7 * 6 + 5], l2[5 * 7 + 4], p);
prod_list[6] = mulmod(l1[ 7 * 6 + 6], l2[6 * 7 + 4], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 6 + 4 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 6 + 0], l2[0 * 7 + 5], p);
prod_list[1] = mulmod(l1[ 7 * 6 + 1], l2[1 * 7 + 5], p);
prod_list[2] = mulmod(l1[ 7 * 6 + 2], l2[2 * 7 + 5], p);
prod_list[3] = mulmod(l1[ 7 * 6 + 3], l2[3 * 7 + 5], p);
prod_list[4] = mulmod(l1[ 7 * 6 + 4], l2[4 * 7 + 5], p);
prod_list[5] = mulmod(l1[ 7 * 6 + 5], l2[5 * 7 + 5], p);
prod_list[6] = mulmod(l1[ 7 * 6 + 6], l2[6 * 7 + 5], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 6 + 5 ] = sum_list;
prod_list[0] = mulmod(l1[ 7 * 6 + 0], l2[0 * 7 + 6], p);
prod_list[1] = mulmod(l1[ 7 * 6 + 1], l2[1 * 7 + 6], p);
prod_list[2] = mulmod(l1[ 7 * 6 + 2], l2[2 * 7 + 6], p);
prod_list[3] = mulmod(l1[ 7 * 6 + 3], l2[3 * 7 + 6], p);
prod_list[4] = mulmod(l1[ 7 * 6 + 4], l2[4 * 7 + 6], p);
prod_list[5] = mulmod(l1[ 7 * 6 + 5], l2[5 * 7 + 6], p);
prod_list[6] = mulmod(l1[ 7 * 6 + 6], l2[6 * 7 + 6], p);
sum_list = 0;
sum_list = add_mod(sum_list, prod_list[0], p);
sum_list = add_mod(sum_list, prod_list[1], p);
sum_list = add_mod(sum_list, prod_list[2], p);
sum_list = add_mod(sum_list, prod_list[3], p);
sum_list = add_mod(sum_list, prod_list[4], p);
sum_list = add_mod(sum_list, prod_list[5], p);
sum_list = add_mod(sum_list, prod_list[6], p);
l3[ 7 * 6 + 6 ] = sum_list;
    // print 
    // for (int i = 0; i < 7; i++) {
    //     for (int j = 0; j < 7; j++) {
    //         printf("%llu ", l3[7*i + j]);
    //     } }
}

/*
convert this to c
def list_exp(l0, e, p):
    exp = bin(e)[3::]
    l = l0
    for i in exp:
        l = list_mul(l,l,p)
        if i == '1':
            l = list_mul(l,l0,p)
    return l

*/

// count bits a uint64_t
int count_bits(uint64_t n)
{
    int count = 0;
    while (n)
    {
        count += 1;
        n >>= 1;
    }
    return count;
}

void array_exp( uint64_t l0[7][7], uint64_t e ,uint64_t p , uint64_t * l) {
  
    // uint64_t l = l0;
    // ^ deep copy l0 to l
    
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            l[7*i + j] = l0[i][j];
        }
    }
    uint64_t l4[7][7];

    // copy identity matrix to l4
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (i == j) {
                l4[i][j] = 1;
            } else {
                l4[i][j] = 0;
            }
        }
    }
    // printf("%d", count_bits(e));
    int exp = count_bits(e);
    while (e>1) {
       
        if ( e % 2 == 1 ) {
            uint64_t * l2 = malloc(7*7*sizeof(uint64_t));
            array_mul(*l4,l,l2,p ,7,7,7);
            
            
            // l = array_mul(l,l0,p,7,7,7);
            // deep copy l2 to l
            for (int ii = 0; ii < 7; ii++) {
                for (int k = 0; k < 7; k++) {
                    l4[ii][k] = l2[7*ii + k];
                }
            }
            e = (e-1);
        }
        
        uint64_t * l1 = malloc(7*7*sizeof(uint64_t));
        array_mul(l,l,l1,p ,7,7,7);
        // printf("\n exp is %d \n", e);
        // print l1 to see if it is correct
        // for (int k = 0; k < 7; k++) {
        //     for (int jj = 0; jj < 7; jj++) {
        //         printf("%llu ,  ", *l0[7*k + jj]);
        //     }
        // }

        // deep copy l1 to l
        for (int ii = 0; ii < 7; ii++) {
            for (int k = 0; k < 7; k++) {
                l[ 7*ii + k ] = l1[7*ii + k];
            }
        
        }
        e = e >> 1;
        

    }
    uint64_t * l3 = malloc(7*7*sizeof(uint64_t));
    // matrix multiply l and l4
    array_mul(*l4,l,l3,p ,7,7,7);
    // deep copy l1 to l
        for (int ii = 0; ii < 7; ii++) {
            for (int k = 0; k < 7; k++) {
                l[ 7*ii + k ] = l3[7*ii + k];
            }
        
        }
}
// matrix exponentiation in c

int main()
{


    printf("Give me the flag and I'll run my RISCY flag-checker:");
	char input[50];
	fgets(input, 50, stdin);

	if (strlen(input) != 49) {
		printf("You're shearing me apart...");
		exit(-1);
	}
    
    uint64_t input_flag[8];
    // convert every 7 bytes to a little endian uint64_t
    input_flag[0] = 0;
input_flag[0] += (uint64_t)input[7*0 + 0] << (8*0);
input_flag[0] += (uint64_t)input[7*0 + 1] << (8*1);
input_flag[0] += (uint64_t)input[7*0 + 2] << (8*2);
input_flag[0] += (uint64_t)input[7*0 + 3] << (8*3);
input_flag[0] += (uint64_t)input[7*0 + 4] << (8*4);
input_flag[0] += (uint64_t)input[7*0 + 5] << (8*5);
input_flag[0] += (uint64_t)input[7*0 + 6] << (8*6);
input_flag[1] = 0;
input_flag[1] += (uint64_t)input[7*1 + 0] << (8*0);
input_flag[1] += (uint64_t)input[7*1 + 1] << (8*1);
input_flag[1] += (uint64_t)input[7*1 + 2] << (8*2);
input_flag[1] += (uint64_t)input[7*1 + 3] << (8*3);
input_flag[1] += (uint64_t)input[7*1 + 4] << (8*4);
input_flag[1] += (uint64_t)input[7*1 + 5] << (8*5);
input_flag[1] += (uint64_t)input[7*1 + 6] << (8*6);
input_flag[2] = 0;
input_flag[2] += (uint64_t)input[7*2 + 0] << (8*0);
input_flag[2] += (uint64_t)input[7*2 + 1] << (8*1);
input_flag[2] += (uint64_t)input[7*2 + 2] << (8*2);
input_flag[2] += (uint64_t)input[7*2 + 3] << (8*3);
input_flag[2] += (uint64_t)input[7*2 + 4] << (8*4);
input_flag[2] += (uint64_t)input[7*2 + 5] << (8*5);
input_flag[2] += (uint64_t)input[7*2 + 6] << (8*6);
input_flag[3] = 0;
input_flag[3] += (uint64_t)input[7*3 + 0] << (8*0);
input_flag[3] += (uint64_t)input[7*3 + 1] << (8*1);
input_flag[3] += (uint64_t)input[7*3 + 2] << (8*2);
input_flag[3] += (uint64_t)input[7*3 + 3] << (8*3);
input_flag[3] += (uint64_t)input[7*3 + 4] << (8*4);
input_flag[3] += (uint64_t)input[7*3 + 5] << (8*5);
input_flag[3] += (uint64_t)input[7*3 + 6] << (8*6);
input_flag[4] = 0;
input_flag[4] += (uint64_t)input[7*4 + 0] << (8*0);
input_flag[4] += (uint64_t)input[7*4 + 1] << (8*1);
input_flag[4] += (uint64_t)input[7*4 + 2] << (8*2);
input_flag[4] += (uint64_t)input[7*4 + 3] << (8*3);
input_flag[4] += (uint64_t)input[7*4 + 4] << (8*4);
input_flag[4] += (uint64_t)input[7*4 + 5] << (8*5);
input_flag[4] += (uint64_t)input[7*4 + 6] << (8*6);
input_flag[5] = 0;
input_flag[5] += (uint64_t)input[7*5 + 0] << (8*0);
input_flag[5] += (uint64_t)input[7*5 + 1] << (8*1);
input_flag[5] += (uint64_t)input[7*5 + 2] << (8*2);
input_flag[5] += (uint64_t)input[7*5 + 3] << (8*3);
input_flag[5] += (uint64_t)input[7*5 + 4] << (8*4);
input_flag[5] += (uint64_t)input[7*5 + 5] << (8*5);
input_flag[5] += (uint64_t)input[7*5 + 6] << (8*6);
input_flag[6] = 0;
input_flag[6] += (uint64_t)input[7*6 + 0] << (8*0);
input_flag[6] += (uint64_t)input[7*6 + 1] << (8*1);
input_flag[6] += (uint64_t)input[7*6 + 2] << (8*2);
input_flag[6] += (uint64_t)input[7*6 + 3] << (8*3);
input_flag[6] += (uint64_t)input[7*6 + 4] << (8*4);
input_flag[6] += (uint64_t)input[7*6 + 5] << (8*5);
input_flag[6] += (uint64_t)input[7*6 + 6] << (8*6);




    // for(int i = 0; i < 46; i++) {
    //     printf("%lf, ", input_flag[i]);
    // }

    printf("\n\n");
    // flag_calculation(input_flag, final_flag);

    // for(int i = 0; i < 46; i++) {
    //      std::cout << std::fixed << std::setprecision(100) << final_flag[i] << std::endl;
    // }

    // print beege yoshi
    // for (int i = 0; i<7; i++){
    //     // new line
    //     printf("\n");

    //     for (int j = 0; j<7; j++){
    //         printf("%llu, ", beeg_yoshi[i][j]);
    //     }
    // }
        printf("\n");


    
    for (int i = 0; i<7; i++){
        // printf("Matrix %u  for exp %u : \n " , input_flag[i], 2);
        uint64_t * l  = malloc(7*7*sizeof(uint64_t));
        array_exp(beeg_yoshi,input_flag[i],p , l );
        // printf("Matrix %u  for exp %llu : \n " , i, input_flag[i]);
        // ^ initial
        uint64_t l2 [7][7];
        // print l
         printf("{");
        for (int i = 0; i < 7; i++) {
            printf("{");
            for (int j = 0; j < 7; j++) {
                l2[i][j] = l[7*i + j];
                if (j == 6) {
                    printf("%llu", l2[i][j]);
                }
                else {
                    printf("%llu, ", l2[i][j]);
                }
            }
            printf("},\n");
        }
        
        printf("} \n \n");
        // compare l2 to enc_flag1
        if(i== 0){
        for (int k = 0; k < 7; k++) {
            for (int j = 0; j < 7; j++) {
                if (l2[k][j] != enc_flag1[k][j]) {
                    printf("Reflected a bit too much on that one...");
                    exit(0);
                }
            }
        }}
        if(i== 1){
        for (int k = 0; k < 7; k++) {
            for (int j = 0; j < 7; j++) {
                if (l2[k][j] != enc_flag2[k][j]) {
                    printf("Reflected a bit too much on that one...");
                    exit(0);
                }
            }
        }}
        if(i== 2){
        for (int k = 0; k < 7; k++) {
            for (int j = 0; j < 7; j++) {
                if (l2[k][j] != enc_flag3[k][j]) {
                    printf("Reflected a bit too much on that one...");
                    exit(0);
                }
            }
        }}
        if(i== 3){
        for (int k = 0; k < 7; k++) {
            for (int j = 0; j < 7; j++) {
                if (l2[k][j] != enc_flag4[k][j]) {
                    printf("Reflected a bit too much on that one...");
                    exit(0);
                }
            }
        }}
        if(i== 4){
        for (int k = 0; k < 7; k++) {
            for (int j = 0; j < 7; j++) {
                if (l2[k][j] != enc_flag5[k][j]) {
                    printf("Reflected a bit too much on that one...");
                    exit(0);
                }
            }
        }}
        if(i== 5){
        for (int k = 0; k < 7; k++) {
            for (int j = 0; j < 7; j++) {
                if (l2[k][j] != enc_flag6[k][j]) {
                    printf("Reflected a bit too much on that one...");
                    exit(0);
                }
            }
        }}
        if(i== 6){
        for (int k = 0; k < 7; k++) {
            for (int j = 0; j < 7; j++) {
                if (l2[k][j] != enc_flag7[k][j]) {
                    printf("Reflected a bit too much on that one...");
                    exit(0);
                }
            }
        }}


    }
    
    
    // for(int i = 0; i < 46; i++) {
    //     if(final_flag[i] != enc_flag[i]) {
    //         printf("Reflected a bit too much on that one...");
    //         exit(0);
    //     }
    // }

    printf("Damn, you've managed the RISC vvell!");
    // free 
   


    return 0;
}
