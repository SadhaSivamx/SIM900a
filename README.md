### SIM900a
A Github repository for SIM900a functionalities that include receiving and sending SMS and calls
### Common Cmds
| Commands  | Purpose |
| ------------- | ------------- |
| AT  | This command is used to initialize the modem and check if it's responding. It's typically sent to verify that the modem is connected and ready to accept further commands.  |
| ATD+91xxxxxxxxxx  | This command is indeed used to make a call to the number specified after ATD. +91 is the country code for India. Replace xxxxxxxxxx with the actual phone number you want to call |
| AT+CLIP=1 | This command enables the presentation of the caller's number in the incoming call. When a call comes in, you'll see the caller's number if this command is set to 1. |
| ATA | This command is used to answer an incoming call. When you receive a call and send ATA, it will pick up the call. |
| AT+CMGF=1 | This command sets the module in SMS text mode. After setting the module to this mode, you can send SMS text messages using the AT commands |
| AT+CMGS="[recipient_number]" | This command initiates the process of sending an SMS. Replace [recipient_number] with the phone number of the recipient. |
| Ctrl+z | This command is used to signify the end of the message when sending an SMS. In most cases, you actually send Ctrl+z or Ctrl+z followed by the Enter key (carriage return), depending on the terminal program or interface you're using. |
### Circuit Connections
<table>
  <tr>
    <td style="padding: 10px;">
      <h3>ARDUINO - SIM900a</h3>
      <table>
        <tr>
          <th>ARDUINO</th>
          <th>SIM900a</th>
        </tr>
        <tr>
          <td>GND</td>
          <td>GND</td>
        </tr>
        <tr>
          <td>Di2</td>
          <td>TXD</td>
        </tr>
        <tr>
          <td>Di3</td>
          <td>RXD</td>
        </tr>
      </table>
    </td>
    <td style="padding: 10px;">
      <h3>Speaker - SIM900a</h3>
      <table>
        <tr>
          <th>Speaker</th>
          <th>SIM900a</th>
        </tr>
        <tr>
          <td>GND</td>
          <td>SPN</td>
        </tr>
        <tr>
          <td>POS</td>
          <td>SPP</td>
        </tr>
      </table>
    </td>
    <td style="padding: 10px;">
      <h3>Microphone - SIM900a</h3>
      <table>
        <tr>
          <th>Microphone</th>
          <th>SIM900a</th>
        </tr>
        <tr>
          <td>GND</td>
          <td>MCN</td>
        </tr>
        <tr>
          <td>POS</td>
          <td>MCP</td>
        </tr>
      </table>
    </td>
  </tr>
</table>

### References 
The Following github repo was built with the help of this [Video](https://www.youtube.com/watch?v=UlOQ-EUOA3M)
