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

// Function: entry_001c660c
// Address: 0x1c660c - 0x1c662c
void entry_001c660c_0x1c660c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c660c_0x1c660c");
#endif

    switch (ctx->pc) {
        case 0x1c6614u: goto label_1c6614;
        case 0x1c6624u: goto label_1c6624;
        default: break;
    }

    ctx->pc = 0x1c660cu;

    // 0x1c660c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C660Cu;
    SET_GPR_U32(ctx, 31, 0x1C6614u);
    ctx->pc = 0x1C6610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C660Cu;
    // 0x1c6610: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C660Cu, 0x1C6614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6614u;
label_1c6614:
    // 0x1c6614: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6614u;
    {
        const bool branch_taken_0x1c6614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6614u;
        // 0x1c6618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6614) {
            ctx->pc = 0x1C662Cu;
            return;
        }
    }
    ctx->pc = 0x1C661Cu;
    // 0x1c661c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C661Cu;
    SET_GPR_U32(ctx, 31, 0x1C6624u);
    ctx->pc = 0x1C6620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C661Cu;
    // 0x1c6620: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C661Cu, 0x1C6624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6624u;
label_1c6624:
    // 0x1c6624: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6624u;
    {
        const bool branch_taken_0x1c6624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6624) {
            ctx->pc = 0x1C6648u;
            return;
        }
    }
    ctx->pc = 0x1C662Cu;
}
