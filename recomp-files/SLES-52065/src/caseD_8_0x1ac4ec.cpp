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
// Address: 0x1ac4ec - 0x1ac574
void caseD_8_0x1ac4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1ac4ec");
#endif

    switch (ctx->pc) {
        case 0x1ac4ecu: goto label_1ac4ec;
        case 0x1ac4f0u: goto label_1ac4f0;
        case 0x1ac4f4u: goto label_1ac4f4;
        case 0x1ac4f8u: goto label_1ac4f8;
        case 0x1ac4fcu: goto label_1ac4fc;
        case 0x1ac500u: goto label_1ac500;
        case 0x1ac504u: goto label_1ac504;
        case 0x1ac508u: goto label_1ac508;
        case 0x1ac50cu: goto label_1ac50c;
        case 0x1ac510u: goto label_1ac510;
        case 0x1ac514u: goto label_1ac514;
        case 0x1ac518u: goto label_1ac518;
        case 0x1ac51cu: goto label_1ac51c;
        case 0x1ac520u: goto label_1ac520;
        case 0x1ac524u: goto label_1ac524;
        case 0x1ac528u: goto label_1ac528;
        case 0x1ac52cu: goto label_1ac52c;
        case 0x1ac530u: goto label_1ac530;
        case 0x1ac534u: goto label_1ac534;
        case 0x1ac538u: goto label_1ac538;
        case 0x1ac53cu: goto label_1ac53c;
        case 0x1ac540u: goto label_1ac540;
        case 0x1ac544u: goto label_1ac544;
        case 0x1ac548u: goto label_1ac548;
        case 0x1ac54cu: goto label_1ac54c;
        case 0x1ac550u: goto label_1ac550;
        case 0x1ac554u: goto label_1ac554;
        case 0x1ac558u: goto label_1ac558;
        case 0x1ac55cu: goto label_1ac55c;
        case 0x1ac560u: goto label_1ac560;
        case 0x1ac564u: goto label_1ac564;
        case 0x1ac568u: goto label_1ac568;
        case 0x1ac56cu: goto label_1ac56c;
        case 0x1ac570u: goto label_1ac570;
        default: break;
    }

    ctx->pc = 0x1ac4ecu;

label_1ac4ec:
    // 0x1ac4ec: 0xa22006d9  sb          $zero, 0x6D9($s1)
    ctx->pc = 0x1ac4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1753), (uint8_t)GPR_U32(ctx, 0));
label_1ac4f0:
    // 0x1ac4f0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ac4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ac4f4:
    // 0x1ac4f4: 0xae200700  sw          $zero, 0x700($s1)
    ctx->pc = 0x1ac4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 0));
label_1ac4f8:
    // 0x1ac4f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ac4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ac4fc:
    // 0x1ac4fc: 0xae2006f8  sw          $zero, 0x6F8($s1)
    ctx->pc = 0x1ac4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1784), GPR_U32(ctx, 0));
label_1ac500:
    // 0x1ac500: 0x24a509c8  addiu       $a1, $a1, 0x9C8
    ctx->pc = 0x1ac500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2504));
label_1ac504:
    // 0x1ac504: 0xae2006f4  sw          $zero, 0x6F4($s1)
    ctx->pc = 0x1ac504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 0));
label_1ac508:
    // 0x1ac508: 0xae2206fc  sw          $v0, 0x6FC($s1)
    ctx->pc = 0x1ac508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1788), GPR_U32(ctx, 2));
label_1ac50c:
    // 0x1ac50c: 0xa2200708  sb          $zero, 0x708($s1)
    ctx->pc = 0x1ac50cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1800), (uint8_t)GPR_U32(ctx, 0));
label_1ac510:
    // 0x1ac510: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ac510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1ac514:
    // 0x1ac514: 0x8f868114  lw          $a2, -0x7EEC($gp)
    ctx->pc = 0x1ac514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934804)));
label_1ac518:
    // 0x1ac518: 0xc06cf34  jal         func_1B3CD0
