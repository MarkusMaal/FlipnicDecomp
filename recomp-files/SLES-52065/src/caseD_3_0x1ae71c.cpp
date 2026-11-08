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

// Function: caseD_3
// Address: 0x1ae71c - 0x1ae7a8
void caseD_3_0x1ae71c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1ae71c");
#endif

    switch (ctx->pc) {
        case 0x1ae71cu: goto label_1ae71c;
        case 0x1ae720u: goto label_1ae720;
        case 0x1ae724u: goto label_1ae724;
        case 0x1ae728u: goto label_1ae728;
        case 0x1ae72cu: goto label_1ae72c;
        case 0x1ae730u: goto label_1ae730;
        case 0x1ae734u: goto label_1ae734;
        case 0x1ae738u: goto label_1ae738;
        case 0x1ae73cu: goto label_1ae73c;
        case 0x1ae740u: goto label_1ae740;
        case 0x1ae744u: goto label_1ae744;
        case 0x1ae748u: goto label_1ae748;
        case 0x1ae74cu: goto label_1ae74c;
        case 0x1ae750u: goto label_1ae750;
        case 0x1ae754u: goto label_1ae754;
        case 0x1ae758u: goto label_1ae758;
        case 0x1ae75cu: goto label_1ae75c;
        case 0x1ae760u: goto label_1ae760;
        case 0x1ae764u: goto label_1ae764;
        case 0x1ae768u: goto label_1ae768;
        case 0x1ae76cu: goto label_1ae76c;
        case 0x1ae770u: goto label_1ae770;
        case 0x1ae774u: goto label_1ae774;
        case 0x1ae778u: goto label_1ae778;
        case 0x1ae77cu: goto label_1ae77c;
        case 0x1ae780u: goto label_1ae780;
        case 0x1ae784u: goto label_1ae784;
        case 0x1ae788u: goto label_1ae788;
        case 0x1ae78cu: goto label_1ae78c;
        case 0x1ae790u: goto label_1ae790;
        case 0x1ae794u: goto label_1ae794;
        case 0x1ae798u: goto label_1ae798;
        case 0x1ae79cu: goto label_1ae79c;
        case 0x1ae7a0u: goto label_1ae7a0;
        case 0x1ae7a4u: goto label_1ae7a4;
        default: break;
    }

    ctx->pc = 0x1ae71cu;

label_1ae71c:
    // 0x1ae71c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ae71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae720:
    // 0x1ae720: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ae720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ae724:
    // 0x1ae724: 0xa28306b9  sb          $v1, 0x6B9($s4)
    ctx->pc = 0x1ae724u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1721), (uint8_t)GPR_U32(ctx, 3));
label_1ae728:
    // 0x1ae728: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ae72c:
    // 0x1ae72c: 0xae8006e0  sw          $zero, 0x6E0($s4)
    ctx->pc = 0x1ae72cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1760), GPR_U32(ctx, 0));
label_1ae730:
    // 0x1ae730: 0x24a50b08  addiu       $a1, $a1, 0xB08
    ctx->pc = 0x1ae730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2824));
label_1ae734:
    // 0x1ae734: 0xae8006d8  sw          $zero, 0x6D8($s4)
    ctx->pc = 0x1ae734u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1752), GPR_U32(ctx, 0));
label_1ae738:
    // 0x1ae738: 0xae8006d4  sw          $zero, 0x6D4($s4)
    ctx->pc = 0x1ae738u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1748), GPR_U32(ctx, 0));
label_1ae73c:
    // 0x1ae73c: 0xae8206dc  sw          $v0, 0x6DC($s4)
    ctx->pc = 0x1ae73cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1756), GPR_U32(ctx, 2));
label_1ae740:
    // 0x1ae740: 0xa28006e8  sb          $zero, 0x6E8($s4)
    ctx->pc = 0x1ae740u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1768), (uint8_t)GPR_U32(ctx, 0));
label_1ae744:
    // 0x1ae744: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ae744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1ae748:
    // 0x1ae748: 0x8f868124  lw          $a2, -0x7EDC($gp)
    ctx->pc = 0x1ae748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934820)));
label_1ae74c:
    // 0x1ae74c: 0xc06cf34  jal         func_1B3CD0
