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

// Function: entry_001c4e8c
// Address: 0x1c4e8c - 0x1c4eac
void entry_001c4e8c_0x1c4e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4e8c_0x1c4e8c");
#endif

    switch (ctx->pc) {
        case 0x1c4e94u: goto label_1c4e94;
        case 0x1c4ea8u: goto label_1c4ea8;
        default: break;
    }

    ctx->pc = 0x1c4e8cu;

    // 0x1c4e8c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C4E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C4E94u);
    ctx->pc = 0x1C4E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E8Cu;
    // 0x1c4e90: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C4E8Cu, 0x1C4E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E94u;
label_1c4e94:
    // 0x1c4e94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4E94u;
    {
        const bool branch_taken_0x1c4e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E94u;
        // 0x1c4e98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e94) {
            ctx->pc = 0x1C4EACu;
            return;
        }
    }
    ctx->pc = 0x1C4E9Cu;
    // 0x1c4e9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ea0: 0xc0713f8  jal         func_1C4FE0
    ctx->pc = 0x1C4EA0u;
    SET_GPR_U32(ctx, 31, 0x1C4EA8u);
    ctx->pc = 0x1C4EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4EA0u;
    // 0x1c4ea4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4FE0u, 0x1C4EA0u, 0x1C4EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4EA8u;
label_1c4ea8:
    // 0x1c4ea8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c4eacu;
}
