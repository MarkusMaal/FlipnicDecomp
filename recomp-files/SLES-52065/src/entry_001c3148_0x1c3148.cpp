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

// Function: entry_001c3148
// Address: 0x1c3148 - 0x1c31a8
void entry_001c3148_0x1c3148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3148_0x1c3148");
#endif

    switch (ctx->pc) {
        case 0x1c3168u: goto label_1c3168;
        case 0x1c3170u: goto label_1c3170;
        case 0x1c3180u: goto label_1c3180;
        case 0x1c3188u: goto label_1c3188;
        case 0x1c3198u: goto label_1c3198;
        case 0x1c31a0u: goto label_1c31a0;
        default: break;
    }

    ctx->pc = 0x1c3148u;

    // 0x1c3148: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c3148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c314c: 0x10430025  beq         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C314Cu;
    {
        const bool branch_taken_0x1c314c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c314c) {
            ctx->pc = 0x1C31E4u;
            return;
        }
    }
    ctx->pc = 0x1C3154u;
    // 0x1c3154: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C3154u;
    {
        const bool branch_taken_0x1c3154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3154u;
        // 0x1c3158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3154) {
            ctx->pc = 0x1C31A8u;
            return;
        }
    }
    ctx->pc = 0x1C315Cu;
    // 0x1c315c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c315cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3160: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C3160u;
    SET_GPR_U32(ctx, 31, 0x1C3168u);
    ctx->pc = 0x1C3164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3160u;
    // 0x1c3164: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C3160u, 0x1C3168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3168u;
label_1c3168:
    // 0x1c3168: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C3168u;
    SET_GPR_U32(ctx, 31, 0x1C3170u);
    ctx->pc = 0x1C316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3168u;
    // 0x1c316c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C3168u, 0x1C3170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3170u;
label_1c3170:
    // 0x1c3170: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c3170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c3174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3178: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C3178u;
    SET_GPR_U32(ctx, 31, 0x1C3180u);
    ctx->pc = 0x1C317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3178u;
    // 0x1c317c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C3178u, 0x1C3180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3180u;
label_1c3180:
    // 0x1c3180: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C3180u;
    SET_GPR_U32(ctx, 31, 0x1C3188u);
    ctx->pc = 0x1C3184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3180u;
    // 0x1c3184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C3180u, 0x1C3188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3188u;
label_1c3188:
    // 0x1c3188: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x1c3188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c318c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c318cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3190: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C3190u;
    SET_GPR_U32(ctx, 31, 0x1C3198u);
    ctx->pc = 0x1C3194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3190u;
    // 0x1c3194: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C3190u, 0x1C3198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3198u;
label_1c3198:
    // 0x1c3198: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C3198u;
    SET_GPR_U32(ctx, 31, 0x1C31A0u);
    ctx->pc = 0x1C319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3198u;
    // 0x1c319c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C3198u, 0x1C31A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31A0u;
label_1c31a0:
    // 0x1c31a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C31A0u;
    {
        const bool branch_taken_0x1c31a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31A0u;
        // 0x1c31a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31a0) {
            ctx->pc = 0x1C31DCu;
            return;
        }
    }
    ctx->pc = 0x1C31A8u;
}
