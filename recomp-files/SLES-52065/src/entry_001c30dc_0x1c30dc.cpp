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

// Function: entry_001c30dc
// Address: 0x1c30dc - 0x1c312c
void entry_001c30dc_0x1c30dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c30dc_0x1c30dc");
#endif

    switch (ctx->pc) {
        case 0x1c30fcu: goto label_1c30fc;
        case 0x1c3118u: goto label_1c3118;
        case 0x1c3124u: goto label_1c3124;
        default: break;
    }

    ctx->pc = 0x1c30dcu;

    // 0x1c30dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c30dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30e0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c30e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c30e4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1c30e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c30e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c30e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30ec: 0x260a0060  addiu       $t2, $s0, 0x60
    ctx->pc = 0x1c30ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1c30f0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1c30f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30f4: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C30F4u;
    SET_GPR_U32(ctx, 31, 0x1C30FCu);
    ctx->pc = 0x1C30F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30F4u;
    // 0x1c30f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C30F4u, 0x1C30FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30FCu;
label_1c30fc:
    // 0x1c30fc: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1c30fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c3100: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C3100u;
    {
        const bool branch_taken_0x1c3100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3100u;
        // 0x1c3104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3100) {
            ctx->pc = 0x1C312Cu;
            return;
        }
    }
    ctx->pc = 0x1C3108u;
    // 0x1c3108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c310c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c310cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3110: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C3110u;
    SET_GPR_U32(ctx, 31, 0x1C3118u);
    ctx->pc = 0x1C3114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3110u;
    // 0x1c3114: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C3110u, 0x1C3118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3118u;
label_1c3118:
    // 0x1c3118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c3118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c311c: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1C311Cu;
    SET_GPR_U32(ctx, 31, 0x1C3124u);
    ctx->pc = 0x1C3120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C311Cu;
    // 0x1c3120: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1C311Cu, 0x1C3124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3124u;
label_1c3124:
    // 0x1c3124: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3124u;
    {
        const bool branch_taken_0x1c3124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3124u;
        // 0x1c3128: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3124) {
            ctx->pc = 0x1C3148u;
            return;
        }
    }
    ctx->pc = 0x1C312Cu;
}
