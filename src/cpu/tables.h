/* Generated by buildtables.py */

static void (*addrtable_c02[256])() = {
/*        |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  A  |  B  |  C  |  D  |  E  |  F  |     */
/* 0 */    imp8, indx, immm,  imp,   zp,   zp,   zp,   zp,  imp, immm,  acc,  imp, abso, abso, abso,zprel, /* 0 */
/* 1 */     rel, indy, ind0,  imp,   zp,  zpx,  zpx,   zp,  imp, absy,  acc,  imp, abso, absx, absx,zprel, /* 1 */
/* 2 */    abso, indx, immm,  imp,   zp,   zp,   zp,   zp,  imp, immm,  acc,  imp, abso, abso, abso,zprel, /* 2 */
/* 3 */     rel, indy, ind0,  imp,  zpx,  zpx,  zpx,   zp,  imp, absy,  acc,  imp, absx, absx, absx,zprel, /* 3 */
/* 4 */     imp, indx, immm,  imp, immm,   zp,   zp,   zp,  imp, immm,  acc,  imp, abso, abso, abso,zprel, /* 4 */
/* 5 */     rel, indy, ind0,  imp, immm,  zpx,  zpx,   zp,  imp, absy,  imp,  imp,  imp, absx, absx,zprel, /* 5 */
/* 6 */     imp, indx, immm,  imp,   zp,   zp,   zp,   zp,  imp, immm,  acc,  imp,  ind, abso, abso,zprel, /* 6 */
/* 7 */     rel, indy, ind0,  imp,  zpx,  zpx,  zpx,   zp,  imp, absy,  imp,  imp, ainx, absx, absx,zprel, /* 7 */
/* 8 */     rel, indx, immm,  imp,   zp,   zp,   zp,   zp,  imp, immm,  imp,  imp, abso, abso, abso,zprel, /* 8 */
/* 9 */     rel, indy, ind0,  imp,  zpx,  zpx,  zpy,   zp,  imp, absy,  imp,  imp, abso, absx, absx,zprel, /* 9 */
/* A */    immx, indx, immx,  imp,   zp,   zp,   zp,   zp,  imp, immm,  imp,  imp, abso, abso, abso,zprel, /* A */
/* B */     rel, indy, ind0,  imp,  zpx,  zpx,  zpy,   zp,  imp, absy,  imp,  imp, absx, absx, absy,zprel, /* B */
/* C */    immx, indx, immm,  imp,   zp,   zp,   zp,   zp,  imp, immm,  imp,  imp, abso, abso, abso,zprel, /* C */
/* D */     rel, indy, ind0,  imp, immm,  zpx,  zpx,   zp,  imp, absy,  imp,  imp,  imp, absx, absx,zprel, /* D */
/* E */    immx, indx, immm,  imp,   zp,   zp,   zp,   zp,  imp, immm,  imp,  imp, abso, abso, abso,zprel, /* E */
/* F */     rel, indy, ind0,  imp, immm,  zpx,  zpx,   zp,  imp, absy,  imp,  imp,  imp, absx, absx,zprel  /* F */
};

