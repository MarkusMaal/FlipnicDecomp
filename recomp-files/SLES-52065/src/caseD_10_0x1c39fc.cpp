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

// Function: caseD_10
// Address: 0x1c39fc - 0x1c3a4c
void caseD_10_0x1c39fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x1c39fc");
#endif

    switch (ctx->pc) {
        case 0x1c3a08u: goto label_1c3a08;
        case 0x1c3a14u: goto label_1c3a14;
        case 0x1c3a20u: goto label_1c3a20;
        default: break;
    }

    ctx->pc = 0x1c39fcu;

    // 0x1c39fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c39fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a00: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3A00u;
    SET_GPR_U32(ctx, 31, 0x1C3A08u);
    ctx->pc = 0x1C3A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A00u;
    // 0x1c3a04: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3A00u, 0x1C3A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A08u;
label_1c3a08:
    // 0x1c3a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a0c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C3A14u);
    ctx->pc = 0x1C3A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A0Cu;
    // 0x1c3a10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3A0Cu, 0x1C3A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A14u;
label_1c3a14:
    // 0x1c3a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a18: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3A18u;
    SET_GPR_U32(ctx, 31, 0x1C3A20u);
    ctx->pc = 0x1C3A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A18u;
    // 0x1c3a1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3A18u, 0x1C3A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A20u;
label_1c3a20:
    // 0x1c3a20: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c3a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c3a24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3a28: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3A28u;
    {
        const bool branch_taken_0x1c3a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3a28) {
            ctx->pc = 0x1C3A50u;
            return;
        }
    }
    ctx->pc = 0x1C3A30u;
    // 0x1c3a30: 0x8e030204  lw          $v1, 0x204($s0)
    ctx->pc = 0x1c3a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x1c3a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3a38: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3A38u;
    {
        const bool branch_taken_0x1c3a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A38u;
        // 0x1c3a3c: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a38) {
            ctx->pc = 0x1C3A4Cu;
            return;
        }
    }
    ctx->pc = 0x1C3A40u;
    // 0x1c3a40: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1c3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1c3a44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3A44u;
    {
        const bool branch_taken_0x1c3a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A44u;
        // 0x1c3a48: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a44) {
            ctx->pc = 0x1C3A50u;
            return;
        }
    }
    ctx->pc = 0x1C3A4Cu;
}
