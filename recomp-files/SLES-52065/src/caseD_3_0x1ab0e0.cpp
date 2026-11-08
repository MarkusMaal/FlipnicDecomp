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
// Address: 0x1ab0e0 - 0x1ab16c
void caseD_3_0x1ab0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1ab0e0");
#endif

    switch (ctx->pc) {
        case 0x1ab0e0u: goto label_1ab0e0;
        case 0x1ab0e4u: goto label_1ab0e4;
        case 0x1ab0e8u: goto label_1ab0e8;
        case 0x1ab0ecu: goto label_1ab0ec;
        case 0x1ab0f0u: goto label_1ab0f0;
        case 0x1ab0f4u: goto label_1ab0f4;
        case 0x1ab0f8u: goto label_1ab0f8;
        case 0x1ab0fcu: goto label_1ab0fc;
        case 0x1ab100u: goto label_1ab100;
        case 0x1ab104u: goto label_1ab104;
        case 0x1ab108u: goto label_1ab108;
        case 0x1ab10cu: goto label_1ab10c;
        case 0x1ab110u: goto label_1ab110;
        case 0x1ab114u: goto label_1ab114;
        case 0x1ab118u: goto label_1ab118;
        case 0x1ab11cu: goto label_1ab11c;
        case 0x1ab120u: goto label_1ab120;
        case 0x1ab124u: goto label_1ab124;
        case 0x1ab128u: goto label_1ab128;
        case 0x1ab12cu: goto label_1ab12c;
        case 0x1ab130u: goto label_1ab130;
        case 0x1ab134u: goto label_1ab134;
        case 0x1ab138u: goto label_1ab138;
        case 0x1ab13cu: goto label_1ab13c;
        case 0x1ab140u: goto label_1ab140;
        case 0x1ab144u: goto label_1ab144;
        case 0x1ab148u: goto label_1ab148;
        case 0x1ab14cu: goto label_1ab14c;
        case 0x1ab150u: goto label_1ab150;
        case 0x1ab154u: goto label_1ab154;
        case 0x1ab158u: goto label_1ab158;
        case 0x1ab15cu: goto label_1ab15c;
        case 0x1ab160u: goto label_1ab160;
        case 0x1ab164u: goto label_1ab164;
        case 0x1ab168u: goto label_1ab168;
        default: break;
    }

    ctx->pc = 0x1ab0e0u;

label_1ab0e0:
    // 0x1ab0e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab0e4:
    // 0x1ab0e4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ab0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ab0e8:
    // 0x1ab0e8: 0xa28306d9  sb          $v1, 0x6D9($s4)
    ctx->pc = 0x1ab0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1753), (uint8_t)GPR_U32(ctx, 3));
label_1ab0ec:
    // 0x1ab0ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ab0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ab0f0:
    // 0x1ab0f0: 0xae800700  sw          $zero, 0x700($s4)
    ctx->pc = 0x1ab0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1792), GPR_U32(ctx, 0));
label_1ab0f4:
    // 0x1ab0f4: 0x24a50918  addiu       $a1, $a1, 0x918
    ctx->pc = 0x1ab0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2328));
label_1ab0f8:
    // 0x1ab0f8: 0xae8006f8  sw          $zero, 0x6F8($s4)
    ctx->pc = 0x1ab0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1784), GPR_U32(ctx, 0));
label_1ab0fc:
    // 0x1ab0fc: 0xae8006f4  sw          $zero, 0x6F4($s4)
    ctx->pc = 0x1ab0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1780), GPR_U32(ctx, 0));
label_1ab100:
    // 0x1ab100: 0xae8206fc  sw          $v0, 0x6FC($s4)
    ctx->pc = 0x1ab100u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1788), GPR_U32(ctx, 2));
label_1ab104:
    // 0x1ab104: 0xa2800708  sb          $zero, 0x708($s4)
    ctx->pc = 0x1ab104u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1800), (uint8_t)GPR_U32(ctx, 0));
label_1ab108:
    // 0x1ab108: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ab108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1ab10c:
    // 0x1ab10c: 0x8f86810c  lw          $a2, -0x7EF4($gp)
    ctx->pc = 0x1ab10cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934796)));
label_1ab110:
    // 0x1ab110: 0xc06cf34  jal         func_1B3CD0
