// kabarcık _sıralma_algaritması.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
kabarcik(int d[], int n)/*d[] dizide tutulacak elemanların buluncagı yer n eleman sayısı*/
{
	int gecici, k, hareket; 
	for ( hareket = 0; hareket < n-1; hareket++) /*0 dan başlayıp n sayısına kadar devam eden döngü her çevrimde bir eleman yerine oturcak */
	{
		for(k=0;k<n-1-hareket;k++)/**/

			if (d[k] > d[k + 1]) {/*komşular karşılaştırılıyor*/
				gecici = d[k];/*yer degiştirme kodu*/
				d[k] = d[k + 1];
				d[k + 1] = gecici;
			}
	}
}/* 
 yer degiştirme işleminde komşu iki eleman karşılaştırılır  heer bir dolaşmada bir eleman yerine oturur 
 kabarcık sıralamasının zaman karmaşıklığı O(n^2) dir özel bir durumda eger n elemandan yanlızca c tanesi sıralı degilse O(cn) olmaktadır 
 tasarımı basiat etkin bir algoritma degildir 
 */

