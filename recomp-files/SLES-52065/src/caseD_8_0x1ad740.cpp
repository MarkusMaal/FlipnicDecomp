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
// Address: 0x1ad740 - 0x1ad7cc
void caseD_8_0x1ad740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1ad740");
#endif

    switch (ctx->pc) {
        case 0x1ad740u: goto label_1ad740;
        case 0x1ad744u: goto label_1ad744;
        case 0x1ad748u: goto label_1ad748;
        case 0x1ad74cu: goto label_1ad74c;
        case 0x1ad750u: goto label_1ad750;
        case 0x1ad754u: goto label_1ad754;
        case 0x1ad758u: goto label_1ad758;
        case 0x1ad75cu: goto label_1ad75c;
        case 0x1ad760u: goto label_1ad760;
        case 0x1ad764u: goto label_1ad764;
        case 0x1ad768u: goto label_1ad768;
        case 0x1ad76cu: goto label_1ad76c;
        case 0x1ad770u: goto label_1ad770;
        case 0x1ad774u: goto label_1ad774;
        case 0x1ad778u: goto label_1ad778;
        case 0x1ad77cu: goto label_1ad77c;
        case 0x1ad780u: goto label_1ad780;
        case 0x1ad784u: goto label_1ad784;
        case 0x1ad788u: goto label_1ad788;
        case 0x1ad78cu: goto label_1ad78c;
        case 0x1ad790u: goto label_1ad790;
        case 0x1ad794u: goto label_1ad794;
        case 0x1ad798u: goto label_1ad798;
        case 0x1ad79cu: goto label_1ad79c;
        case 0x1ad7a0u: goto label_1ad7a0;
        case 0x1ad7a4u: goto label_1ad7a4;
        case 0x1ad7a8u: goto label_1ad7a8;
        case 0x1ad7acu: goto label_1ad7ac;
        case 0x1ad7b0u: goto label_1ad7b0;
        case 0x1ad7b4u: goto label_1ad7b4;
        case 0x1ad7b8u: goto label_1ad7b8;
        case 0x1ad7bcu: goto label_1ad7bc;
        case 0x1ad7c0u: goto label_1ad7c0;
        case 0x1ad7c4u: goto label_1ad7c4;
        case 0x1ad7c8u: goto label_1ad7c8;
        default: break;
    }

    ctx->pc = 0x1ad740u;

label_1ad740:
    // 0x1ad740: 0xae2006ec  sw          $zero, 0x6EC($s1)
    ctx->pc = 0x1ad740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1772), GPR_U32(ctx, 0));
label_1ad744:
    // 0x1ad744: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ad744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ad748:
    // 0x1ad748: 0xae2006e4  sw          $zero, 0x6E4($s1)
    ctx->pc = 0x1ad748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1764), GPR_U32(ctx, 0));
label_1ad74c:
    // 0x1ad74c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ad74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ad750:
    // 0x1ad750: 0xae2006e0  sw          $zero, 0x6E0($s1)
    ctx->pc = 0x1ad750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 0));
label_1ad754:
    // 0x1ad754: 0x24a50a68  addiu       $a1, $a1, 0xA68
    ctx->pc = 0x1ad754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2664));
label_1ad758:
    // 0x1ad758: 0xae2206e8  sw          $v0, 0x6E8($s1)
    ctx->pc = 0x1ad758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1768), GPR_U32(ctx, 2));
label_1ad75c:
    // 0x1ad75c: 0xa22006f4  sb          $zero, 0x6F4($s1)
    ctx->pc = 0x1ad75cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1780), (uint8_t)GPR_U32(ctx, 0));
label_1ad760:
    // 0x1ad760: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ad760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1ad764:
    // 0x1ad764: 0x8f86811c  lw          $a2, -0x7EE4($gp)
    ctx->pc = 0x1ad764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
label_1ad768:
    // 0x1ad768: 0xc06cf34  jal         func_1B3CD0
label_1ad76c:
    if (ctx->pc == 0x1AD76Cu) {
        ctx->pc = 0x1AD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD768u;
        // 0x1ad76c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD770u;
        goto label_1ad770;
    }
    ctx->pc = 0x1AD768u;
    SET_GPR_U32(ctx, 31, 0x1AD770u);
    ctx->pc = 0x1AD76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD768u;
    // 0x1ad76c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AD768u, 0x1AD770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD770u;
