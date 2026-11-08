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

// Function: entry_001e7d54
// Address: 0x1e7d54 - 0x1e7d6c
void entry_001e7d54_0x1e7d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7d54_0x1e7d54");
#endif

    ctx->pc = 0x1e7d54u;

    // 0x1e7d54: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1e7d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1e7d58: 0x45040  sll         $t2, $a0, 1
    ctx->pc = 0x1e7d58u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e7d5c: 0x6a4023  subu        $t0, $v1, $t2
    ctx->pc = 0x1e7d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1e7d60: 0x103082b  sltu        $at, $t0, $v1
    ctx->pc = 0x1e7d60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e7d64: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E7D64u;
    {
        const bool branch_taken_0x1e7d64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D64u;
        // 0x1e7d68: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d64) {
            ctx->pc = 0x1E7DB4u;
            return;
        }
    }
    ctx->pc = 0x1E7D6Cu;
}
