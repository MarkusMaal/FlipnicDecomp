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

// Function: entry_001977d8
// Address: 0x1977d8 - 0x1977e8
void entry_001977d8_0x1977d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001977d8_0x1977d8");
#endif

    ctx->pc = 0x1977d8u;

    // 0x1977d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1977d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1977dc: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x1977dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1977e0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1977E0u;
    {
        const bool branch_taken_0x1977e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1977E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977E0u;
        // 0x1977e4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977e0) {
            ctx->pc = 0x1977B0u;
            return;
        }
    }
    ctx->pc = 0x1977E8u;
}
