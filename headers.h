#pragma once
// Este archivo lo hacemos por un tema de comodidad
// No tenemos que andar copiando y pegando enums o librerias en cada .ccp y .h
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

enum eArtBanyo { barralesCortina, cepilloLimpieza, virulana, lanaMetal };
enum eArtBazar { tenderesRopa, tablasPlanchar, sogas, tablasInodoro, impBanyera };
enum eArtCerraje { llaveSimple, laveDobleTambor, llaveCod, llaveMagne };
enum eArtElect { cables, lamparas, portalamparas, enchufes };
enum eArtFerre { clavos, tarugos, tornillos, caños, flexibles, tapones };
enum eArtHerramientas { amoladora, lijadora, perforadora };
enum eTiposPago { tarjetaDebito, mercadoPago, efectivo, tarjetaCredito };