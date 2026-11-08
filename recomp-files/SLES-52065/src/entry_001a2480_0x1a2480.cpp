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

// Function: entry_001a2480
// Address: 0x1a2480 - 0x1a249c
void entry_001a2480_0x1a2480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2480_0x1a2480");
#endif

    ctx->pc = 0x1a2480u;

    // 0x1a2480: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a2480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a2484: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1a2484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a2488: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A2488u;
    {
        const bool branch_taken_0x1a2488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2488) {
            ctx->pc = 0x1A24C0u;
            return;
        }
    }
    ctx->pc = 0x1A2490u;
    // 0x1a2490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2494: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2494u;
    {
        const bool branch_taken_0x1a2494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2494u;
        // 0x1a2498: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2494) {
            ctx->pc = 0x1A24B0u;
            return;
        }
    }
    ctx->pc = 0x1A249Cu;
}
