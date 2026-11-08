#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0017193c
// Address: 0x17193c - 0x1719b4
void entry_0017193c_0x17193c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017193c_0x17193c");
#endif

    ctx->pc = 0x17193cu;

    // 0x17193c: 0x0  nop
    ctx->pc = 0x17193cu;
    // NOP
    // 0x171940: 0x34840  sll         $t1, $v1, 1
    ctx->pc = 0x171940u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x171944: 0x12b2821  addu        $a1, $t1, $t3
    ctx->pc = 0x171944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x171948: 0x85660000  lh          $a2, 0x0($t3)
    ctx->pc = 0x171948u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17194c: 0x84a70006  lh          $a3, 0x6($a1)
    ctx->pc = 0x17194cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x171950: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x171950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171954: 0x84a80008  lh          $t0, 0x8($a1)
    ctx->pc = 0x171954u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x171958: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x171958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17195c: 0x856a0004  lh          $t2, 0x4($t3)
    ctx->pc = 0x17195cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x171960: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x171960u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x171964: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x171964u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171968: 0x2468821  addu        $s1, $s2, $a2
    ctx->pc = 0x171968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x17196c: 0x1073023  subu        $a2, $t0, $a3
    ctx->pc = 0x17196cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x171970: 0x85650002  lh          $a1, 0x2($t3)
    ctx->pc = 0x171970u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x171974: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x171974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x171978: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x171978u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x17197c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x17197cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x171980: 0x254a0006  addiu       $t2, $t2, 0x6
    ctx->pc = 0x171980u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6));
    // 0x171984: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x171984u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x171988: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x171988u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17198c: 0x46801320  cvt.s.w     $f12, $f2
    ctx->pc = 0x17198cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x171990: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x171990u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x171994: 0x0  nop
    ctx->pc = 0x171994u;
    // NOP
    // 0x171998: 0x0  nop
    ctx->pc = 0x171998u;
    // NOP
    // 0x17199c: 0x10a40026  beq         $a1, $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x17199Cu;
    {
        const bool branch_taken_0x17199c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x17199c) {
            ctx->pc = 0x171A38u;
            return;
        }
    }
    ctx->pc = 0x1719A4u;
    // 0x1719a4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1719A4u;
    {
        const bool branch_taken_0x1719a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1719a4) {
            ctx->pc = 0x1719B4u;
            return;
        }
    }
    ctx->pc = 0x1719ACu;
    // 0x1719ac: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1719ACu;
    {
        const bool branch_taken_0x1719ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1719ac) {
            ctx->pc = 0x171BBCu;
            return;
        }
    }
    ctx->pc = 0x1719B4u;
}
