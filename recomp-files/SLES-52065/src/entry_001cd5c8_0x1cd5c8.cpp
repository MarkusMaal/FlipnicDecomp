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

// Function: entry_001cd5c8
// Address: 0x1cd5c8 - 0x1cd5e0
void entry_001cd5c8_0x1cd5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd5c8_0x1cd5c8");
#endif

    ctx->pc = 0x1cd5c8u;

    // 0x1cd5c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cd5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cd5cc: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1cd5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cd5d0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1CD5D0u;
    {
        const bool branch_taken_0x1cd5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD5D0u;
        // 0x1cd5d4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5d0) {
            ctx->pc = 0x1CD558u;
            return;
        }
    }
    ctx->pc = 0x1CD5D8u;
    // 0x1cd5d8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1cd5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd5dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1cd5e0u;
}
