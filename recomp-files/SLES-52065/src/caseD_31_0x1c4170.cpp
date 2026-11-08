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

// Function: caseD_31
// Address: 0x1c4170 - 0x1c41c0
void caseD_31_0x1c4170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_31_0x1c4170");
#endif

    switch (ctx->pc) {
        case 0x1c417cu: goto label_1c417c;
        case 0x1c4188u: goto label_1c4188;
        case 0x1c4194u: goto label_1c4194;
        default: break;
    }

    ctx->pc = 0x1c4170u;

    // 0x1c4170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4174: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4174u;
    SET_GPR_U32(ctx, 31, 0x1C417Cu);
    ctx->pc = 0x1C4178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4174u;
    // 0x1c4178: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4174u, 0x1C417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C417Cu;
label_1c417c:
    // 0x1c417c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c417cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4180: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C4180u;
    SET_GPR_U32(ctx, 31, 0x1C4188u);
    ctx->pc = 0x1C4184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4180u;
    // 0x1c4184: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C4180u, 0x1C4188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4188u;
label_1c4188:
    // 0x1c4188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c418c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C418Cu;
    SET_GPR_U32(ctx, 31, 0x1C4194u);
    ctx->pc = 0x1C4190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C418Cu;
    // 0x1c4190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C418Cu, 0x1C4194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4194u;
label_1c4194:
    // 0x1c4194: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c4194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c4198: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c4198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c419c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C419Cu;
    {
        const bool branch_taken_0x1c419c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c419c) {
            ctx->pc = 0x1C41C4u;
            return;
        }
    }
    ctx->pc = 0x1C41A4u;
    // 0x1c41a4: 0x8e030204  lw          $v1, 0x204($s0)
    ctx->pc = 0x1c41a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x1c41a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c41ac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C41ACu;
    {
        const bool branch_taken_0x1c41ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41ACu;
        // 0x1c41b0: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41ac) {
            ctx->pc = 0x1C41C0u;
            return;
        }
    }
    ctx->pc = 0x1C41B4u;
    // 0x1c41b4: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1c41b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1c41b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C41B8u;
    {
        const bool branch_taken_0x1c41b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41B8u;
        // 0x1c41bc: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41b8) {
            ctx->pc = 0x1C41C4u;
            return;
        }
    }
    ctx->pc = 0x1C41C0u;
}
