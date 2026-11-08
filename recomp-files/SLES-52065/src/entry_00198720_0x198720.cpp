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

// Function: entry_00198720
// Address: 0x198720 - 0x198730
void entry_00198720_0x198720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198720_0x198720");
#endif

    ctx->pc = 0x198720u;

    // 0x198720: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x198720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x198724: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x198724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x198728: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x198728u;
    {
        const bool branch_taken_0x198728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198728u;
        // 0x19872c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198728) {
            ctx->pc = 0x1986E0u;
            return;
        }
    }
    ctx->pc = 0x198730u;
}
