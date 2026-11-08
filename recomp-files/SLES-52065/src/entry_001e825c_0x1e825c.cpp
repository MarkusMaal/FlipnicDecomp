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

// Function: entry_001e825c
// Address: 0x1e825c - 0x1e8274
void entry_001e825c_0x1e825c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e825c_0x1e825c");
#endif

    ctx->pc = 0x1e825cu;

    // 0x1e825c: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x1e825cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e8260: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x1E8260u;
    {
        const bool branch_taken_0x1e8260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8260u;
        // 0x1e8264: 0x1158c0  sll         $t3, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8260) {
            ctx->pc = 0x1E832Cu;
            return;
        }
    }
    ctx->pc = 0x1E8268u;
    // 0x1e8268: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x1e8268u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e826c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E826Cu;
    {
        const bool branch_taken_0x1e826c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E826Cu;
        // 0x1e8270: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e826c) {
            ctx->pc = 0x1E82C4u;
            return;
        }
    }
    ctx->pc = 0x1E8274u;
}
