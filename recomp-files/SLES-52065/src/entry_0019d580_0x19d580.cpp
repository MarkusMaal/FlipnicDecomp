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

// Function: entry_0019d580
// Address: 0x19d580 - 0x19d5a0
void entry_0019d580_0x19d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d580_0x19d580");
#endif

    ctx->pc = 0x19d580u;

    // 0x19d580: 0x8e2408f8  lw          $a0, 0x8F8($s1)
    ctx->pc = 0x19d580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2296)));
    // 0x19d584: 0x1080004c  beqz        $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x19D584u;
    {
        const bool branch_taken_0x19d584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D584u;
        // 0x19d588: 0x263308f8  addiu       $s3, $s1, 0x8F8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 2296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d584) {
            ctx->pc = 0x19D6B8u;
            return;
        }
    }
    ctx->pc = 0x19D58Cu;
    // 0x19d58c: 0x8ea50670  lw          $a1, 0x670($s5)
    ctx->pc = 0x19d58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19d590: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19d590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d594: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19d594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d598: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x19D598u;
    {
        const bool branch_taken_0x19d598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D598u;
        // 0x19d59c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d598) {
            ctx->pc = 0x19D600u;
            return;
        }
    }
    ctx->pc = 0x19D5A0u;
}
