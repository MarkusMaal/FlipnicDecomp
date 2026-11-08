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

// Function: entry_001dfc20
// Address: 0x1dfc20 - 0x1dfd04
void entry_001dfc20_0x1dfc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfc20_0x1dfc20");
#endif

    switch (ctx->pc) {
        case 0x1dfc48u: goto label_1dfc48;
        case 0x1dfc50u: goto label_1dfc50;
        case 0x1dfc60u: goto label_1dfc60;
        case 0x1dfc68u: goto label_1dfc68;
        case 0x1dfc7cu: goto label_1dfc7c;
        case 0x1dfc94u: goto label_1dfc94;
        case 0x1dfca0u: goto label_1dfca0;
        case 0x1dfcacu: goto label_1dfcac;
        case 0x1dfcb4u: goto label_1dfcb4;
        case 0x1dfcc0u: goto label_1dfcc0;
        case 0x1dfcc8u: goto label_1dfcc8;
        default: break;
    }

    ctx->pc = 0x1dfc20u;

    // 0x1dfc20: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1dfc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dfc24: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1dfc24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1dfc28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dfc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dfc2c: 0xaea0ab10  sw          $zero, -0x54F0($s5)
    ctx->pc = 0x1dfc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294945552), GPR_U32(ctx, 0));
    // 0x1dfc30: 0xac80ab14  sw          $zero, -0x54EC($a0)
    ctx->pc = 0x1dfc30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38AB14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38AB14u, _value); } while (0);
    // 0x1dfc34: 0x14620076  bne         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x1DFC34u;
    {
        const bool branch_taken_0x1dfc34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC34u;
        // 0x1dfc38: 0xa3d4a300  sb          $s4, -0x5D00($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 4294943488), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc34) {
            ctx->pc = 0x1DFE10u;
            return;
        }
    }
    ctx->pc = 0x1DFC3Cu;
    // 0x1dfc3c: 0xde500048  ld          $s0, 0x48($s2)
    ctx->pc = 0x1dfc3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1dfc40: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1DFC40u;
    SET_GPR_U32(ctx, 31, 0x1DFC48u);
    ctx->pc = 0x1DFC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC40u;
    // 0x1dfc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1DFC40u, 0x1DFC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC48u;
label_1dfc48:
    // 0x1dfc48: 0xc08218c  jal         func_208630
    ctx->pc = 0x1DFC48u;
    SET_GPR_U32(ctx, 31, 0x1DFC50u);
    ctx->pc = 0x1DFC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC48u;
    // 0x1dfc4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1DFC48u, 0x1DFC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC50u;
label_1dfc50:
    // 0x1dfc50: 0xde510038  ld          $s1, 0x38($s2)
    ctx->pc = 0x1dfc50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1dfc54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dfc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc58: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DFC58u;
    SET_GPR_U32(ctx, 31, 0x1DFC60u);
    ctx->pc = 0x1DFC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC58u;
    // 0x1dfc5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DFC58u, 0x1DFC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC60u;
label_1dfc60:
    // 0x1dfc60: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1DFC60u;
    SET_GPR_U32(ctx, 31, 0x1DFC68u);
    ctx->pc = 0x1DFC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC60u;
    // 0x1dfc64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1DFC60u, 0x1DFC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC68u;
label_1dfc68:
    // 0x1dfc68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc6c: 0xde450040  ld          $a1, 0x40($s2)
    ctx->pc = 0x1dfc6cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1dfc70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dfc70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc74: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1DFC74u;
    SET_GPR_U32(ctx, 31, 0x1DFC7Cu);
    ctx->pc = 0x1DFC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC74u;
    // 0x1dfc78: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DFC74u, 0x1DFC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC7Cu;
label_1dfc7c:
    // 0x1dfc7c: 0xde440078  ld          $a0, 0x78($s2)
    ctx->pc = 0x1dfc7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1dfc80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dfc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc84: 0x340580b2  ori         $a1, $zero, 0x80B2
    ctx->pc = 0x1dfc84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x1dfc88: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1dfc88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1dfc8c: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DFC8Cu;
    SET_GPR_U32(ctx, 31, 0x1DFC94u);
    ctx->pc = 0x1DFC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC8Cu;
    // 0x1dfc90: 0xfe500048  sd          $s0, 0x48($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DFC8Cu, 0x1DFC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC94u;
label_1dfc94:
    // 0x1dfc94: 0xde440058  ld          $a0, 0x58($s2)
    ctx->pc = 0x1dfc94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1dfc98: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1DFC98u;
    SET_GPR_U32(ctx, 31, 0x1DFCA0u);
    ctx->pc = 0x1DFC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC98u;
    // 0x1dfc9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DFC98u, 0x1DFCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCA0u;
label_1dfca0:
    // 0x1dfca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfca4: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1DFCA4u;
    SET_GPR_U32(ctx, 31, 0x1DFCACu);
    ctx->pc = 0x1DFCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCA4u;
    // 0x1dfca8: 0xfe420058  sd          $v0, 0x58($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1DFCA4u, 0x1DFCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCACu;
label_1dfcac:
    // 0x1dfcac: 0xc08218c  jal         func_208630
    ctx->pc = 0x1DFCACu;
    SET_GPR_U32(ctx, 31, 0x1DFCB4u);
    ctx->pc = 0x1DFCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCACu;
    // 0x1dfcb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1DFCACu, 0x1DFCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCB4u;
label_1dfcb4:
    // 0x1dfcb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dfcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfcb8: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DFCB8u;
    SET_GPR_U32(ctx, 31, 0x1DFCC0u);
    ctx->pc = 0x1DFCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCB8u;
    // 0x1dfcbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DFCB8u, 0x1DFCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCC0u;
label_1dfcc0:
    // 0x1dfcc0: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1DFCC0u;
    SET_GPR_U32(ctx, 31, 0x1DFCC8u);
    ctx->pc = 0x1DFCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCC0u;
    // 0x1dfcc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1DFCC0u, 0x1DFCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCC8u;
label_1dfcc8:
    // 0x1dfcc8: 0x1262000e  beq         $s3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DFCC8u;
    {
        const bool branch_taken_0x1dfcc8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCC8u;
        // 0x1dfccc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfcc8) {
            ctx->pc = 0x1DFD04u;
            return;
        }
    }
    ctx->pc = 0x1DFCD0u;
    // 0x1dfcd0: 0x1053000d  beq         $v0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1DFCD0u;
    {
        const bool branch_taken_0x1dfcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1DFCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCD0u;
        // 0x1dfcd4: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfcd0) {
            ctx->pc = 0x1DFD08u;
            return;
        }
    }
    ctx->pc = 0x1DFCD8u;
    // 0x1dfcd8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1dfcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1dfcdc: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x1dfcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1dfce0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dfce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dfce4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1dfce4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1dfce8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DFCE8u;
    {
        const bool branch_taken_0x1dfce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCE8u;
        // 0x1dfcec: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfce8) {
            ctx->pc = 0x1DFD04u;
            return;
        }
    }
    ctx->pc = 0x1DFCF0u;
    // 0x1dfcf0: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1dfcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1dfcf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dfcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfcf8: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1dfcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x1dfcfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dfcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1dfd00: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x1dfd00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    ctx->pc = 0x1dfd04u;
}
