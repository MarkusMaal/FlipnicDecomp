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

// Function: entry_00153394
// Address: 0x153394 - 0x1533ac
void entry_00153394_0x153394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153394_0x153394");
#endif

    ctx->pc = 0x153394u;

    // 0x153394: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x153394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x153398: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x153398u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15339c: 0x0  nop
    ctx->pc = 0x15339cu;
    // NOP
    // 0x1533a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1533A0u;
    {
        const bool branch_taken_0x1533a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1533A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533A0u;
        // 0x1533a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533a0) {
            ctx->pc = 0x1533ACu;
            return;
        }
    }
    ctx->pc = 0x1533A8u;
    // 0x1533a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1533a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1533acu;
}
