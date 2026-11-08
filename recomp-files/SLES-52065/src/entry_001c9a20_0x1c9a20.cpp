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

// Function: entry_001c9a20
// Address: 0x1c9a20 - 0x1c9a40
void entry_001c9a20_0x1c9a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9a20_0x1c9a20");
#endif

    switch (ctx->pc) {
        case 0x1c9a28u: goto label_1c9a28;
        case 0x1c9a3cu: goto label_1c9a3c;
        default: break;
    }

    ctx->pc = 0x1c9a20u;

    // 0x1c9a20: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C9A20u;
    SET_GPR_U32(ctx, 31, 0x1C9A28u);
    ctx->pc = 0x1C9A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A20u;
    // 0x1c9a24: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C9A20u, 0x1C9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A28u;
label_1c9a28:
    // 0x1c9a28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9A28u;
    {
        const bool branch_taken_0x1c9a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A28u;
        // 0x1c9a2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a28) {
            ctx->pc = 0x1C9A40u;
            return;
        }
    }
    ctx->pc = 0x1C9A30u;
    // 0x1c9a30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c9a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a34: 0xc072910  jal         func_1CA440
    ctx->pc = 0x1C9A34u;
    SET_GPR_U32(ctx, 31, 0x1C9A3Cu);
    ctx->pc = 0x1C9A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A34u;
    // 0x1c9a38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA440u, 0x1C9A34u, 0x1C9A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A3Cu;
label_1c9a3c:
    // 0x1c9a3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c9a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c9a40u;
}
