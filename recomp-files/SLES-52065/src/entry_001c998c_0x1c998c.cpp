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

// Function: entry_001c998c
// Address: 0x1c998c - 0x1c99f8
void entry_001c998c_0x1c998c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c998c_0x1c998c");
#endif

    switch (ctx->pc) {
        case 0x1c99a4u: goto label_1c99a4;
        case 0x1c99b4u: goto label_1c99b4;
        case 0x1c99c0u: goto label_1c99c0;
        case 0x1c99d4u: goto label_1c99d4;
        case 0x1c99ecu: goto label_1c99ec;
        case 0x1c99f4u: goto label_1c99f4;
        default: break;
    }

    ctx->pc = 0x1c998cu;

    // 0x1c998c: 0x8e630068  lw          $v1, 0x68($s3)
    ctx->pc = 0x1c998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c9990: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x1c9990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x1c9994: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C9994u;
    {
        const bool branch_taken_0x1c9994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9994u;
        // 0x1c9998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9994) {
            ctx->pc = 0x1C9A20u;
            return;
        }
    }
    ctx->pc = 0x1C999Cu;
    // 0x1c999c: 0xc0727ec  jal         func_1C9FB0
    ctx->pc = 0x1C999Cu;
    SET_GPR_U32(ctx, 31, 0x1C99A4u);
    ctx->pc = 0x1C99A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C999Cu;
    // 0x1c99a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FB0u, 0x1C999Cu, 0x1C99A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99A4u;
label_1c99a4:
    // 0x1c99a4: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x1c99a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x1c99a8: 0x8e650064  lw          $a1, 0x64($s3)
    ctx->pc = 0x1c99a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1c99ac: 0xc0728f0  jal         func_1CA3C0
    ctx->pc = 0x1C99ACu;
    SET_GPR_U32(ctx, 31, 0x1C99B4u);
    ctx->pc = 0x1C99B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99ACu;
    // 0x1c99b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA3C0u, 0x1C99ACu, 0x1C99B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99B4u;
label_1c99b4:
    // 0x1c99b4: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x1c99b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c99b8: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1C99B8u;
    SET_GPR_U32(ctx, 31, 0x1C99C0u);
    ctx->pc = 0x1C99BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99B8u;
    // 0x1c99bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA340u, 0x1C99B8u, 0x1C99C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99C0u;
label_1c99c0:
    // 0x1c99c0: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x1c99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c99c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c99c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99c8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c99c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c99cc: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C99CCu;
    SET_GPR_U32(ctx, 31, 0x1C99D4u);
    ctx->pc = 0x1C99D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99CCu;
    // 0x1c99d0: 0xae620064  sw          $v0, 0x64($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C99CCu, 0x1C99D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99D4u;
label_1c99d4:
    // 0x1c99d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C99D4u;
    {
        const bool branch_taken_0x1c99d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99D4u;
        // 0x1c99d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99d4) {
            ctx->pc = 0x1C99F8u;
            return;
        }
    }
    ctx->pc = 0x1C99DCu;
    // 0x1c99dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c99dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99e0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c99e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c99e4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C99E4u;
    SET_GPR_U32(ctx, 31, 0x1C99ECu);
    ctx->pc = 0x1C99E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99E4u;
    // 0x1c99e8: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C99E4u, 0x1C99ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99ECu;
label_1c99ec:
    // 0x1c99ec: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C99ECu;
    SET_GPR_U32(ctx, 31, 0x1C99F4u);
    ctx->pc = 0x1C99F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99ECu;
    // 0x1c99f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C99ECu, 0x1C99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99F4u;
label_1c99f4:
    // 0x1c99f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c99f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c99f8u;
}
