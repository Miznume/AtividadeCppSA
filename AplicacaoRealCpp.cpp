#include <iostream>
using namespace std;

int main(){
	int  QuantidadeHora;
	double ValorHora, fgts, ir,inss, SalarioBruto, TotalDesconto, SalarioLiquido;
	
	cout << "Folha de pagamento\n";
	cout << "Digite o valor da hora trabalhada:\n";
	cin >> ValorHora;
	cout << "Digite a quantidade de hora trabalhada:\n";
	cin >> QuantidadeHora;
	
	SalarioBruto = ValorHora * QuantidadeHora;
    inss = SalarioBruto * 0.10;
    fgts = SalarioBruto * 0.11;
	
	if(SalarioBruto > 900){
		cout << "\nSalario Bruto: " << SalarioBruto;
		ir = SalarioBruto * 0.05;
	    TotalDesconto = ir + inss + fgts;
	    SalarioLiquido =  SalarioBruto - TotalDesconto ;
		cout << "\nImposto de renda:   R$ " << ir;
		cout << "\nINSS:               R$ " << inss;
		cout << "\nFGTS:               R$ " << fgts;
		cout << "\nTotal de desconto:  R$ " << TotalDesconto ;
	    cout << "\nSalario Liquido;    R$ "   << SalarioLiquido;
	    
	}else if (SalarioBruto > 1500){
		cout << "\nSalario Bruto:      R$ " << SalarioBruto;
		ir = SalarioBruto * 0.10;
	    TotalDesconto = ir + inss + fgts;
	    SalarioLiquido =  SalarioBruto - TotalDesconto ;
		cout << "\nImposto de renda:   R$ " << ir;
		cout << "\nINSS:               R$ " << inss;
		cout << "\nFGTS:               R$ " << fgts;
		cout << "\nTotal de desconto:  R$ " << TotalDesconto ;
	    cout << "\nSalario Liquido:    R$ " << SalarioLiquido;
	    
	}else if(SalarioBruto > 2500){
		cout << "\nSalario Bruto:      R$ " << SalarioBruto;
		ir = SalarioBruto * 0.20;
	    TotalDesconto = ir + inss + fgts;
	    SalarioLiquido =  SalarioBruto - TotalDesconto ;
		cout << "\nImposto de renda:   R$ " << ir;
		cout << "\nINSS:               R$ " << inss;
		cout << "\nFGTS:               R$ " << fgts;
		cout << "\nTotal de desconto:  R$ " << TotalDesconto ;
	    cout << "\nSalario Liquido;    R$ " << SalarioLiquido;
	    
	}else{
		cout << "\nSalario Bruto:      R$ " << SalarioBruto;
		ir = 0;
	    TotalDesconto = ir + inss + fgts;
	    SalarioLiquido =  SalarioBruto - TotalDesconto ;
		cout << "\nImposto de renda:   R$ " << ir;
		cout << "\nINSS:               R$ " << inss;
		cout << "\nFGTS:               R$ " << fgts;
		cout << "\nTotal de desconto:  R$ " << TotalDesconto ;
	    cout << "\nSalario Liquido;    R$ " << SalarioLiquido;
	}
	
	return 0;
}
