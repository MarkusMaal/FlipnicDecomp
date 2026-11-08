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

// Function: caseD_39
// Address: 0x1c4378 - 0x1c43cc
void caseD_39_0x1c4378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_39_0x1c4378");
#endif

    switch (ctx->pc) {
        case 0x1c4384u: goto label_1c4384;
        case 0x1c4390u: goto label_1c4390;
        case 0x1c439cu: goto label_1c439c;
        case 0x1c43a8u: goto label_1c43a8;
        case 0x1c43c0u: goto label_1c43c0;
        default: break;
    }

    ctx->pc = 0x1c4378u;

    // 0x1c4378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c437c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C437Cu;
    SET_GPR_U32(ctx, 31, 0x1C4384u);
    ctx->pc = 0x1C4380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C437Cu;
    // 0x1c4380: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C437Cu, 0x1C4384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4384u;
label_1c4384:
    // 0x1c4384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4388: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4388u;
    SET_GPR_U32(ctx, 31, 0x1C4390u);
    ctx->pc = 0x1C438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4388u;
    // 0x1c438c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4388u, 0x1C4390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4390u;
label_1c4390:
    // 0x1c4390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4394: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4394u;
    SET_GPR_U32(ctx, 31, 0x1C439Cu);
    ctx->pc = 0x1C4398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4394u;
    // 0x1c4398: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4394u, 0x1C439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C439Cu;
label_1c439c:
    // 0x1c439c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c439cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c43a0: 0xc0731a0  jal         func_1CC680
    ctx->pc = 0x1C43A0u;
    SET_GPR_U32(ctx, 31, 0x1C43A8u);
    ctx->pc = 0x1C43A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43A0u;
    // 0x1c43a4: 0x8c24f5e0  lw          $a0, -0xA20($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC680u, 0x1C43A0u, 0x1C43A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43A8u;
label_1c43a8:
    // 0x1c43a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c43a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c43ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C43ACu;
    {
        const bool branch_taken_0x1c43ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43ACu;
        // 0x1c43b0: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43ac) {
            ctx->pc = 0x1C43CCu;
            return;
        }
    }
    ctx->pc = 0x1C43B4u;
    // 0x1c43b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c43b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c43b8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C43B8u;
    SET_GPR_U32(ctx, 31, 0x1C43C0u);
    ctx->pc = 0x1C43BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43B8u;
    // 0x1c43bc: 0x8c24f5e0  lw          $a0, -0xA20($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C43B8u, 0x1C43C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43C0u;
label_1c43c0:
    // 0x1c43c0: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1c43c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1c43c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C43C4u;
    {
        const bool branch_taken_0x1c43c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43C4u;
        // 0x1c43c8: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43c4) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C43CCu;
}
