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

// Function: entry_0018ce04
// Address: 0x18ce04 - 0x18ce28
void entry_0018ce04_0x18ce04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ce04_0x18ce04");
#endif

    switch (ctx->pc) {
        case 0x18ce20u: goto label_18ce20;
        default: break;
    }

    ctx->pc = 0x18ce04u;

    // 0x18ce04: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CE04u;
    {
        const bool branch_taken_0x18ce04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE04u;
        // 0x18ce08: 0x28c10000  slti        $at, $a2, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce04) {
            ctx->pc = 0x18CE28u;
            return;
        }
    }
    ctx->pc = 0x18CE0Cu;
    // 0x18ce0c: 0x28e10000  slti        $at, $a3, 0x0
    ctx->pc = 0x18ce0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x18ce10: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x18CE10u;
    {
        const bool branch_taken_0x18ce10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE10u;
        // 0x18ce14: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce10) {
            ctx->pc = 0x18CE38u;
            return;
        }
    }
    ctx->pc = 0x18CE18u;
    // 0x18ce18: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18CE18u;
    SET_GPR_U32(ctx, 31, 0x18CE20u);
    ctx->pc = 0x18CE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE18u;
    // 0x18ce1c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18CE18u, 0x18CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE20u;
label_18ce20:
    // 0x18ce20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18CE20u;
    {
        const bool branch_taken_0x18ce20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ce20) {
            ctx->pc = 0x18CE38u;
            return;
        }
    }
    ctx->pc = 0x18CE28u;
}
