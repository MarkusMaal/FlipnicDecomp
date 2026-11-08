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

// Function: entry_00181eb4
// Address: 0x181eb4 - 0x181ecc
void entry_00181eb4_0x181eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181eb4_0x181eb4");
#endif

    ctx->pc = 0x181eb4u;

    // 0x181eb4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x181eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x181eb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x181eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181ebc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181EBCu;
    {
        const bool branch_taken_0x181ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181ebc) {
            ctx->pc = 0x181ECCu;
            return;
        }
    }
    ctx->pc = 0x181EC4u;
    // 0x181ec4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x181EC4u;
    {
        const bool branch_taken_0x181ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EC4u;
        // 0x181ec8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ec4) {
            ctx->pc = 0x181EDCu;
            return;
        }
    }
    ctx->pc = 0x181ECCu;
}
