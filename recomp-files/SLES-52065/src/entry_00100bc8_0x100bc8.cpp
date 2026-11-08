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

// Function: entry_00100bc8
// Address: 0x100bc8 - 0x100c08
void entry_00100bc8_0x100bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100bc8_0x100bc8");
#endif

    switch (ctx->pc) {
        case 0x100bdcu: goto label_100bdc;
        case 0x100bf0u: goto label_100bf0;
        case 0x100bfcu: goto label_100bfc;
        default: break;
    }

    ctx->pc = 0x100bc8u;

label_100bc8:
    // 0x100bc8: 0x92430079  lbu         $v1, 0x79($s2)
    ctx->pc = 0x100bc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 121)));
label_100bcc:
    // 0x100bcc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_100bd0:
    if (ctx->pc == 0x100BD0u) {
        ctx->pc = 0x100BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BCCu;
        // 0x100bd0: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BD4u;
        goto label_100bd4;
    }
    ctx->pc = 0x100BCCu;
    {
        const bool branch_taken_0x100bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BCCu;
        // 0x100bd0: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100bcc) {
            ctx->pc = 0x100C08u;
            return;
        }
    }
    ctx->pc = 0x100BD4u;
label_100bd4:
    // 0x100bd4: 0xc05622c  jal         func_1588B0
label_100bd8:
    if (ctx->pc == 0x100BD8u) {
        ctx->pc = 0x100BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BD4u;
        // 0x100bd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BDCu;
        goto label_100bdc;
    }
    ctx->pc = 0x100BD4u;
    SET_GPR_U32(ctx, 31, 0x100BDCu);
    ctx->pc = 0x100BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BD4u;
    // 0x100bd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1588B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1588B0u, 0x100BD4u, 0x100BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BDCu;
label_100bdc:
    // 0x100bdc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100bdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100be0:
    // 0x100be0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100be4:
    // 0x100be4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x100be4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_100be8:
    // 0x100be8: 0x320f809  jalr        $t9
label_100bec:
    if (ctx->pc == 0x100BECu) {
        ctx->pc = 0x100BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BE8u;
        // 0x100bec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BF0u;
        goto label_100bf0;
    }
    ctx->pc = 0x100BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100BF0u);
        ctx->pc = 0x100BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BE8u;
        // 0x100bec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100BE8u, 0x100BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100BF0u;
label_100bf0:
    // 0x100bf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100bf4:
    // 0x100bf4: 0xc04c6dc  jal         func_131B70
label_100bf8:
    if (ctx->pc == 0x100BF8u) {
        ctx->pc = 0x100BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BF4u;
        // 0x100bf8: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BFCu;
        goto label_100bfc;
    }
    ctx->pc = 0x100BF4u;
    SET_GPR_U32(ctx, 31, 0x100BFCu);
    ctx->pc = 0x100BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BF4u;
    // 0x100bf8: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x100BF4u, 0x100BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BFCu;
label_100bfc:
    // 0x100bfc: 0x7a460060  lq          $a2, 0x60($s2)
    ctx->pc = 0x100bfcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 96)));
label_100c00:
    // 0x100c00: 0x1000000e  b           . + 4 + (0xE << 2)
label_100c04:
    if (ctx->pc == 0x100C04u) {
        ctx->pc = 0x100C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C00u;
        // 0x100c04: 0x7e4601e0  sq          $a2, 0x1E0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 480), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100C08u;
        goto label_fallthrough_0x100c00;
    }
    ctx->pc = 0x100C00u;
    {
        const bool branch_taken_0x100c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C00u;
        // 0x100c04: 0x7e4601e0  sq          $a2, 0x1E0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 480), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c00) {
            ctx->pc = 0x100C3Cu;
            return;
        }
    }
label_fallthrough_0x100c00:
    ctx->pc = 0x100C08u;
}
