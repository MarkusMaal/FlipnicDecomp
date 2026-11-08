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

// Function: caseD_11
// Address: 0x11564c - 0x115690
void caseD_11_0x11564c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x11564c");
#endif

    switch (ctx->pc) {
        case 0x11564cu: goto label_11564c;
        case 0x115650u: goto label_115650;
        case 0x115654u: goto label_115654;
        case 0x115658u: goto label_115658;
        case 0x11565cu: goto label_11565c;
        case 0x115660u: goto label_115660;
        case 0x115664u: goto label_115664;
        case 0x115668u: goto label_115668;
        case 0x11566cu: goto label_11566c;
        case 0x115670u: goto label_115670;
        case 0x115674u: goto label_115674;
        case 0x115678u: goto label_115678;
        case 0x11567cu: goto label_11567c;
        case 0x115680u: goto label_115680;
        case 0x115684u: goto label_115684;
        case 0x115688u: goto label_115688;
        case 0x11568cu: goto label_11568c;
        default: break;
    }

    ctx->pc = 0x11564cu;

label_11564c:
    // 0x11564c: 0x938282e8  lbu         $v0, -0x7D18($gp)
    ctx->pc = 0x11564cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935272)));
label_115650:
    // 0x115650: 0x27a30174  addiu       $v1, $sp, 0x174
    ctx->pc = 0x115650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_115654:
    // 0x115654: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115654u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115658:
    // 0x115658: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11565c:
    // 0x11565c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11565cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_115660:
    // 0x115660: 0x320f809  jalr        $t9
label_115664:
    if (ctx->pc == 0x115664u) {
        ctx->pc = 0x115664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115660u;
        // 0x115664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115668u;
        goto label_115668;
    }
    ctx->pc = 0x115660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115668u);
        ctx->pc = 0x115664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115660u;
        // 0x115664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115660u, 0x115668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115668u;
label_115668:
    // 0x115668: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_11566c:
    if (ctx->pc == 0x11566Cu) {
        ctx->pc = 0x115670u;
        goto label_115670;
    }
    ctx->pc = 0x115668u;
    {
        const bool branch_taken_0x115668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115668) {
            ctx->pc = 0x115690u;
            return;
        }
    }
    ctx->pc = 0x115670u;
label_115670:
    // 0x115670: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115674:
    // 0x115674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115678:
    // 0x115678: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x115678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11567c:
    // 0x11567c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x11567cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115680:
    // 0x115680: 0x320f809  jalr        $t9
label_115684:
    if (ctx->pc == 0x115684u) {
        ctx->pc = 0x115684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115680u;
        // 0x115684: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115688u;
        goto label_115688;
    }
    ctx->pc = 0x115680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115688u);
        ctx->pc = 0x115684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115680u;
        // 0x115684: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115680u, 0x115688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115688u;
label_115688:
    // 0x115688: 0x10000002  b           . + 4 + (0x2 << 2)
label_11568c:
    if (ctx->pc == 0x11568Cu) {
        ctx->pc = 0x11568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115688u;
        // 0x11568c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x115690u;
        goto label_fallthrough_0x115688;
    }
    ctx->pc = 0x115688u;
    {
        const bool branch_taken_0x115688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115688u;
        // 0x11568c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115688) {
            ctx->pc = 0x115694u;
            return;
        }
    }
label_fallthrough_0x115688:
    ctx->pc = 0x115690u;
}
