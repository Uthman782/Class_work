#include<iostream>
#include<string>
using namespace std;

int main(){
//	int myNum = 5;               
//	float myFloatNum = 5.99;     
//	double myDoubleNum = 9.98;   
//	char myLetter = 'D';         
//	bool myBoolean = true;       
//	string myText = "Video provides a powerful way to help you prove your point. When you click Online Video, you can paste in the embed code for the video you want to add. You can also type a keyword to search online for the video that best fits your document.To make your document look professionally produced, Word provides header, footer, cover page, and text box designs that complement each other. For example, you can add a matching cover page, header, and sidebar. Click Insert and then choose the elements you want from the different galleries.Themes and styles also help keep your document coordinated. When you click Design and choose a new Theme, the pictures, charts, and SmartArt graphics change to match your new theme. When you apply styles, your headings change to match the new theme.Save time in Word with new buttons that show up where you need them. To change the way a picture fits in your document, click it and a button for layout options appears next to it. When you work on a table, click where you want to add a row or a column, and then click the plus sign.Reading is easier, too, in the new Reading view. You can collapse parts of the document and focus on the text you want. If you need to stop reading before you reach the end, Word remembers where you left off - even on another device."; 
//
//	cout<<"Int: "<<sizeof(myNum)<<" bytes"<<endl;  
//	cout<<"Float: "<<sizeof(myFloatNum)<<" bytes"<<endl;
//	cout<<"Double: "<<sizeof(myDoubleNum)<<" bytes"<<endl;
//	cout<<"Char: "<<sizeof(myLetter)<<" byte"<<endl; 
//	cout<<"Bool: "<<sizeof(myBoolean)<<" byte"<<endl; 
//	cout<<"String: "<<sizeof(myText)<<" bytes "<<endl;
//	int string = sizeof("Video"); 
//	cout<<string<<" bytes"<<endl;

	cout<<"\tInteger  SIZING"<<endl;
	cout<<"      int size: "<<sizeof(int)<<"bytes"<<endl;
	cout<<"short int size: "<<sizeof(short int)<<"bytes"<<endl;
	cout<<"Long  int size: "<<sizeof(long int)<<"bytes"<<endl;
	cout<<"\tFloat SIZING"<<endl;
	cout<<"    float   size: "<<sizeof(float)<<"bytes"<<endl;
	cout<<"   Double   size: "<<sizeof(double)<<"bytes"<<endl;
	cout<<"Long double size: "<<sizeof(long double)<<"bytes"<<endl;
	cout<<"\tCharacter SIZING"<<endl;
	cout<<"Character   size: "<<sizeof(char)<<"byte"<<endl;
	cout<<"\tString  SIZING"<<endl;
	cout<<"  String    size: "<<sizeof(string)<<"bytes"<<endl;
	cout<<"String no variable size: "<<sizeof("Uthman Khan")<<"bytes"<<endl;
	cout<<"String no variable size: "<<sizeof("")<<"byte"<<endl;
	return 0;
}