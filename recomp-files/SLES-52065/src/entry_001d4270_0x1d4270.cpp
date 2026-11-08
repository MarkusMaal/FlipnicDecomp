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

// Function: entry_001d4270
// Address: 0x1d4270 - 0x1d427c
void entry_001d4270_0x1d4270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4270_0x1d4270");
#endif

    ctx->pc = 0x1d4270u;

    // 0x1d4270: 0x2d020030  sltiu       $v0, $t0, 0x30
    ctx->pc = 0x1d4270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1d4274: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1D4274u;
    {
        const bool branch_taken_0x1d4274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4274u;
        // 0x1d4278: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4274) {
            ctx->pc = 0x1D41C0u;
            return;
        }
    }
    ctx->pc = 0x1D427Cu;
}