static void (*addrtable_c816[256])() = {
/*        |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  A  |  B  |  C  |  D  |  E  |  F  |     */
/* 0 */    imp8, indx, imp8,   sr,   zp,   zp,   zp,indl0,  imp, immm,  acc,  imp, abso, abso, abso, absl, /* 0 */
/* 1 */     rel, indy, ind0,sridy,   zp,  zpx,  zpx,indly,  imp, absy,  acc,  imp, abso, absx, absx,abslx, /* 1 */
/* 2 */    abso, indx, absl,   sr,   zp,   zp,   zp,indl0,  imp, immm,  acc,  imp, abso, abso, abso, absl, /* 2 */
/* 3 */     rel, indy, ind0,sridy,  zpx,  zpx,  zpx,indly,  imp, absy,  acc,  imp, absx, absx, absx,abslx, /* 3 */
/* 4 */     imp, indx, imm8,   sr,  bmv,   zp,   zp,indl0,  imp, immm,  acc,  imp, abso, abso, abso, absl, /* 4 */
/* 5 */     rel, indy, ind0,sridy,  bmv,  zpx,  zpx,indly,  imp, absy,  imp,  imp, absl, absx, absx,abslx, /* 5 */
/* 6 */     imp, indx,rel16,   sr,   zp,   zp,   zp,indl0,  imp, immm,  acc,  imp,  ind, abso, abso, absl, /* 6 */
/* 7 */     rel, indy, ind0,sridy,  zpx,  zpx,  zpx,indly,  imp, absy,  imp,  imp, ainx, absx, absx,abslx, /* 7 */
/* 8 */     rel, indx,rel16,   sr,   zp,   zp,   zp,indl0,  imp, immm,  imp,  imp, abso, abso, abso, absl, /* 8 */
/* 9 */     rel, indy, ind0,sridy,  zpx,  zpx,  zpy,indly,  imp, absy,  imp,  imp, abso, absx, absx,abslx, /* 9 */
/* A */    immx, indx, immx,   sr,   zp,   zp,   zp,indl0,  imp, immm,  imp,  imp, abso, abso, abso, absl, /* A */
/* B */     rel, indy, ind0,sridy,  zpx,  zpx,  zpy,indly,  imp, absy,  imp,  imp, absx, absx, absy,abslx, /* B */
/* C */    immx, indx, imm8,   sr,   zp,   zp,   zp,indl0,  imp, immm,  imp,  imp, abso, abso, abso, absl, /* C */
/* D */     rel, indy, ind0,sridy, ind0,  zpx,  zpx,indly,  imp, absy,  imp,  imp,aindl, absx, absx,abslx, /* D */
/* E */    immx, indx, imm8,   sr,   zp,   zp,   zp,indl0,  imp, immm,  imp,  imp, abso, abso, abso, absl, /* E */
/* F */     rel, indy, ind0,sridy,imm16,  zpx,  zpx,indly,  imp, absy,  imp,  imp, ainx, absx, absx,abslx  /* F */
};

static void (*optable_c02[256])() = {
/*        |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  A  |  B  |  C  |  D  |  E  |  F  |     */
/* 0 */      brk,  ora,  nop,  nop,  tsb,  ora,  asl, rmb0,  php,  ora,  asl,  nop,  tsb,  ora,  asl, bbr0, /* 0 */
/* 1 */      bpl,  ora,  ora,  nop,  trb,  ora,  asl, rmb1,  clc,  ora,  inc,  nop,  trb,  ora,  asl, bbr1, /* 1 */
/* 2 */      jsr,  and,  nop,  nop,  bit,  and,  rol, rmb2,  plp,  and,  rol,  nop,  bit,  and,  rol, bbr2, /* 2 */
/* 3 */      bmi,  and,  and,  nop,  bit,  and,  rol, rmb3,  sec,  and,  dec,  nop,  bit,  and,  rol, bbr3, /* 3 */
/* 4 */      rti,  eor,  nop,  nop,  nop,  eor,  lsr, rmb4,  pha,  eor,  lsr,  nop,  jmp,  eor,  lsr, bbr4, /* 4 */
/* 5 */      bvc,  eor,  eor,  nop,  nop,  eor,  lsr, rmb5,  cli,  eor,  phy,  nop,  nop,  eor,  lsr, bbr5, /* 5 */
/* 6 */      rts,  adc,  nop,  nop,  stz,  adc,  ror, rmb6,  pla,  adc,  ror,  nop,  jmp,  adc,  ror, bbr6, /* 6 */
/* 7 */      bvs,  adc,  adc,  nop,  stz,  adc,  ror, rmb7,  sei,  adc,  ply,  nop,  jmp,  adc,  ror, bbr7, /* 7 */
/* 8 */      bra,  sta,  nop,  nop,  sty,  sta,  stx, smb0,  dey,  bit,  txa,  nop,  sty,  sta,  stx, bbs0, /* 8 */
/* 9 */      bcc,  sta,  sta,  nop,  sty,  sta,  stx, smb1,  tya,  sta,  txs,  nop,  stz,  sta,  stz, bbs1, /* 9 */
/* A */      ldy,  lda,  ldx,  nop,  ldy,  lda,  ldx, smb2,  tay,  lda,  tax,  nop,  ldy,  lda,  ldx, bbs2, /* A */
/* B */      bcs,  lda,  lda,  nop,  ldy,  lda,  ldx, smb3,  clv,  lda,  tsx,  nop,  ldy,  lda,  ldx, bbs3, /* B */
/* C */      cpy,  cmp,  nop,  nop,  cpy,  cmp,  dec, smb4,  iny,  cmp,  dex,  wai,  cpy,  cmp,  dec, bbs4, /* C */
/* D */      bne,  cmp,  cmp,  nop,  nop,  cmp,  dec, smb5,  cld,  cmp,  phx,  dbg,  nop,  cmp,  dec, bbs5, /* D */
/* E */      cpx,  sbc,  nop,  nop,  cpx,  sbc,  inc, smb6,  inx,  sbc,  nop,  nop,  cpx,  sbc,  inc, bbs6, /* E */
/* F */      beq,  sbc,  sbc,  nop,  nop,  sbc,  inc, smb7,  sed,  sbc,  plx,  nop,  nop,  sbc,  inc, bbs7  /* F */
};

