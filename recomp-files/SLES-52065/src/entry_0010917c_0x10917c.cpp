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

// Function: entry_0010917c
// Address: 0x10917c - 0x109190
void entry_0010917c_0x10917c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010917c_0x10917c");
#endif

    ctx->pc = 0x10917cu;

    // 0x10917c: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x10917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x109180: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x109180u;
    {
        const bool branch_taken_0x109180 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x109184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109180u;
        // 0x109184: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109180) {
            ctx->pc = 0x109190u;
            return;
        }
    }
    ctx->pc = 0x109188u;
    // 0x109188: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109188u;
    {
        const bool branch_taken_0x109188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109188u;
        // 0x10918c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109188) {
            ctx->pc = 0x1091A8u;
            return;
        }
    }
    ctx->pc = 0x109190u;
}
