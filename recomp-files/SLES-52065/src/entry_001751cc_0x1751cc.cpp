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

// Function: entry_001751cc
// Address: 0x1751cc - 0x1751e8
void entry_001751cc_0x1751cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001751cc_0x1751cc");
#endif

    ctx->pc = 0x1751ccu;

    // 0x1751cc: 0x0  nop
    ctx->pc = 0x1751ccu;
    // NOP
    // 0x1751d0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1751d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1751d4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1751d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1751d8: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x1751D8u;
    {
        const bool branch_taken_0x1751d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1751d8) {
            ctx->pc = 0x175060u;
            return;
        }
    }
    ctx->pc = 0x1751E0u;
    // 0x1751e0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1751E0u;
    {
        const bool branch_taken_0x1751e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1751E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751E0u;
        // 0x1751e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751e0) {
            ctx->pc = 0x175354u;
            return;
        }
    }
    ctx->pc = 0x1751E8u;
}
