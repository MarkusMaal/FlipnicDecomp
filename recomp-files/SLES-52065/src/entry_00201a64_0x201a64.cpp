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

// Function: entry_00201a64
// Address: 0x201a64 - 0x201a84
void entry_00201a64_0x201a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201a64_0x201a64");
#endif

    ctx->pc = 0x201a64u;

label_201a64:
    // 0x201a64: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x201a64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x201a68: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x201a68u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x201a6c: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x201a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x201a70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x201a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x201a74: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x201a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x201a78: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x201A78u;
    {
        const bool branch_taken_0x201a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201a78) {
            ctx->pc = 0x201A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201A78u;
            // 0x201a7c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201A64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201a64;
        }
    }
    ctx->pc = 0x201A80u;
    // 0x201a80: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x201a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201a84u;
}
