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

// Function: entry_001642cc
// Address: 0x1642cc - 0x164344
void entry_001642cc_0x1642cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001642cc_0x1642cc");
#endif

    ctx->pc = 0x1642ccu;

    // 0x1642cc: 0xa62201e8  sh          $v0, 0x1E8($s1)
    ctx->pc = 0x1642ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 488), (uint16_t)GPR_U32(ctx, 2));
    // 0x1642d0: 0x8e240340  lw          $a0, 0x340($s1)
    ctx->pc = 0x1642d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x1642d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1642d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1642d8: 0x8e43021c  lw          $v1, 0x21C($s2)
    ctx->pc = 0x1642d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 540)));
    // 0x1642dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1642dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1642e0: 0xc6240344  lwc1        $f4, 0x344($s1)
    ctx->pc = 0x1642e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1642e4: 0xc6420228  lwc1        $f2, 0x228($s2)
    ctx->pc = 0x1642e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1642e8: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x1642e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x1642ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1642ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1642f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1642f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1642f4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1642f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1642f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1642f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1642fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1642fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164300: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x164300u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x164304: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x164304u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x164308: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x164308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x16430c: 0xe6200348  swc1        $f0, 0x348($s1)
    ctx->pc = 0x16430cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 840), bits); }
    // 0x164310: 0xc620034c  lwc1        $f0, 0x34C($s1)
    ctx->pc = 0x164310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164314: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x164314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164318: 0x0  nop
    ctx->pc = 0x164318u;
    // NOP
    // 0x16431c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x16431Cu;
    {
        const bool branch_taken_0x16431c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16431c) {
            ctx->pc = 0x164344u;
            return;
        }
    }
    ctx->pc = 0x164324u;
    // 0x164324: 0xc6200348  lwc1        $f0, 0x348($s1)
    ctx->pc = 0x164324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164328: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x164328u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16432c: 0x0  nop
    ctx->pc = 0x16432cu;
    // NOP
    // 0x164330: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x164330u;
    {
        const bool branch_taken_0x164330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164330) {
            ctx->pc = 0x164344u;
            return;
        }
    }
    ctx->pc = 0x164338u;
    // 0x164338: 0x8e420234  lw          $v0, 0x234($s2)
    ctx->pc = 0x164338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
    // 0x16433c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16433cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x164340: 0xae420234  sw          $v0, 0x234($s2)
    ctx->pc = 0x164340u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 2));
    ctx->pc = 0x164344u;
}
