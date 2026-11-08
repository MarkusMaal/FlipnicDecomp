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

// Function: entry_001a2034
// Address: 0x1a2034 - 0x1a204c
void entry_001a2034_0x1a2034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2034_0x1a2034");
#endif

    ctx->pc = 0x1a2034u;

    // 0x1a2034: 0x0  nop
    ctx->pc = 0x1a2034u;
    // NOP
    // 0x1a2038: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a2038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a203c: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x1a203cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a2040: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1A2040u;
    {
        const bool branch_taken_0x1a2040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2040u;
        // 0x1a2044: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2040) {
            ctx->pc = 0x1A1F9Cu;
            return;
        }
    }
    ctx->pc = 0x1A2048u;
    // 0x1a2048: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a2048u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a204cu;
}
