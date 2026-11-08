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
// Address: 0x1ac2f0 - 0x1ac37c
void caseD_3_0x1ac2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1ac2f0");
#endif

    switch (ctx->pc) {
        case 0x1ac2f0u: goto label_1ac2f0;
        case 0x1ac2f4u: goto label_1ac2f4;
        case 0x1ac2f8u: goto label_1ac2f8;
        case 0x1ac2fcu: goto label_1ac2fc;
        case 0x1ac300u: goto label_1ac300;
        case 0x1ac304u: goto label_1ac304;
        case 0x1ac308u: goto label_1ac308;
        case 0x1ac30cu: goto label_1ac30c;
        case 0x1ac310u: goto label_1ac310;
        case 0x1ac314u: goto label_1ac314;
        case 0x1ac318u: goto label_1ac318;
        case 0x1ac31cu: goto label_1ac31c;
        case 0x1ac320u: goto label_1ac320;
        case 0x1ac324u: goto label_1ac324;
        case 0x1ac328u: goto label_1ac328;
        case 0x1ac32cu: goto label_1ac32c;
        case 0x1ac330u: goto label_1ac330;
        case 0x1ac334u: goto label_1ac334;
        case 0x1ac338u: goto label_1ac338;
        case 0x1ac33cu: goto label_1ac33c;
        case 0x1ac340u: goto label_1ac340;
        case 0x1ac344u: goto label_1ac344;
        case 0x1ac348u: goto label_1ac348;
        case 0x1ac34cu: goto label_1ac34c;
        case 0x1ac350u: goto label_1ac350;
        case 0x1ac354u: goto label_1ac354;
        case 0x1ac358u: goto label_1ac358;
        case 0x1ac35cu: goto label_1ac35c;
        case 0x1ac360u: goto label_1ac360;
        case 0x1ac364u: goto label_1ac364;
        case 0x1ac368u: goto label_1ac368;
        case 0x1ac36cu: goto label_1ac36c;
        case 0x1ac370u: goto label_1ac370;
        case 0x1ac374u: goto label_1ac374;
        case 0x1ac378u: goto label_1ac378;
        default: break;
    }

    ctx->pc = 0x1ac2f0u;

label_1ac2f0:
    // 0x1ac2f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac2f4:
    // 0x1ac2f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ac2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ac2f8:
    // 0x1ac2f8: 0xa22306d9  sb          $v1, 0x6D9($s1)
    ctx->pc = 0x1ac2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1753), (uint8_t)GPR_U32(ctx, 3));
label_1ac2fc:
    // 0x1ac2fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ac2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ac300:
    // 0x1ac300: 0xae200700  sw          $zero, 0x700($s1)
    ctx->pc = 0x1ac300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 0));
label_1ac304:
    // 0x1ac304: 0x24a509c8  addiu       $a1, $a1, 0x9C8
    ctx->pc = 0x1ac304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2504));
label_1ac308:
    // 0x1ac308: 0xae2006f8  sw          $zero, 0x6F8($s1)
    ctx->pc = 0x1ac308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1784), GPR_U32(ctx, 0));
label_1ac30c:
    // 0x1ac30c: 0xae2006f4  sw          $zero, 0x6F4($s1)
    ctx->pc = 0x1ac30cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 0));
label_1ac310:
    // 0x1ac310: 0xae2206fc  sw          $v0, 0x6FC($s1)
    ctx->pc = 0x1ac310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1788), GPR_U32(ctx, 2));
label_1ac314:
    // 0x1ac314: 0xa2200708  sb          $zero, 0x708($s1)
    ctx->pc = 0x1ac314u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1800), (uint8_t)GPR_U32(ctx, 0));
label_1ac318:
    // 0x1ac318: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ac318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1ac31c:
    // 0x1ac31c: 0x8f868114  lw          $a2, -0x7EEC($gp)
    ctx->pc = 0x1ac31cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934804)));
label_1ac320:
    // 0x1ac320: 0xc06cf34  jal         func_1B3CD0
