class Solution {
    public String interpret(String command) {
        StringBuilder result = new StringBuilder();
        int n = command.length();
        
        for (int i = 0; i < n; i++) {
            char c = command.charAt(i);
            
            if (c == 'G') {
                result.append('G');
            } else if (c == '(') {
                if (command.charAt(i + 1) == ')') {
                    result.append('o');
                    i++; // Skip the closing ')'
                } else {
                    result.append("al");
                    i += 3; // Skip 'a', 'l', and ')'
                }
            }
        }
        
        return result.toString();
    }
}