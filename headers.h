#pragma once

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <ctime>
// srand(time(0));

using namespace std;

enum eArtBanyo { barralesCortina, cepilloLimpieza, virulana, lanaMetal };
enum eArtBazar { tenderesRopa, tablasPlanchar, sogas, tablasInodoro, impBanyera };
enum eArtCerraje { llaveSimple, laveDobleTambor, llaveCod, llaveMagne };
enum eArtElect { cables, lamparas, portalamparas, enchufes };
enum eArtFerre { clavos, tarugos, tornillos, caños, flexibles, tapones };
enum eArtHerramientas { amoladora, lijadora, perforadora };
enum eTiposPago { tarjetaDebito, mercadoPago, efectivo, tarjetaCredito };