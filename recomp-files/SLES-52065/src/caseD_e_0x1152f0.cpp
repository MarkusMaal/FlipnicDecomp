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

// Function: caseD_e
// Address: 0x1152f0 - 0x115354
void caseD_e_0x1152f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x1152f0");
#endif

    switch (ctx->pc) {
        case 0x1152f0u: goto label_1152f0;
        case 0x1152f4u: goto label_1152f4;
        case 0x1152f8u: goto label_1152f8;
        case 0x1152fcu: goto label_1152fc;
        case 0x115300u: goto label_115300;
        case 0x115304u: goto label_115304;
        case 0x115308u: goto label_115308;
        case 0x11530cu: goto label_11530c;
        case 0x115310u: goto label_115310;
        case 0x115314u: goto label_115314;
        case 0x115318u: goto label_115318;
        case 0x11531cu: goto label_11531c;
        case 0x115320u: goto label_115320;
        case 0x115324u: goto label_115324;
        case 0x115328u: goto label_115328;
        case 0x11532cu: goto label_11532c;
        case 0x115330u: goto label_115330;
        case 0x115334u: goto label_115334;
        case 0x115338u: goto label_115338;
        case 0x11533cu: goto label_11533c;
        case 0x115340u: goto label_115340;
        case 0x115344u: goto label_115344;
        case 0x115348u: goto label_115348;
        case 0x11534cu: goto label_11534c;
        case 0x115350u: goto label_115350;
        default: break;
    }

    ctx->pc = 0x1152f0u;

label_1152f0:
    // 0x1152f0: 0x938282c8  lbu         $v0, -0x7D38($gp)
    ctx->pc = 0x1152f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935240)));
label_1152f4:
    // 0x1152f4: 0x27a30154  addiu       $v1, $sp, 0x154
    ctx->pc = 0x1152f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_1152f8:
    // 0x1152f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1152f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1152fc:
    // 0x1152fc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1152fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115300:
    // 0x115300: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115304:
    // 0x115304: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x115304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_115308:
    // 0x115308: 0x320f809  jalr        $t9
label_11530c:
    if (ctx->pc == 0x11530Cu) {
        ctx->pc = 0x11530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115308u;
        // 0x11530c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115310u;
        goto label_115310;
    }
    ctx->pc = 0x115308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115310u);
        ctx->pc = 0x11530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115308u;
        // 0x11530c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115308u, 0x115310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115310u;
label_115310:
    // 0x115310: 0x938282cc  lbu         $v0, -0x7D34($gp)
    ctx->pc = 0x115310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935244)));
label_115314:
    // 0x115314: 0x27a30158  addiu       $v1, $sp, 0x158
    ctx->pc = 0x115314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_115318:
    // 0x115318: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_11531c:
    // 0x11531c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x11531cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115320:
    // 0x115320: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x115320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_115324:
    // 0x115324: 0x320f809  jalr        $t9
label_115328:
    if (ctx->pc == 0x115328u) {
        ctx->pc = 0x115328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115324u;
        // 0x115328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11532Cu;
        goto label_11532c;
    }
    ctx->pc = 0x115324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11532Cu);
        ctx->pc = 0x115328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115324u;
        // 0x115328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115324u, 0x11532Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11532Cu;
label_11532c:
    // 0x11532c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_115330:
    if (ctx->pc == 0x115330u) {
        ctx->pc = 0x115334u;
        goto label_115334;
    }
    ctx->pc = 0x11532Cu;
    {
        const bool branch_taken_0x11532c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11532c) {
            ctx->pc = 0x115354u;
            return;
        }
    }
    ctx->pc = 0x115334u;
label_115334:
    // 0x115334: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115338:
    // 0x115338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11533c:
    // 0x11533c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11533cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115340:
    // 0x115340: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x115340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115344:
    // 0x115344: 0x320f809  jalr        $t9
label_115348:
    if (ctx->pc == 0x115348u) {
        ctx->pc = 0x115348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115344u;
        // 0x115348: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11534Cu;
        goto label_11534c;
    }
    ctx->pc = 0x115344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11534Cu);
        ctx->pc = 0x115348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115344u;
        // 0x115348: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115344u, 0x11534Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11534Cu;
label_11534c:
    // 0x11534c: 0x10000002  b           . + 4 + (0x2 << 2)
label_115350:
    if (ctx->pc == 0x115350u) {
        ctx->pc = 0x115350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11534Cu;
        // 0x115350: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x115354u;
        goto label_fallthrough_0x11534c;
    }
    ctx->pc = 0x11534Cu;
    {
        const bool branch_taken_0x11534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11534Cu;
        // 0x115350: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11534c) {
            ctx->pc = 0x115358u;
            return;
        }
    }
label_fallthrough_0x11534c:
    ctx->pc = 0x115354u;
}
