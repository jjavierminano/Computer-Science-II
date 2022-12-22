#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int i=0, n;
	vector <int> ventas;
	vector <vector<int> > n_vendedores;
	cin>>n;
	while (n>-2)
	{
		vector<int>aux;
		n_vendedores.push_back(aux);
		while(n>-1)
		{
			n_vendedores[i].push_back(n);
			cin>>n;
		}
		cin>>n;
		i++;
	}
	
	vector<int>v_suma;
	for(int i=0; i<n_vendedores.size(); i++)
	{
		int suma=0;
		for(int j=0; j<n_vendedores[i].size() && n_vendedores[i][j]>-1; j++)
		{
			suma= suma+ n_vendedores[i][j];
		}
		v_suma.push_back(suma);
	}
	
	cout<<"Las ventas de cada vendedor son: "<<endl;
	for(int t=0; t<n_vendedores.size(); t++)
	{
		cout<<t+1<<".- "<<v_suma[t]<<" (";
		for(int j=0; j<n_vendedores[t].size()-1; j++)
		{
			cout<<n_vendedores[t][j]<<"+";
		}
		cout<<n_vendedores[t][n_vendedores[t].size()-1]<<")"<<endl;
	}
	
	vector<int>indice;
	for(int j=0; j<v_suma.size(); j++)
	{
		indice.push_back(j);
	}
	
	for(int k=0; k<v_suma.size(); k++)
	{
		int auxl, maximo=k;
		for(int j=k+1; j<v_suma.size(); j++)
		{
			if(v_suma[indice[j]]>v_suma[indice[maximo]])
			{
				maximo=j;
			}
		}
		auxl=indice[k];
		indice[k]=indice[maximo];
		indice[maximo]=auxl;
	}
	
	cout<<"Las ventas de cada vendedor ordenadas son: "<<endl;
	for(int m=0; m<n_vendedores.size(); m++)
	{
		cout<<indice[m]+1<<".- "<<v_suma[indice[m]]<<" (";
		for(int j=0; j<n_vendedores[indice[m]].size()-1; j++)
		{
			cout<<n_vendedores[indice[m]][j]<<"+";
		}
		cout<<n_vendedores[indice[m]][n_vendedores[indice[m]].size()-1]<<")"<<endl;
	}
	return 0;
	
	
}




























