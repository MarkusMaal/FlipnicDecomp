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

// Function: entry_0018a67c
// Address: 0x18a67c - 0x18a690
void entry_0018a67c_0x18a67c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a67c_0x18a67c");
#endif

    ctx->pc = 0x18a67cu;

    // 0x18a67c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18a680: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A680u;
    {
        const bool branch_taken_0x18a680 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a680) {
            ctx->pc = 0x18A690u;
            return;
        }
    }
    ctx->pc = 0x18A688u;
    // 0x18a688: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18A688u;
    {
        const bool branch_taken_0x18a688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A688u;
        // 0x18a68c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a688) {
            ctx->pc = 0x18A69Cu;
            return;
        }
    }
    ctx->pc = 0x18A690u;
}