static void (*optable_c816[256])() = {
/*        |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  A  |  B  |  C  |  D  |  E  |  F  |     */
/* 0 */      brk,  ora,  cop,  ora,  tsb,  ora,  asl,  ora,  php,  ora,  asl,  phd,  tsb,  ora,  asl,  ora, /* 0 */
/* 1 */      bpl,  ora,  ora,  ora,  trb,  ora,  asl,  ora,  clc,  ora,  inc,  tcs,  trb,  ora,  asl,  ora, /* 1 */
/* 2 */      jsr,  and,  jsl,  and,  bit,  and,  rol,  and,  plp,  and,  rol,  pld,  bit,  and,  rol,  and, /* 2 */
/* 3 */      bmi,  and,  and,  and,  bit,  and,  rol,  and,  sec,  and,  dec,  tsc,  bit,  and,  rol,  and, /* 3 */
/* 4 */      rti,  eor,  wdm,  eor,  mvp,  eor,  lsr,  eor,  pha,  eor,  lsr,  phk,  jmp,  eor,  lsr,  eor, /* 4 */
/* 5 */      bvc,  eor,  eor,  eor,  mvn,  eor,  lsr,  eor,  cli,  eor,  phy,  tcd,  jml,  eor,  lsr,  eor, /* 5 */
/* 6 */      rts,  adc,  per,  adc,  stz,  adc,  ror,  adc,  pla,  adc,  ror,  rtl,  jmp,  adc,  ror,  adc, /* 6 */
/* 7 */      bvs,  adc,  adc,  adc,  stz,  adc,  ror,  adc,  sei,  adc,  ply,  tdc,  jmp,  adc,  ror,  adc, /* 7 */
/* 8 */      bra,  sta,  brl,  sta,  sty,  sta,  stx,  sta,  dey,  bit,  txa,  phb,  sty,  sta,  stx,  sta, /* 8 */
/* 9 */      bcc,  sta,  sta,  sta,  sty,  sta,  stx,  sta,  tya,  sta,  txs,  txy,  stz,  sta,  stz,  sta, /* 9 */
/* A */      ldy,  lda,  ldx,  lda,  ldy,  lda,  ldx,  lda,  tay,  lda,  tax,  plb,  ldy,  lda,  ldx,  lda, /* A */
/* B */      bcs,  lda,  lda,  lda,  ldy,  lda,  ldx,  lda,  clv,  lda,  tsx,  tyx,  ldy,  lda,  ldx,  lda, /* B */
/* C */      cpy,  cmp,  rep,  cmp,  cpy,  cmp,  dec,  cmp,  iny,  cmp,  dex,  wai,  cpy,  cmp,  dec,  cmp, /* C */
/* D */      bne,  cmp,  cmp,  cmp,  pei,  cmp,  dec,  cmp,  cld,  cmp,  phx,  dbg,  jml,  cmp,  dec,  cmp, /* D */
/* E */      cpx,  sbc,  sep,  sbc,  cpx,  sbc,  inc,  sbc,  inx,  sbc,  nop,  xba,  cpx,  sbc,  inc,  sbc, /* E */
/* F */      beq,  sbc,  sbc,  sbc,  pea,  sbc,  inc,  sbc,  sed,  sbc,  plx,  xce,  jsr,  sbc,  inc,  sbc  /* F */
};

