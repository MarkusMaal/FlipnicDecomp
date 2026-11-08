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

// Function: entry_001437a4
// Address: 0x1437a4 - 0x1437cc
void entry_001437a4_0x1437a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001437a4_0x1437a4");
#endif

    ctx->pc = 0x1437a4u;

    // 0x1437a4: 0x0  nop
    ctx->pc = 0x1437a4u;
    // NOP
    // 0x1437a8: 0xd32023  subu        $a0, $a2, $s3
    ctx->pc = 0x1437a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x1437ac: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1437acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1437b0: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x1437b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1437b4: 0x244082b  sltu        $at, $s2, $a0
    ctx->pc = 0x1437b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1437b8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1437B8u;
    {
        const bool branch_taken_0x1437b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1437BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437B8u;
        // 0x1437bc: 0x243082b  sltu        $at, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1437b8) {
            ctx->pc = 0x1437CCu;
            return;
        }
    }
    ctx->pc = 0x1437C0u;
    // 0x1437c0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1437C0u;
    {
        const bool branch_taken_0x1437c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1437c0) {
            ctx->pc = 0x1437CCu;
            return;
        }
    }
    ctx->pc = 0x1437C8u;
    // 0x1437c8: 0x2499021  addu        $s2, $s2, $t1
    ctx->pc = 0x1437c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    ctx->pc = 0x1437ccu;
}
