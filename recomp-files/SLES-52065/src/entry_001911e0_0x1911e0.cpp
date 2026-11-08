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

// Function: entry_001911e0
// Address: 0x1911e0 - 0x1911f8
void entry_001911e0_0x1911e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001911e0_0x1911e0");
#endif

    ctx->pc = 0x1911e0u;

    // 0x1911e0: 0x10e30005  beq         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1911E0u;
    {
        const bool branch_taken_0x1911e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1911e0) {
            ctx->pc = 0x1911F8u;
            return;
        }
    }
    ctx->pc = 0x1911E8u;
    // 0x1911e8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1911e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1911ec: 0x29220005  slti        $v0, $t1, 0x5
    ctx->pc = 0x1911ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1911f0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1911F0u;
    {
        const bool branch_taken_0x1911f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1911F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911F0u;
        // 0x1911f4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911f0) {
            ctx->pc = 0x1911B4u;
            return;
        }
    }
    ctx->pc = 0x1911F8u;
}
