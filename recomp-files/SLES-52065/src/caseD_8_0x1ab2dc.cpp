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

// Function: caseD_8
// Address: 0x1ab2dc - 0x1ab364
void caseD_8_0x1ab2dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1ab2dc");
#endif

    switch (ctx->pc) {
        case 0x1ab2dcu: goto label_1ab2dc;
        case 0x1ab2e0u: goto label_1ab2e0;
        case 0x1ab2e4u: goto label_1ab2e4;
        case 0x1ab2e8u: goto label_1ab2e8;
        case 0x1ab2ecu: goto label_1ab2ec;
        case 0x1ab2f0u: goto label_1ab2f0;
        case 0x1ab2f4u: goto label_1ab2f4;
        case 0x1ab2f8u: goto label_1ab2f8;
        case 0x1ab2fcu: goto label_1ab2fc;
        case 0x1ab300u: goto label_1ab300;
        case 0x1ab304u: goto label_1ab304;
        case 0x1ab308u: goto label_1ab308;
        case 0x1ab30cu: goto label_1ab30c;
        case 0x1ab310u: goto label_1ab310;
        case 0x1ab314u: goto label_1ab314;
        case 0x1ab318u: goto label_1ab318;
        case 0x1ab31cu: goto label_1ab31c;
        case 0x1ab320u: goto label_1ab320;
        case 0x1ab324u: goto label_1ab324;
        case 0x1ab328u: goto label_1ab328;
        case 0x1ab32cu: goto label_1ab32c;
        case 0x1ab330u: goto label_1ab330;
        case 0x1ab334u: goto label_1ab334;
        case 0x1ab338u: goto label_1ab338;
        case 0x1ab33cu: goto label_1ab33c;
        case 0x1ab340u: goto label_1ab340;
        case 0x1ab344u: goto label_1ab344;
        case 0x1ab348u: goto label_1ab348;
        case 0x1ab34cu: goto label_1ab34c;
        case 0x1ab350u: goto label_1ab350;
        case 0x1ab354u: goto label_1ab354;
        case 0x1ab358u: goto label_1ab358;
        case 0x1ab35cu: goto label_1ab35c;
        case 0x1ab360u: goto label_1ab360;
        default: break;
    }

    ctx->pc = 0x1ab2dcu;

label_1ab2dc:
    // 0x1ab2dc: 0xa28006d9  sb          $zero, 0x6D9($s4)
    ctx->pc = 0x1ab2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1753), (uint8_t)GPR_U32(ctx, 0));
label_1ab2e0:
    // 0x1ab2e0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ab2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ab2e4:
    // 0x1ab2e4: 0xae800700  sw          $zero, 0x700($s4)
    ctx->pc = 0x1ab2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1792), GPR_U32(ctx, 0));
label_1ab2e8:
    // 0x1ab2e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ab2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ab2ec:
    // 0x1ab2ec: 0xae8006f8  sw          $zero, 0x6F8($s4)
    ctx->pc = 0x1ab2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1784), GPR_U32(ctx, 0));
label_1ab2f0:
    // 0x1ab2f0: 0x24a50918  addiu       $a1, $a1, 0x918
    ctx->pc = 0x1ab2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2328));
label_1ab2f4:
    // 0x1ab2f4: 0xae8006f4  sw          $zero, 0x6F4($s4)
    ctx->pc = 0x1ab2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1780), GPR_U32(ctx, 0));
label_1ab2f8:
    // 0x1ab2f8: 0xae8206fc  sw          $v0, 0x6FC($s4)
    ctx->pc = 0x1ab2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1788), GPR_U32(ctx, 2));
label_1ab2fc:
    // 0x1ab2fc: 0xa2800708  sb          $zero, 0x708($s4)
    ctx->pc = 0x1ab2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1800), (uint8_t)GPR_U32(ctx, 0));
label_1ab300:
    // 0x1ab300: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ab300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1ab304:
    // 0x1ab304: 0x8f86810c  lw          $a2, -0x7EF4($gp)
    ctx->pc = 0x1ab304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934796)));
label_1ab308:
    // 0x1ab308: 0xc06cf34  jal         func_1B3CD0
