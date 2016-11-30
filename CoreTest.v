`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:09:59 10/18/2016
// Design Name:   Core
// Module Name:   C:/Users/imana/OneDrive/Documents/GitHub/Core0/CoreTest.v
// Project Name:  Core0
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Core
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CoreTest;

	// Inputs
	reg clk;
	reg [15:0] ReadData;

	// Outputs
	wire [15:0] Address;
	wire [15:0] WriteData;
	wire [15:0] WriteEnable;

	// Instantiate the Unit Under Test (UUT)
	Core uut (
		.clk(clk), 
		.ReadData(ReadData), 
		.Address(Address), 
		.WriteData(WriteData), 
		.WriteEnable(WriteEnable)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		ReadData = 0;

		// Wait 100 ns for global reset to finish
		#11;
		
		ReadData = 3;
		#5;
        
		// Add stimulus here

	end
      always 
		#5 clk <=~clk;
endmodule

