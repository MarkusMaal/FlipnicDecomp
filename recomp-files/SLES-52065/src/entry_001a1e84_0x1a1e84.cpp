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

// Function: entry_001a1e84
// Address: 0x1a1e84 - 0x1a1ea0
void entry_001a1e84_0x1a1e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1e84_0x1a1e84");
#endif

    ctx->pc = 0x1a1e84u;

    // 0x1a1e84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a1e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a1e88: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x1a1e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a1e8c: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1A1E8Cu;
    {
        const bool branch_taken_0x1a1e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E8Cu;
        // 0x1a1e90: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e8c) {
            ctx->pc = 0x1A1DE4u;
            return;
        }
    }
    ctx->pc = 0x1A1E94u;
    // 0x1a1e94: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1A1E94u;
    {
        const bool branch_taken_0x1a1e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e94) {
            ctx->pc = 0x1A1F88u;
            return;
        }
    }
    ctx->pc = 0x1A1E9Cu;
    // 0x1a1e9c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a1e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1a1ea0u;
}
