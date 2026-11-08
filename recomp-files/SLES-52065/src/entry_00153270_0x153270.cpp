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

// Function: entry_00153270
// Address: 0x153270 - 0x153288
void entry_00153270_0x153270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153270_0x153270");
#endif

    ctx->pc = 0x153270u;

    // 0x153270: 0x460c1836  c.le.s      $f3, $f12
    ctx->pc = 0x153270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153274: 0x0  nop
    ctx->pc = 0x153274u;
    // NOP
    // 0x153278: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x153278u;
    {
        const bool branch_taken_0x153278 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153278u;
        // 0x15327c: 0x27a20000  addiu       $v0, $sp, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153278) {
            ctx->pc = 0x153288u;
            return;
        }
    }
    ctx->pc = 0x153280u;
    // 0x153280: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x153280u;
    {
        const bool branch_taken_0x153280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153280u;
        // 0x153284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153280) {
            ctx->pc = 0x1533ACu;
            return;
        }
    }
    ctx->pc = 0x153288u;
}
