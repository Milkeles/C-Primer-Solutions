> To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

When we're calculating something important it's better to be as precise as possible and ensure the datatypes we use can store the values. However, in this case the rate most likely won't have more than 6 digits after the floating point, so we can use ``float`` and for the principal and payment we'll use ``long`` or ``long long``, since the payment is usually not more than 10 000, it's safer to use ``long long``. 