label_1ae750:
    if (ctx->pc == 0x1AE750u) {
        ctx->pc = 0x1AE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE74Cu;
        // 0x1ae750: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE754u;
        goto label_1ae754;
    }
    ctx->pc = 0x1AE74Cu;
    SET_GPR_U32(ctx, 31, 0x1AE754u);
    ctx->pc = 0x1AE750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE74Cu;
    // 0x1ae750: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AE74Cu, 0x1AE754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE754u;
label_1ae754:
    // 0x1ae754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae758:
    // 0x1ae758: 0xc069ac8  jal         func_1A6B20
label_1ae75c:
    if (ctx->pc == 0x1AE75Cu) {
        ctx->pc = 0x1AE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE758u;
        // 0x1ae75c: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE760u;
        goto label_1ae760;
    }
    ctx->pc = 0x1AE758u;
    SET_GPR_U32(ctx, 31, 0x1AE760u);
    ctx->pc = 0x1AE75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE758u;
    // 0x1ae75c: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AE758u, 0x1AE760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE760u;
label_1ae760:
    // 0x1ae760: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ae764:
    // 0x1ae764: 0x268406d0  addiu       $a0, $s4, 0x6D0
    ctx->pc = 0x1ae764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_1ae768:
    // 0x1ae768: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ae768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ae76c:
    // 0x1ae76c: 0xc069ac0  jal         func_1A6B00
label_1ae770:
    if (ctx->pc == 0x1AE770u) {
        ctx->pc = 0x1AE770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE76Cu;
        // 0x1ae770: 0xa28006e9  sb          $zero, 0x6E9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1769), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE774u;
        goto label_1ae774;
    }
    ctx->pc = 0x1AE76Cu;
    SET_GPR_U32(ctx, 31, 0x1AE774u);
    ctx->pc = 0x1AE770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE76Cu;
    // 0x1ae770: 0xa28006e9  sb          $zero, 0x6E9($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1769), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1AE76Cu, 0x1AE774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE774u;
label_1ae774:
    // 0x1ae774: 0xc062114  jal         func_188450
label_1ae778:
    if (ctx->pc == 0x1AE778u) {
        ctx->pc = 0x1AE778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE774u;
        // 0x1ae778: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE77Cu;
        goto label_1ae77c;
    }
    ctx->pc = 0x1AE774u;
    SET_GPR_U32(ctx, 31, 0x1AE77Cu);
    ctx->pc = 0x1AE778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE774u;
    // 0x1ae778: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AE774u, 0x1AE77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE77Cu;
label_1ae77c:
    // 0x1ae77c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae780:
    // 0x1ae780: 0xc0620fc  jal         func_1883F0
label_1ae784:
    if (ctx->pc == 0x1AE784u) {
        ctx->pc = 0x1AE784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE780u;
        // 0x1ae784: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE788u;
        goto label_1ae788;
    }
    ctx->pc = 0x1AE780u;
    SET_GPR_U32(ctx, 31, 0x1AE788u);
    ctx->pc = 0x1AE784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE780u;
    // 0x1ae784: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AE780u, 0x1AE788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE788u;
label_1ae788:
    // 0x1ae788: 0x8e8406d0  lw          $a0, 0x6D0($s4)
    ctx->pc = 0x1ae788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1744)));
label_1ae78c:
    // 0x1ae78c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ae790:
    if (ctx->pc == 0x1AE790u) {
        ctx->pc = 0x1AE794u;
        goto label_1ae794;
    }
    ctx->pc = 0x1AE78Cu;
    {
        const bool branch_taken_0x1ae78c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae78c) {
            ctx->pc = 0x1AE7A8u;
            return;
        }
    }
    ctx->pc = 0x1AE794u;
label_1ae794:
    // 0x1ae794: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ae794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ae798:
    // 0x1ae798: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1ae798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1ae79c:
    // 0x1ae79c: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ae79cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ae7a0:
    // 0x1ae7a0: 0x320f809  jalr        $t9
label_1ae7a4:
    if (ctx->pc == 0x1AE7A4u) {
        ctx->pc = 0x1AE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7A0u;
        // 0x1ae7a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE7A8u;
        goto label_fallthrough_0x1ae7a0;
    }
    ctx->pc = 0x1AE7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE7A8u);
        ctx->pc = 0x1AE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7A0u;
        // 0x1ae7a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE7A0u, 0x1AE7A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ae7a0:
    ctx->pc = 0x1AE7A8u;
}
