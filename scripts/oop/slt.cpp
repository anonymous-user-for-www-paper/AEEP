void slt(Context* ctxt) {
  unsigned char* x = ctxt->s.pop();
  unsigned char* y = ctxt->s.pop();

	unsigned char* res = new unsigned char[100];
	memset(res, 0, sizeof(unsigned char) * 100);
	slt_ocall(x, y, res);
	ctxt->s.push(res);
}