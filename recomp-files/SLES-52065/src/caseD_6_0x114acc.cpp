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

// Function: caseD_6
// Address: 0x114acc - 0x114b0c
void caseD_6_0x114acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x114acc");
#endif

    switch (ctx->pc) {
        case 0x114accu: goto label_114acc;
        case 0x114ad0u: goto label_114ad0;
        case 0x114ad4u: goto label_114ad4;
        case 0x114ad8u: goto label_114ad8;
        case 0x114adcu: goto label_114adc;
        case 0x114ae0u: goto label_114ae0;
        case 0x114ae4u: goto label_114ae4;
        case 0x114ae8u: goto label_114ae8;
        case 0x114aecu: goto label_114aec;
        case 0x114af0u: goto label_114af0;
        case 0x114af4u: goto label_114af4;
        case 0x114af8u: goto label_114af8;
        case 0x114afcu: goto label_114afc;
        case 0x114b00u: goto label_114b00;
        case 0x114b04u: goto label_114b04;
        case 0x114b08u: goto label_114b08;
        default: break;
    }

    ctx->pc = 0x114accu;

label_114acc:
    // 0x114acc: 0x92440284  lbu         $a0, 0x284($s2)
    ctx->pc = 0x114accu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 644)));
label_114ad0:
    // 0x114ad0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x114ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_114ad4:
    // 0x114ad4: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_114ad8:
    if (ctx->pc == 0x114AD8u) {
        ctx->pc = 0x114ADCu;
        goto label_114adc;
    }
    ctx->pc = 0x114AD4u;
    {
        const bool branch_taken_0x114ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x114ad4) {
            ctx->pc = 0x114B0Cu;
            return;
        }
    }
    ctx->pc = 0x114ADCu;
label_114adc:
    // 0x114adc: 0xa2420284  sb          $v0, 0x284($s2)
    ctx->pc = 0x114adcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 2));
label_114ae0:
    // 0x114ae0: 0x27a800fc  addiu       $t0, $sp, 0xFC
    ctx->pc = 0x114ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_114ae4:
    // 0x114ae4: 0x93878270  lbu         $a3, -0x7D90($gp)
    ctx->pc = 0x114ae4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935152)));
label_114ae8:
    // 0x114ae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114aec:
    // 0x114aec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x114aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_114af0:
    // 0x114af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114af4:
    // 0x114af4: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x114af4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_114af8:
    // 0x114af8: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x114af8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
label_114afc:
    // 0x114afc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114afcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114b00:
    // 0x114b00: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114b04:
    // 0x114b04: 0x320f809  jalr        $t9
label_114b08:
    if (ctx->pc == 0x114B08u) {
        ctx->pc = 0x114B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B04u;
        // 0x114b08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114B0Cu;
        goto label_fallthrough_0x114b04;
    }
    ctx->pc = 0x114B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114B0Cu);
        ctx->pc = 0x114B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B04u;
        // 0x114b08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114B04u, 0x114B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x114b04:
    ctx->pc = 0x114B0Cu;
}
