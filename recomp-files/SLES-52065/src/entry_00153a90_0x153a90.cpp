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

// Function: entry_00153a90
// Address: 0x153a90 - 0x153ae8
void entry_00153a90_0x153a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153a90_0x153a90");
#endif

    ctx->pc = 0x153a90u;

    // 0x153a90: 0x0  nop
    ctx->pc = 0x153a90u;
    // NOP
    // 0x153a94: 0x0  nop
    ctx->pc = 0x153a94u;
    // NOP
    // 0x153a98: 0x0  nop
    ctx->pc = 0x153a98u;
    // NOP
    // 0x153a9c: 0x46060184  c1          0x60184
    ctx->pc = 0x153a9cu;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x153aa0: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x153aa0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x153aa4: 0x46051802  mul.s       $f0, $f3, $f5
    ctx->pc = 0x153aa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x153aa8: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x153aa8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x153aac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x153aacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x153ab0: 0x0  nop
    ctx->pc = 0x153ab0u;
    // NOP
    // 0x153ab4: 0x0  nop
    ctx->pc = 0x153ab4u;
    // NOP
    // 0x153ab8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153ab8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153abc: 0x0  nop
    ctx->pc = 0x153abcu;
    // NOP
    // 0x153ac0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x153AC0u;
    {
        const bool branch_taken_0x153ac0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153AC0u;
        // 0x153ac4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ac0) {
            ctx->pc = 0x153AE8u;
            return;
        }
    }
    ctx->pc = 0x153AC8u;
    // 0x153ac8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153acc: 0x0  nop
    ctx->pc = 0x153accu;
    // NOP
    // 0x153ad0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153ad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153ad4: 0x0  nop
    ctx->pc = 0x153ad4u;
    // NOP
    // 0x153ad8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x153AD8u;
    {
        const bool branch_taken_0x153ad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153ad8) {
            ctx->pc = 0x153AE8u;
            return;
        }
    }
    ctx->pc = 0x153AE0u;
    // 0x153ae0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x153AE0u;
    {
        const bool branch_taken_0x153ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153ae0) {
            ctx->pc = 0x153B30u;
            return;
        }
    }
    ctx->pc = 0x153AE8u;
}
