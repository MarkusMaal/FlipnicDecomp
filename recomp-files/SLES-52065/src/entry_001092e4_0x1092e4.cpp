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

// Function: entry_001092e4
// Address: 0x1092e4 - 0x1092f8
void entry_001092e4_0x1092e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001092e4_0x1092e4");
#endif

    ctx->pc = 0x1092e4u;

    // 0x1092e4: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x1092e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x1092e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1092E8u;
    {
        const bool branch_taken_0x1092e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1092ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092E8u;
        // 0x1092ec: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092e8) {
            ctx->pc = 0x1092F8u;
            return;
        }
    }
    ctx->pc = 0x1092F0u;
    // 0x1092f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1092F0u;
    {
        const bool branch_taken_0x1092f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1092F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092F0u;
        // 0x1092f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092f0) {
            ctx->pc = 0x109310u;
            return;
        }
    }
    ctx->pc = 0x1092F8u;
}
