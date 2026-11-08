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

// Function: entry_00154664
// Address: 0x154664 - 0x1546c0
void entry_00154664_0x154664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154664_0x154664");
#endif

    ctx->pc = 0x154664u;

    // 0x154664: 0x0  nop
    ctx->pc = 0x154664u;
    // NOP
    // 0x154668: 0x0  nop
    ctx->pc = 0x154668u;
    // NOP
    // 0x15466c: 0x0  nop
    ctx->pc = 0x15466cu;
    // NOP
    // 0x154670: 0x46060184  c1          0x60184
    ctx->pc = 0x154670u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x154674: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x154674u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x154678: 0x46051802  mul.s       $f0, $f3, $f5
    ctx->pc = 0x154678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x15467c: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x15467cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x154680: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x154680u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x154684: 0x0  nop
    ctx->pc = 0x154684u;
    // NOP
    // 0x154688: 0x0  nop
    ctx->pc = 0x154688u;
    // NOP
    // 0x15468c: 0x46141036  c.le.s      $f2, $f20
    ctx->pc = 0x15468cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154690: 0x0  nop
    ctx->pc = 0x154690u;
    // NOP
    // 0x154694: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x154694u;
    {
        const bool branch_taken_0x154694 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x154698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154694u;
        // 0x154698: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154694) {
            ctx->pc = 0x1546C4u;
            return;
        }
    }
    ctx->pc = 0x15469Cu;
    // 0x15469c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15469cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1546a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1546a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1546a4: 0x0  nop
    ctx->pc = 0x1546a4u;
    // NOP
    // 0x1546a8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1546a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1546ac: 0x0  nop
    ctx->pc = 0x1546acu;
    // NOP
    // 0x1546b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1546B0u;
    {
        const bool branch_taken_0x1546b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1546b0) {
            ctx->pc = 0x1546C0u;
            return;
        }
    }
    ctx->pc = 0x1546B8u;
    // 0x1546b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1546B8u;
    {
        const bool branch_taken_0x1546b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1546b8) {
            ctx->pc = 0x1546C8u;
            return;
        }
    }
    ctx->pc = 0x1546C0u;
}
