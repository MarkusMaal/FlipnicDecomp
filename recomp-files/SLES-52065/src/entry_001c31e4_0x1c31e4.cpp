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

// Function: entry_001c31e4
// Address: 0x1c31e4 - 0x1c3230
void entry_001c31e4_0x1c31e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c31e4_0x1c31e4");
#endif

    switch (ctx->pc) {
        case 0x1c3200u: goto label_1c3200;
        case 0x1c3208u: goto label_1c3208;
        case 0x1c3218u: goto label_1c3218;
        case 0x1c3220u: goto label_1c3220;
        case 0x1c322cu: goto label_1c322c;
        default: break;
    }

    ctx->pc = 0x1c31e4u;

    // 0x1c31e4: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c31e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c31e8: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1c31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c31ec: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C31ECu;
    {
        const bool branch_taken_0x1c31ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C31F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31ECu;
        // 0x1c31f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31ec) {
            ctx->pc = 0x1C3230u;
            return;
        }
    }
    ctx->pc = 0x1C31F4u;
    // 0x1c31f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31f8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C31F8u;
    SET_GPR_U32(ctx, 31, 0x1C3200u);
    ctx->pc = 0x1C31FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31F8u;
    // 0x1c31fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C31F8u, 0x1C3200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3200u;
label_1c3200:
    // 0x1c3200: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C3200u;
    SET_GPR_U32(ctx, 31, 0x1C3208u);
    ctx->pc = 0x1C3204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3200u;
    // 0x1c3204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C3200u, 0x1C3208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3208u;
label_1c3208:
    // 0x1c3208: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x1c3208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c320c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c320cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3210: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C3210u;
    SET_GPR_U32(ctx, 31, 0x1C3218u);
    ctx->pc = 0x1C3214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3210u;
    // 0x1c3214: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C3210u, 0x1C3218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3218u;
label_1c3218:
    // 0x1c3218: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C3218u;
    SET_GPR_U32(ctx, 31, 0x1C3220u);
    ctx->pc = 0x1C321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3218u;
    // 0x1c321c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C3218u, 0x1C3220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3220u;
label_1c3220:
    // 0x1c3220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3224: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C3224u;
    SET_GPR_U32(ctx, 31, 0x1C322Cu);
    ctx->pc = 0x1C3228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3224u;
    // 0x1c3228: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C3224u, 0x1C322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C322Cu;
label_1c322c:
    // 0x1c322c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c322cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c3230u;
}
