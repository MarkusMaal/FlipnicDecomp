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

// Function: entry_001cd544
// Address: 0x1cd544 - 0x1cd554
void entry_001cd544_0x1cd544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd544_0x1cd544");
#endif

    ctx->pc = 0x1cd544u;

    // 0x1cd544: 0x28a2000c  slti        $v0, $a1, 0xC
    ctx->pc = 0x1cd544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1cd548: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CD548u;
    {
        const bool branch_taken_0x1cd548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD548u;
        // 0x1cd54c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd548) {
            ctx->pc = 0x1CD554u;
            return;
        }
    }
    ctx->pc = 0x1CD550u;
    // 0x1cd550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cd554u;
}
