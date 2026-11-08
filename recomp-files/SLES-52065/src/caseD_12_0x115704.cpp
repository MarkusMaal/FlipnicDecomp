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

// Function: caseD_12
// Address: 0x115704 - 0x115748
void caseD_12_0x115704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x115704");
#endif

    switch (ctx->pc) {
        case 0x115704u: goto label_115704;
        case 0x115708u: goto label_115708;
        case 0x11570cu: goto label_11570c;
        case 0x115710u: goto label_115710;
        case 0x115714u: goto label_115714;
        case 0x115718u: goto label_115718;
        case 0x11571cu: goto label_11571c;
        case 0x115720u: goto label_115720;
        case 0x115724u: goto label_115724;
        case 0x115728u: goto label_115728;
        case 0x11572cu: goto label_11572c;
        case 0x115730u: goto label_115730;
        case 0x115734u: goto label_115734;
        case 0x115738u: goto label_115738;
        case 0x11573cu: goto label_11573c;
        case 0x115740u: goto label_115740;
        case 0x115744u: goto label_115744;
        default: break;
    }

    ctx->pc = 0x115704u;

label_115704:
    // 0x115704: 0x938282f4  lbu         $v0, -0x7D0C($gp)
    ctx->pc = 0x115704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_115708:
    // 0x115708: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x115708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_11570c:
    // 0x11570c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x11570cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115710:
    // 0x115710: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115714:
    // 0x115714: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x115714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_115718:
    // 0x115718: 0x320f809  jalr        $t9
label_11571c:
    if (ctx->pc == 0x11571Cu) {
        ctx->pc = 0x11571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115718u;
        // 0x11571c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115720u;
        goto label_115720;
    }
    ctx->pc = 0x115718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115720u);
        ctx->pc = 0x11571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115718u;
        // 0x11571c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115718u, 0x115720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115720u;
label_115720:
    // 0x115720: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_115724:
    if (ctx->pc == 0x115724u) {
        ctx->pc = 0x115728u;
        goto label_115728;
    }
    ctx->pc = 0x115720u;
    {
        const bool branch_taken_0x115720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115720) {
            ctx->pc = 0x115748u;
            return;
        }
    }
    ctx->pc = 0x115728u;
label_115728:
    // 0x115728: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11572c:
    // 0x11572c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11572cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115730:
    // 0x115730: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115734:
    // 0x115734: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x115734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_115738:
    // 0x115738: 0x320f809  jalr        $t9
label_11573c:
    if (ctx->pc == 0x11573Cu) {
        ctx->pc = 0x11573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115738u;
        // 0x11573c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115740u;
        goto label_115740;
    }
    ctx->pc = 0x115738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115740u);
        ctx->pc = 0x11573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115738u;
        // 0x11573c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115738u, 0x115740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115740u;
label_115740:
    // 0x115740: 0x10000002  b           . + 4 + (0x2 << 2)
label_115744:
    if (ctx->pc == 0x115744u) {
        ctx->pc = 0x115744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115740u;
        // 0x115744: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x115748u;
        goto label_fallthrough_0x115740;
    }
    ctx->pc = 0x115740u;
    {
        const bool branch_taken_0x115740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115740u;
        // 0x115744: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115740) {
            ctx->pc = 0x11574Cu;
            return;
        }
    }
label_fallthrough_0x115740:
    ctx->pc = 0x115748u;
}
