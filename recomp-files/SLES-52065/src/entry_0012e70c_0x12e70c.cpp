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

// Function: entry_0012e70c
// Address: 0x12e70c - 0x12e724
void entry_0012e70c_0x12e70c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e70c_0x12e70c");
#endif

    ctx->pc = 0x12e70cu;

    // 0x12e70c: 0xb3082b  sltu        $at, $a1, $s3
    ctx->pc = 0x12e70cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x12e710: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x12E710u;
    {
        const bool branch_taken_0x12e710 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E710u;
        // 0x12e714: 0x134140  sll         $t0, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e710) {
            ctx->pc = 0x12E80Cu;
            return;
        }
    }
    ctx->pc = 0x12E718u;
    // 0x12e718: 0xb3082b  sltu        $at, $a1, $s3
    ctx->pc = 0x12e718u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x12e71c: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x12E71Cu;
    {
        const bool branch_taken_0x12e71c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E71Cu;
        // 0x12e720: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e71c) {
            ctx->pc = 0x12E78Cu;
            return;
        }
    }
    ctx->pc = 0x12E724u;
}
