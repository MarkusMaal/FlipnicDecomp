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

// Function: entry_0014dca8
// Address: 0x14dca8 - 0x14dcc0
void entry_0014dca8_0x14dca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dca8_0x14dca8");
#endif

    ctx->pc = 0x14dca8u;

    // 0x14dca8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14dcac: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14dcacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14dcb0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x14dcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14dcb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14dcb8: 0x1660fff7  bnez        $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14DCB8u;
    {
        const bool branch_taken_0x14dcb8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCB8u;
        // 0x14dcbc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dcb8) {
            ctx->pc = 0x14DC98u;
            return;
        }
    }
    ctx->pc = 0x14DCC0u;
}
