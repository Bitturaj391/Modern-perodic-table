#include <stdio.h>
#include <stdlib.h>
int i;
void start();
void start(){
while (1)
    {
        printf("\n\n");
        printf("###############################################################################################################\n");
        printf(" #############################################################################################################\n");
        printf("  ###########################################################################################################   \n");
        printf("   ################### --------------------------------------------------------------- #####################  \n");
        printf("      ################ |                   WELCOME TO MODERN PERIODIC TABLE          | ##################\n");
        printf("   ################### --------------------------------------------------------------- #####################  \n");
        printf("  ###########################################################################################################   \n");
        printf(" #############################################################################################################\n");
        printf("###############################################################################################################\n\n\n\n");
        printf("-------------------------------------------Desined By Team ARYABHATTA-----------------------------------------\n\n\n");
        break;
    }
    printf("\t\t\t\t1:Show Modern Periodic Table\n\n");
    printf("\t\t\t\t2:Search element using Atomic Number\n\n");
    printf("\t\t\t\t3:Search Element Using Group Number\n\n");
    printf("\t\t\t\tChoose the Option: ");
    scanf("%d", &i);}
int main()
{
    int j , element;
    start();
    switch (i)
    {
    case 1:

        printf("At.No\tName\t\t\tSymbo1\n1\tHydrogen\t\tH\n2\tHelium\t\t\tHe\n3\tLithium\t\t\tLi\n4\tBeryllium\t\tBe\n5\tBoron\t\t\tB\n6\tCarbon\t\t\tC\n7\tNitrogen\t\tN\n8\tOxygen\t\t\tO\n9\tFluorine\t\tF\n11\tSodium\t\t\tNa\n12\tMagnesium\t\tMg\n13\tAluminum\t\tAl\n14\tSilicon\t\t\tSi\n15\tPhosphorus\t\tP\n16\tSulfur\t\t\tS\n17\tChlorine\t\tCl\n18\tArgon\t\t\tAr\n19\tPotassium\t\tK\n20\tCalcium\t\t\tCa\n21\tScandium\t\tSc\n22\tTitanium\t\tTi\n23\tVanadium\t\tV\n24\tChromium\t\tCr\n25\tManganese\t\tMn\n26\tIron\t\t\tFe\n27\tCobalt\t\t\tCo\n28\tNickel\t\t\tNi\n29\tCopper\t\t\tCu\n30\tZinc\t\t\tZn\n31\tGallium\t\t\tGa\n32\tGermanium\t\tGe\n33\tArsenic\t\t\tAs\n34\tSelenium\t\tSe\n35\tBromine\t\t\tBr\n36\tKrypton\t\t\tKr\n37\tRubidium\t\tRb\n38\tStrontium\t\tSr\n39\tYttrium\t\t\tY\n40\tZirconium\t\tZr\n41\tNiobium\t\t\tNb\n42\tMolybdenum\t\tMo\n43\tTechnetium\t\tTc\n44\tRuthenium\t\tRu\n45\tRhodium\t\t\tRh\n46\tPalladium\t\tPd\n47\tSilver\t\t\tAg\n48\tCadmium\t\t\tCd\n49\tIndium\t\t\tIn\n50\tTin\t\t\tSn\n51\tAntimony\t\tSb\n52\tTellurium\t\tTe\n53\tIodine\t\t\tI\n54\tXenon\t\t\tXe\n55\tCesium\t\t\tCs\n56\tBarium\t\t\tBa\n57\tLanthanum\t\tLa\n58\tCerium\t\t\tCe\n59\tPraseodymium\t\tPr\n60\tNeodymium\t\tNd\n61\tPromethium\t\tPm\n62\tSamarium\t\tSm\n63\tEuropium\t\tEu\n64\tGadolinium\t\tGd\n65\tTerbium\t\t\tTb\n66\tDysprosium\t\tDy\n67\tHolmium\t\t\tHo\n68\tErbium\t\t\tEr\n69\tThulium\t\t\tTm\n70\tYtterbium\t\tYb\n71\tLutetium\t\tLu\n72\tHafnium\t\t\tHf\n73\tTantalum\t\tTa\n74\tTungsten\t\tW\n75\tRhenium\t\t\tRe\n76\tOsmium\t\t\tOs\n77\tIridium\t\t\tIr\n78\tPlatinum\t\tPt\n79\tGold\t\t\tAu\n80\tMercury\t\t\tHg\n81\tThallium\t\tTl\n82\tLead\t\t\tPb\n83\tBismuth\t\t\tBi\n84\tPolonium\t\tPo\n85\tAstatine\t\tAt\n86\tRadon\t\t\tRn\n87\tFrancium\t\tFr\n88\tRadium\t\t\tRa\n89\tActinium\t\tAc\n90\tThorium\t\t\tTh\n91\tProtactinium\t\tPa\n92\tUranium\t\t\tU\n93\tNeptunium\t\tNp\n94\tPlutoniumt\t\tPu\n95\tAmericium\t\tAm\n96\tCurium\t\t\tCm\n97\tBerkelium\t\tBk\n98\tCalifornium\t\tCf\n99\tEinsteinium\t\tEs\n100\tFermium\t\t\tFm\n101\tMendelevium\t\tMd\n102\tNobelium\t\tNo\n103\tLawrencium\t\tLr\n104\tRutherfordium\t\tRf\n105\tDubnium\t\t\tDb\n106\tSeaborgium\t\tSg\n107\tBohrium\t\t\tBh\n108\tHassium\t\t\tHs\n109\tMeitnerium\t\tMt\n110\tDarmstadtium\t\tDs\n111\tRoentgenium\t\tRg\n112\tCopernicium\t\tCn\n113\tUnuntrium\t\tUut\n114\tFlerovium\t\tFl\n115\tUnunpentium\t\tUup\n116\tLivermorium\t\tLv\n117\tUnunseptium\t\tUus\n118\tUnunoctium\t\tUuo\n");
        break;

    case 2:
    {
        printf("Enter the atomic number : ");
        scanf(" %d", &element);
        if (element == 1)
        {
            printf("Name : Hydrogen\n");
            printf("Symbol : H\n");
            printf("Atomic Mass : 1.008\n");
            printf("Discovered by : Nicholas Louis Vauquelin\n");
            printf("Electronic configuration  : 1s1\n");
        }
        else if (element == 2)
        {
            printf("Name : Helim\n");
            printf("Symbol : He\n");
            printf("Atomic Mass : 4.0026\n");
            printf("Discovered by : Sir William Ramsay in London, Per Teodor Cleve and Nils Abraham Langlet.\n");
            printf("Electronic configuration  : 1s2\n");
        }
        else if (element == 3)
        {
            printf("Name : Lithim\n");
            printf("Symbol : Li\n");
            printf("Atomic Mass : 6.941\n");
            printf("Discovered by : Johann Artvedson in 1817\n");
            printf("Electronic configuration  : [He]2s1\n");
        }
        else if (element == 4)
        {
            printf("Name : Beryllium\n");
            printf("Symbol : Be\n");
            printf("Atomic Mass : 9.0122\n");
            printf("Discovered by : Nicholas Louis Vauquelin\n");
            printf("Electronic configuration  : [He]2s2\n");
        }
        else if (element == 5)
        {
            printf("Name : Boron\n");
            printf("Symbol : B\n");
            printf("Atomic Mass : 10.811\n");
            printf("Discovered by : Joseph Louis Gay-Lussac in 1808\n");
            printf("Electronic configuration  : [He]2s22p1\n");
        }
        else if (element == 6)
        {
            printf("Name : Carbon\n");
            printf("Symbol : C\n");
            printf("Atomic Mass : 12.0107\n");
            printf("Discovered by : Carbon was proposed in 1789\n");
            printf("Electronic configuration  : [He]2s22p2\n");
        }
        else if (element == 7)
        {
            printf("Name : Nitrogen\n");
            printf("Symbol : N\n");
            printf("Atomic Mass : 14.0067\n");
            printf("Discovered by : Daniel Rutherford in 1772\n");
            printf("Electronic configuration  : [He]2s22p3\n");
        }
        else if (element == 8)
        {
            printf("Name : Oxygen\n");
            printf("Symbol : O\n");
            printf("Atomic Mass : 15.9994\n");
            printf("Discovered by : oseph Priestly in 1774\n");
            printf("Electronic configuration  : [He]2s22p4\n");
        }
        else if (element == 9)
        {
            printf("Name : Florin\n");
            printf("Symbol : F\n");
            printf("Atomic Mass : 18.9984\n");
            printf("Discovered by : Henri Moissan\n");
            printf("Electronic configuration  : [He]2s22p5\n");
        }
        else if (element == 10)
        {
            printf("Name : Neon\n");
            printf("Symbol : Ne\n");
            printf("Atomic Mass : 20.1797\n");
            printf("Discovered by : Sir William Ramsay and Morris Travers\n");
            printf("Electronic configuration  : [He]2s22p6\n");
        }
        else if (element == 11)
        {
            printf("Name : Sodium\n");
            printf("Symbol : Na\n");
            printf("Atomic Mass : 22.9897\n");
            printf("Discovered by : Humphry Davy\n");
            printf("Electronic configuration  : [Ne]3s1\n");
        }
        else if (element == 12)
        {
            printf("Name : Magnesium\n");
            printf("Symbol : Mg\n");
            printf("Atomic Mass : 24.305\n");
            printf("Discovered by : Joseph Black\n");
            printf("Electronic configuration  : [Ne]3s2\n");
        }
        else if (element == 13)
        {
            printf("Name : Aluminum\n");
            printf("Symbol : Al\n");
            printf("Atomic Mass : 26.9815\n");
            printf("Discovered by : Hans Christian Oersted in 1825\n");
            printf("Electronic configuration  : [Ne]3s23p1\n");
        }
        else if (element == 14)
        {
            printf("Name : Silicon\n");
            printf("Symbol : Si\n");
            printf("Atomic Mass : 28.0855\n");
            printf("Discovered by : Jöns Jacob Berzelius in 1824\n");
            printf("Electronic configuration  : [Ne]3s23p2\n");
        }
        else if (element == 15)
        {
            printf("Name : Phosphorus\n");
            printf("Symbol : P\n");
            printf("Atomic Mass : 30.9738\n");
            printf("Discovered by : Hennig Brandt\n");
            printf("Electronic configuration  : [Ne]3s23p3\n");
        }
        else if (element == 16)
        {
            printf("Name : Sulfer\n");
            printf("Symbol : S\n");
            printf("Atomic Mass : 32.065\n");
            printf("Discovered by : Hennig Brand\n");
            printf("Electronic configuration  : [Ne]3s23p4\n");
        }
        else if (element == 17)
        {
            printf("Name : Chlorine\n");
            printf("Symbol : Cl\n");
            printf("Atomic Mass : 35.453\n");
            printf("Discovered by : Unknown\n");
            printf("Electronic configuration  : [Ne]3s23p5\n");
        }
        else if (element == 18)
        {
            printf("Name : Argon\n");
            printf("Symbol : Ar\n");
            printf("Atomic Mass : 39.948\n");
            printf("Discovered by : Sir Ramsay in 1894\n");
            printf("Electronic configuration  : [Ne]3s23p6\n");
        }
        else if (element == 19)
        {
            printf("Name : Potassium\n");
            printf("Symbol : K\n");
            printf("Atomic Mass : 39.0983\n");
            printf("Discovered by : Humphry Davy in 1807\n");
            printf("Electronic configuration  : [Ar]4s1\n");
        }
        else if (element == 20)
        {
            printf("Name : 	Calcium\n");
            printf("Symbol : Ca\n");
            printf("Atomic Mass : 40.078\n");
            printf("Discovered by : Humphry Davy in 1808\n");
            printf("Electronic configuration  : [Ar]4s2\n");
        }
        else if (element == 21)
        {
            printf("Name : Scandium\n");
            printf("Symbol : Sc\n");
            printf("Atomic Mass : 44.9559\n");
            printf("Discovered by : Lars Frederik Nilson in 1879\n");
            printf("Electronic configuration  : [Ar]3d14s2\n");
        }
        else if (element == 22)
        {
            printf("Name : 	Titanium	\n");
            printf("Symbol : Ti\n");
            printf("Atomic Mass : 47.867\n");
            printf("Discovered by : William Gregor\n");
            printf("Electronic configuration  : [Ar]3d24s2\n");
        }
        else if (element == 23)
        {
            printf("Name : Vanadium\n");
            printf("Symbol : V\n");
            printf("Atomic Mass : 50.9415\n");
            printf("Discovered by : Nils Sefstrom in 1830\n");
            printf("Electronic configuration  : [Ar]3d34s2\n");
        }
        else if (element == 24)
        {
            printf("Name : Chromium\n");
            printf("Symbol : Cr\n");
            printf("Atomic Mass : 51.9961\n");
            printf("Discovered by : Vaughlin in 1797\n");
            printf("Electronic configuration  : [Ar]3d54s1\n");
        }
        else if (element == 25)
        {
            printf("Name : Manganese\n");
            printf("Symbol : Mn\n");
            printf("Atomic Mass : 54.9380 g.mol-1\n");
            printf("Discovered by : Johan Gottlieb Gahn\n");
            printf("Electronic configuration  : [Ar]3d54s2\n");
        }
        else if (element == 26)
        {
            printf("Name : Iron\n");
            printf("Symbol : Fe\n");
            printf("Atomic Mass : 55.85 g.mol -1\n");
            printf("Discovered by : The Ancients\n");
            printf("Electronic configuration  : [Ar]3d64s2\n");
        }
        else if (element == 27)
        {
            printf("Name : Cobalt\n");
            printf("Symbol : Co\n");
            printf("Atomic Mass : 58.933\n");
            printf("Discovered by : Georg Brandt\n");
            printf("Electronic configuration  : [Ar]3d74s2\n");
        }
        else if (element == 28)
        {
            printf("Name : Nickel\n");
            printf("Symbol : Ni\n");
            printf("Atomic Mass : 58.693\n");
            printf("Discovered by : Axel Fredrik Cronstedt\n");
            printf("Electronic configuration  : [Ar]3d84s2\n");
        }
        else if (element == 29)
        {
            printf("Name : Copper\n");
            printf("Symbol : Cu\n");
            printf("Atomic Mass : 63.546 g.cm-3 at 20°C \n");
            printf("Discovered by : Unknown\n");
            printf("Electronic configuration  : [Ar]3d104s1\n");
        }
        else if (element == 30)
        {
            printf("Name : Zinc\n");
            printf("Symbol : Zn\n");
            printf("Atomic Mass : 65.37 g.mol−1\n");
            printf("Discovered by : Andreas Marggraf\n");
            printf("Electronic configuration  : [Ar]3d104s2\n");
        }
        else if (element == 31)
        {
            printf("Name : Gallium\n");
            printf("Symbol : Ga\n");
            printf("Atomic Mass : 69.72 g.mol -1\n");
            printf("Discovered by : Paul-Émile Lecoq de Boisbaudran\n");
            printf("Electronic configuration  : [Ar]3d104s24p1\n");
        }
        else if (element == 32)
        {
            printf("Name : 	Germanium\n");
            printf("Symbol : Ge\n");
            printf("Atomic Mass : 72.630\n");
            printf("Discovered by : Clemens Winkler\n");
            printf("Electronic configuration  : [Ar]3d104s24p2\n");
        }
        else if (element == 33)
        {
            printf("Name : Arsenic\n");
            printf("Symbol : As\n");
            printf("Atomic Mass : 74.922\n");
            printf("Discovered by : Albertus Magnus\n");
            printf("Electronic configuration  : [Ar]3d104s24p3\n");
        }
        else if (element == 34)
        {
            printf("Name : Selenium\n");
            printf("Symbol : Se\n");
            printf("Atomic Mass : 30.974\n");
            printf("Discovered by : Jöns Jacob Berzelius,\n");
            printf("Electronic configuration  : [Ar]3d104s24p4\n");
        }
        else if (element == 35)
        {
            printf("Name : Bromine\n");
            printf("Symbol : Br\n");
            printf("Atomic Mass : \54.9380 g.mol-1n");
            printf("Discovered by : Johan Gottlieb Gahn\n");
            printf("Electronic configuration  : [Ar]3d104s24p5\n");
        }
        else if (element == 36)
        {
            printf("Name :Krypton \n");
            printf("Symbol : Kr\n");
            printf("Atomic Mass : 83.798\n");
            printf("Discovered by : Sir William Ramsay and Morris Travers\n");
            printf("Electronic configuration  : [Ar]3d104s24p6\n");
        }
        else if (element == 37)
        {
            printf("Name : Rubidium\n");
            printf("Symbol : Rb\n");
            printf("Atomic Mass : 85.4678 g.mol -1\n");
            printf("Discovered by : Gustav Kirchhoff and Robert Bunsen\n");
            printf("Electronic configuration  : [Kr]5s1\n");
        }
        else if (element == 38)
        {
            printf("Name : Strontium\n");
            printf("Symbol : Sr\n");
            printf("Atomic Mass : 87.62 g.mol -1\n");
            printf("Discovered by : Adair Crawford in 1790\n");
            printf("Electronic configuration  : [Kr]5s2\n");
        }
        else if (element == 39)
        {
            printf("Name : Yttrium\n");
            printf("Symbol : Y\n");
            printf("Atomic Mass : 88.906 g.mol -1\n");
            printf("Discovered by : Johan Gadolin in 1794\n");
            printf("Electronic configuration  : [Kr]4d15s2\n");
        }
        else if (element == 40)
        {
            printf("Name : Zirconium\n");
            printf("Symbol : Zr\n");
            printf("Atomic Mass : 91.224 g.mol −1\n");
            printf("Discovered by : Martin Klaproth in the year 1798\n");
            printf("Electronic configuration  : [Kr]4d25s2\n");
        }
        else if (element == 41)
        {
            printf("Name : Niobium\n");
            printf("Symbol : Nb\n");
            printf("Atomic Mass : 92.906 g.mol -1\n");
            printf("Discovered by : Charles Hatchett in 1801\n");
            printf("Electronic configuration  : [Kr]4d45s1\n");
        }
        else if (element == 42)
        {
            printf("Name : Molybdenum\n");
            printf("Symbol : Mo\n");
            printf("Atomic Mass : 137.327\n");
            printf("Discovered by : Peter Jacob Hjelm\n");
            printf("Electronic configuration  : [Kr]4d55s1\n");
        }
        else if (element == 43)
        {
            printf("Name : Technetium \n");
            printf("Symbol : Tc\n");
            printf("Atomic Mass : 99 g.mol-1\n");
            printf("Discovered by : Carlo Perrier and Emilio Segre\n");
            printf("Electronic configuration  : [Kr]4d55s2\n");
        }
        else if (element == 44)
        {
            printf("Name : Ruthenium\n");
            printf("Symbol : Ru\n");
            printf("Atomic Mass : 101.1 g.mol -1\n");
            printf("Discovered by : Karl Klaus in 1844\n");
            printf("Electronic configuration  : [Kr]4d75s1\n");
        }
        else if (element == 45)
        {
            printf("Name : Rhodium\n");
            printf("Symbol : Rh\n");
            printf("Atomic Mass : 102.91 g.mol -1\n");
            printf("Discovered by : William Wollaston in 1803\n");
            printf("Electronic configuration  : [Kr]4d85s1\n");
        }
        else if (element == 46)
        {
            printf("Name : Palladium\n");
            printf("Symbol : Pd\n");
            printf("Atomic Mass : 106.42g.mol -1\n");
            printf("Discovered by : William Hyde Wollaston\n");
            printf("Electronic configuration  : [Kr]4d10\n");
        }
        else if (element == 47)
        {
            printf("Name : Silver\n");
            printf("Symbol : Ag\n");
            printf("Atomic Mass : 107.868 g.mol −1\n");
            printf("Discovered by : Believed to be discovered in 3000 BC\n");
            printf("Electronic configuration  : [Kr]4d105s1\n");
        }
        else if (element == 48)
        {
            printf("Name : Cadmium\n");
            printf("Symbol : Cd\n");
            printf("Atomic Mass : 112.414\n");
            printf("Discovered by : Friedrich Stromeyer\n");
            printf("Electronic configuration  : [Kr]4d105s2\n");
        }
        else if (element == 49)
        {
            printf("Name : Indium\n");
            printf("Symbol : In\n");
            printf("Atomic Mass : 114.82 g.mol-1\n");
            printf("Discovered by : Ferdinand Reich 1863\n");
            printf("Electronic configuration  : [Kr]4d105s25p1\n");
        }
        else if (element == 50)
        {
            printf("Name : Tin\n");
            printf("Symbol : Sn\n");
            printf("Atomic Mass : 118.71 g.mol -1\n");
            printf("Discovery : Approx. 2100BC\n");
            printf("Electronic configuration  : [Kr]4d105s25p2\n");
        }
        else if (element == 51)
        {
            printf("Name : Antimony\n");
            printf("Symbol : Sb\n");
            printf("Atomic Mass : 121.760 g.mol -1\n");
            printf("Discovery: approx 1600 BC\n");
            printf("Electronic configuration  : [Kr]4d105s25p3\n");
        }
        else if (element == 52)
        {
            printf("Name : Tellurium\n");
            printf("Symbol : Te\n");
            printf("Atomic Mass : 127.6 g.mol-1\n");
            printf("Discovered by : Franz Muller von Reichenstein in 1782\n");
            printf("Electronic configuration  : [Kr]4d105s25p4\n");
        }
        else if (element == 53)
        {
            printf("Name : Iodine\n");
            printf("Symbol : I\n");
            printf("Atomic Mass : 126.9045 g.mol -1\n");
            printf("Discovered by : Bernard Courtois in 1811\n");
            printf("Electronic configuration  : [Kr]4d105s25p5\n");
        }
        else if (element == 54)
        {
            printf("Name : Xenon\n");
            printf("Symbol : Xe\n");
            printf("Atomic Mass : 131.293 g.mol −1\n");
            printf("Discovered by : 131.293 g.mol −1\n");
            printf("Electronic configuration  : [Kr]4d105s25p6\n");
        }
        else if (element == 55)
        {
            printf("Name : Cesium\n");
            printf("Symbol : Cs\n");
            printf("Atomic Mass : 132.9054 g.mol -1\n");
            printf("Discovered by : Gustav Kirchhoff and Robert Bunsen in 1860\n");
            printf("Electronic configuration  : [Xe]6s1\n");
        }
        else if (element == 56)
        {
            printf("Name : Barium\n");
            printf("Symbol : Ba\n");
            printf("Atomic Mass : 137.327\n");
            printf("Discovered by : Barium was discovered by Humphry Davy\n");
            printf("Electronic configuration  : [Xe]6s2\n");
        }
        else if (element == 57)
        {
            printf("Name : Lanthanum\n");
            printf("Symbol : La\n");
            printf("Atomic Mass : 198.905 g.mol -1\n");
            printf("Discovered by : Carl Gustav Mosander in 1839\n");
            printf("Electronic configuration  : [Xe]5d16s2\n");
        }
        else if (element == 58)
        {
            printf("Name : Cerium\n");
            printf("Symbol : Be\n");
            printf("Atomic Mass : 140.116 g.mol -1\n");
            printf("Discovered by : Jöns Jacob Berzelius and Wilhelm Hisinger in 1803 \n");
            printf("Electronic configuration  : [Xe]4f15d16s2\n");
        }
        else if (element == 59)
        {
            printf("Name : Praseodymium\n");
            printf("Symbol : Pr\n");
            printf("Atomic Mass : 140.91 g.mol -1\n");
            printf("Discovered by : Carl Auer von Welsbach in 1885\n");
            printf("Electronic configuration  : [Xe]4f36s2\n");
        }
        else if (element == 60)
        {
            printf("Name : Neodymium\n");
            printf("Symbol : Nd\n");
            printf("Atomic Mass : 144.242 g.mol −1\n");
            printf("Discovered by : Carl Auer von Welsbach in 1886\n");
            printf("Electronic configuration  : [Xe]4f46s2\n");
        }
        else if (element == 61)
        {
            printf("Name : Promethium\n");
            printf("Symbol : Pm\n");
            printf("Atomic Mass : (145) g.mol-1\n");
            printf("Discovered by : Mariinsky in 1945\n");
            printf("Electronic configuration  : [Xe]4f56s2\n");
        }
        else if (element == 62)
        {
            printf("Name : Samarium\n");
            printf("Symbol : Sm\n");
            printf("Atomic Mass : 150.36 g.mol -1\n");
            printf("Discovered by : Paul-Émile Lecoq de Boisbaudran in 1879\n");
            printf("Electronic configuration  : [Xe]4f66s2\n");
        }
        else if (element == 63)
        {
            printf("Name : Europium\n");
            printf("Symbol : Eu\n");
            printf("Atomic Mass : 151.964 amu\n");
            printf("Discovered by : Eugène-Anatole Demarçay in 1901\n");
            printf("Electronic configuration  : [Xe]4f76s2\n");
        }
        else if (element == 64)
        {
            printf("Name : Gadolinium\n");
            printf("Symbol : Gd\n");
            printf("Atomic Mass : 157.25 g.mol-1\n");
            printf("Discovered by : Jean Charles Galissard de Marignac in 1880\n");
            printf("Electronic configuration  : [Xe]4f75d16s2\n");
        }
        else if (element == 65)
        {
            printf("Name : Terbium\n");
            printf("Symbol : Tb\n");
            printf("Atomic Mass : 158.925 g.mol −3\n");
            printf("Discovered by : Carl Gustav Mosander\n");
            printf("Electronic configuration  : [Xe]4f96s2\n");
        }
        else if (element == 66)
        {
            printf("Name : Dysprosium\n");
            printf("Symbol : Dy\n");
            printf("Atomic Mass : 164.930\n");
            printf("Discovered by : Dysprosium was discovered by Paul-Émile Lecoq de Boisbaudran\n");
            printf("Electronic configuration  : [Xe]4f106s2\n");
        }
        else if (element == 67)
        {
            printf("Name : Holmium\n");
            printf("Symbol : Ho\n");
            printf("Atomic Mass : 164.930\n");
            printf("Discovered by : Holmium was discovered by Per Teodor Cleve at Uppsala, Sweden and independently by Marc Delafontaine and Louis Soret in Switzerland.\n");
            printf("Electronic configuration  : [Xe]4f116s2\n");
        }
        else if (element == 68)
        {
            printf("Name : Erbium\n");
            printf("Symbol : Er\n");
            printf("Atomic Mass : 167.26 g.mol -1\n");
            printf("Discovered by : 167.26 g.mol -1\n");
            printf("Electronic configuration  : [Xe]4f126s2\n");
        }
        else if (element == 69)
        {
            printf("Name : Thulium\n");
            printf("Symbol : Tm\n");
            printf("Atomic Mass : 168.93 g.mol -1\n");
            printf("Discovered by : Per Theodor Cleve in 1879\n");
            printf("Electronic configuration  : [Xe]4f136s2\n");
        }
        else if (element == 70)
        {
            printf(" Element: Ytterbium\n Symbool: Yb\n Electron configuration: [Xe] 4f146s2\n Atomic number: 70\n Atomic mass: 173.04 u\n Van der Waals radius: 228 pm\n");
        }

        else if (element == 71)
        {
            printf("  Element: 	Lutetium\n Symbol	Lu\n c [Xe]4f145d16s2\n Atomic Number	71\n Atomic Mass	174.97 g.mol -1\n Discovered by	George Urbain in 1907\n");
        }
        else if (element == 72)
        {
            printf("Element: Hafnium\nSymbol	Hf\n Electron configuration: [Xe]4f145d26s2\n Atomic Number	72\n Atomic Mass	178.49 g.mol −1\n Discovered by	George Charles de Hevesy and Dirk Coster  in 1923\n");
        }
        else if (element == 73)
        {
            printf("Element: Tantalum\nSymbol	Ta\nElectron configuration  [Xe] 4f145d36s2\nAtomic Number	73\nAtomic Mass	180.948 g.mol -1\nDiscovered by	Anders Gustav Ekeberg in 1802\n");
        }
        else if (element == 74)
        {
            printf("Element: Tungsten\nSymbol	W\nElectron configuration   [Xe] 4f145d46S2\nAtomic Number	74\nAtomic Mass	183.84 amu\nDiscovered by	Fausto and Juan Jose de Elhuyar, 1783\n");
        }
        else if (element == 75)
        {
            printf("Element: Rhenium\nSymbol	Re\nElectron configuration  [Xe]4f14 5d5 6s2\nAtomic Number	75\nAtomic Mass	186.23 g.mol -1\nDiscovered by	Walter Noddack, Ida Tacke and Otto Berg in 1925\n");
        }
        else if (element == 76)
        {
            printf("Element: Osmium\nSymbol	Os\nElectron configuration  [Xe]4f14 5d6 6s2\nAtomic Number	76\nAtomic Mass	190.2 g.mol -1\nDiscovered by	Smithson Tennant in 1803\n");
        }
        else if (element == 77)
        {
            printf("Element: Iridium\nSymbol	Ir\nElectron configuration  [Xe] 4f145d76s2\nAtomic Number	77\nAtomic Mass	192.217\nDiscovered by	Ghiorso in 1952\n");
        }
        else if (element == 78)
        {
            printf("Element: Platinum\nSymbol	Pt\nElectron configuration  [Xe] 4f145d96s1\nAtomic Number	78\nAtomic Mass	195.09 g.mol -1 \nDiscovered by	Julius Scaliger in 1735\n");
        }
        else if (element == 79)
        {
            printf("Element: Gold\nSymbol	Au\nElectron configuration  [Xe] 4f145d106s1\nAtomic Number	79\nAtomic Mass	196.9655 g.mol−1\nDiscovered by	Unknown\n");
        }
        else if (element == 80)
        {
            printf("Element: Mercury\nSymbol    Hg\nElectron configuration  [ Xe ] 4f14 5d10 6s2\nAtomic Number	80\nAtomic Mass	200.59 g.mol -1\nDiscovered by	The Ancients\n");
        }
        else if (element == 81)
        {
            printf("Element: Thallium\nSymbol	Tl\nElectron configuration  [Xe] 4f14 5d10 6s2 6p1\nAtomic Number	81\nAtomic Mass	204.383 g.mol −1\nDiscovered by	Sir William Crookes in 1861\n");
        }
        else if (element == 82)
        {
            printf("Element: Lead\nSymbol	Pb\nElectron configuration  [Xe] 4f14 5d10 6s2 6p2\nAtomic Number	82\nAtomic Mass	207.2\nDiscovered by	In the Middle East (7000 BCE)\n");
        }
        else if (element == 83)
        {
            printf("Element: Bismuth\nSymbol	Bi\nElectron configuration  [Xe] 4f14  5d10 6s2 6p3 \nAtomic Number	83\nAtomic Mass	208.980\nDiscovered by	French chemist Claude Geoffroy the Younger.\n");
        }
        else if (element == 84)
        {
            printf("Element: Polonium\nSymbol	Po\nElectron configuration  [Xe] 4f14 5d10 6s2 6p4\nAtomic Number	84\nAtomic Mass	(210) g.mol -1\nDiscovered by	Pierre and Marie Curie in 1898\n");
        }
        else if (element == 85)
        {
            printf("Element: Astatine\nSymbol	At\nElectron configuration  [Xe] 4f14 5d10 6s2 6p5\nAtomic Number	85\nAtomic Mass	[210]\nDiscovered by	Astatine was discovered by Dale R. Corson, Kenneth Ross MacKenzie, Emilio Segrè\n");
        }
        else if (element == 86)
        {
            printf("Element: Radon\nSymbol	Rn\nElectron configuration  [Xe] 4f145d106s26p6\nAtomic Number	86\nAtomic Mass	222 g.mol −1\nDiscovered by	Friedrich Ernst Dorn in 1900\n");
        }
        else if (element == 87)
        {
            printf("Element: Francium\nSymbol	Fr\nElectron configuration  [Rn] 7S1\nAtomic Number	87\nAtomic Mass	(233) g.mol -1\nDiscovered by	Marguerite Perey in 1939\n");
        }
        else if (element == 88)
        {
            printf("Element: Radium\nSymbol	Ra\nElectron configuration  [Rn] 7s2\nAtomic Number	88\nAtomic Mass	226 g.mol −1\nDiscovered by	Marie Sklodowska Curie and Perre Curie in 1898\n");
        }
        else if (element == 89)
            printf("Element: Actinium\nSymbol	Ac\nElectron configuration  [Rn]  6d17s2\nAtomic Number	89\nAtomic Mass	227 g mol -1\nDiscovered by	Andre Debierne in 1899\n");
        else if (element == 90)
        {
            printf("Element: Thorium\nSymbol	Th\nElectron configuration  [Rn] 6d27s2\nAtomic Number	90\nAtomic Mass	232.038 g.mol −1\nDiscovered by	Jöns Jacob Berzelius in 1829\n");
        }
        else if (element == 91)
        {
            printf("Element: Protactinium\nSymbol	Pa\nElectron configuration  [Rn] 5f26d17s2\nAtomic Number	91\nAtomic Mass	231.0359 g.mol -1\nDiscovered by	K. Kajans and O.H. Gohring in 1913\n");
        }
        else if (element == 92)
        {
            printf("Element: Uranium\nSymbol    U\nElectron configuration   [Rn] 5f36d17s2\nAtomic Number	92\nAtomic Mass	238.029 g.mol −1\nDiscovered by	Martin Heinrich Klaproth in 1789 \n");
        }
        else if (element == 93)
        {
            printf("Element: Neptunium\nSymbol	Np\nElectron configuration  [Rn] 5f46d17s2\nAtomic Number	93\nAtomic Mass	237 g.mol -1\nDiscovered by	Edwin McMillan and Philip Abelson in 1940\n");
        }
        else if (element == 94)
        {
            printf("Element: Plutonium\nSymbol	Pu\nElectron configuration  [Rn]  5f6 7s2\nAtomic Number	94\nAtomic Mass	224 g.mol-1\nDiscovered by	G.T. Seaborg in 1940\n");
        }
        else if (element == 95)
        {
            printf("Element: Americium\nSymbol	Am\nElectron configuration  [Rn] 5f77s2\nAtomic Number	95\nAtomic Mass	(243)\nDiscovered by	Americium was discovered by Glenn Seaborg and colleagues.\n");
        }
        else if (element == 96)
        {
            printf("Element: Curium\nSymbol	Cm\nElectron configuration  [Rn] 5f76d17s2\nAtomic Number	96\nAtomic Mass	(247) g.mol -1\nDiscovered by	G.T. Seaborg in 1944\n");
        }
        else if (element == 97)
        {
            printf("Element: Berkelium\nSymbol	Bk\nElectron configuration  [Rn] 5f97s2\nAtomic Number	97\nAtomic Mass	247 amu\nDiscovered by	Stanley Thompson, Albert Ghiorso, and Glenn Seaborg in 1949\n");
        }
        else if (element == 98)
        {
            printf("Element: Californium\nSymbol	Cf\nElectron configuration  [Rn]5f10 7s2\nAtomic Number	98\nAtomic Mass	251 g.mol -1\nDiscovered by	Stanley Thompson, Kenneth Street, Jr., Albert Ghiorso, and Glenn Seaborg in 1950\n");
        }
        else if (element == 99)
        {
            printf("Element: Einsteinium\nSymbol	Es\nElectron configuration  [Rn] 5f117s2\nAtomic Number	99\nAtomic Mass	252\nDiscovered by	Einsteinium was discovered as a component of the debris of the first hydrogen bomb explosion in 1952.\n");
        }
        else if (element == 100)
        {
            printf("Element: Fermium\nSymbol	Fm\nElectron configuration  [Rn] 5f127s2\nAtomic Number	100\nAtomic Mass	(257) g.mol -¹\nDiscovered by	Albert Ghiorso and colleagues in 1953\n");
        }
        else if (element == 101)
        {
            printf("Element: Mendelevium\nSymbol	Md\nElectron configuration  [Rn] 5f13 7s2\nAtomic Number	101\nAtomic Mass	(258) g.mol -1\nDiscovered by	G.T. Seaborg in 1965 \n");
        }
        else if (element == 102)
        {
            printf("Element: Nobelium\nSymbol	No\nElectron configuration  [Rn] 5f13 6d1 7s2\nAtomic Number	102\nAtomic Mass	259 g.mol -1\nDiscovered by	Nobel Institute for Physics in 1957\n");
        }
        else if (element == 103)
        {
            printf("Element: Lawrencium\nLawrencium Symbol	Lr\nElectron configuration  [Rn] 5f14 7s2 7p1\nLawrencium Atomic Number	103\nLawrencium Atomic Mass	(262) g.mol −1\nDiscovered by	Albert Ghiorso in 1961\n");
        }
        else if (element == 104)
        {
            printf("Element: Rutherfordium\nSymbol	Rf\nElectron configuration  [Rn]5f14 6d2 7s2\nAtomic Number	104\nAtomic Mass	267 g.mol -1\nDiscovered by	Georgy Flerov and colleagues and at Dubna, near Moscow, Russia, and independently by Albert Ghiorso and colleagues at Berkeley, California, USA in 1964\n");
        }
        else if (element == 105)
        {
            printf("Element: Dubnium\nSymbol	Db\nElectron configuration  [Rn]5f14 6d3 7s2\nAtomic Number	105\nAtomic Mass	268 g.mol -1\nDiscovered by	Scientists at both Berkeley, California, USA, and Dubna, near Moscow, Russia between 1968-1970\n");
        }
        else if (element == 106)
        {
            printf("Element: Seaborgium\nSymbol	Cn\nElectron configuration  [Rn] 5f146d47s2\nAtomic Number	106\nAtomic Mass	269 g.mol -1\nDiscovered by	It was discovered by Albert Ghiorso and named it after the Nuclear chemist Glenn T. Seaborg in the year 1974\n");
        }
        else if (element == 107)
        {
            printf("Element: Bohrium\nSymbol of Bohrium	Bh\nElectron configuration  [Rn] 5f14 6d5 7s2\nAtomic Number of Bohrium	107\nAtomic Mass of Bohrium	262 g.mol-1\nDiscovered by	Peter Armbruster, Gottfried Münzenberg, and colleagues\n");
        }
        else if (element == 108)
        {
            printf("Element: Hassium\nSymbol	Hs\nElectron configuration  [Rn] 5f146d67s2\nAtomic Number	108\nAtomic Mass	264.8 g.mol -1\nDiscovered by	Peter Armbruster and Gottfried Muizenberg in 1984\n");
        }
        else if (element == 109)
            printf("Element: Meitnerium\nSymbol	Mt\nc  [Rn] 5f14  6d7  7s2\nAtomic Number	109\nAtomic Mass	265.9 g.mol -1\nDiscovered by	Gesellschaft fur Schwerionenforschung(1982)\n");
        else if (element == 110)
        {

            printf("Element: Darmstadtium\nSymbol	Ds\nElectron configuration  [Rn] 5f14 6d9 7s1\nAtomic Number	110\nAtomic Mass	261.9 g.mol -1 \nDiscovered by	Gesellschaft für Schwerionenforschung(1994)\n");
        }
        else
            printf("NO SUCH ELEMENT ARE FOUND TILL!!!\n");
    break;
    }

    case 3:
    {
        printf("Enter Group Name : ");
        scanf("%d", &j);
        switch (j)
        {
        case 1:
            printf("Group 1 : Alkali Metal\n");
            printf("H\nLi\nNa\nK\nRb\nCs\nFr\n");
            break;

        case 2:
            printf("Group 2 : Alkaline Earth Metal\n");
            printf("Be\nMg\nCa\nSr\nBa\nRa\n");
            break;

        case 3:
            printf("Group 3 : Scandium Group\n");
            printf("Sc\nY\nLu\nLr\n");
            break;

        case 4:
            printf("Group 4 : Titanium Group\n");
            printf("Ti\nZr\nHf\nRf\n");
            break;

        case 5:
            printf("Group 5 : Vanadium Group\n");
            printf("V\nNb\nTa\nGb\n");
            break;

        case 6:
            printf("Group 6 : Chromium Group  \n");
            printf("Cr\nMo\nW\nSg\n");
            break;

        case 7:
            printf("Group 7 : Manganese Group  \n");
            printf("Mn\nTc\nRe\nBh\n");
            break;

        case 8:
            printf("Group 8 :  Iron Group \n");
            printf("Fe\nRu\nOs\nHs\n");
            break;

        case 9:
            printf("Group 9 : Cobalt Group \n");
            printf("Co\nRh\nIr\nMt\n");
            break;

        case 10:
            printf("Group 10 : Nickel Group  \n");
            printf("Ni\nPd\nPt\nDs\n");
            break;

        case 11:
            printf("Group 11 : Copper Group  \n");
            printf("Cu\nAg\nAu\nRg\n");
            break;

        case 12:
            printf("Group 12 : Zinc Group  \n");
            printf("Zn\nCd\nHg\nCn\n");
            break;

        case 13:
            printf("Group 13:  Boron Group \n");
            printf("B\nAl\nGa\nIn\nTi\nNh\n");
            break;

        case 14:
            printf("Group 14:  Carbon Group \n");
            printf("C\nSi\nGe\nSn\nPb\nFl\n");
            break;

        case 15:
            printf("Group 15 : Nitrogen Family \n");
            printf("N\nP\nAs\nSb\nBi\nMc\n");
            break;

        case 16:
            printf("Group 16 :  Oxygen Group \n");
            printf("O\nS\nSe\nTe\nPo\nLv\n");
            break;

        case 17:
            printf("Group 17 :  Fluorine Group  \n");
            printf("F\nCl\nBr\nL\nAt\nTs\n");
            break;

        case 18:
            printf("Group 18 : Helium Or Neon Group \n");
            printf("He\nNe\nAr\nKr\nXe\nRn\nOg\n");
            break;

        default:
            printf("INVALID GROUP !!!\n");
        }
        break;
    }
    default:
            printf("INVALID OPTION!!!\n");
    }
    printf("\n\n\n\t\t\t\t\t\tTHANK YOU!!!\n\t\t\t\t\t\t:-TEAM ARYABHATTA\n");
    start(main());
    return 0;
}
