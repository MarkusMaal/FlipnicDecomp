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

// Function: entry_00196a58
// Address: 0x196a58 - 0x196a70
void entry_00196a58_0x196a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196a58_0x196a58");
#endif

    ctx->pc = 0x196a58u;

    // 0x196a58: 0x8ea30340  lw          $v1, 0x340($s5)
    ctx->pc = 0x196a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x196a5c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x196a5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x196a60: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x196A60u;
    {
        const bool branch_taken_0x196a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x196A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A60u;
        // 0x196a64: 0x2b09021  addu        $s2, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196a60) {
            ctx->pc = 0x19698Cu;
            return;
        }
    }
    ctx->pc = 0x196A68u;
    // 0x196a68: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x196A68u;
    {
        const bool branch_taken_0x196a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196a68) {
            ctx->pc = 0x196B00u;
            return;
        }
    }
    ctx->pc = 0x196A70u;
}
