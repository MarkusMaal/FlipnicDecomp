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

// Function: entry_0013eb44
// Address: 0x13eb44 - 0x13eb84
void entry_0013eb44_0x13eb44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eb44_0x13eb44");
#endif

    ctx->pc = 0x13eb44u;

    // 0x13eb44: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x13eb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eb48: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13eb48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13eb4c: 0x0  nop
    ctx->pc = 0x13eb4cu;
    // NOP
    // 0x13eb50: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x13eb50u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x13eb54: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x13eb54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13eb58: 0x0  nop
    ctx->pc = 0x13eb58u;
    // NOP
    // 0x13eb5c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x13EB5Cu;
    {
        const bool branch_taken_0x13eb5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13eb5c) {
            ctx->pc = 0x13EB88u;
            return;
        }
    }
    ctx->pc = 0x13EB64u;
    // 0x13eb64: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x13eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x13eb68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13EB68u;
    {
        const bool branch_taken_0x13eb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eb68) {
            ctx->pc = 0x13EB84u;
            return;
        }
    }
    ctx->pc = 0x13EB70u;
    // 0x13eb70: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x13eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13eb74: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x13eb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eb78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13eb78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13eb7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13EB7Cu;
    {
        const bool branch_taken_0x13eb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB7Cu;
        // 0x13eb80: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb7c) {
            ctx->pc = 0x13EB88u;
            return;
        }
    }
    ctx->pc = 0x13EB84u;
}
