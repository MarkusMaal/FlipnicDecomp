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

// Function: entry_0019bf9c
// Address: 0x19bf9c - 0x19c034
void entry_0019bf9c_0x19bf9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bf9c_0x19bf9c");
#endif

    switch (ctx->pc) {
        case 0x19bfdcu: goto label_19bfdc;
        case 0x19bfe8u: goto label_19bfe8;
        case 0x19bff8u: goto label_19bff8;
        case 0x19c000u: goto label_19c000;
        case 0x19c014u: goto label_19c014;
        default: break;
    }

    ctx->pc = 0x19bf9cu;

label_19bf9c:
    // 0x19bf9c: 0x8e220928  lw          $v0, 0x928($s1)
    ctx->pc = 0x19bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
label_19bfa0:
    // 0x19bfa0: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x19bfa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_19bfa4:
    // 0x19bfa4: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
label_19bfa8:
    if (ctx->pc == 0x19BFA8u) {
        ctx->pc = 0x19BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFA4u;
        // 0x19bfa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFACu;
        goto label_19bfac;
    }
    ctx->pc = 0x19BFA4u;
    {
        const bool branch_taken_0x19bfa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFA4u;
        // 0x19bfa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bfa4) {
            ctx->pc = 0x19C068u;
            return;
        }
    }
    ctx->pc = 0x19BFACu;
label_19bfac:
    // 0x19bfac: 0xae200a90  sw          $zero, 0xA90($s1)
    ctx->pc = 0x19bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 0));
label_19bfb0:
    // 0x19bfb0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19bfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19bfb4:
    // 0x19bfb4: 0xae200a88  sw          $zero, 0xA88($s1)
    ctx->pc = 0x19bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2696), GPR_U32(ctx, 0));
label_19bfb8:
    // 0x19bfb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19bfbc:
    // 0x19bfbc: 0xae200a84  sw          $zero, 0xA84($s1)
    ctx->pc = 0x19bfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2692), GPR_U32(ctx, 0));
label_19bfc0:
    // 0x19bfc0: 0x24a50208  addiu       $a1, $a1, 0x208
    ctx->pc = 0x19bfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 520));
label_19bfc4:
    // 0x19bfc4: 0xae220a8c  sw          $v0, 0xA8C($s1)
    ctx->pc = 0x19bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2700), GPR_U32(ctx, 2));
label_19bfc8:
    // 0x19bfc8: 0xa2200a98  sb          $zero, 0xA98($s1)
    ctx->pc = 0x19bfc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2712), (uint8_t)GPR_U32(ctx, 0));
label_19bfcc:
    // 0x19bfcc: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x19bfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_19bfd0:
    // 0x19bfd0: 0x8f8680e4  lw          $a2, -0x7F1C($gp)
    ctx->pc = 0x19bfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934756)));
label_19bfd4:
    // 0x19bfd4: 0xc06cf34  jal         func_1B3CD0
label_19bfd8:
    if (ctx->pc == 0x19BFD8u) {
        ctx->pc = 0x19BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFD4u;
        // 0x19bfd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFDCu;
        goto label_19bfdc;
    }
    ctx->pc = 0x19BFD4u;
    SET_GPR_U32(ctx, 31, 0x19BFDCu);
    ctx->pc = 0x19BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BFD4u;
    // 0x19bfd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x19BFD4u, 0x19BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BFDCu;
label_19bfdc:
    // 0x19bfdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19bfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19bfe0:
    // 0x19bfe0: 0xc069ac8  jal         func_1A6B20
label_19bfe4:
    if (ctx->pc == 0x19BFE4u) {
        ctx->pc = 0x19BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFE0u;
        // 0x19bfe4: 0x26240a80  addiu       $a0, $s1, 0xA80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFE8u;
        goto label_19bfe8;
    }
    ctx->pc = 0x19BFE0u;
    SET_GPR_U32(ctx, 31, 0x19BFE8u);
    ctx->pc = 0x19BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BFE0u;
    // 0x19bfe4: 0x26240a80  addiu       $a0, $s1, 0xA80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x19BFE0u, 0x19BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BFE8u;
label_19bfe8:
    // 0x19bfe8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19bfec:
    // 0x19bfec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19bfecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19bff0:
    // 0x19bff0: 0xc069ac0  jal         func_1A6B00
label_19bff4:
    if (ctx->pc == 0x19BFF4u) {
        ctx->pc = 0x19BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFF0u;
        // 0x19bff4: 0x26240a80  addiu       $a0, $s1, 0xA80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19BFF8u;
        goto label_19bff8;
    }
    ctx->pc = 0x19BFF0u;
    SET_GPR_U32(ctx, 31, 0x19BFF8u);
    ctx->pc = 0x19BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BFF0u;
    // 0x19bff4: 0x26240a80  addiu       $a0, $s1, 0xA80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x19BFF0u, 0x19BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BFF8u;
label_19bff8:
    // 0x19bff8: 0xc062114  jal         func_188450
label_19bffc:
    if (ctx->pc == 0x19BFFCu) {
        ctx->pc = 0x19BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BFF8u;
        // 0x19bffc: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C000u;
        goto label_19c000;
    }
    ctx->pc = 0x19BFF8u;
    SET_GPR_U32(ctx, 31, 0x19C000u);
    ctx->pc = 0x19BFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BFF8u;
    // 0x19bffc: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x19BFF8u, 0x19C000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C000u;
label_19c000:
    // 0x19c000: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19c000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c004:
    // 0x19c004: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x19c004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19c008:
    // 0x19c008: 0x8e220928  lw          $v0, 0x928($s1)
    ctx->pc = 0x19c008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
label_19c00c:
    // 0x19c00c: 0xc0620fc  jal         func_1883F0
label_19c010:
    if (ctx->pc == 0x19C010u) {
        ctx->pc = 0x19C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C00Cu;
        // 0x19c010: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C014u;
        goto label_19c014;
    }
    ctx->pc = 0x19C00Cu;
    SET_GPR_U32(ctx, 31, 0x19C014u);
    ctx->pc = 0x19C010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C00Cu;
    // 0x19c010: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x19C00Cu, 0x19C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C014u;
label_19c014:
    // 0x19c014: 0x8e240a80  lw          $a0, 0xA80($s1)
    ctx->pc = 0x19c014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2688)));
label_19c018:
    // 0x19c018: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_19c01c:
    if (ctx->pc == 0x19C01Cu) {
        ctx->pc = 0x19C020u;
        goto label_19c020;
    }
    ctx->pc = 0x19C018u;
    {
        const bool branch_taken_0x19c018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c018) {
            ctx->pc = 0x19C034u;
            return;
        }
    }
    ctx->pc = 0x19C020u;
label_19c020:
    // 0x19c020: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19c020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19c024:
    // 0x19c024: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x19c024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19c028:
    // 0x19c028: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x19c028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_19c02c:
    // 0x19c02c: 0x320f809  jalr        $t9
label_19c030:
    if (ctx->pc == 0x19C030u) {
        ctx->pc = 0x19C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C02Cu;
        // 0x19c030: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C034u;
        goto label_fallthrough_0x19c02c;
    }
    ctx->pc = 0x19C02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19C034u);
        ctx->pc = 0x19C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C02Cu;
        // 0x19c030: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C02Cu, 0x19C034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x19c02c:
    ctx->pc = 0x19C034u;
}
