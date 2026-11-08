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

// Function: caseD_7
// Address: 0x114ce0 - 0x114d24
void caseD_7_0x114ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x114ce0");
#endif

    switch (ctx->pc) {
        case 0x114ce0u: goto label_114ce0;
        case 0x114ce4u: goto label_114ce4;
        case 0x114ce8u: goto label_114ce8;
        case 0x114cecu: goto label_114cec;
        case 0x114cf0u: goto label_114cf0;
        case 0x114cf4u: goto label_114cf4;
        case 0x114cf8u: goto label_114cf8;
        case 0x114cfcu: goto label_114cfc;
        case 0x114d00u: goto label_114d00;
        case 0x114d04u: goto label_114d04;
        case 0x114d08u: goto label_114d08;
        case 0x114d0cu: goto label_114d0c;
        case 0x114d10u: goto label_114d10;
        case 0x114d14u: goto label_114d14;
        case 0x114d18u: goto label_114d18;
        case 0x114d1cu: goto label_114d1c;
        case 0x114d20u: goto label_114d20;
        default: break;
    }

    ctx->pc = 0x114ce0u;

label_114ce0:
    // 0x114ce0: 0x93828280  lbu         $v0, -0x7D80($gp)
    ctx->pc = 0x114ce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935168)));
label_114ce4:
    // 0x114ce4: 0x27a3010c  addiu       $v1, $sp, 0x10C
    ctx->pc = 0x114ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_114ce8:
    // 0x114ce8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114cec:
    // 0x114cec: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114cf0:
    // 0x114cf0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x114cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_114cf4:
    // 0x114cf4: 0x320f809  jalr        $t9
label_114cf8:
    if (ctx->pc == 0x114CF8u) {
        ctx->pc = 0x114CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CF4u;
        // 0x114cf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114CFCu;
        goto label_114cfc;
    }
    ctx->pc = 0x114CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114CFCu);
        ctx->pc = 0x114CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CF4u;
        // 0x114cf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114CF4u, 0x114CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114CFCu;
label_114cfc:
    // 0x114cfc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_114d00:
    if (ctx->pc == 0x114D00u) {
        ctx->pc = 0x114D04u;
        goto label_114d04;
    }
    ctx->pc = 0x114CFCu;
    {
        const bool branch_taken_0x114cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114cfc) {
            ctx->pc = 0x114D24u;
            return;
        }
    }
    ctx->pc = 0x114D04u;
label_114d04:
    // 0x114d04: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114d08:
    // 0x114d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114d0c:
    // 0x114d0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x114d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_114d10:
    // 0x114d10: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114d14:
    // 0x114d14: 0x320f809  jalr        $t9
label_114d18:
    if (ctx->pc == 0x114D18u) {
        ctx->pc = 0x114D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D14u;
        // 0x114d18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D1Cu;
        goto label_114d1c;
    }
    ctx->pc = 0x114D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114D1Cu);
        ctx->pc = 0x114D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D14u;
        // 0x114d18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114D14u, 0x114D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114D1Cu;
label_114d1c:
    // 0x114d1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_114d20:
    if (ctx->pc == 0x114D20u) {
        ctx->pc = 0x114D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D1Cu;
        // 0x114d20: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D24u;
        goto label_fallthrough_0x114d1c;
    }
    ctx->pc = 0x114D1Cu;
    {
        const bool branch_taken_0x114d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D1Cu;
        // 0x114d20: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d1c) {
            ctx->pc = 0x114D28u;
            return;
        }
    }
label_fallthrough_0x114d1c:
    ctx->pc = 0x114D24u;
}
