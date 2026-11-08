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

// Function: entry_0012f860
// Address: 0x12f860 - 0x12f870
void entry_0012f860_0x12f860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f860_0x12f860");
#endif

    ctx->pc = 0x12f860u;

    // 0x12f860: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12f860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12f864: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x12f864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x12f868: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x12F868u;
    {
        const bool branch_taken_0x12f868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F868u;
        // 0x12f86c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f868) {
            ctx->pc = 0x12F830u;
            return;
        }
    }
    ctx->pc = 0x12F870u;
}
