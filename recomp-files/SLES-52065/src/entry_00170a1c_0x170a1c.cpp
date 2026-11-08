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

// Function: entry_00170a1c
// Address: 0x170a1c - 0x170a30
void entry_00170a1c_0x170a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170a1c_0x170a1c");
#endif

    ctx->pc = 0x170a1cu;

    // 0x170a1c: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x170a1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170a20: 0x0  nop
    ctx->pc = 0x170a20u;
    // NOP
    // 0x170a24: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x170A24u;
    {
        const bool branch_taken_0x170a24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x170A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A24u;
        // 0x170a28: 0x3c0241b8  lui         $v0, 0x41B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170a24) {
            ctx->pc = 0x170A34u;
            return;
        }
    }
    ctx->pc = 0x170A2Cu;
    // 0x170a2c: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x170a2cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    ctx->pc = 0x170a30u;
}