label_1ad770:
    // 0x1ad770: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad774:
    // 0x1ad774: 0xc069ac8  jal         func_1A6B20
label_1ad778:
    if (ctx->pc == 0x1AD778u) {
        ctx->pc = 0x1AD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD774u;
        // 0x1ad778: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD77Cu;
        goto label_1ad77c;
    }
    ctx->pc = 0x1AD774u;
    SET_GPR_U32(ctx, 31, 0x1AD77Cu);
    ctx->pc = 0x1AD778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD774u;
    // 0x1ad778: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AD774u, 0x1AD77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD77Cu;
label_1ad77c:
    // 0x1ad77c: 0xa22006f5  sb          $zero, 0x6F5($s1)
    ctx->pc = 0x1ad77cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1781), (uint8_t)GPR_U32(ctx, 0));
label_1ad780:
    // 0x1ad780: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ad780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ad784:
    // 0x1ad784: 0xae2006e0  sw          $zero, 0x6E0($s1)
    ctx->pc = 0x1ad784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 0));
label_1ad788:
    // 0x1ad788: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ad788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ad78c:
    // 0x1ad78c: 0xae2206e4  sw          $v0, 0x6E4($s1)
    ctx->pc = 0x1ad78cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1764), GPR_U32(ctx, 2));
label_1ad790:
    // 0x1ad790: 0xc069ac0  jal         func_1A6B00
label_1ad794:
    if (ctx->pc == 0x1AD794u) {
        ctx->pc = 0x1AD794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD790u;
        // 0x1ad794: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD798u;
        goto label_1ad798;
    }
    ctx->pc = 0x1AD790u;
    SET_GPR_U32(ctx, 31, 0x1AD798u);
    ctx->pc = 0x1AD794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD790u;
    // 0x1ad794: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1AD790u, 0x1AD798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD798u;
label_1ad798:
    // 0x1ad798: 0xc062114  jal         func_188450
label_1ad79c:
    if (ctx->pc == 0x1AD79Cu) {
        ctx->pc = 0x1AD79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD798u;
        // 0x1ad79c: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD7A0u;
        goto label_1ad7a0;
    }
    ctx->pc = 0x1AD798u;
    SET_GPR_U32(ctx, 31, 0x1AD7A0u);
    ctx->pc = 0x1AD79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD798u;
    // 0x1ad79c: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AD798u, 0x1AD7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7A0u;
label_1ad7a0:
    // 0x1ad7a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad7a4:
    // 0x1ad7a4: 0xc0620fc  jal         func_1883F0
label_1ad7a8:
    if (ctx->pc == 0x1AD7A8u) {
        ctx->pc = 0x1AD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7A4u;
        // 0x1ad7a8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD7ACu;
        goto label_1ad7ac;
    }
    ctx->pc = 0x1AD7A4u;
    SET_GPR_U32(ctx, 31, 0x1AD7ACu);
    ctx->pc = 0x1AD7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD7A4u;
    // 0x1ad7a8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AD7A4u, 0x1AD7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD7ACu;
label_1ad7ac:
    // 0x1ad7ac: 0x8e2406dc  lw          $a0, 0x6DC($s1)
    ctx->pc = 0x1ad7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
label_1ad7b0:
    // 0x1ad7b0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ad7b4:
    if (ctx->pc == 0x1AD7B4u) {
        ctx->pc = 0x1AD7B8u;
        goto label_1ad7b8;
    }
    ctx->pc = 0x1AD7B0u;
    {
        const bool branch_taken_0x1ad7b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad7b0) {
            ctx->pc = 0x1AD7CCu;
            return;
        }
    }
    ctx->pc = 0x1AD7B8u;
label_1ad7b8:
    // 0x1ad7b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ad7b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ad7bc:
    // 0x1ad7bc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1ad7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1ad7c0:
    // 0x1ad7c0: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ad7c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ad7c4:
    // 0x1ad7c4: 0x320f809  jalr        $t9
label_1ad7c8:
    if (ctx->pc == 0x1AD7C8u) {
        ctx->pc = 0x1AD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7C4u;
        // 0x1ad7c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD7CCu;
        goto label_fallthrough_0x1ad7c4;
    }
    ctx->pc = 0x1AD7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD7CCu);
        ctx->pc = 0x1AD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD7C4u;
        // 0x1ad7c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD7C4u, 0x1AD7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ad7c4:
    ctx->pc = 0x1AD7CCu;
}