label_1ac324:
    if (ctx->pc == 0x1AC324u) {
        ctx->pc = 0x1AC324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC320u;
        // 0x1ac324: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC328u;
        goto label_1ac328;
    }
    ctx->pc = 0x1AC320u;
    SET_GPR_U32(ctx, 31, 0x1AC328u);
    ctx->pc = 0x1AC324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC320u;
    // 0x1ac324: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AC320u, 0x1AC328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC328u;
label_1ac328:
    // 0x1ac328: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ac328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac32c:
    // 0x1ac32c: 0xc069ac8  jal         func_1A6B20
label_1ac330:
    if (ctx->pc == 0x1AC330u) {
        ctx->pc = 0x1AC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC32Cu;
        // 0x1ac330: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC334u;
        goto label_1ac334;
    }
    ctx->pc = 0x1AC32Cu;
    SET_GPR_U32(ctx, 31, 0x1AC334u);
    ctx->pc = 0x1AC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC32Cu;
    // 0x1ac330: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AC32Cu, 0x1AC334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC334u;
label_1ac334:
    // 0x1ac334: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ac334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ac338:
    // 0x1ac338: 0x262406f0  addiu       $a0, $s1, 0x6F0
    ctx->pc = 0x1ac338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_1ac33c:
    // 0x1ac33c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac340:
    // 0x1ac340: 0xc069ac0  jal         func_1A6B00
label_1ac344:
    if (ctx->pc == 0x1AC344u) {
        ctx->pc = 0x1AC344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC340u;
        // 0x1ac344: 0xa2200709  sb          $zero, 0x709($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1801), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC348u;
        goto label_1ac348;
    }
    ctx->pc = 0x1AC340u;
    SET_GPR_U32(ctx, 31, 0x1AC348u);
    ctx->pc = 0x1AC344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC340u;
    // 0x1ac344: 0xa2200709  sb          $zero, 0x709($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1801), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1AC340u, 0x1AC348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC348u;
label_1ac348:
    // 0x1ac348: 0xc062114  jal         func_188450
label_1ac34c:
    if (ctx->pc == 0x1AC34Cu) {
        ctx->pc = 0x1AC34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC348u;
        // 0x1ac34c: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC350u;
        goto label_1ac350;
    }
    ctx->pc = 0x1AC348u;
    SET_GPR_U32(ctx, 31, 0x1AC350u);
    ctx->pc = 0x1AC34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC348u;
    // 0x1ac34c: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AC348u, 0x1AC350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC350u;
label_1ac350:
    // 0x1ac350: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ac350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac354:
    // 0x1ac354: 0xc0620fc  jal         func_1883F0
label_1ac358:
    if (ctx->pc == 0x1AC358u) {
        ctx->pc = 0x1AC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC354u;
        // 0x1ac358: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC35Cu;
        goto label_1ac35c;
    }
    ctx->pc = 0x1AC354u;
    SET_GPR_U32(ctx, 31, 0x1AC35Cu);
    ctx->pc = 0x1AC358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC354u;
    // 0x1ac358: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AC354u, 0x1AC35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC35Cu;
label_1ac35c:
    // 0x1ac35c: 0x8e2406f0  lw          $a0, 0x6F0($s1)
    ctx->pc = 0x1ac35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
label_1ac360:
    // 0x1ac360: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ac364:
    if (ctx->pc == 0x1AC364u) {
        ctx->pc = 0x1AC368u;
        goto label_1ac368;
    }
    ctx->pc = 0x1AC360u;
    {
        const bool branch_taken_0x1ac360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac360) {
            ctx->pc = 0x1AC37Cu;
            return;
        }
    }
    ctx->pc = 0x1AC368u;
label_1ac368:
    // 0x1ac368: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ac368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ac36c:
    // 0x1ac36c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1ac36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ac370:
    // 0x1ac370: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ac370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ac374:
    // 0x1ac374: 0x320f809  jalr        $t9
label_1ac378:
    if (ctx->pc == 0x1AC378u) {
        ctx->pc = 0x1AC378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC374u;
        // 0x1ac378: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC37Cu;
        goto label_fallthrough_0x1ac374;
    }
    ctx->pc = 0x1AC374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AC37Cu);
        ctx->pc = 0x1AC378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC374u;
        // 0x1ac378: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC374u, 0x1AC37Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ac374:
    ctx->pc = 0x1AC37Cu;
}
