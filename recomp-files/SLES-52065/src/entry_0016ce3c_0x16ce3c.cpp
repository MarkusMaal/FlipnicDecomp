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

// Function: entry_0016ce3c
// Address: 0x16ce3c - 0x16ce90
void entry_0016ce3c_0x16ce3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ce3c_0x16ce3c");
#endif

    ctx->pc = 0x16ce3cu;

    // 0x16ce3c: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x16ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ce40: 0x3c033e06  lui         $v1, 0x3E06
    ctx->pc = 0x16ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
    // 0x16ce44: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x16ce44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x16ce48: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x16ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16ce4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16ce4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ce50: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x16ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x16ce54: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16ce54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x16ce58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16ce58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16ce5c: 0xaf848604  sw          $a0, -0x79FC($gp)
    ctx->pc = 0x16ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936068), GPR_U32(ctx, 4));
    // 0x16ce60: 0xc6220224  lwc1        $f2, 0x224($s1)
    ctx->pc = 0x16ce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ce64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ce64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ce68: 0x0  nop
    ctx->pc = 0x16ce68u;
    // NOP
    // 0x16ce6c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x16ce6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x16ce70: 0xe6210224  swc1        $f1, 0x224($s1)
    ctx->pc = 0x16ce70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    // 0x16ce74: 0xc6210240  lwc1        $f1, 0x240($s1)
    ctx->pc = 0x16ce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ce78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16ce78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ce7c: 0x0  nop
    ctx->pc = 0x16ce7cu;
    // NOP
    // 0x16ce80: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16CE80u;
    {
        const bool branch_taken_0x16ce80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ce80) {
            ctx->pc = 0x16CE90u;
            return;
        }
    }
    ctx->pc = 0x16CE88u;
    // 0x16ce88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16ce88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16ce8c: 0xe6200240  swc1        $f0, 0x240($s1)
    ctx->pc = 0x16ce8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 576), bits); }
    ctx->pc = 0x16ce90u;
}
