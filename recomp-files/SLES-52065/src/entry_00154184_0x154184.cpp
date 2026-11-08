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

// Function: entry_00154184
// Address: 0x154184 - 0x1541e0
void entry_00154184_0x154184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154184_0x154184");
#endif

    ctx->pc = 0x154184u;

    // 0x154184: 0x0  nop
    ctx->pc = 0x154184u;
    // NOP
    // 0x154188: 0x0  nop
    ctx->pc = 0x154188u;
    // NOP
    // 0x15418c: 0x0  nop
    ctx->pc = 0x15418cu;
    // NOP
    // 0x154190: 0x46060184  c1          0x60184
    ctx->pc = 0x154190u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x154194: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x154194u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x154198: 0x46051802  mul.s       $f0, $f3, $f5
    ctx->pc = 0x154198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x15419c: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x15419cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x1541a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1541a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1541a4: 0x0  nop
    ctx->pc = 0x1541a4u;
    // NOP
    // 0x1541a8: 0x0  nop
    ctx->pc = 0x1541a8u;
    // NOP
    // 0x1541ac: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1541acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1541b0: 0x0  nop
    ctx->pc = 0x1541b0u;
    // NOP
    // 0x1541b4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1541B4u;
    {
        const bool branch_taken_0x1541b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1541B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541B4u;
        // 0x1541b8: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541b4) {
            ctx->pc = 0x1541E4u;
            return;
        }
    }
    ctx->pc = 0x1541BCu;
    // 0x1541bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1541bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1541c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1541c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1541c4: 0x0  nop
    ctx->pc = 0x1541c4u;
    // NOP
    // 0x1541c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1541c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1541cc: 0x0  nop
    ctx->pc = 0x1541ccu;
    // NOP
    // 0x1541d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1541D0u;
    {
        const bool branch_taken_0x1541d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1541d0) {
            ctx->pc = 0x1541E0u;
            return;
        }
    }
    ctx->pc = 0x1541D8u;
    // 0x1541d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1541D8u;
    {
        const bool branch_taken_0x1541d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1541d8) {
            ctx->pc = 0x1541E8u;
            return;
        }
    }
    ctx->pc = 0x1541E0u;
}
