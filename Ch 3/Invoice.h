#ifndef CH_3_INVOICE_H
#define CH_3_INVOICE_H

class Invoice {
public:
    explicit Invoice( std::string, std::string, int, int);
    void setPartNumber( std::string );
    std::string getPartNumber() const;
    void setPartDescription( std::string );
    std::string getPartDescription() const;
    void setItemQuantity( int );
    int getItemQuantity() const;
    void setItemPrice( int );
    int getItemPrice() const;
    int getInvoiceAmount() const;

private:
    std::string number;
    std::string description;
    int quantity;
    int price;

};


#endif //CH_3_INVOICE_H
