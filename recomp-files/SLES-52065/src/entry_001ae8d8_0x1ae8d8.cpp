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

// Function: entry_001ae8d8
// Address: 0x1ae8d8 - 0x1ae8f0
void entry_001ae8d8_0x1ae8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae8d8_0x1ae8d8");
#endif

    ctx->pc = 0x1ae8d8u;

    // 0x1ae8d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ae8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ae8dc: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1ae8dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ae8e0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AE8E0u;
    {
        const bool branch_taken_0x1ae8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8E0u;
        // 0x1ae8e4: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8e0) {
            ctx->pc = 0x1AE8C0u;
            return;
        }
    }
    ctx->pc = 0x1AE8E8u;
    // 0x1ae8e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ae8e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ae8ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ae8f0u;
}
