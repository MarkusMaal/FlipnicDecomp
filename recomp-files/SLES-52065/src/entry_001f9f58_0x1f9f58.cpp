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

// Function: entry_001f9f58
// Address: 0x1f9f58 - 0x1f9f68
void entry_001f9f58_0x1f9f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9f58_0x1f9f58");
#endif

    ctx->pc = 0x1f9f58u;

    // 0x1f9f58: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9F58u;
    {
        const bool branch_taken_0x1f9f58 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1F9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F58u;
        // 0x1f9f5c: 0x2842ffc4  slti        $v0, $v0, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f58) {
            ctx->pc = 0x1F9F68u;
            return;
        }
    }
    ctx->pc = 0x1F9F60u;
    // 0x1f9f60: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F9F60u;
    {
        const bool branch_taken_0x1f9f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F60u;
        // 0x1f9f64: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f60) {
            ctx->pc = 0x1F9F8Cu;
            return;
        }
    }
    ctx->pc = 0x1F9F68u;
}
