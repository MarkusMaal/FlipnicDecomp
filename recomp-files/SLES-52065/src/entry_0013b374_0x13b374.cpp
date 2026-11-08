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

// Function: entry_0013b374
// Address: 0x13b374 - 0x13b390
void entry_0013b374_0x13b374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b374_0x13b374");
#endif

    ctx->pc = 0x13b374u;

    // 0x13b374: 0x132840  sll         $a1, $s3, 1
    ctx->pc = 0x13b374u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x13b378: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x13b378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x13b37c: 0x55940  sll         $t3, $a1, 5
    ctx->pc = 0x13b37cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x13b380: 0x8b4823  subu        $t1, $a0, $t3
    ctx->pc = 0x13b380u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x13b384: 0x124082b  sltu        $at, $t1, $a0
    ctx->pc = 0x13b384u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13b388: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x13B388u;
    {
        const bool branch_taken_0x13b388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B388u;
        // 0x13b38c: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b388) {
            ctx->pc = 0x13B3E4u;
            return;
        }
    }
    ctx->pc = 0x13B390u;
}
