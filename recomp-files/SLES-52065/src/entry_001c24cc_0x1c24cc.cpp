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

// Function: entry_001c24cc
// Address: 0x1c24cc - 0x1c2530
void entry_001c24cc_0x1c24cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c24cc_0x1c24cc");
#endif

    switch (ctx->pc) {
        case 0x1c24ecu: goto label_1c24ec;
        case 0x1c2504u: goto label_1c2504;
        case 0x1c250cu: goto label_1c250c;
        case 0x1c251cu: goto label_1c251c;
        case 0x1c2524u: goto label_1c2524;
        default: break;
    }

    ctx->pc = 0x1c24ccu;

    // 0x1c24cc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c24ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c24d0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c24d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c24d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c24d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c24d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c24dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c24dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24e0: 0x262a0250  addiu       $t2, $s1, 0x250
    ctx->pc = 0x1c24e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    // 0x1c24e4: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C24E4u;
    SET_GPR_U32(ctx, 31, 0x1C24ECu);
    ctx->pc = 0x1C24E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24E4u;
    // 0x1c24e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C24E4u, 0x1C24ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24ECu;
label_1c24ec:
    // 0x1c24ec: 0x8e260250  lw          $a2, 0x250($s1)
    ctx->pc = 0x1c24ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1c24f0: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x1c24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x1c24f4: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C24F4u;
    {
        const bool branch_taken_0x1c24f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C24F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24F4u;
        // 0x1c24f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24f4) {
            ctx->pc = 0x1C2530u;
            return;
        }
    }
    ctx->pc = 0x1C24FCu;
    // 0x1c24fc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C24FCu;
    SET_GPR_U32(ctx, 31, 0x1C2504u);
    ctx->pc = 0x1C2500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24FCu;
    // 0x1c2500: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C24FCu, 0x1C2504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2504u;
label_1c2504:
    // 0x1c2504: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C2504u;
    SET_GPR_U32(ctx, 31, 0x1C250Cu);
    ctx->pc = 0x1C2508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2504u;
    // 0x1c2508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C2504u, 0x1C250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C250Cu;
label_1c250c:
    // 0x1c250c: 0x8e260254  lw          $a2, 0x254($s1)
    ctx->pc = 0x1c250cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x1c2510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2514: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2514u;
    SET_GPR_U32(ctx, 31, 0x1C251Cu);
    ctx->pc = 0x1C2518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2514u;
    // 0x1c2518: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2514u, 0x1C251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C251Cu;
label_1c251c:
    // 0x1c251c: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C251Cu;
    SET_GPR_U32(ctx, 31, 0x1C2524u);
    ctx->pc = 0x1C2520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C251Cu;
    // 0x1c2520: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C251Cu, 0x1C2524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2524u;
label_1c2524:
    // 0x1c2524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2528: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C2528u;
    SET_GPR_U32(ctx, 31, 0x1C2530u);
    ctx->pc = 0x1C252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2528u;
    // 0x1c252c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C2528u, 0x1C2530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2530u;
}