label_1ac51c:
    if (ctx->pc == 0x1AC51Cu) {
        ctx->pc = 0x1AC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC518u;
        // 0x1ac51c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC520u;
        goto label_1ac520;
    }
    ctx->pc = 0x1AC518u;
    SET_GPR_U32(ctx, 31, 0x1AC520u);
    ctx->pc = 0x1AC51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC518u;
    // 0x1ac51c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AC518u, 0x1AC520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC520u;
label_1ac520:
    // 0x1ac520: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ac520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac524:
    // 0x1ac524: 0xc069ac8  jal         func_1A6B20
label_1ac528:
    if (ctx->pc == 0x1AC528u) {
        ctx->pc = 0x1AC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC524u;
        // 0x1ac528: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC52Cu;
        goto label_1ac52c;
    }
    ctx->pc = 0x1AC524u;
    SET_GPR_U32(ctx, 31, 0x1AC52Cu);
    ctx->pc = 0x1AC528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC524u;
    // 0x1ac528: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AC524u, 0x1AC52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC52Cu;
label_1ac52c:
    // 0x1ac52c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ac52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ac530:
    // 0x1ac530: 0x262406f0  addiu       $a0, $s1, 0x6F0
    ctx->pc = 0x1ac530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_1ac534:
    // 0x1ac534: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac538:
    // 0x1ac538: 0xc069ac0  jal         func_1A6B00
label_1ac53c:
    if (ctx->pc == 0x1AC53Cu) {
        ctx->pc = 0x1AC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC538u;
        // 0x1ac53c: 0xa2200709  sb          $zero, 0x709($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1801), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC540u;
        goto label_1ac540;
    }
    ctx->pc = 0x1AC538u;
    SET_GPR_U32(ctx, 31, 0x1AC540u);
    ctx->pc = 0x1AC53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC538u;
    // 0x1ac53c: 0xa2200709  sb          $zero, 0x709($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1801), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1AC538u, 0x1AC540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC540u;
label_1ac540:
    // 0x1ac540: 0xc062114  jal         func_188450
label_1ac544:
    if (ctx->pc == 0x1AC544u) {
        ctx->pc = 0x1AC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC540u;
        // 0x1ac544: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC548u;
        goto label_1ac548;
    }
    ctx->pc = 0x1AC540u;
    SET_GPR_U32(ctx, 31, 0x1AC548u);
    ctx->pc = 0x1AC544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC540u;
    // 0x1ac544: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AC540u, 0x1AC548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC548u;
label_1ac548:
    // 0x1ac548: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ac548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac54c:
    // 0x1ac54c: 0xc0620fc  jal         func_1883F0
label_1ac550:
    if (ctx->pc == 0x1AC550u) {
        ctx->pc = 0x1AC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC54Cu;
        // 0x1ac550: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC554u;
        goto label_1ac554;
    }
    ctx->pc = 0x1AC54Cu;
    SET_GPR_U32(ctx, 31, 0x1AC554u);
    ctx->pc = 0x1AC550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC54Cu;
    // 0x1ac550: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AC54Cu, 0x1AC554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC554u;
label_1ac554:
    // 0x1ac554: 0x8e2406f0  lw          $a0, 0x6F0($s1)
    ctx->pc = 0x1ac554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
label_1ac558:
    // 0x1ac558: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ac55c:
    if (ctx->pc == 0x1AC55Cu) {
        ctx->pc = 0x1AC560u;
        goto label_1ac560;
    }
    ctx->pc = 0x1AC558u;
    {
        const bool branch_taken_0x1ac558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac558) {
            ctx->pc = 0x1AC574u;
            return;
        }
    }
    ctx->pc = 0x1AC560u;
label_1ac560:
    // 0x1ac560: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ac560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ac564:
    // 0x1ac564: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1ac564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ac568:
    // 0x1ac568: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ac568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ac56c:
    // 0x1ac56c: 0x320f809  jalr        $t9
label_1ac570:
    if (ctx->pc == 0x1AC570u) {
        ctx->pc = 0x1AC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC56Cu;
        // 0x1ac570: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC574u;
        goto label_fallthrough_0x1ac56c;
    }
    ctx->pc = 0x1AC56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AC574u);
        ctx->pc = 0x1AC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC56Cu;
        // 0x1ac570: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC56Cu, 0x1AC574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ac56c:
    ctx->pc = 0x1AC574u;
}
