#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>

#define TAM_G 100;
#define TAM_M 50;

///Funçõs relacionadas ao cadastro, edição e listagem de imóveis

//Função de cadastro de imóveis


int main() {
	fstream arquivo;

	arquivo.open("listaDeImoveis.txt", ios::ate | ios::in | ios::out | ios::app);

	//Verificando se o arquivo foi aberto
	if (!arquivo.is_open()) {
		cout << "OPS! Houve um problema e o programa não pode ser aberto\n";
		arquivo.close();
		return 0;
	}


	cout << "Bem-vindo ao sistema ApCater" << endl;
	cout << "O que deseja fazer?" << endl;
	cout << "[1] Cadastrar um imovel" << endl << "[2] Listar todos os imoveis" << endl << "[3] Editar um imovel" << endl
		<< "[4] Retirar um imovel da lista" << endl << "[5] Procurar um imovel" << endl << "[6] Sair" << endl;

	int opcao1;
	cin >> opcao1;

	if (opcao1 == 1) { /// Cadastro de Imoveis
		int opcao2 = 0;
		cout << "Escolha o tipo de imovel" << endl;
		cout << "[1] Casa" << endl << "[2] Apartamento" << endl << "[3] Terreno" << endl;
		cin >> opcao2;

		string titulo_Anuncio, street, hood, cep, cidade;
		int tipoDeOferta = 0, numeroEnder = 0;
		double preco = 0;

		if (opcao2 == 1) {
			int numeroDeQuartos = 0, numeroDePavimentos = 0;
			double areaDoTerreno = 0, areaConstruida = 0;

			Casa ca = Casa();
			cout << "Digite o titulo anuncio: " << endl;
			cin.ignore();
			getline(cin, titulo_Anuncio);
			ca.setTituloAnuncio(titulo_Anuncio);

			cout << "Digite o numero de pavimentos: " << endl;
			cin >> numeroDePavimentos;
			ca.setnumPav(numeroDePavimentos);

			cout << "Digite o numero de quartos: " << endl;
			cin >> numeroDeQuartos;
			ca.setnumQuartos(numeroDeQuartos);

			cout << "Digite a area do terreno: " << endl;
			cin >> areaDoTerreno;
			ca.setAreaTerreno(areaDoTerreno);

			cout << "Digite a area construida: " << endl;
			cin >> areaConstruida;
			ca.setAreaContruida(areaConstruida);

			cout << "Qual o tipo de oferta? " << endl << "[1]Para vender" << endl << "[2]Para alugar" << endl;
			cin >> tipoDeOferta;

			if (tipoDeOferta != 1 && tipoDeOferta != 2) {
				cout << "Opcao invalida!" << endl;
				//Break; --> para quando o loop de menu for implementado
			}
			ca.setTipoOferta(tipoDeOferta);

			cout << "Digite o preco: " << endl;
			cin >> preco;
			ca.setPreco(preco);

			cout << "Digite o nome da rua: " << endl;
			cin.ignore();
			getline(cin, street);
			ca.setRua(street);

			cout << "Digite o numero do imovel: " << endl;
			cin >> numeroEnder;
			ca.setNumero(numeroEnder);

			cout << "Digite o nome do bairro: " << endl;
			cin.ignore();
			getline(cin, hood);
			ca.setBairro(hood);

			cout << "Digite o CEP do local: " << endl;
			getline(cin, cep);
			ca.setCep(cep);

			cout << "Digite o nome da cidade: " << endl;
			getline(cin, cidade);
			ca.setCidade(cidade);

			arquivo << ca.ToSTRING1();

		}
		else if (opcao2 == 2) {
			Apartamento ap = Apartamento();
			int numeroDeQuartos = 0, numeroDeVagas = 0;
			double areaDoAp = 0, valorDoCondominio = 0;
			string Posicao;

			cout << "Digite o titulo anuncio: " << endl;
			cin.ignore();
			getline(cin, titulo_Anuncio);
			ap.setTituloAnuncio(titulo_Anuncio);

			cout << "Digite o numero de quartos: " << endl;
			cin >> numeroDeQuartos;
			ap.setnumQuartos(numeroDeQuartos);

			cout << "Digite o numero de vagas na garagem: " << endl;
			cin >> numeroDeVagas;
			ap.setnumVagas(numeroDeVagas);

			cout << "Digite a area do apartamento: " << endl;
			cin >> areaDoAp;
			ap.setArea(areaDoAp);

			cout << "Digite a posicao do apartamento com relacao ao sol: " << endl;
			cin.ignore();
			getline(cin, Posicao);
			ap.setPosicao(Posicao);

			cout << "Digite o valor do condominio: " << endl;
			cin >> valorDoCondominio;
			ap.setValorCondominio(valorDoCondominio);

			cout << "Qual o tipo de oferta? " << endl << "[1]Para vender" << endl << "[2]Para alugar" << endl;
			cin >> tipoDeOferta;

			if (tipoDeOferta != 1 && tipoDeOferta != 2) {
				cout << "Opcao invalida!" << endl;
				//Break; --> para quando o loop de menu for implementado
			}
			ap.setTipoOferta(tipoDeOferta);


			cout << "Digite o preco: " << endl;
			cin >> preco;
			ap.setPreco(preco);

			cout << "Digite o nome da rua: " << endl;
			cin.ignore();
			getline(cin, street);
			ap.setRua(street);

			cout << "Digite o numero do imovel: " << endl;
			cin >> numeroEnder;
			ap.setNumero(numeroEnder);

			cout << "Digite o nome do bairro: " << endl;
			cin.ignore();
			getline(cin, hood);
			ap.setBairro(hood);

			cout << "Digite o CEP do local: " << endl;
			getline(cin, cep);
			ap.setCep(cep);

			cout << "Digite o nome da cidade: " << endl;
			getline(cin, cidade);
			ap.setCidade(cidade);

			arquivo << ap.ToSTRING2();
		}
		else if (opcao2 == 3) {
			double areaterreno = 0;
			string descricao;
			Terreno te = Terreno();

			cout << "Digite o titulo anuncio: " << endl;
			cin.ignore();
			getline(cin, titulo_Anuncio);
			te.setTituloAnuncio(titulo_Anuncio);

			cout << "Digite a area do terreno: " << endl;
			cin >> areaterreno;
			te.setArea(areaterreno);

			cout << "De a descricao detalhada do terreno: " << endl;
			cin.ignore();
			getline(cin, descricao);
			te.setDescricaoTerreno(descricao);

			cout << "Qual o tipo de oferta? " << endl << "[1]Para vender" << endl << "[2]Para alugar" << endl;
			cin >> tipoDeOferta;

			if (tipoDeOferta != 1 && tipoDeOferta != 2) {
				cout << "Opcao invalida!" << endl;
				//Break; --> para quando o loop de menu for implementado
			}
			te.setTipoOferta(tipoDeOferta);


			cout << "Digite o preco: " << endl;
			cin >> preco;
			te.setPreco(preco);


			cout << "Digite o nome da rua: " << endl;
			cin.ignore();
			getline(cin, street);
			te.setRua(street);

			cout << "Digite o numero do imovel: " << endl;
			cin >> numeroEnder;
			te.setNumero(numeroEnder);

			cout << "Digite o nome do bairro: " << endl;
			cin.ignore();
			getline(cin, hood);
			te.setBairro(hood);

			cout << "Digite o CEP do local: " << endl;
			getline(cin, cep);
			te.setCep(cep);

			cout << "Digite o nome da cidade: " << endl;
			getline(cin, cidade);
			te.setCidade(cidade);

			arquivo << te.ToSTRING3();


		}/// Fim cadastro de Imoveis
	}

		///Listagem de Imoveis
	 if (opcao1 == 2) {
		string tdi_str, str_tituloAnuncio, str_numero_pav, str_num_quartos, str_areaDo_terreno, str_area_construida, str_tipo_oferta,
		str_preco, str_rua, str_numeroDaCasa, str_bairro, str_cep, str_cidade;

		int tdi, int_num_pav, int_num_quartos, int_tipo_oferta, int_numeroDaCasa;			
		
		tdi = int_num_pav = int_num_quartos = int_tipo_oferta = int_numeroDaCasa = 0;


		double doub_area_terreno, doub_area_construida, doub_preco;
		char *pointer;
		
		 std::ifstream arquivo("listaDeImoveis.txt", ios::in);

		while (!arquivo.eof()) {

			getline(arquivo, tdi_str);
			istringstream(tdi_str) >> tdi;
			
			cout << tdi << endl;
			if (tdi == 1) {
				
				Casa cs = Casa();
				getline(arquivo, str_tituloAnuncio);
				cs.setTituloAnuncio(str_tituloAnuncio);

				getline(arquivo, str_numero_pav);
				istringstream(str_numero_pav) >> int_num_pav;
				cs.setnumPav(int_num_pav);

				getline(arquivo, str_num_quartos);
				istringstream(str_num_quartos) >> int_num_quartos;
				cs.setnumQuartos(int_num_quartos);

				getline(arquivo, str_areaDo_terreno);
				doub_area_terreno = strtod(str_areaDo_terreno.c_str(), &pointer);
				cs.setAreaTerreno(doub_area_terreno);
				//delete pointer;

				getline(arquivo, str_area_construida);
				doub_area_construida = strtod(str_area_construida.c_str(), &pointer);
				cs.setAreaConstruida(doub_area_construida);

				getline(arquivo, str_tipo_oferta);
				istringstream(str_tipo_oferta) >> int_tipo_oferta;
				cs.setTipoOferta(int_tipo_oferta);

				getline(arquivo, str_preco);
				doub_preco = strtod(str_preco.c_str(), &pointer);
				cs.setPreco(doub_preco);

				getline(arquivo, str_rua);
				cs.setRua(str_rua);

				getline(arquivo, str_numeroDaCasa);
				istringstream(str_numeroDaCasa) >> int_numeroDaCasa;
				cs.setNumero(int_numeroDaCasa);

				getline(arquivo, str_bairro);
				cs.setBairro(str_bairro);

				getline(arquivo, str_cep);
				cs.setCep(str_cep);

				getline(arquivo, str_cidade);
				cs.setCep(str_cidade);

				cs.toStringCasa();

			}
		}
	 }

	arquivo.close();


	return 0;
}
