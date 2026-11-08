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

// Function: entry_001c0bb4
// Address: 0x1c0bb4 - 0x1c0be0
void entry_001c0bb4_0x1c0bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0bb4_0x1c0bb4");
#endif

    switch (ctx->pc) {
        case 0x1c0bc8u: goto label_1c0bc8;
        case 0x1c0bd8u: goto label_1c0bd8;
        default: break;
    }

    ctx->pc = 0x1c0bb4u;

    // 0x1c0bb4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C0BB4u;
    {
        const bool branch_taken_0x1c0bb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0BB4u;
        // 0x1c0bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0bb4) {
            ctx->pc = 0x1C0BE0u;
            return;
        }
    }
    ctx->pc = 0x1C0BBCu;
    // 0x1c0bbc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c0bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c0bc0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0BC0u;
    SET_GPR_U32(ctx, 31, 0x1C0BC8u);
    ctx->pc = 0x1C0BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0BC0u;
    // 0x1c0bc4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0BC0u, 0x1C0BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0BC8u;
label_1c0bc8:
    // 0x1c0bc8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c0bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c0bcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c0bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0bd0: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C0BD0u;
    SET_GPR_U32(ctx, 31, 0x1C0BD8u);
    ctx->pc = 0x1C0BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0BD0u;
    // 0x1c0bd4: 0x24a53f00  addiu       $a1, $a1, 0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C0BD0u, 0x1C0BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0BD8u;
label_1c0bd8:
    // 0x1c0bd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0BD8u;
    {
        const bool branch_taken_0x1c0bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0bd8) {
            ctx->pc = 0x1C0C00u;
            return;
        }
    }
    ctx->pc = 0x1C0BE0u;
}