label_1ab30c:
    if (ctx->pc == 0x1AB30Cu) {
        ctx->pc = 0x1AB30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB308u;
        // 0x1ab30c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB310u;
        goto label_1ab310;
    }
    ctx->pc = 0x1AB308u;
    SET_GPR_U32(ctx, 31, 0x1AB310u);
    ctx->pc = 0x1AB30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB308u;
    // 0x1ab30c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AB308u, 0x1AB310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB310u;
label_1ab310:
    // 0x1ab310: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab314:
    // 0x1ab314: 0xc069ac8  jal         func_1A6B20
label_1ab318:
    if (ctx->pc == 0x1AB318u) {
        ctx->pc = 0x1AB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB314u;
        // 0x1ab318: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB31Cu;
        goto label_1ab31c;
    }
    ctx->pc = 0x1AB314u;
    SET_GPR_U32(ctx, 31, 0x1AB31Cu);
    ctx->pc = 0x1AB318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB314u;
    // 0x1ab318: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AB314u, 0x1AB31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB31Cu;
label_1ab31c:
    // 0x1ab31c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ab31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ab320:
    // 0x1ab320: 0x268406f0  addiu       $a0, $s4, 0x6F0
    ctx->pc = 0x1ab320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
label_1ab324:
    // 0x1ab324: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ab324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ab328:
    // 0x1ab328: 0xc069ac0  jal         func_1A6B00
label_1ab32c:
    if (ctx->pc == 0x1AB32Cu) {
        ctx->pc = 0x1AB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB328u;
        // 0x1ab32c: 0xa2800709  sb          $zero, 0x709($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1801), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB330u;
        goto label_1ab330;
    }
    ctx->pc = 0x1AB328u;
    SET_GPR_U32(ctx, 31, 0x1AB330u);
    ctx->pc = 0x1AB32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB328u;
    // 0x1ab32c: 0xa2800709  sb          $zero, 0x709($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1801), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1AB328u, 0x1AB330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB330u;
label_1ab330:
    // 0x1ab330: 0xc062114  jal         func_188450
label_1ab334:
    if (ctx->pc == 0x1AB334u) {
        ctx->pc = 0x1AB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB330u;
        // 0x1ab334: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB338u;
        goto label_1ab338;
    }
    ctx->pc = 0x1AB330u;
    SET_GPR_U32(ctx, 31, 0x1AB338u);
    ctx->pc = 0x1AB334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB330u;
    // 0x1ab334: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AB330u, 0x1AB338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB338u;
label_1ab338:
    // 0x1ab338: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab33c:
    // 0x1ab33c: 0xc0620fc  jal         func_1883F0
label_1ab340:
    if (ctx->pc == 0x1AB340u) {
        ctx->pc = 0x1AB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB33Cu;
        // 0x1ab340: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB344u;
        goto label_1ab344;
    }
    ctx->pc = 0x1AB33Cu;
    SET_GPR_U32(ctx, 31, 0x1AB344u);
    ctx->pc = 0x1AB340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB33Cu;
    // 0x1ab340: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AB33Cu, 0x1AB344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB344u;
label_1ab344:
    // 0x1ab344: 0x8e8406f0  lw          $a0, 0x6F0($s4)
    ctx->pc = 0x1ab344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1776)));
label_1ab348:
    // 0x1ab348: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ab34c:
    if (ctx->pc == 0x1AB34Cu) {
        ctx->pc = 0x1AB350u;
        goto label_1ab350;
    }
    ctx->pc = 0x1AB348u;
    {
        const bool branch_taken_0x1ab348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab348) {
            ctx->pc = 0x1AB364u;
            return;
        }
    }
    ctx->pc = 0x1AB350u;
label_1ab350:
    // 0x1ab350: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ab350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ab354:
    // 0x1ab354: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1ab354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ab358:
    // 0x1ab358: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ab358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ab35c:
    // 0x1ab35c: 0x320f809  jalr        $t9
label_1ab360:
    if (ctx->pc == 0x1AB360u) {
        ctx->pc = 0x1AB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB35Cu;
        // 0x1ab360: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB364u;
        goto label_fallthrough_0x1ab35c;
    }
    ctx->pc = 0x1AB35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AB364u);
        ctx->pc = 0x1AB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB35Cu;
        // 0x1ab360: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB35Cu, 0x1AB364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ab35c:
    ctx->pc = 0x1AB364u;
}
