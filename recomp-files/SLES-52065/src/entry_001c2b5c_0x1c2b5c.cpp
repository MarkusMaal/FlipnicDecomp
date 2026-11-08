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

// Function: entry_001c2b5c
// Address: 0x1c2b5c - 0x1c2b74
void entry_001c2b5c_0x1c2b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2b5c_0x1c2b5c");
#endif

    ctx->pc = 0x1c2b5cu;

    // 0x1c2b5c: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1c2b5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c2b60: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2B60u;
    {
        const bool branch_taken_0x1c2b60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b60) {
            ctx->pc = 0x1C2B74u;
            return;
        }
    }
    ctx->pc = 0x1C2B68u;
    // 0x1c2b68: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c2b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c2b6c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1C2B6Cu;
    {
        const bool branch_taken_0x1c2b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B6Cu;
        // 0x1c2b70: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b6c) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2B74u;
}
