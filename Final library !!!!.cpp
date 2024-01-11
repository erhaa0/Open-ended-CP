#include<iostream>
using namespace std;

struct book;
int library();

int main()
{
    library();	
}

struct book
{
    string title;
    string author;
    string publishyear;
    string genre;
};


void bubbleSort(book arr[], int n) 
    {
    	
     for(int i=0;i<n-1;i++)
     
    {
    	
     for(int j=0;j<n-i-1;j++) 
     
	{ 
	
     if(arr[j].publishyear>arr[j+1].publishyear) 
     
	{
		
     swap(arr[j], arr[j+1]);       
     
	}
	
    }
    }
}

int library()
{
    const int i = 7;
    int fiction = 0;
    int non = 0;
    book b[i];

    for(int x = 1; x <= 6; x++)
    {
        cout << "Enter information about your favourite book!\n";
        
        cout << "Book title: ";
        cin >> b[x].title;
        
        cout << "Author: ";
        cin >> b[x].author;
        
        cout << "Publishing year: ";
        cin >> b[x].publishyear;
        
        cout << "Genre: ";
        cin >> b[x].genre;

       
        if (b[x].genre == "Fiction" || b[x].genre == "fiction") 
		{
            fiction++;
        }
        else if (b[x].genre == "non" || b[x].genre == "Non") 
		{
            non++;
        }
    }


    bubbleSort(b, i);

    cout << "Sorted information based on publishing year: \n";
    for (int a=1;a<=6;a++) {
    cout << "Title: " << b[a].title << "\tAuthor: " << b[a].author << "\tPublishing year: " << b[a].publishyear << "\tGenre: " << b[a].genre << endl;
}


    
    cout << "Fiction: " << fiction << endl;
    cout << "Non-fiction: " << non;

    return 0;
}

