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

// Function: entry_00170770
// Address: 0x170770 - 0x170784
void entry_00170770_0x170770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170770_0x170770");
#endif

    ctx->pc = 0x170770u;

    // 0x170770: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x170770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170774: 0x0  nop
    ctx->pc = 0x170774u;
    // NOP
    // 0x170778: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x170778u;
    {
        const bool branch_taken_0x170778 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170778u;
        // 0x17077c: 0x3c0241b8  lui         $v0, 0x41B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170778) {
            ctx->pc = 0x170788u;
            return;
        }
    }
    ctx->pc = 0x170780u;
    // 0x170780: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x170780u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
    ctx->pc = 0x170784u;
}