static const uint32_t ticktable_c02[256] = {
/*        |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  A  |  B  |  C  |  D  |  E  |  F  |     */
/* 0 */       7,    6,    2,    1,    5,    3,    5,    5,    3,    2,    2,    1,    6,    4,    6,    5, /* 0 */
/* 1 */       2,    5,    5,    1,    5,    4,    6,    5,    2,    4,    2,    1,    6,    4,    7,    5, /* 1 */
/* 2 */       6,    6,    2,    1,    3,    3,    5,    5,    4,    2,    2,    1,    4,    4,    6,    5, /* 2 */
/* 3 */       2,    5,    5,    1,    4,    4,    6,    5,    2,    4,    2,    1,    4,    4,    7,    5, /* 3 */
/* 4 */       6,    6,    2,    1,    3,    3,    5,    5,    3,    2,    2,    1,    3,    4,    6,    5, /* 4 */
/* 5 */       2,    5,    5,    1,    4,    4,    6,    5,    2,    4,    3,    1,    8,    4,    7,    5, /* 5 */
/* 6 */       6,    6,    2,    1,    3,    3,    5,    5,    4,    2,    2,    1,    5,    4,    6,    5, /* 6 */
/* 7 */       2,    5,    5,    1,    4,    4,    6,    5,    2,    4,    4,    1,    6,    4,    7,    5, /* 7 */
/* 8 */       3,    6,    2,    1,    3,    3,    3,    5,    2,    2,    2,    1,    4,    4,    4,    5, /* 8 */
/* 9 */       2,    6,    5,    1,    4,    4,    4,    5,    2,    5,    2,    1,    4,    5,    5,    5, /* 9 */
/* A */       2,    6,    2,    1,    3,    3,    3,    5,    2,    2,    2,    1,    4,    4,    4,    5, /* A */
/* B */       2,    5,    5,    1,    4,    4,    4,    5,    2,    4,    2,    1,    4,    4,    4,    5, /* B */
/* C */       2,    6,    2,    1,    3,    3,    5,    5,    2,    2,    2,    3,    4,    4,    6,    5, /* C */
/* D */       2,    5,    5,    1,    4,    4,    6,    5,    2,    4,    3,    1,    4,    4,    7,    5, /* D */
/* E */       2,    6,    2,    1,    3,    3,    5,    5,    2,    2,    2,    1,    4,    4,    6,    5, /* E */
/* F */       2,    5,    5,    1,    4,    4,    6,    5,    2,    4,    4,    1,    4,    4,    7,    5  /* F */
};

static const uint32_t ticktable_c816[256] = {
/*        |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  A  |  B  |  C  |  D  |  E  |  F  |     */
/* 0 */       7,    6,    7,    4,    5,    3,    5,    6,    3,    2,    2,    4,    6,    4,    6,    5, /* 0 */
/* 1 */       2,    5,    5,    7,    5,    4,    6,    6,    2,    4,    2,    2,    6,    4,    7,    5, /* 1 */
/* 2 */       6,    6,    8,    4,    3,    3,    5,    6,    4,    2,    2,    5,    4,    4,    6,    5, /* 2 */
/* 3 */       2,    5,    5,    7,    4,    4,    6,    6,    2,    4,    2,    2,    4,    4,    7,    5, /* 3 */
/* 4 */       6,    6,    2,    4,    7,    3,    5,    6,    3,    2,    2,    3,    3,    4,    6,    5, /* 4 */
/* 5 */       2,    5,    5,    7,    7,    4,    6,    6,    2,    4,    3,    2,    4,    4,    7,    5, /* 5 */
/* 6 */       6,    6,    6,    4,    3,    3,    5,    6,    4,    2,    2,    6,    5,    4,    6,    5, /* 6 */
/* 7 */       2,    5,    5,    7,    4,    4,    6,    6,    2,    4,    4,    2,    6,    4,    7,    5, /* 7 */
/* 8 */       3,    6,    4,    4,    3,    3,    3,    6,    2,    2,    2,    3,    4,    4,    4,    5, /* 8 */
/* 9 */       2,    6,    5,    7,    4,    4,    4,    6,    2,    5,    2,    2,    4,    5,    5,    5, /* 9 */
/* A */       2,    6,    2,    4,    3,    3,    3,    6,    2,    2,    2,    4,    4,    4,    4,    5, /* A */
/* B */       2,    5,    5,    7,    4,    4,    4,    6,    2,    4,    2,    2,    4,    4,    4,    5, /* B */
/* C */       2,    6,    3,    4,    3,    3,    5,    6,    2,    2,    2,    3,    4,    4,    6,    5, /* C */
/* D */       2,    5,    5,    7,    6,    4,    6,    6,    2,    4,    3,    1,    6,    4,    7,    5, /* D */
/* E */       2,    6,    3,    4,    3,    3,    5,    6,    2,    2,    2,    3,    4,    4,    6,    5, /* E */
/* F */       2,    5,    5,    7,    5,    4,    6,    6,    2,    4,    4,    2,    8,    4,    7,    5  /* F */
};
