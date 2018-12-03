angular.module('sortApp', [])

.controller('mainController', function($scope) {
  $scope.sortType     = 'estado'; // set the default sort type
  $scope.sortReverse  = false;  // set the default sort order
  $scope.searchPep   = '';     // set the default search/filter term
  
  
  // create the list of PEPs 
  $scope.pep = [
  {
    "estado":"AC - Acre",
    "municipio":"Rio Branco",
    "servico":"Unidade de Referência à Atenção Primária Claúdia Vitorino - CTA (Centro de Testagem e Aconselhamento)",
    "endereco":"Rua Baguari S/N Bairro: Taquari Ref.: Entrada do Bairro Taquari",
    "telefone":"(68)3221-4717",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"AC - Acre",
    "municipio":"ASSIS BRASIL",
    "servico":"Unidade Mista de Saúde",
    "endereco":"Rua Dom Giocondo M. Grotti, 420- Centro",
    "telefone":"3548-1135/3548-1415",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"BRASILÉIA",
    "servico":"Hospital das Clínicas Raimundo Chaar",
    "endereco":"Av. Rolando Moreira, 930 - Centro",
    "telefone":"3546-5000 / 3546-4740",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"CRUZEIRO DO SUL",
    "servico":"Hospital Regional de Cruzeiro do Sul",
    "endereco":"Rua Pedro Teles, 350- Centro",
    "telefone":"3322-8339 / 3322-5269",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"CRUZEIRO DO SUL",
    "servico":"Santa Casa de Misericórdia de Cruzeiro do Sul",
    "endereco":"Rua Lauro Müller, 473 - Centro",
    "telefone":"3322-2133",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"FEIJÓ",
    "servico":"Hospital Geral de Feijó",
    "endereco":"Av. Marechal Deodoro, s/n- Centro",
    "telefone":"3463-3001",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"JORDÃO",
    "servico":"Hospital da Família de Jordão",
    "endereco":"End.: Rua Romildo Magalhães, s/n- Centro",
    "telefone":"3464-1078",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"MÂNCIO LIMA",
    "servico":"Hospital Dr. Abel Pinheiro Maciel Filho",
    "endereco":"Av. Japim, s/n - Centro",
    "telefone":"3343-1026",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"MANOEL URBANO",
    "servico":"Unidade Mista de Saúde de Manuel Urbano",
    "endereco":"Rua Francisco Freire, s/n- Centro",
    "telefone":"3611-1005 / 3611-1006",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"MARECHAL THAUMATURGO",
    "servico":"Hospital da Família de Marechal Thaumaturgo",
    "endereco":"Rua 05 de Novembro, s/n- Centro",
    "telefone":"3325-1079",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"PLÁCIDO DE CASTRO",
    "servico":"Hospital Manoel Marinho Monte",
    "endereco":"Rua Epitácio Pessoa, 550- Centro",
    "telefone":"3237-1457",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"PORTO WALTER",
    "servico":"Hospital da Família de Porto Walter",
    "endereco":"End.: Rua Cameli, s/n- Centro",
    "telefone":"3325-88166/3325-8028",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"RODRIGUES ALVES",
    "servico":"Unidade Mista de Saúde de Rodrigues Alves",
    "endereco":"Av. Presidente Juscelino, s/n- Centro",
    "telefone":"3342-1080",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"SANTA ROSA DO PURUS",
    "servico":"Hospital da Família de Santa Rosa do Purus",
    "endereco":"End.: Rua Projetada, s/n- Cidade Nova",
    "telefone":"3615-1064",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"SENA MADUREIRA",
    "servico":"Hospital João Câncio Fernandes",
    "endereco":"Rua Quintino Bocaiúva, s/n- Centro",
    "telefone":"3612-4331 / 3612-2110",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"SENADOR GUIOMARD",
    "servico":"Hospital Dr. Ary Rodrigues",
    "endereco":"Av. Eduardo Assmar, 153 –Cohab",
    "telefone":"3232-2956",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"TARAUACÁ",
    "servico":"Hospital Dr. Sansão Gomes",
    "endereco":"Rua Dr. Sansão Gomes, 640 - Centro",
    "telefone":"3462-1003/1977",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"TARAUACÁ",
    "servico":"Maternidade Ethel Muriel Gedis",
    "endereco":"Rua Floriano Peixoto, 213- Centro",
    "telefone":"3462-1066",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"XAPURI",
    "servico":"Hospital Epaminondas Jácome",
    "endereco":"Rua 06 de Agosto, 238- Centro",
    "telefone":"3542-2031",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"VILA CAMPINAS",
    "servico":"Unidade Mista de Saúde Ana Nery",
    "endereco":"BR-364, Km 60- Vila Campinas",
    "telefone":"3267-1195/3267-1042",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"RIO BRANCO",
    "servico":"Maternidade e Clínica de Mulheres Bárbara Heliodora",
    "endereco":"Av. Getúlio Vargas, 811- Centro",
    "telefone":"3224 -1290/3223-9681",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"RIO BRANCO",
    "servico":"Hospital de Urgência e Emergência de Rio Branco - Huerb",
    "endereco":"Av. Nações Unidas, s/n- Bosque",
    "telefone":"3223-3080 / 3223-0897",
    "hora":null
  },
  {
    "estado":"AC - Acre",
    "municipio":"RIO BRANCO",
    "servico":"Fundação Hospital do Acre - Fundhacre",
    "endereco":"BR-364, KM - 02 – Estrada Dias Martins, Distrito Industrial",
    "telefone":"3226-4336",
    "hora":null
  },
  {
    "estado":"AL - Alagoas",
    "municipio":"MACEIÓ",
    "servico":"HOSPITAL ESCOLA HELVIO AUTO",
    "endereco":"Rua Cônego Fernando Lyra, S/N - Trapiche da Barra - 57.017-420 - Maceió/AL",
    "telefone":"82/33156828/ 82/33153201/ 82/33153384",
    "hora":"24h"
  },
  {
    "estado":"AL - Alagoas",
    "municipio":"MACEIÓ",
    "servico":"Hospital Dia do Hospital Universitário",
    "endereco":"Avenida Lourival Melo Mota S/N, Bairro Tabuleiro.",
    "telefone":"(82)3202-3759",
    "hora":"08:00 às 17:00h"
  },
  {
    "estado":"AL - Alagoas",
    "municipio":"MACEIÓ",
    "servico":"SAE Dr Marcelo Constant",
    "endereco":"R. Cônego Fernando Lyra, Nº 10, Bairro Trapiche.",
    "telefone":"(82)3315-3244",
    "hora":"08:00 às 17:00h"
  },
  {
    "estado":"AL - Alagoas",
    "municipio":"MACEIÓ",
    "servico":"SAE PAM Salgadinho",
    "endereco":"R. Mizael Domingues, 241 Bloco I,Centro",
    "telefone":"(82)3315 5301",
    "hora":"08:00 às 17:00h"
  },
  {
    "estado":"AL - Alagoas",
    "municipio":"Santana do Ipanema",
    "servico":"Hospital Regional Dr. Clodolfo Rodrigues De Melo",
    "endereco":"Avenida João Agostinho, S/N, Bairro Santo Antônio.",
    "telefone":"(82)3261-8270",
    "hora":null
  },
  {
    "estado":"AM - Amazonas",
    "municipio":"PARINTINS",
    "servico":"CASA PADRE VITORIO (SAE, CTA E LABORATORIO)",
    "endereco":"RUA AGOSTINHO CUNHA Nº 2100 BAIRRO NOSSA SENHORA DAS GRAÇAS",
    "telefone":"(92)99204-7708",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"AM - Amazonas",
    "municipio":"MANAUS",
    "servico":"Fundação de Medicina Tropical Dr. Heitor Vieira Dourado",
    "endereco":"Av. Pedro Teixeira, 25. Bairro Dom Pedro, CEP - 69040-000",
    "telefone":"2127-3555",
    "hora":"24h"
  },
  {
    "estado":"AM - Amazonas",
    "municipio":"MANAUS",
    "servico":"Maternidade Moura Tapajós",
    "endereco":"Av. Brasil, 1355. Compensa I, CEP - 69036-110",
    "telefone":"3216-8158/3216-8767/3675-2083",
    "hora":"24h"
  },
  {
    "estado":"AM - Amazonas",
    "municipio":"MANAUS",
    "servico":"Instituto da Mulher Dona Lindu",
    "endereco":"Av. Mário Ypiranga, 1580. Adrianópolis, CEP - 69057-000",
    "telefone":"3643-8100",
    "hora":"24h"
  },
  {
    "estado":"AP - Amapá",
    "municipio":"Macapá",
    "servico":"SAE/CTA - SES AP CENTRO DE REFERENCIA DE DOENCAS TROPICAIS",
    "endereco":"RUA Jovino Dinoá nº 1251 CENTRO CEP: 68908-121",
    "telefone":"(96) 3131-2448",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"AP - Amapá",
    "municipio":"Macapá",
    "servico":"SES AP HOSPITAL DA MULHER",
    "endereco":"AVENIDA FAB nº 81 CENTRO CEP: 68900-000",
    "telefone":"(96) 3224-3530",
    "hora":"24h"
  },
  {
    "estado":"AP - Amapá",
    "municipio":"Macapá",
    "servico":"SES AP HOSPITAL DE EMERGENCIA",
    "endereco":"RUA Hamilton Silva Nº 742 Santa Rita CEP: 68900-000",
    "telefone":"(96) 3212-6233",
    "hora":"24h"
  },
  {
    "estado":"AP - Amapá",
    "municipio":"Macapá",
    "servico":"SES AP HOSPITAL DA CRIANCA E DO ADOLESCENTE",
    "endereco":"AVENIDA FAB s/n CENTRO CEP: 68925-000",
    "telefone":null,
    "hora":"24h"
  },
  {
    "estado":"AP - Amapá",
    "municipio":"Macapá",
    "servico":"IOM",
    "endereco":"AVENIDA Ana Nery Nº 890 Laguinho CEP: 68900-000",
    "telefone":null,
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"AP - Amapá",
    "municipio":"Macapá",
    "servico":"INSTITUTO DE HEMATOLOGIA E HEMOTERAPIA DO AMAPA",
    "endereco":"AVENIDA RAIMUNDO ALVARES DA COSTA S/N CENTRO CEP: 68900-102",
    "telefone":"(96) 3212-6139",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"PORTO SEGURO",
    "servico":"HOSPITAL MUNICIPAL DE PORTO SEGURO",
    "endereco":"AVENIDA NAVEGANTES N°640- CENTRO- PORTO SEGURO/BA CEP:45810000",
    "telefone":"(73)3288-5891",
    "hora":"24h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"FEIRA DE SANTANA",
    "servico":"HOSPITAL ESTADUAL DA CRIANÇA",
    "endereco":"AVENIDA EDUARDO SROES DA MOTA N°02 BAIRRO: 35° BI",
    "telefone":"(75)3602-0301",
    "hora":"24h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"SALVADOR",
    "servico":"DECIMO 2º ALFREDO BOREAL",
    "endereco":"RUA SAPONICK SEM Nº BAIRRO BOCA DO RIO CEP 41710880",
    "telefone":"(71)3034-7750",
    "hora":"24h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"SALVADOR",
    "servico":"12º CENTRO DE SAUDE ALFREDRO BUREAL",
    "endereco":"RUA JAIME SAPONIQUE S/N BAIRRO EMBUI CONJUNTO GUILERME MARBAQUE",
    "telefone":"(71)3034-7750",
    "hora":"24h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"JUAZEIRO",
    "servico":"CENTRO DE INFORMAÇAO EM DST, HIV, AIDS E HEPATITES VIRAIS.",
    "endereco":"AVENIDA CARMELA DUTRA Nº 700 BAIRRO: ANGARI, JUAZEIRO CEP: 48.903-530",
    "telefone":"(74)8859-4916",
    "hora":"08:00 às 12:00h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"JEQUIE",
    "servico":"CENTRO DE REFERENCIA E SAUDE SEXUAL DE JEQUIE",
    "endereco":"AVENIDA OTAVIO MANGABEIRA, SEM NUMERO, BAIRRO MANDACARU",
    "telefone":"(73)3526-8760",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"JEQUIE",
    "servico":"HOSPITAL GERAL DRADO VALADARES",
    "endereco":"RUA SAO CRISTOVAO, SEM NUMERO, CENTRO, CEP: 45200000",
    "telefone":"(73)7335-2871",
    "hora":"24h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"TEIXEIRA DE FREITAS",
    "servico":"UNIDADE MUNICIPAL MATERNO INFANTIL",
    "endereco":"AVENIDA PRESIDENTE GETULIO VARGAS Nº 3191, CENTRO, TEIXEIRA DE FREITAS CEP: 45.995-000",
    "telefone":"(73)3011-2760",
    "hora":"24h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"BARREIRAS",
    "servico":"STA SAI EDGARD PITA",
    "endereco":"RUA SERGIPE ANEXO AO CENTRO DE REFERENCIA LEONDIA AYRES",
    "telefone":"(77)3613-9745",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"FEIRA DE SANTANA",
    "servico":"PROGRAMA MUNICIPAL DST / HIV/AIDS DE FEIRA DE SANTANA",
    "endereco":"RUA PROFESSOR GERMINIANO COSTA S/N CENTRO",
    "telefone":"(75)3624-5931",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"JUAZEIRO",
    "servico":"CENTRO DE INFORMAÇAO EM DST/HIV/AIDS E HEPATITES VIRAIS-CIDHA",
    "endereco":"AVENIDA CARMELA DUTRA Nº 700, ANGARI- JUAZEIRO-BA. CEP: 48903530",
    "telefone":"(74)3612-3776",
    "hora":"08:00 às 12:00h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"JUAZEIRO",
    "servico":"CENTRO DE REFERENCIA EM DST/HIV/AIDS E HEPATITES VIRAIS - CIDA",
    "endereco":"AVENIDA CARMELA DUTRA, NUMERO 700, BAIRRO ANGARI, CEP: 48903530",
    "telefone":"(74)3612-3776",
    "hora":"08:00 às 12:00h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"ITABUNA",
    "servico":"CERPAT-CENTRO DE REFERENCIA DE PREVENÇAO E TRATAMENTO",
    "endereco":"AVENIDA AMELIA AMADO 914 CENTRO ITABUNA BAHIA CEP:4560006",
    "telefone":"(73)3215-6401",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"TEIXEIRA DE FREITAS",
    "servico":"CTA SAE TEIXEIRA DE FREITAS",
    "endereco":"RUA SAGRADA FAMILIA Nº 436 BAIRRO BELA VISTA.",
    "telefone":"(73)3011-2713",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"SALVADOR",
    "servico":"UPA DE ROMA",
    "endereco":"RUA BARAO DE GUARATIGIBE NUMERO 1153",
    "telefone":"(71)3316-8600",
    "hora":"24h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"ALAGOINHAS",
    "servico":"SAE CTA ALAGOINHAS",
    "endereco":"RUA 13 DE JUNHO LOTEAMENTO PARQUE FLORESTA - S/N - BAIRRO PARQUE FLORESTA - ALAGOINHAS-BA",
    "telefone":"(75)3423-8376",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"PAULO AFONSO",
    "servico":"CTA/SAE",
    "endereco":"AVENIDA JOSE HEMETERIO DE CARVALHO, N°250",
    "telefone":"(75)3282-9277",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"EUNAPOLIS",
    "servico":"SAE CTA DE EUNAPOLIS",
    "endereco":"RUA FLORIANO PEIXOTO Nº 83 CENTRO EUNAPOLIS BAHIA CEP: 45820000",
    "telefone":"(73)3261-5412",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"BA - Bahia",
    "municipio":"VITORIA DA CONQUISTA",
    "servico":"CAAVE CENTRO DE ATEÇAO E APOIO A VIDA DOUTOR DAVID CAPISTRANO FILHO",
    "endereco":"PRAÇA JOAO GONÇALVES CENTRO,VITORIA DA CONQUISTA",
    "telefone":"(77)3429-7250",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"CE - Ceará",
    "municipio":"IGUATU",
    "servico":"CENTRO MICRO REGIONAL ESPECIALIZADO NA ATENÇAO A SAUDE REPRODUTIVA E SEXUAL",
    "endereco":"RUA MON SENHOR COELHO S/N BAIRRO SAO SEBASTIAO",
    "telefone":"(88)3581-2379",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"CE - Ceará",
    "municipio":"SOBRAL",
    "servico":"CENTRO DE TESTE A ACONSELHAMENTO SOROLOGICO",
    "endereco":"RUA ANTONIO FELIX IBIAPINA, NUMERO 931 BAIRRO COELSE, CEP : 62030390",
    "telefone":"(88)3695-5167",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"CE - Ceará",
    "municipio":"MARACANAU",
    "servico":"CTA SAE MARACANAU",
    "endereco":"RUA JOAO ALENCAR S/N MARACANAU",
    "telefone":"(85)3521-5533",
    "hora":"14:00 às 18:00h"
  },
  {
    "estado":"CE - Ceará",
    "municipio":"JUAZEIRO DO NORTE",
    "servico":"SAE",
    "endereco":"RUA DOM PEDRO II Nº1769 BAIRRO FRANCISCANO CEP:63010000",
    "telefone":"(88)9911-5073",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"CE - Ceará",
    "municipio":"FORTALEZA",
    "servico":"Hospital São José de Doenças Infecciosas",
    "endereco":"Rua Nestor Barbosa, 315 - Parquelândia",
    "telefone":"85 -3101-2321/3101-2322",
    "hora":"24h"
  },
  {
    "estado":"CE - Ceará",
    "municipio":"FORTALEZA",
    "servico":"Hospital Distrital Gonzaga Mota de Messejana (Atende mulheres vítimas de violência sexual)",
    "endereco":"Av. Washington Soares, 7700",
    "telefone":"85 3105-1590",
    "hora":"24h"
  },
  {
    "estado":"DF - Distrito Federal",
    "municipio":"GUARA",
    "servico":"CENTRO DE SAUDE 2 DO GUARA",
    "endereco":"QE 23 AREA ESPECIAL",
    "telefone":"(61)3382-0512",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"DF - Distrito Federal",
    "municipio":"GAMA",
    "servico":"SAE",
    "endereco":"AREA ESPECIAL SETOR CENTRAL LADO LESTE Nº38 GAMA DF CEP:72405382",
    "telefone":"(61)3385-9700",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"DF - Distrito Federal",
    "municipio":"GAMA",
    "servico":"CENTRO DE SAUDE NUMERO 05 DO GAMA",
    "endereco":"AREA ESPECIAL SETOR CENTRAL LADO LESTE Nº38 GAMA DF CEP:72405382",
    "telefone":"(61)3556-5111",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"DF - Distrito Federal",
    "municipio":"CEILANDIA",
    "servico":"HOSPITAL REGIONAL DA CEILANDIA",
    "endereco":"QNM 27- AREA ESPECIAL N°1- SETOR M - CEILANDIA SUL",
    "telefone":"(61)3471-9000",
    "hora":"24h"
  },
  {
    "estado":"DF - Distrito Federal",
    "municipio":"TAGUATINGA",
    "servico":"UNIDADE MISTA DE SAUDE DE TAGUATINGA",
    "endereco":"C12 AREA ESPECIAL 1/2 TAGUATINGA CEP 72010120",
    "telefone":"(61)3353-1000",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"DF - Distrito Federal",
    "municipio":"BRASILIA",
    "servico":"UNIDADE MISTA DE SAUDE/ HOSPITAL DIA",
    "endereco":"EQS 508/509- ASA SUL- BRASILIA- DF.",
    "telefone":null,
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"DF - Distrito Federal",
    "municipio":"SANTA MARIA",
    "servico":"HOSPITAL REGINAL DE SANTA MARIA",
    "endereco":"QD AC 102 CONJ A B C D BAIRRO SANTA MARIA - DF CEP: 72502100",
    "telefone":"(61)3392-6249",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"DF - Distrito Federal",
    "municipio":"SOBRADINHO",
    "servico":"CENTRO DE SAUDE DA FAMILIA N°01- SOBRADINHO",
    "endereco":"QUADRA 14- AREA ESPECIAL",
    "telefone":"(61)3591-1635",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"ES - Espírito Santo",
    "municipio":"GUARAPARI",
    "servico":"CTA/SAE DE GUARAPARI",
    "endereco":"RUA ORACIO SANTANA Nº 279 PARQUE AREIA PRETA GUARAPARI, ESPIRITO SANTO CEP: 29.200-750",
    "telefone":"(27)3262-8623",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"ES - Espírito Santo",
    "municipio":"LINHARES",
    "servico":"PROGRAMA DE DST AIDS E HEPATITES BC",
    "endereco":"AVENIDA JOAO FELIPE CAMON 1115 CENTRO, LINHEARES, PROXIMO AO HOSPITAL RIO DOCE,",
    "telefone":"(27)3372-7410",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"ES - Espírito Santo",
    "municipio":"COLATINA",
    "servico":"HOSPITAL MATERNIDADE SAO JOSE",
    "endereco":"LADEIRA CRISTO REI, Nº 514. CENTRO - ES",
    "telefone":"(27)2102-2127",
    "hora":"24h"
  },
  {
    "estado":"ES - Espírito Santo",
    "municipio":"COLATINA",
    "servico":"SAE CTA COLATINA",
    "endereco":"RUA AROLDO ANTOLINE, NUMERO 134, BAIRRO ESPLANADA CEP: 29702080",
    "telefone":"(27)3721-1531",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"ES - Espírito Santo",
    "municipio":"GUARAPARI",
    "servico":"SAE/CTA GUARAPARI",
    "endereco":"RUA ORACIO SANTANA 279 PARQUE AREIA PRETA GUARAPARI/ES",
    "telefone":"(27)3262-8623",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"ES - Espírito Santo",
    "municipio":"VILA VELHA",
    "servico":"HOSPITAL ANTONIO BEZERRA DE FARIAS",
    "endereco":"RUA CASTELO BRANCO N°2012 BAIRRO OLARIA - VILHA VELHA- ES CEP:29123-180",
    "telefone":"(27)3636-3501",
    "hora":"24h"
  },
  {
    "estado":"ES - Espírito Santo",
    "municipio":"SERRA",
    "servico":"UPA-UNIDADE DE PRONTO ATENDIMENTO OSCARINA MIRANDA BORGES",
    "endereco":"AVENIDA JONES DOS SANTOS NEVES SEM NUMERO BAIRRO: MARIA NIOBE , SERRA, ESPIRITO SANTO CEP: 29.176-060",
    "telefone":"(27)3291-8810",
    "hora":"24h"
  },
  {
    "estado":"ES - Espírito Santo",
    "municipio":"SAO MATEUS",
    "servico":"CTA E SAE -SAO MATEUS",
    "endereco":"AVENIDA JOSE TORSE Nº2552 BAIRRO BOA VISTA CEP: 29931340",
    "telefone":"(27)3767-4165",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"ES - Espírito Santo",
    "municipio":"Vitória",
    "servico":"Centro de Referência em DST e Aids",
    "endereco":"Rua Cais de São Francisco, 54, Parque Moscoso, Centro, Vitória-ES",
    "telefone":"(27 3132.5108 / 5107/5106",
    "hora":"7:00 às 18:00h"
  },
  {
    "estado":"ES - Espírito Santo",
    "municipio":"Vitória",
    "servico":"PA- Pronto Atendimento Praia do Suá",
    "endereco":"Rua Almirante Barroso, S/N (Praia do Sua) 29052-190 Vitoria, Espírito Santo ES",
    "telefone":"(27)3325.3380",
    "hora":"24h"
  },
  {
    "estado":"GO - Goiás",
    "municipio":"ANAPOLIS",
    "servico":"PROGRAMA MUNICIPAL DE DST AIDS E HEPATITES VIRAIS",
    "endereco":"AVENIDA SAO FRANCISCO Nº810 BAIRRO JUNDIAI ANAPOLIS - GO 75110810",
    "telefone":"(62)3902-2681",
    "hora":"08:00 às 12:00h"
  },
  {
    "estado":"GO - Goiás",
    "municipio":"RIO VERDE",
    "servico":"PROGRAMA DTS AIDS E HEPATITE VIRAIS",
    "endereco":"RUA DARIO ALVES DE PAIVA Nº1023 BAIRRO: CENTRO",
    "telefone":"(64)3620-2058",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"GO - Goiás",
    "municipio":"GOIÂNIA",
    "servico":"Centro de Referência em Diagnóstico e Terapêutica",
    "endereco":"AV: Contorno n° 2151 Setor. Norte Ferroviário. Goiânia - GO",
    "telefone":"(62)3524-8705",
    "hora":"07:00 às 11:00h e 13:00 às 15:00h"
  },
  {
    "estado":"GO - Goiás",
    "municipio":"GOIÂNIA",
    "servico":"Cais de Campinas",
    "endereco":"Rua P30 c/ rua P26 S/N St Setor dos Funcionários. Goiânia - GO",
    "telefone":"(62)3524-1930",
    "hora":"24h"
  },
  {
    "estado":"GO - Goiás",
    "municipio":"GOIÂNIA",
    "servico":"Maternidade Nascer Cidadão",
    "endereco":"AV: Oriente, área publica 09, Jardim Curitiba III. Goiânia - GO",
    "telefone":"(62)3595-2830",
    "hora":"24h"
  },
  {
    "estado":"GO - Goiás",
    "municipio":"GOIÂNIA",
    "servico":"Cais Candida de Moraes",
    "endereco":"AV: Perimetral Norte esquina c/ rua CM 08, Qd 09B Lt 01. Setor Cândida de Morais. Goiânia - GO",
    "telefone":"(62)3524-3473 (62)3524-3471 (62)3524-3470",
    "hora":"24h"
  },
  {
    "estado":"GO - Goiás",
    "municipio":"GOIÂNIA",
    "servico":"Cais Novo Mundo",
    "endereco":"AV: New York Qd 137 S/N Jardim Novo Mundo. Goiânia - GO",
    "telefone":"(62)3524-1891 (62)3524-1892",
    "hora":"24h"
  },
  {
    "estado":"MA - Maranhão",
    "municipio":"IMPERATRIZ",
    "servico":"PROGRAMA MUNICIPAL DST/AIDS",
    "endereco":"RUA RAFAEL DE ALMEIDA S/N- PARQUE ANHANGUERA- IMPERATRIZ-MA",
    "telefone":"(99)98148-4864",
    "hora":"08:00 às 12:00h"
  },
  {
    "estado":"MA - Maranhão",
    "municipio":"CODO",
    "servico":"SERVIÇO DE ATENDIMENTO ESPECIALIZADO E CENTRO DE TESTAGEM E ACONSELHAMENTO",
    "endereco":"AVENIDA MIGUEL BAHURI S/N CENTRO",
    "telefone":"(99)98189-4003",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MA - Maranhão",
    "municipio":"São Luís",
    "servico":"HOPITAL DR CLEMENTINO MOURA",
    "endereco":"AVENIDA TRANCREDO NEVES S/N SOCORRAO II CIDADE OPERÁRIA CEP: 65050-000",
    "telefone":"(98) 3244-2400",
    "hora":"24h"
  },
  {
    "estado":"MA - Maranhão",
    "municipio":"São Luís",
    "servico":"HOSPITAL MUNICIPAL DJALMA MARQUES",
    "endereco":"RUA DO PASSEIO S/N SOCORRAO I CENTRO CEP: 65015-370",
    "telefone":"(98) 3221-1054",
    "hora":"24h"
  },
  {
    "estado":"MA - Maranhão",
    "municipio":"São Luís",
    "servico":"UNIDADE DE PRONTO ATENDIMENTO SOCORRINHO I",
    "endereco":"RUA 09 S/N COHATRAC II CEP: 65054-350",
    "telefone":"(98) 3238-5786",
    "hora":"24h"
  },
  {
    "estado":"MA - Maranhão",
    "municipio":"São Luís",
    "servico":"UNIDADE DE PRONTO ATENDIMENTO SOCORRINHO II",
    "endereco":"RUA EMETERIO LEITAO Nº 01 SAO FRANCISCO CEP: 65076-460",
    "telefone":"(98) 3268-8826",
    "hora":"24h"
  },
  {
    "estado":"MA - Maranhão",
    "municipio":"São Luís",
    "servico":"HOSPITAL UNIVERSITARIO HUUFMA - MATERNO INFANTIL",
    "endereco":"RUA BARAO DE ITAPARY Nº 227 CENTRO",
    "telefone":"(98) 3219-1000",
    "hora":"24h"
  },
  {
    "estado":"MA - Maranhão",
    "municipio":"São Luís",
    "servico":"HOSPITAL DA MULHER",
    "endereco":"AVENIDA DOS PORTUGUESES S/N ANJO DA GUARDA CEP: 65010-000",
    "telefone":"(98) 3228-2623",
    "hora":"24h"
  },
  {
    "estado":"MA - Maranhão",
    "municipio":"São Luís",
    "servico":"CENTRO DE SAÚDE DE BAIRRO DE FÁTIMA",
    "endereco":"RUA ADEMAR DE BARROS S/N BAIRRO DE FATIMA CEP: 65030-030",
    "telefone":"(98) 3243-2105",
    "hora":"08:00 às 18:00h"
  },
 // MG tirada 05/02/2016
 // MG adicionada 07/07/2016
  {
    "estado":"MG - Minas Gerais",
    "municipio":"PASSOS",
    "servico":"AMBULATORIO ESCOLA PROFESSOR LUIZ CAMILO TEODORO DA SILVEIRA",
    "endereco":"RUA SABARA Nº 164 CENTRO, PASSOS CEP: 37.900-004",
    "telefone":"(35)3529-8030",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"PASSOS",
    "servico":"HOSPITAL SAO JOSE UNIMED",
    "endereco":"AVENIDA DR. BRENO SOARES MAIA N°236- CEP: 37900110",
    "telefone":"(35)3529-2450",
    "hora":"24h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"CONSELHEIRO LAFAIETE",
    "servico":"POLICLINICA MUNICIPAL CONSELHEIRO LAFAETI",
    "endereco":"AVENIDA PREFEITO MARIO RODRIGUES PEREIRA N°175- CENTRO- CONSELHEIRO LAFAETI",
    "telefone":"(31)3769-2547",
    "hora":"24h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"OURO BRANCO",
    "servico":"SAE OURO BRANCO",
    "endereco":"RUA ALTO DO CRUZEIRO S/N CENTRO - OURO BRANCO, MG CEP 36420-000",
    "telefone":"(31)3741-4665",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"PATOS DE MINAS",
    "servico":"UNIDADE PRONTO ATENDIMENTO UPA PORTE3",
    "endereco":"RUA PELUZZO N°238 - BAIRRO PELUZZO - PATOS DE MINAS - MG",
    "telefone":"(34)3822-9111",
    "hora":"24h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"CONSELHEIRO LAFAIETE",
    "servico":"HOSPITAL QLUZ",
    "endereco":"ALAMEIDA OSVALDO CRUZ 189",
    "telefone":"(31)3763-1899",
    "hora":"24h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"ITUIUTABA",
    "servico":"ADIC - ATENDIMENTO DE DOENÇAS INFECTOCONTAGIOSAS",
    "endereco":"AVENIDA 45 Nº 164 BAIRRO ELANDIA",
    "telefone":"(34)3268-2516",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"PATOS DE MINAS",
    "servico":"HOSPITAL REGIONAL ANTONIO DIAS",
    "endereco":"RUA MAJOR GOTE Nº 1231 CENTRO",
    "telefone":"(34)3818-6000",
    "hora":"24h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"VESPASIANO",
    "servico":"CENTRO DE REFERENCIA VIDAL BRASIL",
    "endereco":"RUA MANOEL CUNHA NUMERO 49 BAIRRO NAZIA",
    "telefone":"(31)3621-1285",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"IPATINGA",
    "servico":"CENTRO DE CONTROLE DAS DOENÇAS INFECTO PARAZITARIAS",
    "endereco":"RUA GOVERNADOR VALADARES, NUMERO 45, CENTRO, 35160041",
    "telefone":"(31)3829-8601",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"CORONEL FABRICIANO",
    "servico":"PROGRAMA MUNICIPAL DE DST, AIDS E HEPATITES VIRAIS DE CORONEL FABRICIANO",
    "endereco":"RUA SAO SEBASTIAO N°1007, BAIRRO: PROFESSORES",
    "telefone":"(31)3846-3556",
    "hora":"08:00 às 12:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"GOVERNADOR VALADARES",
    "servico":"CENTRO DE REFERENCIA DE ATENÇAO ESPECIAL A SAUDE",
    "endereco":"RUA OSVALDO CRUZ Nº242 BAIRRO ESPLANADA CEP :35010210 GOVERNADOR VALADARES.",
    "telefone":"(33)3271-3048",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"JUIZ DE FORA",
    "servico":"PROTOCOLO DE ATENDIMENTO AO RISCO BIOLOGICO OCUPACIONAL E SEXUAL",
    "endereco":"AVENIDA BARAO DO RIO BRANCO 3408 ALTO DOS PASSOS",
    "telefone":"(32)3690-8107",
    "hora":"24h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"SETE LAGOAS",
    "servico":"UPA",
    "endereco":"AVENIDA RAQUEL VIANA Nº716 BAIRRO CANAA CEP:35700293",
    "telefone":"(31)3773-2600",
    "hora":"24h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"VESPASIANO",
    "servico":"UPA PREFEITO LUIZ ISSA",
    "endereco":"RUA TIRADENTES SEM NUMERO VESPACIANO CENTRO",
    "telefone":"(31)3622-0800",
    "hora":"24h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"BELO HORIZONTE",
    "servico":"CTA,SAE,SAGRADA FAMILIA",
    "endereco":"RUA JOAQUIM FELICIO 141 BAIRRO SAGRADA FAMILIA BELO HORIZONTE MG",
    "telefone":"(31)3277-9050",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"JUIZ DE FORA",
    "servico":"PROGRAMA MUNICIPAL DE DST/AIDS",
    "endereco":"AVENIDA DOS ANDRADAS N°523- CENTRO- CEP: 36036000",
    "telefone":"(32)3690-7054",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"MURIAE",
    "servico":"PROGRAMA MUNICIPAL DST AIDS E HEPATITES VIRAIS",
    "endereco":"RUA VEREADOR JOSE MESSIAS SOARES, NUMERO 65, BAIRRO SANTO ANTONIO CEP: 36880000",
    "telefone":"(32)3721-8838",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"ARAXA",
    "servico":"PRONTO ATENDIMENTO MUNICIPAL DE ARAXA",
    "endereco":"PRAÇA AIRES MANEIRA, Nº 19 CENTRO",
    "telefone":"(34)3691-7079",
    "hora":"24h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"PATOS DE MINAS",
    "servico":"PROGRAMA MUNICIPAL DE DST, AIDS E HEPATITE VIRAIS CRONICAS",
    "endereco":"RUA DR. NOE FERREIRA N°121 BAIRRO BELA VISTA CEP:38703234",
    "telefone":"(34)3822-9808",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"UBERABA",
    "servico":"PROGRAMA MUNICIPAL DE HIV E HEPATITE VIRAIS",
    "endereco":"RUA MARECHAL TEODORO Nº166 BAIRRO SAO BENEDITO CEP:",
    "telefone":"(34)3333-7787",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"BELO HORIZONTE",
    "servico":"UNIDADE REFERENCIA SEGUNADARIA/SAE",
    "endereco":"RUA PARAIBA 890 FUNCIONARIOS",
    "telefone":"(31)3277-5305",
    "hora":"08:00 às 19:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"CONSELHEIRO LAFAIETE",
    "servico":"CENTRO PROMOÇAO DA SAUDE",
    "endereco":"AVENIDA DOM PEDRO II Nº190 BAIRRO SAO SEBASTIAO 36400000",
    "telefone":"(31)3769-9054",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"POCOS DE CALDAS",
    "servico":"CENTRO DE REFERENCIA DE DST AIDS HEPATITES VIRAIS",
    "endereco":"RUA PARAIBA NUMERO 150",
    "telefone":"(35)3536-9722",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"BELO HORIZONTE",
    "servico":"ATENDIMENTO A VITIMAS DE VIOLENCIA SEXUAL OU ACIDENTES DE TRABALHO.",
    "endereco":"RUA FORMIGA NUMERO 50",
    "telefone":"(31)3277-6231",
    "hora":"24h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"UBERLANDIA",
    "servico":"AMBULATORIO HERBERT DE SOUZA DST AIDS HEPATITES VIRAIS",
    "endereco":"RUA AVELINO DO NASCIMENTO N 15 BAIRO PRSIDENTE ROOSEVELT",
    "telefone":"(34)3215-2444",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"RIBEIRAO DAS NEVES",
    "servico":"HOSPITAL SAO JUDAS TADEU",
    "endereco":"VALDEMAR JOSE ALVES N°65 - BAIRRO STATUS - RIBEIRAO DAS NEVES - MG - CEP:33880190",
    "telefone":"(31)3625-4184",
    "hora":"24h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"CONTAGEM",
    "servico":"DST AIDS E HEPATITES VIRAIS CCE IRIA DINIZ CONTAGEM/MG",
    "endereco":"AVENIDA JOAO CESAR DE OLIVEIRA 2889 BAIRRO EL DOURADO CONTAGEM/MG",
    "telefone":"(31)3352-2362",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"BELO HORIZONTE",
    "servico":"HOSPITAL GOVERNADOR ISRAEL PINHEIRO DO IPSEMG",
    "endereco":"ALAMEDA EZEQUIEL DIAS Nº 225 BELO HORIZONTE CEP: 30.130-110",
    "telefone":"(31)3237-2282",
    "hora":"24h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"BELO HORIZONTE",
    "servico":"CTRDIP ORESTES DINIZ",
    "endereco":"ALAMEDA ALVARO CELSO 241, SANTA EFIGENIA, CEP 30150260",
    "telefone":"(31)3277-1198",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"SANTA LUZIA",
    "servico":"HOSPITAL DE SAO JOAO DE DEUS",
    "endereco":"RUA FLORIANO PEIXOTO, NUMERO 333, CENTRO CEP: 33010030",
    "telefone":"(31)3641-2071",
    "hora":"24h"
  },
  {
    "estado":"MG - Minas Gerais",
    "municipio":"ITABIRA",
    "servico":"SERVIÇO DE ATENÇAO ESPECIALIZADA EM DST, HIV, AIDS DE ITABIRA.",
    "endereco":"RUA LUIZ VENTURA Nº 75 BAIRRO: VILA PIEDADE CEP: 35.900-205",
    "telefone":"(31)3839-2399",
    "hora":"08:00 às 18:00h"
  },

   {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"CORUMBA",
    "servico":"CENTRO DE REFERENCIA EM DST, AIDS - DR. JOAO DE BRITO",
    "endereco":"RUA CIRIACO DE TOLEDO N°1624- CEP: 79321160",
    "telefone":"(67)3907-5379",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"CAMPO GRANDE",
    "servico":"UNIDADE DE PRONTO ATENDIMENTO DR. ALESSANDRO MARTINS DE SOUZA SILVA - UPA VILA ALMEIDA",
    "endereco":"RUA MINISTRO JOSÉ LINHARES · S/N · ESQ.R. YOKOHAMA VILA ALMEIDA",
    "telefone":"3314-7329",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"CAMPO GRANDE",
    "servico":"UNIDADE DE PRONTO ATENDIMENTO APARECIDA GONÇALVES SARAIVA - UPA UNIVERSITÁRIO",
    "endereco":"AV GUAICURUS · S/N · ESQ COM AV GURY MARQUES UNIVERSITÁRIO",
    "telefone":"3304-5601",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"CAMPO GRANDE",
    "servico":"UNIDADE DE PRONTO ATENDIMENTO WALFRIDO ARRUDA - UPA CORONEL ANTONINO",
    "endereco":"AV GUAICURUS · S/N · ESQ COM AV GURY MARQUES UNIVERSITÁRIO",
    "telefone":"3314-4195",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"CAMPO GRANDE",
    "servico":"CENTRO REGIONAL DE SAÚDE DR GUINTHER HANS - CRS NOVA BAHIA",
    "endereco":"AV SENHOR DO BONFIM · S/N NOVA BAHIA",
    "telefone":"3314-8295",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"CAMPO GRANDE",
    "servico":"CENTRO REGIONAL DE SAÚDE DR MARCÍLIO DE OLIVEIRA LIMA – CRS MORENINHA",
    "endereco":"RUA GUARABÚ DA SERRA · S/N MORENINHA III",
    "telefone":"3314-9028",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"CAMPO GRANDE",
    "servico":"CENTRO REGIONAL DE SAÚDE DR. ANTONIO PEREIRA - CRS TIRADENTES",
    "endereco":"AV JOSÉ NOGUEIRA VIEIRA · S/N TIRADENTES",
    "telefone":"3314-3754",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"CAMPO GRANDE",
    "servico":"CENTRO REGIONAL DE SAÚDE DR. JOÃO PEREIRA DA ROSA - CRS AERO RANCHO",
    "endereco":"AV. RAQUEL DE QUEIROZ · S/N AERO RANCHO",
    "telefone":"3314-6339",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"CAMPO GRANDE",
    "servico":"CENTRO REGIONAL DE SAÚDE DR. WALDECK FLETNER DE CASTRO MAIA - CRS COOPHAVILA",
    "endereco":"RUA DA PENÍNSULA · S/N COOPHAVILA II",
    "telefone":"3373-5400",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"CAMPO GRANDE",
    "servico":"CENTRO REGIONAL DE SAÚDE DR. ÊNIO CUNHA - CRS GUANANDY",
    "endereco":"AV MANOEL DA COSTA LIMA · 3272 GUANANDY",
    "telefone":"3314-6335",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"CAMPO GRANDE",
    "servico":"CENTRO DE DOENÇAS INFECTO PARASITÁRIAS - CEDIP",
    "endereco":"RUA DOS COQUEIROS · S/N NOVA BAHIA",
    "telefone":"3314- 8289",
    "hora":"07:00 às 17:00h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"Campo Grande",
    "servico":"UNIDADE DE PRONTO ATENDIMENTO DR. ALESSANDRO MARTINS DE SOUZA SILVA - UPA VILA ALMEIDA",
    "endereco":"RUA MINISTRO JOSÉ LINHARES · S/N · ESQ.R. YOKOHAMA - VILA ALMEIDA",
    "telefone":"3314-7329",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"Campo Grande",
    "servico":"UNIDADE DE PRONTO ATENDIMENTO APARECIDA GONÇALVES SARAIVA - UPA UNIVERSITÁRIO",
    "endereco":"AV GUAICURUS · S/N · ESQ COM AV GURY MARQUES - UNIVERSITÁRIO",
    "telefone":"3304-5601",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"Campo Grande",
    "servico":"UNIDADE DE PRONTO ATENDIMENTO WALFRIDO ARRUDA - UPA CORONEL ANTONINO",
    "endereco":"R. Dr. Meireles, 1134 - Monte Castelo",
    "telefone":"3314-4195",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"Campo Grande",
    "servico":"CENTRO REGIONAL DE SAÚDE DR GUINTHER HANS - CRS NOVA",
    "endereco":"AV SENHOR DO BONFIM • S/N NOVA BAHIA",
    "telefone":"3314-8295",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"Campo Grande",
    "servico":"CENTRO REGIONAL DE SAÚDE DR MARCÍLIO DE OLIVEIRA LIMA – CRS MORENINHA",
    "endereco":"RUA GUARABÚ DA SERRA · S/N MORENINHA III",
    "telefone":"3314-9028",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"Campo Grande",
    "servico":"CENTRO REGIONAL DE SAÚDE DR. ANTONIO PEREIRA - CRS TIRADENTES",
    "endereco":"AV JOSÉ NOGUEIRA VIEIRA · S/N TIRADENTES",
    "telefone":"3314-3754",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"Campo Grande",
    "servico":"CENTRO REGIONAL DE SAÚDE DR. JOÃO PEREIRA DA ROSA - CRS AERO RANCHO",
    "endereco":"AV. RAQUEL DE QUEIROZ · S/N AERO RANCHO",
    "telefone":"3314-6339",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"Campo Grande",
    "servico":"CENTRO REGIONAL DE SAÚDE DR. WALDECK FLETNER DE CASTRO MAIA - CRS COOPHAVILA",
    "endereco":"RUA DA PENÍNSULA · S/N COOPHAVILA II",
    "telefone":"3373-5400",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"Campo Grande",
    "servico":"CENTRO REGIONAL DE SAÚDE DR. ÊNIO CUNHA - CRS GUANANDY",
    "endereco":"AV MANOEL DA COSTA LIMA · 3272 GUANANDY",
    "telefone":"3314-6335",
    "hora":"24h"
  },
  {
    "estado":"MS - Mato Grosso do Sul",
    "municipio":"Campo Grande",
    "servico":"CENTRO DE DOENÇAS INFECTO PARASITÁRIAS - CEDIP",
    "endereco":"RUA DOS COQUEMT - Mato Grosso IROS • S/N NOVA BAHIA",
    "telefone":"3314- 8289",
    "hora":"7h às 17h"
  },
  //MS updated 17/05/2017 start
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Guaxupé",
    "servico": "Santa Casa de Misericórdia",
    "endereco": "Rua Francisco Lessa    N. 166",
    "telefone": "(35) 3559-1515",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Barbacena",
    "servico": "Santa Casa de Misericórdia de Barbacena",
    "endereco": "Rua Padre Toledo - s/n°- Bairro São Sebastião - Barbacena - MG - 36.202-290",
    "telefone": "(32) 3339-2400",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Ouro Branco",
    "servico": "Hospital Raymundo Campos",
    "endereco": "Rua Alto do Cruzeiro s/n º bairro: Centro",
    "telefone": "(31) 3938-1133",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Ouro Branco",
    "servico": "UPA - Centro Sul",
    "endereco": "Rua Domingos Vieira, 488.Santa Efigênia",
    "telefone": "(31) 3238-5900/5925",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Ouro Branco",
    "servico": "UPA - Nordeste",
    "endereco": "Rua Itamaracá, 535. Bairro Concórdia",
    "telefone": "(31) 3246-7501",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Ouro Branco",
    "servico": "UPA - Leste",
    "endereco": "Rua Vinte e Oito de Setembro, 372 - Esplanada, Belo Horizonte - MG, 30280-050",
    "telefone": "(31) 3277-1103",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Ouro Branco",
    "servico": "UPA - Barreiro",
    "endereco": "Barreiro – Av. Aurélio Lopes, 20, Diamante, 30.626.002",
    "telefone": "(31) 3277-5841 9572/5821",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Belo Horizonte",
    "servico": "UPA- Pampulha",
    "endereco": "Avenida Santa Terezinha, 515 - Santa Terezinha, Belo Horizonte – MG",
    "telefone": "(31) 3277-8441",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Belo Horizonte",
    "servico": "UPA -  NORTE Policlínica Albert Sabin",
    "endereco": "R Oscar Lobo Pereira, 270 -Minaslândia - Poço Maio, Belo Horizonte, MG | CEP: 31812-070",
    "telefone": "(31) 3277-7464",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Sabará",
    "servico": "UPA Padre Lázaro Pereira Crispim",
    "endereco": "Rodovia MGT 262 km 07 n° 7000 Nações Unidas",
    "telefone": "(31) 3508-1962",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Ibirité",
    "servico": "Hospital Municipal e Maternidade de Ibirité",
    "endereco": "Avenida São Paulo,1104-  Macaúbas",
    "telefone": "(31) 3533-6110",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Ibirité",
    "servico": "UPA JK",
    "endereco": "Av. Jõao César de Oliveira 780",
    "telefone": "(31) 3356-3254          (31) 3391-1179",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Ibirité",
    "servico": "Pronto Socorro Geraldo Pinto Vieira/ FAMUC",
    "endereco": "Rua Marechal Costa e Silva, 310 bairro: JK",
    "telefone": "(31) 3395-4677/ 3391-1179",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Nova Lima",
    "servico": "Hospital Nossa Senhora de Lourdes",
    "endereco": "Rua Madre Tereza 20, Nova Lima, Centro  CEP: 34000-000",
    "telefone": "(31) 3589-1302",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Ribeirão das Neves",
    "servico": "Hospital São Judas Tadeu",
    "endereco": "R. Waldemar José Alves, 65 -    Status CEP:33.880-000 Ribeirão das Neves",
    "telefone": "(31) 3625-4184 / 3627-5238",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Ribeirão das Neves",
    "servico": "UPA Joanísio  Unidade de Pronto Atendimento Joanico Cirilo de Abreu   Pronto Socorro Geral",
    "endereco": "Rua Jose Pedro Pereira , 75 - CEP: 33.880-620",
    "telefone": "(31) 3627-7070",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Betim",
    "servico": "Hospital Público Regional de Betim",
    "endereco": "Avenida Ediméia Matos Lazaroti, 3800 Jardim Brasília, Betim - MG, 32510-430",
    "telefone": "(31) 3539-8129 / 8158 / 8210 / 8262",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Betim",
    "servico": "Maternidade P Municipal Haydée Espejo Conroy",
    "endereco": "Rua Gaturama, 180 – Imbiruçu 32684010",
    "telefone": "(31) 3591-3411 / 3496",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Betim",
    "servico": "UAI Sete de Setembro",
    "endereco": "Av. Bandeirantes, 441, Vila Recreio",
    "telefone": "3531-3930 / 3511-8538 / 3594-5821",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Betim",
    "servico": "UAI Teresópolis",
    "endereco": "Av. Belo Horizonte, 154, Jardim Teresópolis",
    "telefone": "(31) 3597-8270 / 8278 / 8273 / 8274",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Coronel Fabriciano",
    "servico": "P.A do Hospital Siderúrgica / Hospital São Camilo antigo Siderurgica",
    "endereco": "R Argemiro José Ribeiro, 39 -Santa Helena, Coronel Fabriciano, MG 35170-005 / Rua Maria Matos, 58 - Centro",
    "telefone": "(31) 3865-1800 (31) 3842-3009 (31) 3842-3011 \n(31) 3842-1758",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Ipatinga",
    "servico": "Hospital Municipal Eliane Martins",
    "endereco": "Av. Felipe dos Santos, 123                 Cidade Nobre",
    "telefone": "(31) 3828-5600 / 5672 / 5659 / 5655 / 5654 / 5663",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Divinópolis",
    "servico": "Pronto Socorro Regional",
    "endereco": "Praça Pedro X Gontijo, 550 Centro. 35500-024 Divinópolis",
    "telefone": "(37) 3221-8097",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Capelinha",
    "servico": "Fundação Hospitalar Capelinha",
    "endereco": "Avenida JK 221, Bairro: São Geraldo",
    "telefone": "(33) 3516-1366",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Diamantina",
    "servico": "Hospital Municipal Geraldo Ferreira Gandra",
    "endereco": "Rua Capelinha, 652 - Fazendinha",
    "telefone": "(38) 3521-1133",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Diamantina",
    "servico": "Santa Casa de Caridade",
    "endereco": "Rua Caridade, 106 - Centro 39100-000 Diamantina",
    "telefone": "(38) 3532-1303  /  1300",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Araçuaí",
    "servico": "P.S. Hospital São Vicente de Paulo",
    "endereco": "Av. Graça Melo, nº - Centro",
    "telefone": "(33) 3731-1333",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Itabira",
    "servico": "Pronto Socorro Municipal de Itabira",
    "endereco": "Avenida João Soares da Silva, 135 Penha 35900-062 Itabira",
    "telefone": "(31) 3839-1450 / 1473 / 1467",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "João Monlevade",
    "servico": "Hospital Margarida – Associação São Vicente de Paulo de João Monlevade   MG",
    "endereco": "R. Dr. Geraldo Soares de Sá, s/n° Vila Tanque CEP: 35930-437",
    "telefone": "(31) 3859-3144",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Guanhães",
    "servico": "Hospital Regional Imaculada Conceição-Guanhães",
    "endereco": "Rua Capitão Bernardo, 257, Centro 39740-000 Guanhães",
    "telefone": "(33) 3421-1747",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Guanhães",
    "servico": "Hospital São José",
    "endereco": "Avenida 3, 196 - Centro, Ituiutaba - MG, 38300-160",
    "telefone": "(34) 3271-7200 / 8107",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Januária",
    "servico": "P.S. do Hosp. Mun. de Januária",
    "endereco": "Rua Cel. Serrão n 105, Centro 39.480-000 Januária",
    "telefone": "(38) 3621-2241",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Taiobeiras",
    "servico": "Fundação Taiobeiras- Mantenedora do Hospital Santo Antônio",
    "endereco": "R. Grão Mogol, 194 - Centro Taiobeiras 39550000 MG",
    "telefone": "(38) 3845-1311 / 1729 / 1713",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Monte azul",
    "servico": "Hospital e Maternidade Nossa Senhora das Graças - Fundação Médico Assistencial Major Domingos de Deus Correia",
    "endereco": "Rua Governador Magalhães Pinto 899, São Geraldo- 39500000",
    "telefone": "(38) 3811-1417",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Salinas",
    "servico": "Hospital Municipal Doutor Oswaldo Prediliano Santana",
    "endereco": "Avenida Antônio Carlos, 1.009 - São Geraldo 39560000 Salinas",
    "telefone": "(38) 3841-1014",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Montes Claros",
    "servico": "Hospital Universitário Clemente de Faria - Universidade Estadual de Montes Claros/Unimontes",
    "endereco": "Avenida Cula Mangabeira, 562 -     Sto. Expedito 39401002 Montes Claros",
    "telefone": "(38) 3224-8318          (38) 3224-8225          (38) 3224-8297",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Montes Claros",
    "servico": "Santa Casa Montes Claros",
    "endereco": "Praça Honorato Alves/Av. Mestra Fininha,Centro  39400-103 Montes Claros",
    "telefone": "(38) 3229-2000 / 2467",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Patos de Minas",
    "servico": "Hospital Regional Antônio Dias Fundação Hospitalar Estado de Minas Gerais",
    "endereco": "Rua Major Gote 1231, Centro 38700-001 Patos de Minas",
    "telefone": "(34) 3818-6000 / 6023",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Passos",
    "servico": "UPA de Passos",
    "endereco": "Rua Barão de Passos -1629 , Bairro Santa Luzia  CEP:37900-048",
    "telefone": "(35) 3522-4214",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "São Sebastião do Paraíso",
    "servico": "Pronto Socorro Municipal",
    "endereco": "R. Geraldo Marcolini, 1.882    -   Vila Santa Maria",
    "telefone": "(35) 3539-1063 / 1062",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Pedra Azul",
    "servico": "Hospital Éster Faria de Almeida",
    "endereco": "Av. Dr. Álvaro Neves, 369, Centro, Pedra Azul - MG, 39970-000",
    "telefone": "(33) 3751-1644",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Medina",
    "servico": "Hospital Santa Rita em Medina",
    "endereco": "R. Dr. Geraldo Magela, 180, Medina - MG, 39620-000",
    "telefone": "(33) 3753-1492 (33) 3753-1334",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Almenara",
    "servico": "Hospital Deraldo Guimarães",
    "endereco": "R. Hermano Souza, 549, Almenara",
    "telefone": "(33) 3721-1222",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Jequitinhonha+C80:J80J80C80C80:J80",
    "servico": "Hospital São Miguel",
    "endereco": "R. Frei Emíliano Soede, 300, Jequitinhonha - MG, 39960-000",
    "telefone": "(33) 3741-1151",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Itaobim",
    "servico": "Hospital Vale do Jequitinhonha",
    "endereco": "R. Minas Novas, 387 - São Jorge, Itaobim - MG, 39625-000",
    "telefone": "(33) 3734-1258",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Poços de Caldas",
    "servico": "Policlínica Central",
    "endereco": "R. Pernambuco, 495 -            Centro",
    "telefone": "(35) 3697-2274",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Itajubá",
    "servico": "Hospital Escola – AISI",
    "endereco": "R.  Miguel Viana, 420 Prédio              Bairro Morro Chic                          CEP:37500-086 Itajubá",
    "telefone": "(35) 3629-7600",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Itajubá",
    "servico": "São João Batista",
    "endereco": "Rua Passos, 1.000 - Centro, Viçosa, MG CEP: 36570-000",
    "telefone": "(31) 3891-3403",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Sete Lagoas",
    "servico": "Hospital Municipal Monsenhor Flávio D'Amato",
    "endereco": "Avenida Raquel Teixeira Viana, 416 Canaan. Sete Lagoas",
    "telefone": "(31) 3773-2600 / 1499 / 3776-5416",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Abaeté",
    "servico": "Hospital São Vicente de Paulo de Abaeté",
    "endereco": "Rua Frei Orlando, 300, Centro 35620-000 Abaeté",
    "telefone": "(37) 3541-1144",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Curvelo",
    "servico": "Hospital Imaculada Conceição",
    "endereco": "Av. Timbiras, 590 Tibira Curvelo CEP:35790-000",
    "telefone": "(38) 3721-1211",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "São João Del Rei",
    "servico": "Santa Casa de Misericórdia",
    "endereco": "Avenida Tiradentes, 389             Centro",
    "telefone": "(32) 3379-2000 / 2066",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Águas Formosas",
    "servico": "Hospital São Vicente de Paulo   (Atende tbém projeto nascer)",
    "endereco": "Rua Josino Abrantes, s/n Bairro São Vicente",
    "telefone": "(33) 3611-1242/2199",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Muriaé",
    "servico": "Casa de Caridade de Muriaé – Hospital São Paulo",
    "endereco": "Rua Coronel Izalino 187, Centro 36880000 Muriaé",
    "telefone": "(32) 3729-3700",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Uberaba",
    "servico": "Hospital de Clínicas da UFTM",
    "endereco": "Getúlio Guaritá nº 130 - Bairro Abadia – Uberaba – MG – CEP: 38025-440",
    "telefone": "(34) 3318-5000 / 5614 / 5599",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Patrocínio",
    "servico": "P.S. MUNICIPAL",
    "endereco": "Rua Otávio de Brito, s/n         -            Centro",
    "telefone": "(34) 3831-5288",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Unaí",
    "servico": "Hospital Municipal Dr. Joaquim Brochado (tbém projeto nascer)",
    "endereco": "Rua Virgílio Justiniano Ribeiro 1.585, Barroca -38.610-000",
    "telefone": "(38) 3677 - 5066",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Arinos",
    "servico": "Hospital Nossa Senhora Aparecida",
    "endereco": "Rua José Gomes Viana, s/n Arinos",
    "telefone": "(38) 3635-1090",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Paracatu",
    "servico": "Hospital Municipal de Paracatu",
    "endereco": "Av. Olegário Maciel, 714, Centro, Paracatu - MG, 38600-000",
    "telefone": "(38) 3671-1282",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Lavras",
    "servico": "Pronto Socorro Municipal de Lavras",
    "endereco": "Avenida Ernesto Matioli,885.Bairro Santa Efigênia",
    "telefone": "(35) 3821 - 0009 / 3821-5177",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "São Lourenço",
    "servico": "P.A. Microrregional",
    "endereco": "R. Hidalage Mascarenhas, 310         -           Bairro Federal",
    "telefone": "(35) 3332-8730 /33392060",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Três Corações",
    "servico": "P.S. Hosp São Sebastião",
    "endereco": "Rua Pedro Bonésio, 236      -    Centro",
    "telefone": "(35) 3239-3950",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Três Pontas",
    "servico": "Pronto Atendimento Municipal",
    "endereco": "Rua Barão da Boa Esperança, 484     -   Catumbi",
    "telefone": "(35) 3266-6265                        3266-5831",
    "hora":null
  },
  {
    "estado": "MS - Mato Grosso do Sul",
    "municipio": "Varginha",
    "servico": "Hospital Bom Pastor",
    "endereco": "R. Tancredo Neves, 500 -               Bom Pastor                          -",
    "telefone": "(35) 3690-1000",
    "hora":null
  },
  //end MS update 17/05/2016
  {
    "estado":"MT - Mato Grosso",
    "municipio":"RONDONOPOLIS",
    "servico":"SAE RONDONOPOLIS",
    "endereco":"RUA PEDRO GUIMARAES S/N ESQUINA COM A AVENIDA FREI SERVACIO - JARDIM SANTA CRUZ CEP:78710760",
    "telefone":"(66)3411-5083",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MT - Mato Grosso",
    "municipio":"RONDONOPOLIS",
    "servico":"HOSPITAL REGIONAL RONDONOPOLIS IRMA ELZA GEOVANELA",
    "endereco":"RUA 13 DE MAIO Nº 2366 BAIRRO JARDIM GUANABARA CEP: 78610080",
    "telefone":"(66)3411-3900",
    "hora":"24h"
  },
  {
    "estado":"MT - Mato Grosso",
    "municipio":"RONDONOPOLIS",
    "servico":"SANTA CASA DE MISERICORDIA E MATERNIDADE DE RONDONOPOLIS",
    "endereco":"RUA ACYR RESENDE SOUZA E SILVA N°100 BAIRRO: VILA BIRIGUI - RONDONOPOLIS- MT",
    "telefone":"(66)3410-2700",
    "hora":"24h"
  },
  {
    "estado":"MT - Mato Grosso",
    "municipio":"CUIABA",
    "servico":"SERVIÇO DE ATENDIMENTO ESPECIALIZADO",
    "endereco":"RUA PIRAIM BAIRRO GRANDE TERCEIRO",
    "telefone":"(65)3634-0497",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MT - Mato Grosso",
    "municipio":"SINOP",
    "servico":"CENTRO DE REFERENCIA E TREINAMENTO DE DST, AIDS E HEPATITES VIRAIS- CRT",
    "endereco":"AVENIDA FIGUEIRAS Nº1090- CENTRO- SINOP-MT.",
    "telefone":"(66)3531-5562",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MT - Mato Grosso",
    "municipio":"VARZEA GRANDE",
    "servico":"SAE E CTA",
    "endereco":"AVENIDA CASTELO BRANCO NUMERO 650",
    "telefone":"(65)3688-3634",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"MT - Mato Grosso",
    "municipio":"CUIABA",
    "servico":"SERVIÇO DE ASSISTENCIA ESPECIALIZADA.",
    "endereco":"RUA THOGO PEREIRA Nº63- CENTRO- CUIABA-MT.",
    "telefone":"(65)3321-6857",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"PA - Pará",
    "municipio":"BELEM",
    "servico":"UPA DAICO",
    "endereco":"RODOVIA AUGUSTO MONTENEGRO KM 11 CEP:66623590/ PARQUE GUAJARA DISTRITO DE ICOARACI BELEM/PA",
    "telefone":"(91)93247-8321",
    "hora":"24h"
  },
  {
    "estado":"PA - Pará",
    "municipio":"BELEM",
    "servico":"CENTRO DE ATENÇAO E DOENÇAS INFECTOS CONTAGIOSAS ADQUIRIDAS",
    "endereco":"AVENIDA PEDRO ALVARES CABRAL S/N BAIRRO SACRAMENTO",
    "telefone":"(91)3246-4025",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"Campina Grande",
    "servico":"ISEA - Instituto de Saúde Elpídio de Almeida",
    "endereco":"Av Vila Nova da Rainha, 147 Centro 58.690-100 Campina Grande",
    "telefone":"(83)3310-6356",
    "hora":"06:00 às 06:00h"
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"Campina Grande",
    "servico":"Hospital Universitário Alcides Carneiro",
    "endereco":"Rua Carlos Chagas, SN São José 58.100-000 Campina Grande",
    "telefone":"(83)2101-5581, 2101-5526",
    "hora":"07:00 às 18:00h"
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"Campina Grande",
    "servico":"SAE Municipal",
    "endereco":"Rua: Floriano Peixoto, 1204 Centenário 58.100-000",
    "telefone":"83-30886307",
    "hora":"07:00 às 17:00h"
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"Campina Grande",
    "servico":"Hospital Regional de Emergência e TraumaD.luis Gonzaga",
    "endereco":"Av. Floriano Peixoto, 4700 Malvinas 58.432-809",
    "telefone":"83-33105850",
    "hora":null
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"Patos",
    "servico":"Hospital Regional Dep Janduhy Carneiro",
    "endereco":"Rua Horácio Nóbrega, SN Belo Horizonte 58.700-000 Patos",
    "telefone":"(83)3421-2235 3422-2410",
    "hora":"06:00 às 06:00h"
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"Patos",
    "servico":"SAE Municipal",
    "endereco":"Rua João soares 117 Brasilia 58700-259",
    "telefone":"(83)3423-3645",
    "hora":"07:00 às 17:00h"
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"Patos",
    "servico":"Maternidade Dr. Peregrino Filho",
    "endereco":"Rua Elias Asfora S/N Jardim Guanabara 58.701-300",
    "telefone":"(83)3421-3751",
    "hora":null
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"Santa Rita",
    "servico":"SAE municipal",
    "endereco":"Rua Juarez Távora, 486 Liberdade 58.300-540 Santa Rita",
    "telefone":"83-3032-0405",
    "hora":"07:00 às 19:00h"
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"João Pessoa",
    "servico":"SAE Hospital Universitário Lauro Wanderley",
    "endereco":"Campus I s/n Cidade Universitária 58.051-900",
    "telefone":"83-3216-7059/3216-7522",
    "hora":"06:00 às 18:00h"
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"João Pessoa",
    "servico":"Complexo Hospitalar de Doenças infecto-contagiosas Clementino Fraga",
    "endereco":"Rua: Esther Borges Bastos 599 jaguaribe, João Pessoa 58.015-270",
    "telefone":"83-3218-5420",
    "hora":"24h"
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"João Pessoa",
    "servico":"Hospital de Emergência e trauma Senador Humberto Lucena",
    "endereco":"Av. Orestes Lisboa, S/N Pedro Gondim 58.031-090",
    "telefone":"83-32165715",
    "hora":"24h"
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"João Pessoa",
    "servico":"Instituto Cândida Vargas",
    "endereco":"Av. Coremas, 856 58.013-430",
    "telefone":"83-3015-1532",
    "hora":null
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"João Pessoa",
    "servico":"Maternidade Frei Damião",
    "endereco":"Av. Cruz das Armas, 1581, Cruz das armas 58.085-000",
    "telefone":"83-32156066",
    "hora":"24h"
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"Guarabira",
    "servico":"Hospital Regional de Guarabira",
    "endereco":"Av. João Pimentel Filho 447 centro 58.200-000",
    "telefone":"83-32716080",
    "hora":null
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"Catolé do Rocha",
    "servico":"Hospital Municipal Dr Americo Maia Vasconcelos",
    "endereco":"Rua Castelo B ranço 349 Batalhão 58884-000",
    "telefone":"83-3441-2280",
    "hora":null
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"Monteiro",
    "servico":"Hospital Santa Filomena",
    "endereco":"Rua Epaminondas de Azevedo s/n Centro 58800-000",
    "telefone":"83-3351-2145",
    "hora":null
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"Sousa",
    "servico":"Hospital distrital Manoel Gonçalves Abrantes",
    "endereco":"Rua Jose Facundo de Lira 433 Gato Preto 58802-180",
    "telefone":"83-3522-2774",
    "hora":"07 as 07:00h"
  },
  {
    "estado":"PB - Paraíba",
    "municipio":"Cajazeiras",
    "servico":"Hospital Regional de Cajazeiras",
    "endereco":"Rua: Tabeliao Antonio Holanda S/N 58300-000",
    "telefone":"83-35313563",
    "hora":null
  },
  {
    "estado":"PE - Pernambuco",
    "municipio":"CAMARAGIBE",
    "servico":"SAE CAMARAGIBE",
    "endereco":"AVENIDA ERSINA LAPENDA N °349 BAIRRO DO TIMBI - CEP: 54768120",
    "telefone":"(81)81997-2305",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"PE - Pernambuco",
    "municipio":"JABOATAO DOS GUARARAPES",
    "servico":"CTA SAE JABOATAO DOS GUARARAPES",
    "endereco":"RUA ARAO LINS DE ANDRADE Nº 528 SALA 234567 BAIRRO: PRAZERES CEP: 54.320-640",
    "telefone":"(81)3375-1474",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"PE - Pernambuco",
    "municipio":"PAULISTA",
    "servico":"SERVIÇO DE ATENDIMENTO ESPECIALIZADO",
    "endereco":"AVENIDA RODOLFO AURELIANO N°714- VILA TORRES GALVAO - PAULISTA/PE",
    "telefone":"(81)3433-1572",
    "hora":"08:00 às 12:00h"
  },
  {
    "estado":"PE - Pernambuco",
    "municipio":"RECIFE",
    "servico":"Serviço de Apoio a Mulher Wilma Lessa - Hospital Agamenon Magalhães - HAM",
    "endereco":"Estrada do Arraial, 2723 Bairro de Casa Amarela",
    "telefone":"3184-1740",
    "hora":"24h"
  },
  {
    "estado":"PE - Pernambuco",
    "municipio":"RECIFE",
    "servico":"Instituto de Medicina Integral Professor Fernando Figueira - IMIP",
    "endereco":"Rua dos Coelhos 300 Bairro dos Coelhos",
    "telefone":"2122-4145",
    "hora":"24h"
  },
  {
    "estado":"PE - Pernambuco",
    "municipio":"RECIFE",
    "servico":"Centro Integrado de Saúde Amaury de Medeiros - CISAM",
    "endereco":"Rua Visconde de Mamanguape SN Bairro da Encruzilhada",
    "telefone":"3182-7757",
    "hora":"24h"
  },
  {
    "estado":"PE - Pernambuco",
    "municipio":"RECIFE",
    "servico":"Hospital Correia Picanço - HCP",
    "endereco":"Rua Padre Roma 149 Bairro da Tamarineira",
    "telefone":"3184-3932",
    "hora":"24h"
  },
  {
    "estado":"PE - Pernambuco",
    "municipio":"RECIFE",
    "servico":"Unidade Mista e Maternidade Prof. Barros Lima",
    "endereco":"Avenida Norte Miguel Arraes de Alencar, 6465 - Casa Amarela - Recife - PE CEP: 52081-000",
    "telefone":"33552153",
    "hora":"24h"
  },
  {
    "estado":"PI - Piauí",
    "municipio":"TEREZINA",
    "servico":"Instituto de Doenças Tropicais Natan Portela - IDTNP/SAE",
    "endereco":"Rua Gov. Raimundo Artur de Vasconcelos, 151/Centro 64.001-450",
    "telefone":"86-3221-3413",
    "hora":"7:30 às 13:30h"
  },
  {
    "estado":"PI - Piauí",
    "municipio":"TEREZINA",
    "servico":"Maternidade D. Evangelina Evangelina Rosa",
    "endereco":"Av. Higino Cunha, 1552-Ilhotas 64.014-220",
    "telefone":"86-3228-1053",
    "hora":"24h"
  },
  {
    "estado":"PI - Piauí",
    "municipio":"TEREZINA",
    "servico":"FMS – Centro de Integrado de Saúde Lineu Araújo-CISLA/SAE",
    "endereco":"Rua Magalhães Filho, 152/Centro 64.001-350",
    "telefone":"86-3215-9131",
    "hora":"7:30 às 13:30h"
  },
  {
    "estado":"PI - Piauí",
    "municipio":"PARNAIBA",
    "servico":"SMS - CTA/COAS",
    "endereco":"Rua Passajarina, 247 - Bairro Pindorama 64.215-530",
    "telefone":"86-3323-2008",
    "hora":"7:30 às 13:30h"
  },
  {
    "estado":"PI - Piauí",
    "municipio":"PIRIPIRI",
    "servico":"SMS/SAE",
    "endereco":"Rua Santos Dumont, 1148/Centro",
    "telefone":"86-9964-0550",
    "hora":"7:30 às 13:30h"
  },
  {
    "estado":"PI - Piauí",
    "municipio":"FLORIANO",
    "servico":"SMS/SAE",
    "endereco":"Rua Fernando Marques, 459",
    "telefone":"89-3515-1128",
    "hora":"7:30 às 13:30h"
  },
  {
    "estado":"PI - Piauí",
    "municipio":"PICOS",
    "servico":"SMS/SAE",
    "endereco":"Rua Cel. Francisco Santos, 82 - Centro",
    "telefone":"89-3422-5409",
    "hora":"7:30 às 13:30h"
  },
  {
    "estado":"PR - Paraná",
    "municipio":"LONDRINA",
    "servico":"CCIAH - HOSPITAL DR. ANISIO FIGUEREDO",
    "endereco":"RUA ODILON BRAGA 199",
    "telefone":"(11)3376-4636",
    "hora":"24h"
  },
  {
    "estado":"PR - Paraná",
    "municipio":"CAMPO MOURAO",
    "servico":"SERVIÇO DE ATENDIMENTO ESPECIALIZADO CAMPO MOURAO",
    "endereco":"AVENIDA GUILHERME DE PAULA CHAVIER 1844",
    "telefone":"(44)3529-3347",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"PR - Paraná",
    "municipio":"CAMBE",
    "servico":"SAE- CTA DE CAMBE",
    "endereco":"RUA CARAJAS S/N - CEP:86181000",
    "telefone":"(43)3174-0552",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"PR - Paraná",
    "municipio":"CIANORTE",
    "servico":"CONSORCIO PUBLICO INTERMUNICIPAL DO ESTADO DO PARANA",
    "endereco":"RUA PIRATININGA 668 ZONA 01 CEP 87200256 CIANORTE - PR",
    "telefone":"(44)3018-4200",
    "hora":"24h"
  },
  {
    "estado":"PR - Paraná",
    "municipio":"CASCAVEL",
    "servico":"CEDIP- CENTRO ESPECIALIZADO DE DOENÇAS INFECTOPARASITARIAS",
    "endereco":"AVENIDA TANCREDO NEVES N°2433 CEP:85805000",
    "telefone":"(43)3902-2681",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"PR - Paraná",
    "municipio":"GUARAPUAVA",
    "servico":"SAE CPA CENTRO DE PESTAGEM ANONIMO",
    "endereco":"RUA GETULIO VARGAS 1891,BAIRRO CENTRO ,CEP 85010280",
    "telefone":"(42)3621-4524",
    "hora":"24h"
  },
  {
    "estado":"PR - Paraná",
    "municipio":"CURITIBA",
    "servico":"COA ( Centro de Orientação e Aconselhamento)",
    "endereco":"RUA DO ROSÁRIO 144 6º andar CENTRO",
    "telefone":"33212781",
    "hora":"08:00 às 17:00h"
  },
  {
    "estado":"PR - Paraná",
    "municipio":"CURITIBA",
    "servico":"UPA MATRIZ",
    "endereco":"RUA GENERAL CARNEIRO 181 CENTRO",
    "telefone":"32641834",
    "hora":"24h"
  },
  {
    "estado":"PR - Paraná",
    "municipio":"CURITIBA",
    "servico":"HOSPITAL OSWALDO CRUZ",
    "endereco":"RUA UBALDINO DO AMARAL 545 ALTO DA GLORIA",
    "telefone":"32811000",
    "hora":"24h"
  },
  {
    "estado":"PR - Paraná",
    "municipio":"CURITIBA",
    "servico":"Hospital Infantil Pequeno Príncipe (exclusivo vlioência sexual para menores de 12 anos masculino e feminino )",
    "endereco":"DESEMBARGADOR MOTTA 1070, ÁGUA VERDE",
    "telefone":"33101010",
    "hora":"24h"
  },
  {
    "estado":"PR - Paraná",
    "municipio":"CURITIBA",
    "servico":"Maternidade do Hospital de Clinicas (exclusivo vlioência sexuamaiores de 12 anos )",
    "endereco":"RUA GENERAL CARNEIRO 181, CENTRO",
    "telefone":"33601826",
    "hora":"24h"
  },
  {
    "estado":"PR - Paraná",
    "municipio":"CURITIBA",
    "servico":"HOSPITAL Universitário Evangélico de Curitiba (exclusivo vlioência sexua maiores de 12 anos feminino )",
    "endereco":"ALAMEDA AUGUSTO STELLFELD 1908, BIGORRILHO",
    "telefone":"32405000",
    "hora":"24h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"RIO DAS OSTRAS",
    "servico":"PROGRAMADA MUNICIPAL,DST, HIV,HEPATITE VIRAIS RIO DAS OSTRAS.",
    "endereco":"AVENIDA CAMPO MAR CIDADE BEIRA MAR",
    "telefone":"(22)2760-2736",
    "hora":"2ªa 6ª, das 08:00 às 21:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"SAO GONCALO",
    "servico":"PROGRAMA MUNICIPAL DE DST AINDS E HEPATITES VIRAIS DE SAO GONÇALO",
    "endereco":"RUA EUGENIO RIBEIRO NEVES - SAO GONÇALO",
    "telefone":"(21)99188-8386",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"SAO GONCALO",
    "servico":"Clinica Municipal Gonçalense do Barro Vermelho",
    "endereco":"Rua Heitor Levi, 34 - Barro Vermelho _ São Gonçalo - RJ",
    "telefone":"(21) 2624-5756",
    "hora":""
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"SAO JOAO DE MERITI",
    "servico":"PROGRAMA MUNICIPAL DST E AIDS DE JOAO DE MERITI",
    "endereco":"RUA: PASTOR JOAQUIM ROSA BAIRRO VILA ADULTERINO Nº SEM CEP:25555681",
    "telefone":"(21)3755-5525",
    "hora":"08:00 às 17:00h"
  },
    {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"SAO JOAO DE MERITI",
    "servico":"Acidente e Exposição sexual sem violência: Posto de Assistência ",
    "endereco":"Médica Dr. Abdon Golçalves (PAM Meriti):  Av. Presidente Lincoln, s/nº, Jardim Meriti",
    "telefone":"(21)",
    "hora":"24h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Macaé",
    "servico":"PROGRAMA MUNICIPAL DST/AIDS-MACAE",
    "endereco":"RUA VELHO CAMPOS N° 354 BAIRRO CENTRO MINICIPIO MACAE RJ CEP: 27910-210",
    "telefone":" (22) 2791234,2796-1704",
    "hora":"08:00 às 18:00h"
  },
    {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Macaé",
    "servico":"Hospital Público de Macaé – HPM",
    "endereco":"Rodovia RJ 168, Km 4 – Virgem Santa - Macaé – CEP: 27910-000",
    "telefone":"(22) 2773-0061",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"BARRA MANSA",
    "servico":"PROGRAMA DE DST, AIDS E HEPATITES VIRAIS",
    "endereco":"Hospital da Mulher: R. Ten José Eduardo, 200  Ano Bom - Barra Mansa. RUA PITRO RIBEIRO, NUMERO 65, CENTRO",
    "telefone":"(24)3322-9192 ramal 210  (24) 3324-5991 (24) 3325-8300",
    "hora":"2ª a 6ª feira 08:00 às 17:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"QUEIMADOS",
    "servico":"PROGRAMA DST, AIDS E HEPATITES VIRAIS DO MUNICIPIO DE QUEIMADOS.",
    "endereco":"UPA - R. Mário Ferreira dos Reis, 218. Nossa Senhora da Gloria, Queimados, RJ.Programa DST, AIDS e Hepatites Virais do Município de Queimados. Rua onze s/n° Vila Pacaembu, Queimados.",
    "telefone":"(21) 2665-1963",
    "hora":"2ªa 6ª, das 08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Rinaldo de Lamare",
    "endereco":"Av. Niemeyer 776 15º andar S. Conrado CEP 22450-221",
    "telefone":"98464-0395",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Maria do Socorro Souza e Silva / UPA Rocinha",
    "endereco":"Estrada da Gávea 522 Curva do S Rocinha CEP 22451-254",
    "telefone":"3322-6694",
    "hora":"24h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Albert Sabin",
    "endereco":"Estrada da Gávea 250 Rocinha CEP 22451-254",
    "telefone":"3323-4680",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Rodolpho Perissé",
    "endereco":"Av. Presidente João Goulart 735 Vidigal CEP 22450-250",
    "telefone":"3874-4002",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Hospital Municipal Rocha Maia",
    "endereco":"Rua General Severiano 91 Botafogo CEP 2295-2295",
    "telefone":"2295-2295",
    "hora":"24h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS MARIA AUGUSTA ESTRELLA",
    "endereco":"RUA VISCONDE DE ST. IZABEL, 56 - VILA ISABEL CEP 20560-110",
    "telefone":"(21) 3111-6100",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS HEITOR BELTRÃO",
    "endereco":"RUA DESEMBARGADOR ISIDRO, 144 - TIJUCA CEP 20521-160",
    "telefone":"(21) 2268-6642",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS IGG MIGUEL PEDRO",
    "endereco":"RUA VINTE E OITO DE SETEMBRO 109 - VILA ISABEL CEP 20551-030",
    "telefone":null,
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF RECANTO DO TROVADOR",
    "endereco":"RUA VISCONDE DE ST. IZABEL, 272 - VILA ISABEL CEP 20560-120",
    "telefone":"(21) 2577-7097",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS CARLOS FIGUEIREDO FILHO",
    "endereco":"RUA SÃO MIGUEL, S/N PATIO CIEP MAGARINO TORRES - TIJUCA CEP 20530-991",
    "telefone":"(21) 2575-5056",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS HÉLIO PELLEGRINO",
    "endereco":"RUA MATOSO, 96 - PRAÇA DA BANDEIRA CEP 20270-132",
    "telefone":"(21) 2502-9545",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS PROFESSOR JULIO BARBOSA",
    "endereco":"RUA CASTELO NOVO, 150 FUNDOS - TIJUCA MORRO DA FORMIGA CEP 20530-680",
    "telefone":"(21) 2278-9002",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"HOSPITAL MUNICIPAL DE GERIATRIA E GERONTOLOGIA MIGUEL PEDRO",
    "endereco":"RUA VISCONDE DE NITEROI, 1450 - MANGUEIRA CEP 20943-001",
    "telefone":"(21)3111-6800",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"POLICLINICA HÉLIO PELLEGRINO",
    "endereco":"RUA MATOSO, 96 - PRAÇA DA BANDEIRA CEP 20270-132",
    "telefone":"(21) 2273-1194",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS CASA BRANCA",
    "endereco":"ESTRADA DA CASA BRANCA, 200 - TIJUCA CEP 20531-490",
    "telefone":"(21) 2298-3365",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS NICOLA ALBANO",
    "endereco":"RUA BOA VISTA, 190 - ALTO DA BOA VISTA CEP 20531-610",
    "telefone":"(21) 2484-8312",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CMS Dr. Eduardo Araújo Vilhena Leite",
    "endereco":"Rua José dos Reis, 951 Pilares 20.770-061",
    "telefone":"(21) 3111-6693",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CMS Milton Fontes Magarão",
    "endereco":"Avenida Amaro Cavalcanti, 1.387 Engenho de Dentro 20.735-041",
    "telefone":"(21) 3111-6707",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO Policlinica Rodolpho Rocco",
    "endereco":"Estrada Adhemar Bebiano, 339 Del Castilho 21.051-070",
    "telefone":"(21) 3884-6418",
    "hora":"24h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CMS Ariadne Lopes de Menezes",
    "endereco":"Rua Engenheiro Carlos Gonçalves Penna, SN Engenho da Rainha 20.761-330",
    "telefone":"(21) 3111-6755",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CMS Dr. Renato Rocco",
    "endereco":"Rua Aires de Casal, SN Jacaré 20.785-090",
    "telefone":"(21) 3297-2521",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CMS Dr. Carlos Gentille de Mello",
    "endereco":"Rua Bicuiba, 181 Lins de Vasconcelos 20.715-350",
    "telefone":"(21) 2261-5822",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CMS César Pernetta",
    "endereco":"Rua Ana Barbosa, 21 Méier 20.735-120",
    "telefone":"(21) 3111-6716",
    "hora":"24h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CMS Tia Alice",
    "endereco":"Rua Santos Mello, 72 São Francisco Xavier 20.960-030",
    "telefone":"(21) 2218-2795",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CMS Professor Antenor Nascentes",
    "endereco":"Rua Professor Antenor Nascentes, 125 Lins de Vasconcelos 21.710-150",
    "telefone":"(21) 3277-6368",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CF Herbert José de Souza",
    "endereco":"Avenida Pastor Martin Luther King Junior, 4.776 Thomas Coelho 21.220-300",
    "telefone":"(21) 3352-4528",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CF Izabel dos Santos",
    "endereco":"Rua Dois de Maio, 220 Sampaio 20.961-160",
    "telefone":"(21) 3297-3998",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CF Anna Nery",
    "endereco":"Rua Ana Neri com Rua General Belford, SN Rocha 20.960-0821",
    "telefone":"(21) 3283-3225",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CF Emygdio Alves Costa Filho",
    "endereco":"Rua do Lazer, 153 Pilares 20.760-230",
    "telefone":"(21) 3111-6724",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CF Cabo Edney Canazaro de Oliveira",
    "endereco":"Avenida Marechal Rondon com Rua Antunes Garcia, SN Sampaio 20.950-060",
    "telefone":"(21) 3297-0831",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CF Anthidio Dias da Silveira",
    "endereco":"Avenida Dom Hélder Câmara, SN Jacarezinho 20.973-011",
    "telefone":"(21) 2241-0675",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CF Bárbara Starfield",
    "endereco":"Rua Volta Grande, SN Del Castilho 21.051-100",
    "telefone":"(21) 2228-6078",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CF Bibi Vogel",
    "endereco":"Estrada Adhemar Bebiano, 3.686 Engenho da Rainha 20.766-721",
    "telefone":"(21) 2229-2664",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CF Sérgio Nicolau Amin",
    "endereco":"Praça da Confederação Suíça, SN Del Castilho 20.760-020",
    "telefone":"(21) 3277-4010",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CMS Rodolpho Rocco",
    "endereco":"Rua Lagoa Verde, SN Del Castilho 21.051-360",
    "telefone":"(21) 3868-4243",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS RIO CF Carioca",
    "endereco":"Rua Bérgamo, 320 Rocha 20.960-045",
    "telefone":"(21) 2501-6577",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS Hospital Municipal Salgado Filho",
    "endereco":"Rua Arquias Cordeiro, 370 Méier 20.770-000",
    "telefone":"(21) 3111-4100",
    "hora":"24h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS Hospital Maternidade Carmela Dutra",
    "endereco":"Rua Aquidabã, 1037 Lins de Vasconcelos 20.720-295",
    "telefone":"(21) 2594-0288",
    "hora":"24h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SES RJ UPA 24H Engenho Novo",
    "endereco":"Rua Souza Barros, 70 Engenho Novo 20.961-150",
    "telefone":"(21) 2332-2347",
    "hora":"24h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS UPA 24H Engenho de Dentro",
    "endereco":"Rua Bernardo, s/n Engenho de Dentro 20.745-270",
    "telefone":"(21) 2592-0502",
    "hora":"24h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Santa Maria",
    "endereco":"Estrada do Rio Pequeno s/ nº Taquara 22723195",
    "telefone":"33472047",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Mata Atlantica",
    "endereco":"AVENIDA SAMPAIO CORREA s/nº Jacarepaguá 22713375",
    "telefone":"24489066",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Newton Bethlem",
    "endereco":"Rua Barão 260 Praça Seca 21321620",
    "telefone":"38337052",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Jorge Saldanha",
    "endereco":"AVENIDA GEREMARIO DANTAS 135 Tanque 22735000",
    "telefone":"3392-0050",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Hamilton Land",
    "endereco":"AV EDGARD WERNECK 1601 Cidade de Deus 22763011",
    "telefone":"34123199",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Otto Alves de Carvalho",
    "endereco":"AVENIDA ENGENHEIRO SOUZA FILHO Rio das Pedras 22723730",
    "telefone":"34155020",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Padre Jose de Azevedo Tiuba",
    "endereco":"RUA ACAPORI Gardenia Azul 24262061",
    "telefone":"24262061",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Canal do Anil",
    "endereco":"Rua Melo 2 Anil 22765430",
    "telefone":"34329717",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Novo Palmares",
    "endereco":"RUA JACARANDA Vargem Pequena 22783117",
    "telefone":"24426735",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Maury Alves de Pinho",
    "endereco":"ESTRADA DOS BANDEIRANTES 11227, complemento rua F Vargem Pequena 22783116",
    "telefone":"34108572",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Itanhangá",
    "endereco":"ESTRADA DO ITANHANGA 270 Itanhangá 22753005",
    "telefone":"31394904",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Harvey Ribeiro Souza Filho",
    "endereco":"AVENIDA GUIOMAR NOVAES 133 Racreio 22790590",
    "telefone":"34182547",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Cecilia Donnangelo",
    "endereco":"ESTRADA DOS BANDEIRANTES 2136 Vargem Grande 22783551",
    "telefone":"33250300",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"UPA Jacarepaguá",
    "endereco":"RUA ANDRE ROCHA 20 Taquara 22730-522",
    "telefone":"2333-6536",
    "hora":"24h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Curicica",
    "endereco":"ESTRADA DO CURICICA 2000 CURICICA 22780194",
    "telefone":"24080058",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS SIR ALEXANDER FLEMING",
    "endereco":"Av Ribeiro Dantas, 571 Bangu 21870-170",
    "telefone":"33350594",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"POLICLINICA MANOEL G DA SILVEIRA FILHO",
    "endereco":"Praça Cecília Pedro, 60 Bangu 21840-440",
    "telefone":"3332-4970",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS WALDYR FRANCO",
    "endereco":"Estrada do quafá,rua I Vila Kenedy 21853-050",
    "telefone":"3332-9322",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS HENRIQUE MONAT",
    "endereco":"Rua Santo Evaldo, s/n Padre Miguel 21875-220",
    "telefone":"3468-3421",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS PADRE MIGUEL",
    "endereco":"Rua Roque Barbosa, s/n Jardim Bangu 21863-425",
    "telefone":"3335-0535",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS ATHAYDE JOSE DA FONSECA",
    "endereco":"Rua Hilda Carla 14 Santíssimo 23010-765",
    "telefone":"3336-1964",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS SILVIO BARBOZA",
    "endereco":"Av. Carlos Pontes, S/N Sulacap 21741-340",
    "telefone":"34658640",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS MASAO GOTO",
    "endereco":"Rua C com Rua M Conjunto Taquaral Senador Camará 21842-550",
    "telefone":"3111-6201",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS EITHEL PINHEIRO DE OLIVEIR",
    "endereco":"Estrada do engenho, s/nº Realengo 21840-000",
    "telefone":"3338-5870",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF ANTONIO GONCALVES DA SILVA",
    "endereco":"rua Laranjeiras do Sul S/Nº Magalhães Bastos 21745-350",
    "telefone":"3467-9893",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS BUA BOANERGES BORGES DA FONSECA",
    "endereco":"Rua Araquém, 789 Bangu 21860-005",
    "telefone":"34625134",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF ROSINO BACCARINI",
    "endereco":"Av. Santa Cruz, s/n Realengo 21765020",
    "telefone":"24015924",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF ARMANDO PALHARES AGUINAGA",
    "endereco":"Rua Três Marias, s/n Catiri 21860340",
    "telefone":"2401-7787",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS CATIRI",
    "endereco":"Estrada do Taquaral 100 Vila Aliança 21842-550",
    "telefone":"24033686",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF MARIA JOSÉ",
    "endereco":"Rua Açafrão, s/nº Bangu 21870-330",
    "telefone":"3462-7686",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF FIORELLO RAYMUNDO",
    "endereco":"Rua Olimpia Esteves s/n Padre Miguel 21775-003",
    "telefone":"3468-8516",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF OLIMPIA ESTEVES",
    "endereco":"Av. Carlos Sampaio, s/nº Senador Camará 21831-300",
    "telefone":"3309-3487/2401-0207",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF KELLY CRISTINA DE SA LACERDA SILVA",
    "endereco":"Estrada Manoel Nogueira de Sá, s/nº Realengo 21745-290",
    "telefone":"34630644",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF PADRE JOHN CRIBBIN",
    "endereco":"Rua Mucuripe, s/nº Bangu 21832-150",
    "telefone":"35554877",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF MARIO DIAS ALENCAR",
    "endereco":"Estrada General Americano Freire s/n Realengo 21720-140",
    "telefone":"3424-8997",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF NILDO AGUIAR",
    "endereco":"Rua Marechal Agrícola, s/nº Realengo 21735-370",
    "telefone":"3464-9344",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF FAIM PEDRO",
    "endereco":null,
    "telefone":"3462-8646",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Deolindo Couto",
    "endereco":"Rua Santo Augúrio, 40 - Pedrinhas - Santa Cruz -- CEP:23.510-220",
    "telefone":"3427-7433 / 3158-9665",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Edson Abdalla Saad",
    "endereco":"Rua 1 com Av. Canal 3, S/n - Santa Cruz -- CEP: 23.575-070",
    "telefone":"3365-5365",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Ernani de Paiva Ferreira Braga",
    "endereco":"Avenida joão XXIII, s/n - Santa Cruz -- CEP: 23560-000",
    "telefone":"2416-5773",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Helande de Mello Gonçalves",
    "endereco":"Estrada de Paciência, s/nº - Pç Malendo Malea - Paciência -- CEP: 23585-045",
    "telefone":"3395-3020",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Ilzo Motta de Mello",
    "endereco":"Avenida Cesário de Melo, 11485 - Paciência --CEP: 23.585-125",
    "telefone":"3395-6771",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Jamil Haddad",
    "endereco":"Rua Soldado João Rotelo, s/n - Paciência -- CEP: 23.066-090",
    "telefone":"3354-1447",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF José Antônio Ciraudo",
    "endereco":"Avenida Areia Branca, 1428 - Santa Cruz -- CEP: 23550-740",
    "telefone":"2394-2766",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Lenice Maria Monteiro Coelho",
    "endereco":"Rua José Carlos Matta Machado, s/n - Pç Miguel Pereira dos Santos - Santa Cruz -- CEP: 23575-410",
    "telefone":"3484-0882",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Lourenço de Mello",
    "endereco":"Rua Coronel Tito Porto Carrero - Paciência -- CEP: 23580-010",
    "telefone":"3427-7068 / 3427-5844",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Samuel Penha Valle",
    "endereco":"Avenida Cesário de Melo, 12574 - Vila Paciência -- CEP: 23590-040",
    "telefone":"3313-0945",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Sérgio Arouca",
    "endereco":"Rua Império, s/n - Santa Cruz -- CEP: 23555-024",
    "telefone":"3365-1524 / 3395-2249",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Valéria Gomes Esteves",
    "endereco":"Rua Vitória Régia, Qd 04 - Sepetiba -- CEP: 23540-000",
    "telefone":"3158-1733",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF Waldemar Berardinelli",
    "endereco":"Rua Frederico Trotta, s/n -- CEP: 23535-790",
    "telefone":"3158-1024",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Adelino simôes - Nova Sepetiba",
    "endereco":"Avenida Sete, s/n - Santa Cruz -- CEP: 23092-660",
    "telefone":"3292-6680",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Aloysio Amancio da Silva",
    "endereco":"Estrada do Cortume, S/n - Jesuitas - Santa cruz -- CEP: 23.575-270",
    "telefone":"3395-4190 / 3305-4894",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Cattapreta",
    "endereco":"Praça josé Bonerges César (Rua 3) - Conjunto São fernando - Santa Cruz",
    "telefone":"3395-3297 / 3158-1734",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Cesário de Melo",
    "endereco":"Rua Dois, s/n.º - conjunto cesarão - Santa Cruz -- CEP: 23.595-020",
    "telefone":"3305-2049 / 3395-1633",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Cyro de Mello",
    "endereco":"Rua do canal, S/n - Conjunto Manguariba - Paciência -- CEP: 23065-470",
    "telefone":"2418-8065",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Décio Amaral Filho",
    "endereco":"Rua Cilon Cunha Brum, s/n - urucania - Paciência -- CEP: 23573-400",
    "telefone":"3158-1556 / 3158-1434",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Emydio Cabral",
    "endereco":"Rua Ieda Santos Delgado, 03 - Paciência CEP: 23587-320",
    "telefone":"3314-5159",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Floripes Galdino Pereira",
    "endereco":"Rua Sargento Geraldo Berti, Lt 03, Qd 29 - Jardim Palmares - Santa Cruz -- CEP: 23.066-050",
    "telefone":"3354-1080 / 3427-7056",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS João Batista Chagas",
    "endereco":"Estrada Santa Eugênia, 1119 - Jardim 7 de abril - Paciência -- CEP: 23585-430",
    "telefone":"2418-8099",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Maria Aparecida de Almeida",
    "endereco":"Praça Antonio Mattos Areias, s/n - Cesarinho - Paciência",
    "telefone":"3155-7671 / 3364-0472",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS Sávio Antunes",
    "endereco":"Avenida Hermínia Aurelio Sampaio - Santa Cruz",
    "telefone":"3317-3185",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Policlínica Lincoln de Freitas Filho",
    "endereco":"Rua Alvaro Alberto, 601 - Santa Cruz",
    "telefone":"339-52466 / 339-54129 / 3395-50605",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CAPS Simão Bacamarte",
    "endereco":"Rua Senador Camará, 224 - Santa Cruz - CEP: 23570-160",
    "telefone":"339-50898 / 336-58775",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CAPSad Julio Cezar de Carvalho",
    "endereco":"Rua Severiano das Chagas, 196 – Santa Cruz - CEP: 23510-045",
    "telefone":"3156-9277",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Hospital Municipal Pedro II",
    "endereco":"Rua do Prado, 325 - Santa Cruz",
    "telefone":"3395-0289 / 3365-0300 / 3365-5201",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"UPA Municipal 24H Sepetiba",
    "endereco":"Rua Rafael Pereira, S/Nº - CEP: 23535-808",
    "telefone":"3404-7250 / 3404-8693 / 7884-0232",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"UPA Municipal 24H João XXIII",
    "endereco":"Av. João XXIII , S/Nº - CEP: 23570-000",
    "telefone":"2416-5719 / 3157-5411 / 7880-2764",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"UPA Municipal 24H Paciência",
    "endereco":"Estrada Santa Eugênia, S/Nº CEP: 23585-430",
    "telefone":"3426-4410 / 3406-7697 / 7884-9709",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS CMS OSWALDO CRUZ AP 10",
    "endereco":"AV HENRIQUE VALADARES 151 CENTRO CEP 20230010",
    "telefone":"(21) 22248054",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS CSE LAPA AP 10",
    "endereco":"RUA DO RIACHUELO 43 CENTRO CEP 20230010",
    "telefone":"(21)32316026",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS CSE SAO FRANCISCO DE ASSIS AP 10",
    "endereco":"RUA AFONSO CAVALCANTI 20 CIDADE NOVA CEP 20230030",
    "telefone":"(21)3184-4449",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS CMS MARCOLINO CANDAU AP 10",
    "endereco":"RUA LAURA DE ARAUJO 36 CIDADE NOVA CEP 20211170",
    "telefone":"(21)2273-2244",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS CF NELIO DE OLIVEIRA AP 10",
    "endereco":"RUA RIVADAVIA CORREA 188 GAMBOA CEP:20220290",
    "telefone":null,
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS CMS JOSE MESSIAS DO CARMO AP 10",
    "endereco":"RUA WALDEMAR DUTRA 55 SANTO CRISTO CEP 20220780",
    "telefone":"(21)22331690",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS POLICLINICA ANTONIO RIBEIRO NETTO AP 1 0",
    "endereco":"AV TREZE DE MAIO 23 SALA 901 CENTRO CEP 20031000",
    "telefone":"(21)22206286",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS CMS ERNESTO ZEFERINO TIBAU JR AP 10",
    "endereco":"AVENIDA DO EXERCITO 1 SÃO CRISTOVAM CEP 20910025",
    "telefone":"(21)38958658",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS CMS FERN A BRAGA LOPES CAJU AP 10",
    "endereco":"RUA CARLOS SEIDL 785 CAJU CEP 20931004",
    "telefone":"(21)25894183",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS CF SERGIO VIEIRA DE MELLO AP 10",
    "endereco":"AVENIDA TRINTA E UM DE MARCO TERRENO DA CHAMINE CATUMBI CEP 20251000",
    "telefone":"(21)25024366",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS CMS SALLES NETTO AP 10",
    "endereco":"PRACA CONDESSA PAULO DE FRONTIN 52 RIO COMPRIDO CEP 20261190",
    "telefone":"(21)22731162",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS CMS TURANO AP 10",
    "endereco":"RUA AURELIANO PORTUGAL 289 RIO COMPRIDO CEP 20261160",
    "telefone":"(21)3449-0778",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS CMS ERNANI AGRICOLA AP 10",
    "endereco":"RUA CONSTANT JARDIM 08 SANTA TERESA CEP 20241160",
    "telefone":"(21)22247194",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"SMS CMS MANOEL ARTHUR VILLABOIM AP 10",
    "endereco":"PRACA BOM JESUS 40 ILHA DE PAQUETA CEP 20397140",
    "telefone":"(21)33970123",
    "hora":null
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Centro de Saúde Escola Germano Sinval Faria",
    "endereco":"Rua Leopoldo Bulhões, 1480 Manguinhos CEP: 21041210",
    "telefone":"(21)2598-2796",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Centro Municipal de Saúde Américo Veloso",
    "endereco":"Rua Gerson Ferreira, 100 Ramos CEP: 21030-151",
    "telefone":"(21)3868-8087",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Policlínica José Paranhos Fontenelle",
    "endereco":"Rua Leopoldina, 700 Penha CEP: 21021-522",
    "telefone":"(21)31116925",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Clínica da Família Aloysio Augusto Novis",
    "endereco":"Avenida Braz de Pina, 651 Penha Circular 21070031",
    "telefone":"(21)2270-5732",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Clínica da Família Assis Valente",
    "endereco":"Avenida das Canárias, s/nº Galeão CEP 21931582",
    "telefone":"(21)2465-3496",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Clínica da Família Augusto Boal",
    "endereco":"Rua Guilherme Maxwell, 107 MARÉ CEP: 21040211",
    "telefone":"(21)31058982",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Clínica da Família Felippe Cardoso",
    "endereco":"Avenida Nossa Senhora da Penha, 42 PENHA CEP: 21070-390",
    "telefone":"(21)3977-7661",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Clínica da Família Heitor dos Prazeres",
    "endereco":"Rua Iguaperiba, s/nº Brás de Pina CEP: 21012-020",
    "telefone":"(21)3109-0192",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Clínica da Família Joãozinho Trinta",
    "endereco":"Rua Anamá, s/nº Vigário Geral CEP: 21214-020",
    "telefone":"(21)34485440",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Clínica da Família Palmeiras",
    "endereco":"Rua Augusto Borborema, s/nº Estação do Teleférico Palmeiras Complexo do Alemão CEP: 20766195",
    "telefone":"(21)99398-8383",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Centro Municipal de Saúde Alemão",
    "endereco":"Avenida Itararé, s/nº Complexo do Alemão CEP: 21061-240",
    "telefone":"(21)2260-2972",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Centro Municipal de Saúde Gustavo Capanema",
    "endereco":"Rua via 1 s/n. Maré CEP: 21042-020",
    "telefone":"(21)3885-6541",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Centro Municipal de Saúde Hélio Smith",
    "endereco":"Rua Tancredo Neves s/n Maré CEP: 21044-725",
    "telefone":"(21)3882-3664",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Centro Municipal de Saúde Iraci Lopes",
    "endereco":"Rua Antonio Mendes n.02 Vigário Geral CEP: 21010-690",
    "telefone":"(21)3451-9504",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Centro Municipal de Saúde Maria Cristina Roma Paugartten",
    "endereco":"Rua Joaquim Gomes s/n. RAMOC CEP: 21038-060",
    "telefone":"(21)3867-0569",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Centro Municipal de Saúde João Candido",
    "endereco":"Av. Lobo Junior n.83 –Marcílio Dias Penha Circular CEP: 21011-065",
    "telefone":"(21)2584-2083",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Centro de Saúde José breves dos Santos",
    "endereco":"Rua Mar Grande n.10 Cordovil CEP: 21010-290",
    "telefone":"(21)2485-6231",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Centro Municipal de Saúde Nagib Jorge Farah",
    "endereco":"Praça Soldado Michel Cheib s/nº Jardim América CEP: 21240-780",
    "telefone":"(21)3357-7006",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Centro Municipal de Saúde Necker Pinto",
    "endereco":"Estrada Jequia, 428 Zumbi Ilha do Governador CEP: 21240-780",
    "telefone":"(21)33675264",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Centro Municipal de Saúde Nova Holanda",
    "endereco":"Rua Ivanildo Alves, s/nº Maré CEP: 21043-230",
    "telefone":"(21)3105-6560",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Centro Municipal de Saúde Vila do João",
    "endereco":"Rua 17, s/nº Vila do João Maré CEP: 21040-360",
    "telefone":"(21)3109-0006",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Clínica da Família Victor Valla",
    "endereco":"Avenida Dom Helder Câmara, 1390 Manguinhos CEP: 20973-012",
    "telefone":"(21)22014476",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Unidade de Pronto Atendimento 24 H Manguinhos",
    "endereco":"Avenida Dom Helder Camara, 1390 Manguinhos CEP: 20973011",
    "telefone":"(21) 2332-2407",
    "hora":"24h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"Unidade de Pronto Atendimento 24H Complexo do Alemão",
    "endereco":"Avenida do Itararé, 951 Complexo do Alemão CEP: 21061600",
    "telefone":"(21)3868-3948",
    "hora":"24h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF ANA MARIA CONCEICAO DOS SANTOS CORREIA",
    "endereco":"RUA QUATRO S/N CONJUNTO IPASE VILA KOSMOS CEP:21210530",
    "telefone":"(21)33527818",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF CARLOS NERY DA COSTA FILHO",
    "endereco":"RUA CLARIMUNDO DE MELO 847 FAETEC QUINTINO QUINTINO CEP: 21311282",
    "telefone":"(21)22691911",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF DANTE ROMANO JUNIOR",
    "endereco":"RUA CAROLINA MACHADO S/N MARECHAL HERMES CEP: 21557100",
    "telefone":"(21)24896838",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF EPITACIO SOARES REIS",
    "endereco":"AV CHISOSTOMO PIMENTEL DE OLIVEIRA S/N PAVUNA CEP: 21550000",
    "telefone":"(21)24557190",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF JOSUETE SANTANNA DE OLIVEIRA",
    "endereco":"RUA LUIZ COUTINHO CAVALCANTI S/N GUADALUPE CEP: 21675380",
    "telefone":"(21)30150122",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF MAESTRO CELESTINO",
    "endereco":"LOURENCO MARQUES RUA 70 MARECHAL HERMES CEP: 20211110",
    "telefone":"(21)30174920",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF MANOEL FERNANDES DE ARAUJO",
    "endereco":"RUA LAUDO DE CAMARGO S/N PAVUNA CEP: 21655250",
    "telefone":"(21)3358 7884",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF MARCOS VALADAO",
    "endereco":"AV PASTOR MARTIN LUTHER KING JR 10976 ACARI CEP: 21530015",
    "telefone":"(21)33732253",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF MARIA DE AZEVEDO RODRIGUES PEREIRA",
    "endereco":"PRACA PROFESSORA SANTINHA S/N PARQUE ANCHIETA CEP: 21620510",
    "telefone":"(21)30196181",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF RAIMUNDO ALVES NASCIMENTO",
    "endereco":"RUA MARCOS DE MACEDO S/N GUADALUPE CEP: 21660290",
    "telefone":"(21)31070882",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CF SOUZA MARQUES",
    "endereco":"PRACA PATRIARCA S/N CAMPINHO CEP: 21310440",
    "telefone":"(21)33597500",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS ALICE TOLEDO TIBIRICA",
    "endereco":"RUA JURITI S/N IRAJA CEP: 21230320",
    "telefone":"(21)24712397",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS AUGUSTO DO AMARAL PEIXOTO",
    "endereco":"RUA JORNALISTA HERMANO REQUIAO 447 GUADALUPE CEP: 21670360",
    "telefone":"(21)30151867",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS CARLOS CRUZ LIMA",
    "endereco":"ESTRADA DO COLEGIO 983 COLEGIO CEP: 21235280",
    "telefone":"(21)24733707",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS CARMELA DUTRA",
    "endereco":"AV DOS ITALIANOS 480 ROCHA MIRANDA CEP: 21510103",
    "telefone":"(21)30152879",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS CLEMENTINO FRAGA",
    "endereco":"RUA CAICARA 514 IRAJA CEP: 21361630",
    "telefone":"(21)2482-7115",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS EDMA VALADAO",
    "endereco":"AV BRASIL LOTE 18476 IRAJA CEP: 21530000",
    "telefone":"(21)33621064",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS FAZENDA BOTAFOGO",
    "endereco":"RUA ARNALDO GUINLE S/N FAZENDA BOTAFOGO CEP: 21530020",
    "telefone":"(21)34520835",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS FLAVIO DO COUTO VIEIRA",
    "endereco":"RUA LUCIO JOSE FILHO S/N PQ ANCHIETA CEP: 21635290",
    "telefone":"(21)2455-7516",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS MARIO OLINTO DE OLIVEIRA",
    "endereco":"RUA FERRAZ LOTE 2 CASCADURA CEP: 21311060",
    "telefone":"(21)32720011",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS MORRO UNIAO",
    "endereco":"RUA DA JAQUEIRA S/N COELHO NETO CEP: 21510290",
    "telefone":null,
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS NASCIMENTO GURGEL",
    "endereco":"RUA MERCURIO S/N PAVUNA CEP: 21532290",
    "telefone":null,
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS PORTUS E QUITANDA",
    "endereco":"RUA JORGE NOGUEIRA S/N COSTA BARROS CEP: 21520790",
    "telefone":"(21)38356123",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RJ - Rio de Janeiro",
    "municipio":"Rio de Janeiro",
    "servico":"CMS SYLVIO FREDERICO BRAUNER",
    "endereco":"RUA DARWIN BRANDAO S/N COSTA BARROS CEP: 21515210",
    "telefone":"(21)38358689",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RN - Rio Grande do Norte",
    "municipio":"PARNAMIRIM",
    "servico":"SERVIÇO DE ASSISTENCIA ESPECIALIZADA EM HIV AIDS",
    "endereco":"RUA BRIGADEIRA PESSOA RAMOS N° 31 COHABINAL CEP 59140730",
    "telefone":"(84)3645-5500",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RN - Rio Grande do Norte",
    "municipio":"NATAL",
    "servico":"SAE",
    "endereco":"RUA CONE DO MONTE Nº110 BAIRRO QUINTAS CEP:59037170",
    "telefone":"(84)3232-7902",
    "hora":"24h"
  },
  {
    "estado":"RO - Rondônia",
    "municipio":"JI-PARANA",
    "servico":"SAE DST AIDS",
    "endereco":"RUA PORTO VELHO 2319, BAIRRO DOM BOSCO CEP: 76900000",
    "telefone":"(69)3416-4187",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RO - Rondônia",
    "municipio":"Porto Velho",
    "servico":"SAE",
    "endereco":"Rua Jacy Paraná s/n",
    "telefone":"(69)3901-2970",
    "hora":"08:00 ás 18:00"
  },
  {
    "estado":"RO - Rondônia",
    "municipio":"Porto Velho",
    "servico":"POLICLÍNICA OSVALDO CRUZ",
    "endereco":"Av.Jorge Teixeira 3682",
    "telefone":"(69)3216-2214",
    "hora":"08:00 ás 18:00"
  },
  {
    "estado":"RR - Roraima",
    "municipio":"BOA VISTA",
    "servico":"DISTRITO SANITÁRIO ESPECIAL INDÍGENA YANOMAMI",
    "endereco":"Polos bases Indigenas - Leste de Roraima",
    "telefone":"(95)3624-4148",
    "hora":"24h"
  },
  {
    "estado":"RR - Roraima",
    "municipio":"BOA VISTA",
    "servico":"HOSPITAL GERAL DE RORAIMA",
    "endereco":"AVENIDA BRIGADEIRO EDUARDO GOMES, S/N Bairro: AEROPORTO",
    "telefone":"(95)2121-0659",
    "hora":"24h"
  },
  {
    "estado":"RR - Roraima",
    "municipio":"BOA VISTA",
    "servico":"HOSPITAL MATERNO INFANTIL NOSSA SENHORA DE NAZARET",
    "endereco":"AV. COSTA E SILVA - Bairro: SAO FRANCISCO",
    "telefone":"(95)4009-4929",
    "hora":"24h"
  },
  {
    "estado":"RR - Roraima",
    "municipio":"BOA VISTA",
    "servico":"HOSPITAL DA CRIANÇA SANTO ANTONIO",
    "endereco":"AVENIDA DAS GUIANAS 1645 - Bairro: 13 DE SETEMBRO",
    "telefone":"(95)3198-3028",
    "hora":"24h"
  },
  {
    "estado":"RR - Roraima",
    "municipio":"Rorainopolos",
    "servico":"CENTRO DE SAÚDE DRA MARIA YANDARA",
    "endereco":"AVENIDA DRA YANDARA - Bairro: CENTRO",
    "telefone":"(95)32381247",
    "hora":"08:00h as 12:00h e 14:00h as 17:00h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"PASSO FUNDO",
    "servico":"SERVICO DE ATENDIMENTO ESPECIALIZADO",
    "endereco":"RUA SILVA JARDIM, NUMERO 714 PASSO FUNDO CENTRO",
    "telefone":"(54)3311-7236",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"PORTO ALEGRE",
    "servico":"PRONTO ATENDIMENTO CRUZEIRO DO SUL",
    "endereco":"TRAVESSA MANUEL LOBATO N°151",
    "telefone":"(51)3289-4015",
    "hora":"24h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"PORTO ALEGRE",
    "servico":"PRONTO ATENDIMENTO LOMBA DO PINHEIRO",
    "endereco":"ESTRADA JOAO DE OLIVEIRA REMIAO N°5110 LOMBA DO PINHEIRO - PORTO ALEGRE- CEP: 91560000",
    "telefone":"(51)3289-5506",
    "hora":"24h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"PASSO FUNDO",
    "servico":"NUCLEO DE VIGILANCIA DA SAUDE DO TRABALHADOR",
    "endereco":"RUA SILVA JARDIM N°727 CENTRO PASSO FUNDO/RS CEP:99010240",
    "telefone":"(54)3046-0097",
    "hora":"24h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"URUGUAIANA",
    "servico":"SETOR DST AIDS",
    "endereco":"AV PRESIDENTE VARGAS 2990",
    "telefone":"(55)3414-1152",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"SANTA CRUZ DO SUL",
    "servico":"HOSPITAL - ATESC",
    "endereco":"FERNANDO ADOTT Nº174 BAIRRO CENTRO CEP:96810072",
    "telefone":null,
    "hora":"24h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"ERECHIM",
    "servico":"SERVIÇO DE ASSISTENCIA ESPECIALIZADO EM DST AIDS",
    "endereco":"AVENIDA SANTOS DALBOSCO Nº 160 SALA 201",
    "telefone":"(54)3522-3955",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"CAXIAS DO SUL",
    "servico":"SERVIÇO MUNINCIPAL DE INFECTOLOGIA.",
    "endereco":"RUA SINIMBU 2231 1º ANDAR BAIRRO CENTRO -RS",
    "telefone":null,
    "hora":"08:00 às 12:00h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"GRAVATAI",
    "servico":"SAE",
    "endereco":"CORONEL SARMENTO NUMERO 1737, CENTRO",
    "telefone":"(51)3431-0792",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"PASSO FUNDO",
    "servico":"HOSPIATAL DA CIDADE PASSO FUNDO",
    "endereco":"RUA TIRADENTES 295 BAIRRO CENTRO CEP 99010260",
    "telefone":"(54)2103-3333",
    "hora":"24h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"PORTO ALEGRE",
    "servico":"SERVIÇO DE ASSISTENCIA ESPECIALIZADA EM DST, HIV E AIDS DO CENTRO DE SAUDE IATI",
    "endereco":"RUA 3 DE ABRIL N°90",
    "telefone":"(51)3289-3435",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"URUGUAIANA",
    "servico":"HOSPITAL DE CARIDADE URUGUAIANA",
    "endereco":"DOMINGOS ALMEIDA Nº3801 BAIRRO SAO MIGUEL CEP:",
    "telefone":"(55)3412-5588",
    "hora":"24h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"BENTO GONCALVES",
    "servico":"SERVICO DE ATENDIMENTO ESPECIALIZADO E CENTRO DE TESTAGEM E ACONSELHAMENTO",
    "endereco":"RUA GOIANIA, NUMERO 126, BAIRRO BOTAFOGO, CEP: 25700000",
    "telefone":"(54)3453-2578",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"SAO LEOPOLDO",
    "servico":"FUNDAÇAO HOSPITAL CENTENARIO",
    "endereco":"THEODOMIRO PORTO DA FONSECA 799, FIAO, SAO LEOPOLDO",
    "telefone":"(51)3591-1400",
    "hora":"24h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"RIO GRANDE",
    "servico":"HOSPITAL UNIVERSITARIO DR MIGUEL RIET CORREIA JUNIOR SERVIÇO HIV/AIDS-HU/FURG",
    "endereco":"RUA VISCONDE DE PARANAGUA 102 CEP 96200190",
    "telefone":"(53)3233-8800",
    "hora":"24h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"PORTO ALEGRE",
    "servico":"AREA TECNICA DE DST AIDS E HEPATITE VIRAIS",
    "endereco":"AVENIDA JOAO PESSOA N°325 BAIRRO: CENTRO CEP: 90040000",
    "telefone":"(51)3289-2869",
    "hora":"24h"
  },
  {
    "estado":"RS - Rio Grande do Sul",
    "municipio":"PASSO FUNDO",
    "servico":"HOSPITAL SAO VICENTE DE PAULO",
    "endereco":"RUA TEIXEIRA SOARES NUMERO 808 CENTRO PASSO FUNDO RS CP 9901008",
    "telefone":"(54)3316-4039",
    "hora":"24h"
  },
  {
    "estado":"SC - Santa Catarina",
    "municipio":"ITAJAI",
    "servico":"NUCLEO HOSPITALAR DE VIGILANCIA EPIDEMIOLOGICA",
    "endereco":"AVENIDA MARCOS KONDER N°1111 CEP: 88301303",
    "telefone":"(47)3249-9425",
    "hora":"24h"
  },
  {
    "estado":"SC - Santa Catarina",
    "municipio":"BRUSQUE",
    "servico":"HOSPITAL E MATERNIDADE DE BRUSQUE",
    "endereco":"RUA PASTOR SANDRESQUE 148",
    "telefone":"(47)3255-0100",
    "hora":"24h"
  },
  {
    "estado":"SC - Santa Catarina",
    "municipio":"BLUMENAU",
    "servico":"FUNDAÇAO HOSPITALAR DE BLUMENAU- HOSPITAL SANTO ANTONIO",
    "endereco":"RUA ITAJAI 545- VORSTADT",
    "telefone":"(47)3231-4059",
    "hora":"24h"
  },
  {
    "estado":"SC - Santa Catarina",
    "municipio":"FLORIANOPOLIS",
    "servico":"HOSPITAL NEREU RAMOS",
    "endereco":"RUA RUI BARBOSA Nº800- AGRONOMICA- FLORIANOPOLIS- SC. CEP: 88025301",
    "telefone":"(48)3216-9300",
    "hora":"24h"
  },
  {
    "estado":"SC - Santa Catarina",
    "municipio":"CRICIUMA",
    "servico":"PROGRAMA DE ATENÇAO MUNICIPAL DAS DST, HIV/AIDS DE CRICIUMA",
    "endereco":"MARIA ARGENTE FERNANDES N°85 - PAVILHA CES- BAIRRO: SANTO ANTONIO -CEP:88809346",
    "telefone":"(48)3445-8731",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SC - Santa Catarina",
    "municipio":"SAO JOSE",
    "servico":"CENTRO EM VIGILANCIA E SAUDE- SERVIÇO DE ATENÇAO ESPECIALIZADA",
    "endereco":"PRAÇA ARNOLDO DE SOUZA S/N -CENTRO HISTORICO SAO JOSE",
    "telefone":"(48)3357-6940",
    "hora":null
  },
  {
    "estado":"SC - Santa Catarina",
    "municipio":"TUBARAO",
    "servico":"CENTRO DE ATENDIMENTO ESPECIALIZADO EM SAUDE",
    "endereco":"RUA TEODOTO TOMON, NUMERO 353, BAIRRO CENTRO, CEP : 88705010",
    "telefone":"(48)3622-5125",
    "hora":"08:00 às 12:00h"
  },
  {
    "estado":"SC - Santa Catarina",
    "municipio":"ITAJAI",
    "servico":"CEREDI",
    "endereco":"RUA SAMUEL HEUSI 120 - CENTRO - ITAJAI",
    "telefone":"(47)3908-5717",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SC - Santa Catarina",
    "municipio":"CHAPECO",
    "servico":"HOSPITAL DIA",
    "endereco":"ELIBERTO HULSEN",
    "telefone":"(49)3331-2514",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SC - Santa Catarina",
    "municipio":"BRUSQUE",
    "servico":"CENTRO DE VIGILANCIA E SAUDE.",
    "endereco":"RUA PASTOR SANDRESKY Nº50- CENTRO- BRUSQUE-SC.",
    "telefone":"(47)3110-1026",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SC - Santa Catarina",
    "municipio":"BLUMENAU",
    "servico":"CENTRO ESPECIALIZADO EM DIAGNOSTICO ASSISTENCIA E PREVENÇAO",
    "endereco":"RUA PARAIBA 380",
    "telefone":"(47)3381-6166",
    "hora":"24h"
  },
  {
    "estado":"SC - Santa Catarina",
    "municipio":"LAGES",
    "servico":"PROGRAMA DST, HIV, AIDS E HEPATITES VIRAIS",
    "endereco":"PRACA LEOBERTO LEAL, NUMERO 20, ANEXO A SMS, CEP: 88500",
    "telefone":"(49)3251-7631",
    "hora":"24h"
  },
  {
    "estado":"SE - Sergipe",
    "municipio":"Aracaju",
    "servico":"MATERNIDADE NOSSA SENHORA DE LOURDES",
    "endereco":"AV TANCREDO NEVES S/N – BAIRRO CAPUCHO",
    "telefone":"(79)3225-8650",
    "hora":"24h"
  },
  {
    "estado":"SE - Sergipe",
    "municipio":"Aracaju",
    "servico":"CEMAR SIQUEIRA CAMPOS - SAE",
    "endereco":"RUA BAHIA, S/N – BL B – BAIRRO SIQUEIRA CAMPOS",
    "telefone":"(79)3234-0928",
    "hora":"7:00 às 19:00h"
  },
  {
    "estado":"SE - Sergipe",
    "municipio":"Aracaju",
    "servico":"HOSPITAL MUNICIPAL ZONA NORTE - DR NESTOR PIVA",
    "endereco":"AV MARANHÃO S/N – BAIRRO 18 DO FORTE",
    "telefone":"(79)3212-0401",
    "hora":"24h"
  },
  {
    "estado":"SE - Sergipe",
    "municipio":"Aracaju",
    "servico":"HOSPITAL MUNICIPAL ZONA SUL - DES FERNANDO FRANCO",
    "endereco":"Av. Doutor Tarcísio Daniel dos Santos – BAIRRO FAROLÂNDIA",
    "telefone":"(79)3179-3038",
    "hora":"24h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SUMARE",
    "servico":"CRESSER",
    "endereco":"RUA JACIRO BALDIORT 350 PLANALTO DO SOL, SUMARE SAO PAULO",
    "telefone":"(19)3873-5463",
    "hora":"24h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SUZANO",
    "servico":"SAE CTA",
    "endereco":"AV. ANTONIO MARQUES FIGUEIRA 679",
    "telefone":"(11)4744-6120",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"TABOAO DA SERRA",
    "servico":"CLINICA DST E HEPATITES VIRAIS DE TABOAO DE SERRA",
    "endereco":"RUA PEDRO BORBA, NUMERO 259, JARDIM MARIA ROSA, 06763290",
    "telefone":"(11)4787-8446",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"TATUI",
    "servico":"AMBULATORIO DE INFECTOLOGIA DST AIDS E HEPATITES VIRAIS",
    "endereco":"TRAVESSA MONSENHOR MAGALDI 296 BAIRRO: CENTRO SAO PAULO.",
    "telefone":"(15)98118-9809",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO VICENTE",
    "servico":"ESS RIO BRANCO 01",
    "endereco":"RUA ONZE Nº1770 BAIRRO JARDIM RIO BRANCO CEP:",
    "telefone":"(13)3566-2773",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SERTAOZINHO",
    "servico":"CENTRO DE REFERENCIA DE INFECTOLOGIA DR JOAO BATISTA ORTOLAN",
    "endereco":"RUA PEDRO BIGHETTI Nº910 - JARDIM RECREIO - CEP:14170370 - SERTAOZINHO - SP",
    "telefone":"(16)3947-1302",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SOROCABA",
    "servico":"SAME",
    "endereco":"RUA MANOEL LOPES 220 VILA HORTENCIA - SOROCABA - SP",
    "telefone":"(15)3234-8802",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO PAULO",
    "servico":"SAE LAPA DST/AIDS PAULO CESAR BOMFIM",
    "endereco":"RUA TOME DE SOUZA NUMERO 30 LAPA SP",
    "telefone":"(11)3832-2386",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO PAULO",
    "servico":"SAE DST/AIDS CIDADE DUTRA",
    "endereco":"RUA CRISTINA DE VASCONCELOS CECCATO Nº 109.BAIRRO JARDIM SAO NICOLAU",
    "telefone":"(11)5666-8301",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO PAULO",
    "servico":"CENTRO DE REFERENCIA E TREINAMENTO EM DTS E AIDS",
    "endereco":"RUA: SANTA CRUZ Nº81 BAIRRO VILA MARIANA SP/ SAO PAULO CEP:04121000",
    "telefone":"(11)5087-9833",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO PAULO",
    "servico":"UNIDADE BASICA DE SAUDE CONJUNTO DO IPESP",
    "endereco":"AVENIDA PROFESSORA VIRGILIA RODRIGUES ALVES DE CARVALHO PINTO - N° 555 - BAIRRO JARDIM TREMENBER - SP",
    "telefone":"(11)2203-0111",
    "hora":"14:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO PAULO",
    "servico":"CENTRO DE REFERENCIA EM DST E AIDS NOSSA SENHORA DO O",
    "endereco":"AVENIDA ITABERABA 1377,FREGUESIA DO O SAO PAULO/SP",
    "telefone":"(11)3975-2032",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"VALINHOS",
    "servico":"CEDIC CTA",
    "endereco":"AVENIDA BRASIL Nº 144 BAIRRO VILA SANTANA CIDADE VALINHOS CEP: 13.274-010",
    "telefone":"(19)3829-5681",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"TAUBATE",
    "servico":"AMBULATORIO MUNICIPAL DE INFECTOLOGIA",
    "endereco":"RUA BENEDITO RUSTINO DOS SANTOS",
    "telefone":"(12)3625-5123",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"VOTORANTIM",
    "servico":"SERVIÇO DE ATENDIMENTO ESPECIALIZADO EM DST AIDS E HEPATITES VIRAIS",
    "endereco":"RUA JOAO ALARCON N°50- BAIRRO JARDIM ICATU",
    "telefone":"(15)3343-2740",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"VARZEA PAULISTA",
    "servico":"HOSPITAL MUNICIPAL DE VARZEA PAULISTA",
    "endereco":"PRAÇA CASTRO ALVES S/N VILA SAO JOSE CEP: 13.224-299",
    "telefone":"(11)4596-5130",
    "hora":"24h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO PAULO",
    "servico":"SERVIÇO DE ATENDIMENTO ESPECIALIZADO EM DST/AIDS BUTANTAN.",
    "endereco":"AVENIDA CURICEU DE AZEVEDO MARQUES 3596 BUTANTAN SP",
    "telefone":"(11)3765-1692",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO PAULO",
    "servico":"CENTRO DE REFERENCIA DSTAIDS DE SANTO AMARO",
    "endereco":"RUA CASLOS GOMES N°695 - BAIRRO SANTO AMARO - SAO PAULO - SP",
    "telefone":"(11)5524-3032",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO PAULO",
    "servico":"SAE DST AIDS CIDADE LIDER 2",
    "endereco":"RUA MEIJO IGUAÇU 86",
    "telefone":"(11)2748-1139",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO PAULO",
    "servico":"SAE DST AIDS HEBERT DE SOUZA \"BETINHO",
    "endereco":"AVENIDA ARQUITETO VILA NOVA ARTIGAS 515 TEOTONIO VILELA",
    "telefone":"(11)2704-7095",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO JOSE DOS CAMPOS",
    "servico":"CRMI",
    "endereco":"RUA AMIM ASSADE N°200 - JARDIM SAO DIMAS - SAO JOSE DOS CAMPOS - SP",
    "telefone":"(12)1392-4850",
    "hora":"08:00 às 12:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO PAULO",
    "servico":"SAE DST AIDS JARDIM MITSUTANI",
    "endereco":"RUA VITORIO EMANULE ROSSI 97",
    "telefone":"(11)5841-5376",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SANTA BARBARA D'OESTE",
    "servico":"AMBULATORIO MUNICIPAL INFECTO CONTAGIOSA",
    "endereco":"AVENIDA SABADO RONFINI Nº203 BAIRRO LINOPOLIS",
    "telefone":"(19)3455-2490",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SALTO",
    "servico":"AMBULATORIO DE MOLESTIA INFECCIOSAS",
    "endereco":"RUA RODRIGUES ALVES Nº655 BAIRRO CENTRO CEP 13320120",
    "telefone":"(11)4021-1169",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO CARLOS",
    "servico":"CENTRO DE ATENDIMENTO DE INFECÇOES CRONICAS",
    "endereco":"RUA 7 DE SETEMBRO 2277 CENTRO",
    "telefone":"(16)3419-8240",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SANTOS",
    "servico":"SAE DE SERVIÇO PARA ADULTOS.",
    "endereco":"RUA SILVA JARDINS 94 VILA MATIAS 11015020",
    "telefone":"(13)3209-8000",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO PAULO",
    "servico":"ESTRATEGIA DA SAUDE DA FAMILIA",
    "endereco":"RUA ADAO EMANUEL DA SILVA Nº16 C BAIRRO : SAO MIGUEL CEP:",
    "telefone":"(11)2297-4782",
    "hora":"08:00 às 12:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO PAULO",
    "servico":"UBS JARDIM DAS PALMAS",
    "endereco":"RUA FRANCISCO DE SALES 10 JARDIM DAS PALMAS",
    "telefone":"(11)5843-8460",
    "hora":null
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO JOSE DO RIO PRETO",
    "servico":"UBSF JARDIM AMERICANO",
    "endereco":"AVENIDA DR ANTONIO TAVARES PEREIRA LIMA N°755 - BAIRRO JARDIM AMERICANO - SAO JOSE DO RIO PRETO - SP",
    "telefone":"(17)3224-9389",
    "hora":null
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO PAULO",
    "servico":"UBS DR WALDOMIRO PREGNOLATTO",
    "endereco":"AVENIDA SANTA CATARINA Nº 1523 BAIRRO VILA SANTA CATARINA",
    "telefone":"(11)5671-5091",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO PAULO",
    "servico":"SAE DST AIDS CECI",
    "endereco":"AV. CECI N° 2235",
    "telefone":"(11)2276-9719",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO PAULO",
    "servico":"CENTRO DE REFERENCIA DST/AIDS PENHA",
    "endereco":"PRAÇA NOSSA SENHORA DA PENHA N° 55 - BAIRRO PENHA - SAO PAULO - SP",
    "telefone":"(11)98174-4662",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SAO PAULO",
    "servico":"SAE DST AIDS DR. JOSE FRANCISCO DE ARAUJO",
    "endereco":"RUA GONÇALVES LENDO Nº106 BAIRRO IPIRANGA CEP 04216030",
    "telefone":"(11)2273-5073",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"OSASCO",
    "servico":"SAE INFECTOLOGIA",
    "endereco":"RUA DA SAUDADE Nº100 BAIRRO BELA VISTA CEP:06080000",
    "telefone":"(11)3682-4787",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"OURINHOS",
    "servico":"CTA",
    "endereco":"RUA DOM JOSE MARELO Nº385 BAIRRO VILA MANO",
    "telefone":"(14)3302-6101",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"MOGI GUACU",
    "servico":"AMBULATORIO DA VIGILANCIA EPIDEMIOLOGICA",
    "endereco":"RUA PAULA BUENO Nº233-CENTRO- MOGI GUAÇU-SP.",
    "telefone":"(19)3811-9800",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"PRESIDENTE PRUDENTE",
    "servico":"AMBULATORIO MEDICO MUNICIAL SAE/CTA",
    "endereco":"AVENIDA CORONEL JOSE SOARES MARCONDES 2357, VILA ELPIDES",
    "telefone":"(18)3221-1366",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"PINDAMONHANGABA",
    "servico":"AMBULATORIO DE ESPCIALIDADES MEDICAS",
    "endereco":"RUA FREDERICO MACHADO N° 179 CENTRO",
    "telefone":"(12)3644-5904",
    "hora":"14:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"RIO CLARO",
    "servico":"SEPA SERVIÇO ESPECIALIZADO PREVENÇAO E ASSISTENCIA",
    "endereco":"AVENIDA 19 NUMERO 1045",
    "telefone":"(19)3523-3232",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"RIBEIRAO PIRES",
    "servico":"AMBULATORIO DE INFECTOLOGIA",
    "endereco":"AVENIDA FRANCISCO MONTEIRO Nº 205",
    "telefone":"(11)4828-4441",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"RIBEIRAO PRETO",
    "servico":"CENTRO DE REFERENCIA EM ESPECIALIDADE ENFERMEIRA MARIA CONCEIÇAO DA SILVA",
    "endereco":"RUA PRUDENCE DE MOARAES, Nº 35, CENTRO",
    "telefone":"(16)3632-2868",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SANTO ANDRE",
    "servico":"AMBULATORIO DE REFERENCIA PARA MOLESTIAS INFECCIOSAS DE SANTO ANDRE.",
    "endereco":"RUA DA SILVEIRAS, 73, VILA GUIOMAR, SANTO ANDRE-SP, CEP 09071-100",
    "telefone":"(11)4427-6110",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"SANTO ANDRE",
    "servico":"UNIDADE DE SAUDE JARDIM BOM PASTOR",
    "endereco":"RUA JOSE DANGELO 35 JARDIN OCARA SANTO ANDRE 09050090",
    "telefone":"(11)4426-8988",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"ITAQUAQUECETUBA",
    "servico":"SERVIÇO DE ASSISTENCIA ESPECIALIZADA SAE CTA",
    "endereco":"RUA DUQUE DE CAXIAS 187 CENTRO ITAQUAQUECETUBA SP",
    "telefone":"(11)4640-3240",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"ITAPETININGA",
    "servico":"AMBULATORIO DE DST AIDS",
    "endereco":"PLACIDO CARDOSO, Nº 140, BAIRRO MESQUITA",
    "telefone":"(15)3373-5426",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"ITAPECERICA DA SERRA",
    "servico":"CTA ITAPECERICA DA SERRA",
    "endereco":"AVENIDA XV DE NOVEMBRO Nº 926 BAIRRO CENTRO ITAPECERICA DA SERRA",
    "telefone":"(11)4666-5122",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"JANDIRA",
    "servico":"CTA FAVO DE MEL",
    "endereco":"RUA JOAO LALEICEIRO Nº SEM CEP:00600020 BAIRRO PARK JMC",
    "telefone":"(11)4619-9433",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"MAUA",
    "servico":"CENTRO DE REFERENCIA EM SAUDE E IST/AIDS/HV",
    "endereco":"RUA DR. BENEDITO MEIRELES FREIRE 193, VILA VITORIA MAUA. CEP 09360220",
    "telefone":"(11)4544-4361",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"LIMEIRA",
    "servico":"SERVIÇO ESPECIALIZADO EMOLEM CIA INFECTO CONTAGIOSA DE LIMEIRA",
    "endereco":"RUA SERGIPE Nº906, VILA CLAUDIA CEP:13480530",
    "telefone":"(19)3442-4796",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"JUNDIAI",
    "servico":"CENTRO DE TESTAGEM E ACONSELHAMENTO DE JUNDIAI",
    "endereco":"RUA CONDE DE MONSANTO 480 VIANELO 13207060",
    "telefone":"(11)4586-2402",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"FRANCISCO MORATO",
    "servico":"CTA VIGILANCIA EM SAUDE.",
    "endereco":"RUA VIRGILIO MARTINS DE OLIVEIRA Nº 282 BAIRRO: CENTRO",
    "telefone":"(11)4488-3316",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"FRANCO DA ROCHA",
    "servico":"COA FRANCO DA ROCHA",
    "endereco":"RUA NELSON RODRIGUES S/N BLOCO 5- FRANCO DA ROCHA",
    "telefone":"(11)4444-3118",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"DIADEMA",
    "servico":"CENTRO D EREFERENCIA EM DST AIDS HEPATITES VIRAS D EDIADEMA",
    "endereco":"RUA ORIENTE MONTE NUMERO 28 CENTRO DIADEMA",
    "telefone":"(11)4053-5302",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"GUARULHOS",
    "servico":"SAE CARLOS CRUZ",
    "endereco":"RUA MIRAGANCA Nº32 BAIRRO PARK JUREMA GUARULHOS CEP 07244190",
    "telefone":"(11)2498-7323",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"GUARULHOS",
    "servico":"UBS PARQUE ALVORADA",
    "endereco":"AVENIDA SANTA HELENA Nº 125 VILA PARAISO, GUARULHOS CEP: 072412070",
    "telefone":"(11)2498-1510",
    "hora":"24h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"HORTOLANDIA",
    "servico":"AMBULATORIO DE AIDS DE HORTOLANDIA",
    "endereco":"RUA ERNESTO DEGAMASCO 262 VILA REAL - HORTOLANDIA - SP CEP 13183080",
    "telefone":"(19)3965-1443",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"INDAIATUBA",
    "servico":"SERVIÇO DE ATENDIMENTO ESPECIALIZADO DE INDAIATUBA",
    "endereco":"AVENIDA VISCONDE DE INDAIATUBA 199, VILA VITORIA, 13338010",
    "telefone":"(19)3825-6440",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"CATANDUVA",
    "servico":"PROGRAMA MUNICIPAL DST, AIDS E HEPATITES VIRAIS.",
    "endereco":"RUA PARA Nº 13 CENTRO , CATANDUVA-SP CEP: 15.800-040",
    "telefone":"(17)3523-6011",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"CARAPICUIBA",
    "servico":"NUCLEO DE ATENDIMENTO E INFECTOLOGIA DE CARAPICUIBA",
    "endereco":"ALAMEDA DOS LIRIOS N°150 - SUL AMERICANA - CARAPICUIBA/SP",
    "telefone":"(11)4202-9583",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"FERRAZ DE VASCONCELOS",
    "servico":"SERVIÇO DE ASISTENCIA ESPECIALIZADA EM DST HVI AIDS TUBERCULOSE E HANSENIASE",
    "endereco":"RUA ANTONIO TREVISANE 63, AO LADO DO CARTORIO ELEITORAL, 08500-340",
    "telefone":"(11)4679-1961",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"EMBU DAS ARTES",
    "servico":"UBS MIGUEL GOMES CARDOSO",
    "endereco":"ESTRADA DE ETAPESIRICA CAMPO LIMPO Nº530 BAIRRO JARDIM SANTA EMILIA C EP:06820415",
    "telefone":"(11)4149-8260",
    "hora":"08:00 às 12:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"ORLANDIA",
    "servico":"CENTRO DE TESTAGEM E ACONSELHAMENTO ISABEL URBINATE CORREA",
    "endereco":"AVENIDA 3 Nº130 BAIRRO CENTRO CEP 1462000",
    "telefone":"(16)3820-8208",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"FRANCA",
    "servico":"SAE (SERVIÇO DE ATENÇAO ESPECIALIZADA)DST, AIDS E HEPATITES VIRAIS.",
    "endereco":"RUA OUVIDOR FREIRE 2109- CENTRO- FRANCA- SP.",
    "telefone":"(16)3702-7750",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"BAURU",
    "servico":"UNIDADE DE SUDE DA FAMILIA VILA DUTRA",
    "endereco":"RUA LUIZ BARBOSA SOBRINHO 1178,VILA DUTRA BAURU SP",
    "telefone":"(14)3281-2646",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"BIRIGUI",
    "servico":"SERVICO DE ATENDIMENTO ESPECIALIZADO",
    "endereco":"PRACA GUMERCILDO DE PAIVA CASTRO, SEM NUMERO , CENTRO",
    "telefone":"(18)3643-6233",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":null,
    "servico":"UNIDADE DE SAUDE DA FAMILIA POUSADA DA ESPERANÇA 2",
    "endereco":"RUA ANTONIO GEROMINO DA SILVA, NUMERO 105,BAIRRO POUSADA DA ESPERANÇA 2 CEP: 17022670",
    "telefone":"(14)98165-9730",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"BAURU",
    "servico":"UNIDADE DE SAUDE DA FAMILIA NOVA BAURU",
    "endereco":"RUA LUCIA BONE SAO PEDRO 2154",
    "telefone":"(14)3223-2280",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"BAURU",
    "servico":"UBA MEIRE DOTA",
    "endereco":"RUA PEDRO SALVADOR, QUADRA 2, BAIRRO MEIRE DOTA, CEP: 17026390",
    "telefone":"(14)3109-2460",
    "hora":"24h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"CARAGUATATUBA",
    "servico":"UNIDADE DE ATENDIMENTO A MOLESTIA E INFECTO CONTAGIOSAS- UAMI",
    "endereco":"RUA DOUTOR CARLOS DE ALMEIDA RODRIGUES Nº495- INDAIA- CARAGUATATUBA- SP.",
    "telefone":"(12)3883-1373",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"CAMPINAS",
    "servico":"CTA",
    "endereco":"RUA VITAL BRASIL 150 CPE13083888 CIDADE UNIVERSITARIA.",
    "telefone":"(19)3521-8997",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"BOTUCATU",
    "servico":"SERVIÇO DE AMBULATORIO ESPECIALIZADOS DE INFECTOLOGIA DOMINGOS ALVES MEIRA",
    "endereco":"ALAMEDA DOS SEDRINHOS N°54 CEP: 18607460",
    "telefone":"(14)3811-1125",
    "hora":"24h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"ASSIS",
    "servico":"GIPA GRUPO INTEGRADO DE PREVENÇAO E ATENÇAO AO DST HIV AIDS.",
    "endereco":"RUA CANDIDO MOTA 68 VILA CENTRAL CP 19860250",
    "telefone":"(18)3324-2620",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"ARARAS",
    "servico":"SAE CTA ENFERMEIRA ADALGISA DOS SANTOS GONÇALVES",
    "endereco":"RUA FRANCISCO PAULO RUSSO Nº 119 CENTRO",
    "telefone":"(19)3544-2064",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"BAURU",
    "servico":"CENTRO DE REFERENCIA MOLESTIAS INFECCIOSAS",
    "endereco":"RUA SILVERIO SAO JOAO QUADRA N°1 CENTRO- BAURU- CEP:17017050",
    "telefone":"(14)3224-2380",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"BARUERI",
    "servico":"SAE MARIA JOSE ESTEVANATO",
    "endereco":"AVENIDA TRINDADE, NUMERO 281, BAIRRO BETA VIDA",
    "telefone":"(11)4198-4120",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"BARRETOS",
    "servico":"SERVIÇO DE ASISTENCIA ESPECIALIZADA",
    "endereco":"AVENIDA JERONIMO ALVES PEREIRA 490 JARDIM UNIVERSITARIO",
    "telefone":"(17)33229-6580",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"ARACATUBA",
    "servico":"SERVIÇO DE ATENDIMENTO ESPECIALIZADO DO DST AIDS E HEPTITES VIRAIS",
    "endereco":"AFONSO TENA 1537",
    "telefone":"(18)3622-3895",
    "hora":"08:00 às 12:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"AMERICANA",
    "servico":"SERVICO DE ASSISTENCIA ESPECIALIZADA EM DST/HIV/AIDS E HEPATITES VIRAIS",
    "endereco":"AVENIDA DA SAUDE, NUMERO 485, BAIRRO JARDIM NOSSA SENHORA DE FATIMA",
    "telefone":"(19)3478-3039",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"ATIBAIA",
    "servico":"UBS SUMICO ONO",
    "endereco":"PRAÇA SANTO ANTONIO N°110 CEP:12942470",
    "telefone":"(11)4411-6629",
    "hora":"08:00 às 18:00h"
  },
  {
    "estado":"TO - Tocantins",
    "municipio":"PALMAS",
    "servico":"HOSPITAL E MATERNIDADE PUBLICO DONA REGINA .",
    "endereco":"104 NORTE RUA NE 05 LOTES 31 A 41 CENTRO.",
    "telefone":"(63)3218-7728",
    "hora":"24h"
  },
  {
    "estado":"TO - Tocantins",
    "municipio":"ARAGUAINA",
    "servico":"SERVICO DE ASSISTENCIA ESPECIALIZADA EM HIV/AIDS E HEPATITES VIRAIS DO HOSPITAL DE DOENÇAS TROPICAIS DO TOCANTINS.",
    "endereco":"AVENIDA JOSE DE BRITO SOARES, NUMERO 1015, SETOR ANHAGUERA, CEP: 77818530",
    "telefone":"(63)3411-2945",
    "hora":"24h"
  },
  
// Tocantins adicionada 25/07/2016
  {
    "estado":"TO - Tocantins",
    "municipio":"Porto Nacional",
    "servico":"SAE – Serviço de Assistência Especializada de Porto Nacional",
    "endereco":"Área pública entre as ruas 7 e 32/ Setor Porto Real CEP: 77.500-000",
    "telefone":"(63)3363-4396",
    "hora":"08 hs às 18 hs ( Segunda a sexta-feira)"
  },
    {
    "estado":"TO - Tocantins",
    "municipio":"Gurupi",
    "servico":"Policlínica Dr. Luis Santos Filho",
    "endereco":"Rua Juscelino Kubstichek nº 1976 Qd103 Lts 4 a 16 CEP:77.405-110",
    "telefone":"(63)3312-5182 / (63)3315-0103",
    "hora":"8hs às12hs e 14hs às18hs (Segunda a sexta-feira)"
  },
      {
    "estado":"TO - Tocantins",
    "municipio":"Paraíso",
    "servico":"Policlínica João Coelho de Azevedo",
    "endereco":"Av. Castelo Branco, Qd.. 04, Lt. 6/7, Centro, CEP: 77.600-000",
    "telefone":"(63)3904-5052 / (63)3904-1553",
    "hora":"12hs às18hs (segunda a sexta-feira)"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Araguaina",
    "servico":"Hospital de Doenças Tropicais - HDT",
    "endereco":"Rua José de Brito Soares, Nº1015, Setor Anhanguera,CEP: 77.818-530",
    "telefone":"(63)3411-2948",
    "hora":"07hs às 18hs (segunda a sexta-feira)"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Palmas",
    "servico":"Núcleo de Assistência Henfil",
    "endereco":"QD. 404Norte, Alameda 19, Lote 03 – Plano Diretor Norte CEP:77.001-568",
    "telefone":"(63)3218-5333",
    "hora":"07hs às 18hs(Segunda a sexta-feira)"
  },
    {
    "estado":"TO - Tocantins",
    "municipio":"Palmas",
    "servico":"Unidade de Pronto Atendimento Norte",
    "endereco":"QD. 203 Norte, AV. LO – 06 APM 02 –Plano Diretor Norte",
    "telefone":"(63)3218-5110",
    "hora":"24h"
  },
    {
    "estado":"TO - Tocantins",
    "municipio":"Araguaina",
    "servico":"Hospital Regional de Araguaína",
    "endereco":"Rua Treze de Maio nº 1336 centro CEP: 77803-130",
    "telefone":"(63)3411-2800 / (63)3411-2929 / (63)3411-2824",
    "hora":"24h"
  },
    {
    "estado":"TO - Tocantins",
    "municipio":"Araguaina",
    "servico":"Hospital e Maternidade Dom Orione de Araguaína",
    "endereco":"Rua Dom Orione, nº 100 Centro CEP 77.803.010",
    "telefone":"(63)3384-1164 (63)3384-1218",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Araguaçu",
    "servico":"Hospital de Referência Tertuliano Corado Lustosa",
    "endereco":"Avenida Nova Martinha, Qd 13, Lt 1 à 12, S/N, setor Coronel Fausto Lustosa CEP:77.475-000",
    "telefone":"(63)3411-8787 ramal 2272 ou 2234 ou 2371",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Araguatins",
    "servico":"Hospital Municipal Dr. Ostilio Antônio de Araújo",
    "endereco":"Rua Bartolomeu Bueno da Silva,Q 87, 1189, Lote 1, Centro, CEP 77.950.000",
    "telefone":"(63) 3474-2727",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Arapoema",
    "servico":"Hospital Regional de Arapoema",
    "endereco":"RuaFrancisco Furtuoso de Aguiar nº411 centro CEP: 77.780-000",
    "telefone":"(63) 3411- 2800/(63) 3411- 2929/ (63) 3411 - 2824 ",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Arraias",
    "servico":"Hospital Regional de Arraias",
    "endereco":"Avenida Parana km 01, Bairro Buritizinho CEP 77.330.000",
    "telefone":"(63) 653-1181",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Augustinópolis",
    "servico":"Hospital Regional de Augustinópolis",
    "endereco":"Rua Amazonas s/n CEP 77.960.000",
    "telefone":"(63) 3474-1414 / (63) 3456-1515",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Colinas",
    "servico":"Hospital Municipal de Colinas",
    "endereco":"Rua João Ramalho,n° 2039, Setor Campinas CEP 77.760.000",
    "telefone":"(63) 3476-7063",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Dianópolis",
    "servico":"Hospital Regional de Dianópolis",
    "endereco":"Rua 10 Qd. 34 Lt. 01 - Setor Nova Cidade CEP: 77.300-000",
    "telefone":"(63) 3692-1020",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Goiatins",
    "servico":"Hospital Municipal de Pequeno Porte de Goiatins",
    "endereco":"Av. Bernardo Sayão, 575, Centro CEP: 77.770-000",
    "telefone":"(63) 3469-0197/ (63) 3469-1583 / (63) 3469-1019",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Guaraí",
    "servico":"Hospital Regional Público de Guaraí",
    "endereco":"Rua 3, nº 1516, setor Rodoviário   CEP 77.700.000",
    "telefone":"(63) 3464-8303 / (63) 3464- 8319",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Gurupi",
    "servico":"Hospital Regional de Gurupi",
    "endereco":"Avenida Juscelino Kubscheck, nº1641, Centro CEP 77.405.110",
    "telefone":"(63) 3315-0252 / (63) 3315-0218",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Miracema",
    "servico":"Hospital Regional de Miracema do Tocantins",
    "endereco":"Avenida Irmã Emma Rodolfo Navarro, S/Nº Setor Sussuapara CEP 77.650.000",
    "telefone":"(63) 3929-3032 / (63) 3929-3043",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Palmas",
    "servico":"Hospital Infantil Público de Palmas",
    "endereco":"202 Sul, Rua NS-B Lote 09 CEP:77020-452",
    "telefone":"(63)3218-7739",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Palmas",
    "servico":"Hospital e Maternidade Dona Regina Siqueira Campos de Palmas",
    "endereco":"Rua NE-5, 104 Norte s/n Plano Diretor Norte CEP 77.006.020",
    "telefone":"(63)3218-7706",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Palmas",
    "servico":"Hospital Geral Público de Palmas - HGP",
    "endereco":"201 Sul NS 01, Lote 1 CEP 77.015.202",
    "telefone":"(63)3218-7828",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Paraíso",
    "servico":"Hospital Regional Público de Paraíso",
    "endereco":"Rua 3, Quadra 2,Lotes 1 ao 19 Setor Aeroporto. CEP: 77.600.000",
    "telefone":"(63)3904-1218 / (63)3904-1232",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Pedro Afonso",
    "servico":"Hospital Regional Publico de Pedro Afonso",
    "endereco":"Rua Numeriano Bezerra de Castro,Quadra 5, Lote 5,  Setor Aeroporto  CEP 77.710.000",
    "telefone":"(63)3466-1912",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Porto Nacional",
    "servico":"Hospital Regional de Porto Nacional",
    "endereco":"Av Murilo Braganº1592, Centro CEP 77.500.000",
    "telefone":"(63)3363- 8407 / (63)3363 - 8404",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Porto Nacional",
    "servico":"Hospital Materno Infantil Tia Dedé de Porto Nacional",
    "endereco":"Rua Raquel de Carvalho n°420, CentroCEP 77.500.000",
    "telefone":"(63)3363-8317 / (63)3363-8319",
    "hora":"24h"
  },
     {
    "estado":"TO - Tocantins",
    "municipio":"Taguatinga",
    "servico":"Hospital Municipal São João Batista Taguatinga",
    "endereco":"Rua Deputado João de Abreu, Centro CEP 77.320.000",
    "telefone":"(63)3654-1285 / (63)3654-1140 / (63)3654-1105",
    "hora":"24h"
  },
  // Tocantins end  25/07/2016
  {
    "estado":"SP - PIRACICABA",
    "municipio":"ALTO ",
    "servico":"CEDIC",
    "endereco":"AV INDEPENDENCIA 581",
    "telefone":"(19) 3437 7505 (19) 3437 7500 ",
    "hora":"SEG A SEX DAS 7 AS 17H"
 },
  {
    "estado":"SP - PIRACICABA",
    "municipio":"BAIRRO ALTO",
    "servico":"HOSPITAL SANTA CASA DE MESERICORDIA DE PIRACICABA",
    "endereco":"AV INDEPENDENCIA 953",
    "telefone":"(19) 3417 5000",
    "hora":"24H"
},
  {
    "estado":"SP - PIRACICABA",
    "municipio":"PIRACICAMIRIM",
    "servico":"UPA DR FORTUNATO LOSSO NETO",
    "endereco":"RUA RIO GRANDE DO NORTE 135",
    "telefone":"(19) 3426 5973 (19) 3426 4973",
    "hora":"SEG A SEG UPA 24 H"
},
  {
    "estado":"SP - PIRACICABA",
    "municipio":"VILA CRISTINA",
    "servico":"UPA VILA CRISTINA (FREI SIGRIST)",
    "endereco":"AV RAPOSO TAVARES 1737",
    "telefone":"(19) 3434 2296",
    "hora":"24 H"
},
  {
    "estado":"SP - PIRACICABA",
    "municipio":"VILA REZENDE",
    "servico":"UPA VILA REZENDE (DR ALFREDO J DE CASTRO NEVES)",
    "endereco":"AV CONCEICAO 350",
    "telefone":"(19) 3421 1439",
    "hora":"24 H"
},
  {
    "estado":"SP - PIRACICABA",
    "municipio":"VILA REZENDE",
    "servico":"HOSPITAL DOS FORNECEDORES DE CANA DE PIRACICABA",
    "endereco":"AV BARA O DE VALENCA716",
    "telefone":"(19) 3403 2860",
    "hora":"SEG A SEG 24H"
},
  {
    "estado":"SP - PIRACICABA",
    "municipio":"VILA SÔNIA",
    "servico":"UPA VILA SÔNIA (NESTOR LONGATTO)",
    "endereco":"RUA BRIGADEIRO EDUARDO GOMES 106",
    "telefone":"(19) 3425 3284",
    "hora":"24 H"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"Pronto Atendimento São Mateus",
    "endereco":"Rua Maestro João Balan, 88 - São Mateus, São Paulo - SP, 03963-030",
    "telefone":"(11) 2919-6018",
    "hora":"24 H"
  },
    {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"AMA Sorocabana",
    "endereco":"R. Catão, 420 - Vila Romana, São Paulo - SP, 05049-000",
    "telefone":"(11) 3879-3094",
    "hora":"24 H"
  },
   {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"Pronto Socorro Municipal da Lapa",
    "endereco":"Av. Queiroz Filho, 313 - Vila Hamburguesa, São Paulo - SP",
    "telefone":"(11) 3022-4122",
    "hora":"24 H"
  },
     {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"Pronto-Socorro Municipal Dr. Lauro Ribas Braga",
    "endereco":"R. Voluntários da Pátria, 943 - Santana, São Paulo - SP, 02011-100",
    "telefone":"(11) 2223-2900",
    "hora":"24 H"
  },
    {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"Hospital Municipal São Luiz Gonzaga",
    "endereco":"R. Michel Ouchana, 94 - Jaçanã, São Paulo - SP, 02276-140",
    "telefone":"(11) 2161-8035",
    "hora":"24 H"
  },
    {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"Hospital Municipal Vereador José Storopolli (Vermelhinho)",
    "endereco":"Rua Francisco Fanganiello, 127 - Parque Novo Mundo, São Paulo - SP, 02181-160",
    "telefone":"(11) 2207-9000",
    "hora":"24 H"
  },
      {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"HM DR. JOSÉ SOARES HUNGRIA - PIRITUBA",
    "endereco":"Av. Menotti Laudísio, 100 - Pirituba, São Paulo - SP, 02011-100",
    "telefone":"(11) 3726-8591",
    "hora":"24 H"
  },
   {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"Hospital Geral Vila Penteado",
    "endereco":"Av. Min. Petrônio Portela, 1800 - Jardim Iracema, São Paulo - SP, 02802-120",
    "telefone":"(11) 3976-8911",
    "hora":"24 H"
  },
   {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"Hospital Geral de Taipas",
    "endereco":"Av. Elísio Teixeira Leite, 6999 - Parada De Taipas, São Paulo - SP, 02810-000",
    "telefone":"(11) 3973-0400",
    "hora":"24 H"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"Hospital Municipal do Campo LImpo - Dr. Fernando Mauro Pires da Rocha",
    "endereco":"Estrada de Itapecerica, 1661 - Campo LImpo, São Paulo - SP, 05835-005",
    "telefone":"(11) 3394-7460",
    "hora":"24 H"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"Hospital Municipal Dr. Moysés Deutsch - M’Boi Mirim",
    "endereco":"Estrada do M'Boi Mirim, 5203 - Jardim Angela, São Paulo - SP, 04948-970",
    "telefone":"(11) 5832-2500",
    "hora":"24 H"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"Ama Paraisopolis",
    "endereco":"R. Silveira Sampaio, 160 - Jardim Morumbi, São Paulo - SP, 05656-010",
    "telefone":"(11) 3742-5394",
    "hora":"24 H"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"AMA 24 HORAS CAPÃO REDONDO",
    "endereco":"Av. Comendador Sant'Anna, 774 - Vila Fazzeoni, São Paulo - SP",
    "telefone":"",
    "hora":"24 H"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"PA Jd. Macedonia R. Louis Boulogne, 133",
    "endereco":"R. Louis Boulogne, 133 - Jardim Macedonia, São Paulo - SP",
    "telefone":"",
    "hora":"24 H"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"Hospital Municipal Maternidade Dr. Mário de Moraes Altenfelder Silva",
    "endereco":"Avenida Deputado Emílio Carlos, 3100 - Vila Nova Cachoeirinha, São Paulo - SP, 02720-200",
    "telefone":"(11) 3986-1000",
    "hora":"24 H"
  },
   {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"Pronto Socorro de Santo Amaro",
    "endereco":"Av. Adolfo Pinheiro, 805 - Santo Amaro, São Paulo - SP, 04733-100",
    "telefone":"(11) 2362-4100",
    "hora":"24 H"
  },
  {
    "estado":"SP - São Paulo",
    "municipio":"São Paulo",
    "servico":"Pronto Socorro Municipal Julio Tupy",
    "endereco":"Rua Serra da Queimada, 800 - Jardim Robru, São Paulo - SP, 08431-640",
    "telefone":"(11) 2035-1821",
    "hora":"24 H"
  }
]

  
});