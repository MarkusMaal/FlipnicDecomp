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

// Function: caseD_f
// Address: 0x1153fc - 0x11543c
void caseD_f_0x1153fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x1153fc");
#endif

    switch (ctx->pc) {
        case 0x1153fcu: goto label_1153fc;
        case 0x115400u: goto label_115400;
        case 0x115404u: goto label_115404;
        case 0x115408u: goto label_115408;
        case 0x11540cu: goto label_11540c;
        case 0x115410u: goto label_115410;
        case 0x115414u: goto label_115414;
        case 0x115418u: goto label_115418;
        case 0x11541cu: goto label_11541c;
        case 0x115420u: goto label_115420;
        case 0x115424u: goto label_115424;
        case 0x115428u: goto label_115428;
        case 0x11542cu: goto label_11542c;
        case 0x115430u: goto label_115430;
        case 0x115434u: goto label_115434;
        case 0x115438u: goto label_115438;
        default: break;
    }

    ctx->pc = 0x1153fcu;

label_1153fc:
    // 0x1153fc: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x1153fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_115400:
    // 0x115400: 0x90420086  lbu         $v0, 0x86($v0)
    ctx->pc = 0x115400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_115404:
    // 0x115404: 0x104001de  beqz        $v0, . + 4 + (0x1DE << 2)
label_115408:
    if (ctx->pc == 0x115408u) {
        ctx->pc = 0x11540Cu;
        goto label_11540c;
    }
    ctx->pc = 0x115404u;
    {
        const bool branch_taken_0x115404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115404) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x11540Cu;
label_11540c:
    // 0x11540c: 0x938282d4  lbu         $v0, -0x7D2C($gp)
    ctx->pc = 0x11540cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935252)));
label_115410:
    // 0x115410: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x115410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_115414:
    // 0x115414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115418:
    // 0x115418: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_11541c:
    // 0x11541c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x11541cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115420:
    // 0x115420: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x115420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_115424:
    // 0x115424: 0x320f809  jalr        $t9
label_115428:
    if (ctx->pc == 0x115428u) {
        ctx->pc = 0x115428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115424u;
        // 0x115428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11542Cu;
        goto label_11542c;
    }
    ctx->pc = 0x115424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11542Cu);
        ctx->pc = 0x115428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115424u;
        // 0x115428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115424u, 0x11542Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11542Cu;
label_11542c:
    // 0x11542c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x11542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_115430:
    // 0x115430: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_115434:
    // 0x115434: 0x100001d2  b           . + 4 + (0x1D2 << 2)
label_115438:
    if (ctx->pc == 0x115438u) {
        ctx->pc = 0x115438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115434u;
        // 0x115438: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11543Cu;
        goto label_fallthrough_0x115434;
    }
    ctx->pc = 0x115434u;
    {
        const bool branch_taken_0x115434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115434u;
        // 0x115438: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115434) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
label_fallthrough_0x115434:
    ctx->pc = 0x11543Cu;
}
