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

// Function: entry_001744c8
// Address: 0x1744c8 - 0x1744dc
void entry_001744c8_0x1744c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001744c8_0x1744c8");
#endif

    ctx->pc = 0x1744c8u;

    // 0x1744c8: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1744c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1744cc: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x1744CCu;
    {
        const bool branch_taken_0x1744cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1744D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744CCu;
        // 0x1744d0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1744cc) {
            ctx->pc = 0x174380u;
            return;
        }
    }
    ctx->pc = 0x1744D4u;
    // 0x1744d4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1744D4u;
    {
        const bool branch_taken_0x1744d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1744d4) {
            ctx->pc = 0x1746A4u;
            return;
        }
    }
    ctx->pc = 0x1744DCu;
}
