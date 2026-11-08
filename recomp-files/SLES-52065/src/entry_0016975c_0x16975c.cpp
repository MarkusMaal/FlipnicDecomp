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

// Function: entry_0016975c
// Address: 0x16975c - 0x16976c
void entry_0016975c_0x16975c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016975c_0x16975c");
#endif

    ctx->pc = 0x16975cu;

    // 0x16975c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16975Cu;
    {
        const bool branch_taken_0x16975c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x169760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16975Cu;
        // 0x169760: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16975c) {
            ctx->pc = 0x16976Cu;
            return;
        }
    }
    ctx->pc = 0x169764u;
    // 0x169764: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x169764u;
    {
        const bool branch_taken_0x169764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169764u;
        // 0x169768: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169764) {
            ctx->pc = 0x16978Cu;
            return;
        }
    }
    ctx->pc = 0x16976Cu;
}
