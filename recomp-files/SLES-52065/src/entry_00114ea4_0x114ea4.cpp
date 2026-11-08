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

// Function: entry_00114ea4
// Address: 0x114ea4 - 0x114f3c
void entry_00114ea4_0x114ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114ea4_0x114ea4");
#endif

    switch (ctx->pc) {
        case 0x114ec8u: goto label_114ec8;
        case 0x114ef4u: goto label_114ef4;
        default: break;
    }

    ctx->pc = 0x114ea4u;

label_114ea4:
    // 0x114ea4: 0x10400336  beqz        $v0, . + 4 + (0x336 << 2)
label_114ea8:
    if (ctx->pc == 0x114EA8u) {
        ctx->pc = 0x114EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EA4u;
        // 0x114ea8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114EACu;
        goto label_114eac;
    }
    ctx->pc = 0x114EA4u;
    {
        const bool branch_taken_0x114ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EA4u;
        // 0x114ea8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ea4) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x114EACu;
label_114eac:
    // 0x114eac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114eb0:
    // 0x114eb0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x114eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_114eb4:
    // 0x114eb4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x114eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_114eb8:
    // 0x114eb8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x114eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114ebc:
    // 0x114ebc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x114ebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114ec0:
    // 0x114ec0: 0xc045700  jal         func_115C00
label_114ec4:
    if (ctx->pc == 0x114EC4u) {
        ctx->pc = 0x114EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EC0u;
        // 0x114ec4: 0x240a0006  addiu       $t2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114EC8u;
        goto label_114ec8;
    }
    ctx->pc = 0x114EC0u;
    SET_GPR_U32(ctx, 31, 0x114EC8u);
    ctx->pc = 0x114EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114EC0u;
    // 0x114ec4: 0x240a0006  addiu       $t2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x114EC0u, 0x114EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114EC8u;
label_114ec8:
    // 0x114ec8: 0xae420278  sw          $v0, 0x278($s2)
    ctx->pc = 0x114ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
label_114ecc:
    // 0x114ecc: 0x27a70128  addiu       $a3, $sp, 0x128
    ctx->pc = 0x114eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_114ed0:
    // 0x114ed0: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x114ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_114ed4:
    // 0x114ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114ed8:
    // 0x114ed8: 0x9382829c  lbu         $v0, -0x7D64($gp)
    ctx->pc = 0x114ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935196)));
label_114edc:
    // 0x114edc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x114edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114ee0:
    // 0x114ee0: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x114ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_114ee4:
    // 0x114ee4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114ee8:
    // 0x114ee8: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x114ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_114eec:
    // 0x114eec: 0x320f809  jalr        $t9
label_114ef0:
    if (ctx->pc == 0x114EF0u) {
        ctx->pc = 0x114EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EECu;
        // 0x114ef0: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114EF4u;
        goto label_114ef4;
    }
    ctx->pc = 0x114EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114EF4u);
        ctx->pc = 0x114EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EECu;
        // 0x114ef0: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114EECu, 0x114EF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114EF4u;
label_114ef4:
    // 0x114ef4: 0x92460255  lbu         $a2, 0x255($s2)
    ctx->pc = 0x114ef4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114ef8:
    // 0x114ef8: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x114ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_114efc:
    // 0x114efc: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x114efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_114f00:
    // 0x114f00: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x114f00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_114f04:
    // 0x114f04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x114f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_114f08:
    // 0x114f08: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x114f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_114f0c:
    // 0x114f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114f10:
    // 0x114f10: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x114f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_114f14:
    // 0x114f14: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x114f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_114f18:
    // 0x114f18: 0xa2440255  sb          $a0, 0x255($s2)
    ctx->pc = 0x114f18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 4));
label_114f1c:
    // 0x114f1c: 0xae430264  sw          $v1, 0x264($s2)
    ctx->pc = 0x114f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 612), GPR_U32(ctx, 3));
label_114f20:
    // 0x114f20: 0x8c23e4f8  lw          $v1, -0x1B08($at)
    ctx->pc = 0x114f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960376)));
label_114f24:
    // 0x114f24: 0xae430268  sw          $v1, 0x268($s2)
    ctx->pc = 0x114f24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 3));
label_114f28:
    // 0x114f28: 0xa2420284  sb          $v0, 0x284($s2)
    ctx->pc = 0x114f28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 2));
label_114f2c:
    // 0x114f2c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x114f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114f30:
    // 0x114f30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114f34:
    // 0x114f34: 0x10000312  b           . + 4 + (0x312 << 2)
label_114f38:
    if (ctx->pc == 0x114F38u) {
        ctx->pc = 0x114F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F34u;
        // 0x114f38: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F3Cu;
        goto label_fallthrough_0x114f34;
    }
    ctx->pc = 0x114F34u;
    {
        const bool branch_taken_0x114f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F34u;
        // 0x114f38: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f34) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
label_fallthrough_0x114f34:
    ctx->pc = 0x114F3Cu;
}