label_1ab114:
    if (ctx->pc == 0x1AB114u) {
        ctx->pc = 0x1AB114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB110u;
        // 0x1ab114: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB118u;
        goto label_1ab118;
    }
    ctx->pc = 0x1AB110u;
    SET_GPR_U32(ctx, 31, 0x1AB118u);
    ctx->pc = 0x1AB114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB110u;
    // 0x1ab114: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AB110u, 0x1AB118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB118u;
label_1ab118:
    // 0x1ab118: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab11c:
    // 0x1ab11c: 0xc069ac8  jal         func_1A6B20
label_1ab120:
    if (ctx->pc == 0x1AB120u) {
        ctx->pc = 0x1AB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB11Cu;
        // 0x1ab120: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB124u;
        goto label_1ab124;
    }
    ctx->pc = 0x1AB11Cu;
    SET_GPR_U32(ctx, 31, 0x1AB124u);
    ctx->pc = 0x1AB120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB11Cu;
    // 0x1ab120: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AB11Cu, 0x1AB124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB124u;
label_1ab124:
    // 0x1ab124: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ab124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ab128:
    // 0x1ab128: 0x268406f0  addiu       $a0, $s4, 0x6F0
    ctx->pc = 0x1ab128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
label_1ab12c:
    // 0x1ab12c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ab12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ab130:
    // 0x1ab130: 0xc069ac0  jal         func_1A6B00
label_1ab134:
    if (ctx->pc == 0x1AB134u) {
        ctx->pc = 0x1AB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB130u;
        // 0x1ab134: 0xa2800709  sb          $zero, 0x709($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1801), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB138u;
        goto label_1ab138;
    }
    ctx->pc = 0x1AB130u;
    SET_GPR_U32(ctx, 31, 0x1AB138u);
    ctx->pc = 0x1AB134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB130u;
    // 0x1ab134: 0xa2800709  sb          $zero, 0x709($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1801), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1AB130u, 0x1AB138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB138u;
label_1ab138:
    // 0x1ab138: 0xc062114  jal         func_188450
label_1ab13c:
    if (ctx->pc == 0x1AB13Cu) {
        ctx->pc = 0x1AB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB138u;
        // 0x1ab13c: 0x24040049  addiu       $a0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB140u;
        goto label_1ab140;
    }
    ctx->pc = 0x1AB138u;
    SET_GPR_U32(ctx, 31, 0x1AB140u);
    ctx->pc = 0x1AB13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB138u;
    // 0x1ab13c: 0x24040049  addiu       $a0, $zero, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AB138u, 0x1AB140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB140u;
label_1ab140:
    // 0x1ab140: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab144:
    // 0x1ab144: 0xc0620fc  jal         func_1883F0
label_1ab148:
    if (ctx->pc == 0x1AB148u) {
        ctx->pc = 0x1AB148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB144u;
        // 0x1ab148: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB14Cu;
        goto label_1ab14c;
    }
    ctx->pc = 0x1AB144u;
    SET_GPR_U32(ctx, 31, 0x1AB14Cu);
    ctx->pc = 0x1AB148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB144u;
    // 0x1ab148: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AB144u, 0x1AB14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB14Cu;
label_1ab14c:
    // 0x1ab14c: 0x8e8406f0  lw          $a0, 0x6F0($s4)
    ctx->pc = 0x1ab14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1776)));
label_1ab150:
    // 0x1ab150: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ab154:
    if (ctx->pc == 0x1AB154u) {
        ctx->pc = 0x1AB158u;
        goto label_1ab158;
    }
    ctx->pc = 0x1AB150u;
    {
        const bool branch_taken_0x1ab150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab150) {
            ctx->pc = 0x1AB16Cu;
            return;
        }
    }
    ctx->pc = 0x1AB158u;
label_1ab158:
    // 0x1ab158: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ab158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ab15c:
    // 0x1ab15c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1ab15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ab160:
    // 0x1ab160: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1ab160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1ab164:
    // 0x1ab164: 0x320f809  jalr        $t9
label_1ab168:
    if (ctx->pc == 0x1AB168u) {
        ctx->pc = 0x1AB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB164u;
        // 0x1ab168: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB16Cu;
        goto label_fallthrough_0x1ab164;
    }
    ctx->pc = 0x1AB164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AB16Cu);
        ctx->pc = 0x1AB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB164u;
        // 0x1ab168: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB164u, 0x1AB16Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ab164:
    ctx->pc = 0x1AB16Cu;
}
