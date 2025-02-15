
Preprocessor for Compilation Stages
===================================

This project implements a Preprocessor which is the first stage in the process of compiling source code. The preprocessor is responsible for handling macro replacements, removing comments, and including header files, which are essential tasks before the actual compilation begins. 

 Features:
> Macro Replacement: The preprocessor identifies and replaces macros (both function>like and object>like) in the source code.
> Comment Removal: The preprocessor removes both single>line (//) and multi>line (/ ... /) comments from the code to ensure they don't interfere with the compilation.
> Header File Inclusion: It handles the inclusion of header files using the include directive, ensuring that the necessary header files are included in the source code.
> Error Handling: The preprocessor catches and reports errors like incorrect macro definitions, missing header files, and malformed preprocessor directives.

 Components:
> Macro Replacement: The preprocessor scans the code for pre>defined macros and replaces them with their corresponding values or code snippets.
> Comment Removal: The code looks for comments and removes them, making sure that they don't affect the program's execution or logic.
> Header File Inclusion: It parses include directives and includes the appropriate files, ensuring that dependencies are correctly linked in the source code.
  
 Key Features Implemented:
1. Macro Replacement:
    > The preprocessor identifies define macros and replaces occurrences of these macros in the code with their corresponding value.
    > Function>like macros are also handled, where arguments are substituted correctly.

2. Comment Removal:
    > Both single>line (//) and multi>line (/ ... /) comments are removed from the source code to prevent unnecessary code from reaching the compilation stage.
    
3. Header File Inclusion:
    > The preprocessor handles include directives and includes external header files either from system libraries or user>defined locations.

 How It Works:
1. Input: The source code is passed through the preprocessor.
2. Processing:
    > The code is scanned for define macros, comments, and include directives.
    > Macros are replaced with their corresponding values.
    > Comments are stripped from the code.
    > Header files are included where necessary.
3. Output: The processed code is generated without macros, comments, or unresolved include statements, ready for the next compilation stages.

 Example:

Input Code:
c
include "header.h"  // Including header file
define PI 3.14

int main() {
    // Calculate area of circle
    float area = PI  radius  radius;
    return 0;
}


Output Code:
c
include "header.h"

int main() {
    float area = 3.14  radius  radius;
    return 0;
}


 How to Use:
1. Clone the repository.
2. Add your C source code to the input folder or file.
3. Run the preprocessor on the source code.
4. The processed code will be generated, free from macros, comments, and with header files properly included.
   
 Future Improvements:
> Support for more advanced preprocessor directives (e.g., ifdef, ifndef).
> Error handling for missing files or invalid macro usage.
> Optimization for handling complex macro replacements.
