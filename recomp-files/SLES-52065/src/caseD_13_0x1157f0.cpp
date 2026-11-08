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

// Function: caseD_13
// Address: 0x1157f0 - 0x115854
void caseD_13_0x1157f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x1157f0");
#endif

    switch (ctx->pc) {
        case 0x1157f0u: goto label_1157f0;
        case 0x1157f4u: goto label_1157f4;
        case 0x1157f8u: goto label_1157f8;
        case 0x1157fcu: goto label_1157fc;
        case 0x115800u: goto label_115800;
        case 0x115804u: goto label_115804;
        case 0x115808u: goto label_115808;
        case 0x11580cu: goto label_11580c;
        case 0x115810u: goto label_115810;
        case 0x115814u: goto label_115814;
        case 0x115818u: goto label_115818;
        case 0x11581cu: goto label_11581c;
        case 0x115820u: goto label_115820;
        case 0x115824u: goto label_115824;
        case 0x115828u: goto label_115828;
        case 0x11582cu: goto label_11582c;
        case 0x115830u: goto label_115830;
        case 0x115834u: goto label_115834;
        case 0x115838u: goto label_115838;
        case 0x11583cu: goto label_11583c;
        case 0x115840u: goto label_115840;
        case 0x115844u: goto label_115844;
        case 0x115848u: goto label_115848;
        case 0x11584cu: goto label_11584c;
        case 0x115850u: goto label_115850;
        default: break;
    }

    ctx->pc = 0x1157f0u;

label_1157f0:
    // 0x1157f0: 0x93828300  lbu         $v0, -0x7D00($gp)
    ctx->pc = 0x1157f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935296)));
label_1157f4:
    // 0x1157f4: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x1157f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_1157f8:
    // 0x1157f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1157f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1157fc:
    // 0x1157fc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1157fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115800:
    // 0x115800: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115804:
    // 0x115804: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x115804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_115808:
    // 0x115808: 0x320f809  jalr        $t9
label_11580c:
    if (ctx->pc == 0x11580Cu) {
        ctx->pc = 0x11580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115808u;
        // 0x11580c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115810u;
        goto label_115810;
    }
    ctx->pc = 0x115808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115810u);
        ctx->pc = 0x11580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115808u;
        // 0x11580c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115808u, 0x115810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115810u;
label_115810:
    // 0x115810: 0x93828304  lbu         $v0, -0x7CFC($gp)
    ctx->pc = 0x115810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935300)));
label_115814:
    // 0x115814: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x115814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_115818:
    // 0x115818: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_11581c:
    // 0x11581c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x11581cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115820:
    // 0x115820: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x115820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_115824:
    // 0x115824: 0x320f809  jalr        $t9
label_115828:
    if (ctx->pc == 0x115828u) {
        ctx->pc = 0x115828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115824u;
        // 0x115828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11582Cu;
        goto label_11582c;
    }
    ctx->pc = 0x115824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11582Cu);
        ctx->pc = 0x115828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115824u;
        // 0x115828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115824u, 0x11582Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11582Cu;
label_11582c:
    // 0x11582c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_115830:
    if (ctx->pc == 0x115830u) {
        ctx->pc = 0x115834u;
        goto label_115834;
    }
    ctx->pc = 0x11582Cu;
    {
        const bool branch_taken_0x11582c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11582c) {
            ctx->pc = 0x115854u;
            return;
        }
    }
    ctx->pc = 0x115834u;
label_115834:
    // 0x115834: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115838:
    // 0x115838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11583c:
    // 0x11583c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11583cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115840:
    // 0x115840: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x115840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115844:
    // 0x115844: 0x320f809  jalr        $t9
label_115848:
    if (ctx->pc == 0x115848u) {
        ctx->pc = 0x115848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115844u;
        // 0x115848: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11584Cu;
        goto label_11584c;
    }
    ctx->pc = 0x115844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11584Cu);
        ctx->pc = 0x115848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115844u;
        // 0x115848: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115844u, 0x11584Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11584Cu;
label_11584c:
    // 0x11584c: 0x10000002  b           . + 4 + (0x2 << 2)
label_115850:
    if (ctx->pc == 0x115850u) {
        ctx->pc = 0x115850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11584Cu;
        // 0x115850: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x115854u;
        goto label_fallthrough_0x11584c;
    }
    ctx->pc = 0x11584Cu;
    {
        const bool branch_taken_0x11584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11584Cu;
        // 0x115850: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11584c) {
            ctx->pc = 0x115858u;
            return;
        }
    }
label_fallthrough_0x11584c:
    ctx->pc = 0x115854u;
}
