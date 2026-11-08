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

// Function: caseD_5
// Address: 0x114a8c - 0x114acc
void caseD_5_0x114a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x114a8c");
#endif

    switch (ctx->pc) {
        case 0x114a8cu: goto label_114a8c;
        case 0x114a90u: goto label_114a90;
        case 0x114a94u: goto label_114a94;
        case 0x114a98u: goto label_114a98;
        case 0x114a9cu: goto label_114a9c;
        case 0x114aa0u: goto label_114aa0;
        case 0x114aa4u: goto label_114aa4;
        case 0x114aa8u: goto label_114aa8;
        case 0x114aacu: goto label_114aac;
        case 0x114ab0u: goto label_114ab0;
        case 0x114ab4u: goto label_114ab4;
        case 0x114ab8u: goto label_114ab8;
        case 0x114abcu: goto label_114abc;
        case 0x114ac0u: goto label_114ac0;
        case 0x114ac4u: goto label_114ac4;
        case 0x114ac8u: goto label_114ac8;
        default: break;
    }

    ctx->pc = 0x114a8cu;

label_114a8c:
    // 0x114a8c: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x114a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_114a90:
    // 0x114a90: 0x90420042  lbu         $v0, 0x42($v0)
    ctx->pc = 0x114a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 66)));
label_114a94:
    // 0x114a94: 0x1040043a  beqz        $v0, . + 4 + (0x43A << 2)
label_114a98:
    if (ctx->pc == 0x114A98u) {
        ctx->pc = 0x114A9Cu;
        goto label_114a9c;
    }
    ctx->pc = 0x114A94u;
    {
        const bool branch_taken_0x114a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114a94) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x114A9Cu;
label_114a9c:
    // 0x114a9c: 0x9382826c  lbu         $v0, -0x7D94($gp)
    ctx->pc = 0x114a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935148)));
label_114aa0:
    // 0x114aa0: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x114aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_114aa4:
    // 0x114aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114aa8:
    // 0x114aa8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114aac:
    // 0x114aac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114aacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114ab0:
    // 0x114ab0: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x114ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_114ab4:
    // 0x114ab4: 0x320f809  jalr        $t9
label_114ab8:
    if (ctx->pc == 0x114AB8u) {
        ctx->pc = 0x114AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AB4u;
        // 0x114ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114ABCu;
        goto label_114abc;
    }
    ctx->pc = 0x114AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114ABCu);
        ctx->pc = 0x114AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AB4u;
        // 0x114ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114AB4u, 0x114ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114ABCu;
label_114abc:
    // 0x114abc: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x114abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114ac0:
    // 0x114ac0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114ac4:
    // 0x114ac4: 0x1000042e  b           . + 4 + (0x42E << 2)
label_114ac8:
    if (ctx->pc == 0x114AC8u) {
        ctx->pc = 0x114AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AC4u;
        // 0x114ac8: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114ACCu;
        goto label_fallthrough_0x114ac4;
    }
    ctx->pc = 0x114AC4u;
    {
        const bool branch_taken_0x114ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AC4u;
        // 0x114ac8: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ac4) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
label_fallthrough_0x114ac4:
    ctx->pc = 0x114ACCu;
}
