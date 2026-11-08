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

// Function: entry_001534dc
// Address: 0x1534dc - 0x153538
void entry_001534dc_0x1534dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001534dc_0x1534dc");
#endif

    ctx->pc = 0x1534dcu;

    // 0x1534dc: 0x0  nop
    ctx->pc = 0x1534dcu;
    // NOP
    // 0x1534e0: 0x0  nop
    ctx->pc = 0x1534e0u;
    // NOP
    // 0x1534e4: 0x0  nop
    ctx->pc = 0x1534e4u;
    // NOP
    // 0x1534e8: 0x46050144  c1          0x50144
    ctx->pc = 0x1534e8u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x1534ec: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x1534ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1534f0: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1534f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1534f4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1534f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x1534f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1534f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1534fc: 0x0  nop
    ctx->pc = 0x1534fcu;
    // NOP
    // 0x153500: 0x0  nop
    ctx->pc = 0x153500u;
    // NOP
    // 0x153504: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x153504u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153508: 0x0  nop
    ctx->pc = 0x153508u;
    // NOP
    // 0x15350c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x15350Cu;
    {
        const bool branch_taken_0x15350c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15350Cu;
        // 0x153510: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15350c) {
            ctx->pc = 0x15353Cu;
            return;
        }
    }
    ctx->pc = 0x153514u;
    // 0x153514: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x153514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x153518: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15351c: 0x0  nop
    ctx->pc = 0x15351cu;
    // NOP
    // 0x153520: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153524: 0x0  nop
    ctx->pc = 0x153524u;
    // NOP
    // 0x153528: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x153528u;
    {
        const bool branch_taken_0x153528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153528) {
            ctx->pc = 0x153538u;
            return;
        }
    }
    ctx->pc = 0x153530u;
    // 0x153530: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x153530u;
    {
        const bool branch_taken_0x153530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153530) {
            ctx->pc = 0x1535CCu;
            return;
        }
    }
    ctx->pc = 0x153538u;
}
