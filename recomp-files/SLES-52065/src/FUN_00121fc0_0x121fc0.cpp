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

// Function: FUN_00121fc0
// Address: 0x121fc0 - 0x1220c8
void FUN_00121fc0_0x121fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00121fc0_0x121fc0");
#endif

    switch (ctx->pc) {
        case 0x121fc0u: goto label_121fc0;
        case 0x121fc4u: goto label_121fc4;
        case 0x121fc8u: goto label_121fc8;
        case 0x121fccu: goto label_121fcc;
        case 0x121fd0u: goto label_121fd0;
        case 0x121fd4u: goto label_121fd4;
        case 0x121fd8u: goto label_121fd8;
        case 0x121fdcu: goto label_121fdc;
        case 0x121fe0u: goto label_121fe0;
        case 0x121fe4u: goto label_121fe4;
        case 0x121fe8u: goto label_121fe8;
        case 0x121fecu: goto label_121fec;
        case 0x121ff0u: goto label_121ff0;
        case 0x121ff4u: goto label_121ff4;
        case 0x121ff8u: goto label_121ff8;
        case 0x121ffcu: goto label_121ffc;
        case 0x122000u: goto label_122000;
        case 0x122004u: goto label_122004;
        case 0x122008u: goto label_122008;
        case 0x12200cu: goto label_12200c;
        case 0x122010u: goto label_122010;
        case 0x122014u: goto label_122014;
        case 0x122018u: goto label_122018;
        case 0x12201cu: goto label_12201c;
        case 0x122020u: goto label_122020;
        case 0x122024u: goto label_122024;
        case 0x122028u: goto label_122028;
        case 0x12202cu: goto label_12202c;
        case 0x122030u: goto label_122030;
        case 0x122034u: goto label_122034;
        case 0x122038u: goto label_122038;
        case 0x12203cu: goto label_12203c;
        case 0x122040u: goto label_122040;
        case 0x122044u: goto label_122044;
        case 0x122048u: goto label_122048;
        case 0x12204cu: goto label_12204c;
        case 0x122050u: goto label_122050;
        case 0x122054u: goto label_122054;
        case 0x122058u: goto label_122058;
        case 0x12205cu: goto label_12205c;
        case 0x122060u: goto label_122060;
        case 0x122064u: goto label_122064;
        case 0x122068u: goto label_122068;
        case 0x12206cu: goto label_12206c;
        case 0x122070u: goto label_122070;
        case 0x122074u: goto label_122074;
        case 0x122078u: goto label_122078;
        case 0x12207cu: goto label_12207c;
        case 0x122080u: goto label_122080;
        case 0x122084u: goto label_122084;
        case 0x122088u: goto label_122088;
        case 0x12208cu: goto label_12208c;
        case 0x122090u: goto label_122090;
        case 0x122094u: goto label_122094;
        case 0x122098u: goto label_122098;
        case 0x12209cu: goto label_12209c;
        case 0x1220a0u: goto label_1220a0;
        case 0x1220a4u: goto label_1220a4;
        case 0x1220a8u: goto label_1220a8;
        case 0x1220acu: goto label_1220ac;
        case 0x1220b0u: goto label_1220b0;
        case 0x1220b4u: goto label_1220b4;
        case 0x1220b8u: goto label_1220b8;
        case 0x1220bcu: goto label_1220bc;
        case 0x1220c0u: goto label_1220c0;
        case 0x1220c4u: goto label_1220c4;
        default: break;
    }

    ctx->pc = 0x121fc0u;

label_121fc0:
    // 0x121fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x121fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_121fc4:
    // 0x121fc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x121fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_121fc8:
    // 0x121fc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x121fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_121fcc:
    // 0x121fcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x121fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_121fd0:
    // 0x121fd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x121fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_121fd4:
    // 0x121fd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x121fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_121fd8:
    // 0x121fd8: 0x8f938410  lw          $s3, -0x7BF0($gp)
    ctx->pc = 0x121fd8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935568)));
label_121fdc:
    // 0x121fdc: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_121fe0:
    if (ctx->pc == 0x121FE0u) {
        ctx->pc = 0x121FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FDCu;
        // 0x121fe0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121FE4u;
        goto label_121fe4;
    }
    ctx->pc = 0x121FDCu;
    {
        const bool branch_taken_0x121fdc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x121FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FDCu;
        // 0x121fe0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121fdc) {
            ctx->pc = 0x121FF0u;
            goto label_121ff0;
        }
    }
    ctx->pc = 0x121FE4u;
label_121fe4:
    // 0x121fe4: 0xc047a3c  jal         func_11E8F0
label_121fe8:
    if (ctx->pc == 0x121FE8u) {
        ctx->pc = 0x121FECu;
        goto label_121fec;
    }
    ctx->pc = 0x121FE4u;
    SET_GPR_U32(ctx, 31, 0x121FECu);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x121FE4u, 0x121FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121FECu;
label_121fec:
    // 0x121fec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x121fecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121ff0:
    // 0x121ff0: 0xc048608  jal         func_121820
label_121ff4:
    if (ctx->pc == 0x121FF4u) {
        ctx->pc = 0x121FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FF0u;
        // 0x121ff4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121FF8u;
        goto label_121ff8;
    }
    ctx->pc = 0x121FF0u;
    SET_GPR_U32(ctx, 31, 0x121FF8u);
    ctx->pc = 0x121FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121FF0u;
    // 0x121ff4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121820u, 0x121FF0u, 0x121FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121FF8u;
label_121ff8:
    // 0x121ff8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x121ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121ffc:
    // 0x121ffc: 0xc048604  jal         func_121810
label_122000:
    if (ctx->pc == 0x122000u) {
        ctx->pc = 0x122000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FFCu;
        // 0x122000: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122004u;
        goto label_122004;
    }
    ctx->pc = 0x121FFCu;
    SET_GPR_U32(ctx, 31, 0x122004u);
    ctx->pc = 0x122000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121FFCu;
    // 0x122000: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121810u, 0x121FFCu, 0x122004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122004u;
label_122004:
    // 0x122004: 0xafb10058  sw          $s1, 0x58($sp)
    ctx->pc = 0x122004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 17));
label_122008:
    // 0x122008: 0x10000025  b           . + 4 + (0x25 << 2)
label_12200c:
    if (ctx->pc == 0x12200Cu) {
        ctx->pc = 0x12200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122008u;
        // 0x12200c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122010u;
        goto label_122010;
    }
    ctx->pc = 0x122008u;
    {
        const bool branch_taken_0x122008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122008u;
        // 0x12200c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122008) {
            ctx->pc = 0x1220A0u;
            goto label_1220a0;
        }
    }
    ctx->pc = 0x122010u;
label_122010:
    // 0x122010: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x122010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_122014:
    // 0x122014: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x122014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_122018:
    // 0x122018: 0x1453001f  bne         $v0, $s3, . + 4 + (0x1F << 2)
label_12201c:
    if (ctx->pc == 0x12201Cu) {
        ctx->pc = 0x122020u;
        goto label_122020;
    }
    ctx->pc = 0x122018u;
    {
        const bool branch_taken_0x122018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x122018) {
            ctx->pc = 0x122098u;
            goto label_122098;
        }
    }
    ctx->pc = 0x122020u;
label_122020:
    // 0x122020: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_122024:
    if (ctx->pc == 0x122024u) {
        ctx->pc = 0x122028u;
        goto label_122028;
    }
    ctx->pc = 0x122020u;
    {
        const bool branch_taken_0x122020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x122020) {
            ctx->pc = 0x122038u;
            goto label_122038;
        }
    }
    ctx->pc = 0x122028u;
label_122028:
    // 0x122028: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x122028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12202c:
    // 0x12202c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x12202cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_122030:
    // 0x122030: 0x320f809  jalr        $t9
label_122034:
    if (ctx->pc == 0x122034u) {
        ctx->pc = 0x122034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122030u;
        // 0x122034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122038u;
        goto label_122038;
    }
    ctx->pc = 0x122030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x122038u);
        ctx->pc = 0x122034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122030u;
        // 0x122034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122030u, 0x122038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122038u;
label_122038:
    // 0x122038: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x122038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_12203c:
    // 0x12203c: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
label_122040:
    if (ctx->pc == 0x122040u) {
        ctx->pc = 0x122044u;
        goto label_122044;
    }
    ctx->pc = 0x12203Cu;
    {
        const bool branch_taken_0x12203c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x12203c) {
            ctx->pc = 0x122064u;
            goto label_122064;
        }
    }
    ctx->pc = 0x122044u;
label_122044:
    // 0x122044: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x122044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_122048:
    // 0x122048: 0xc048a20  jal         func_122880
label_12204c:
    if (ctx->pc == 0x12204Cu) {
        ctx->pc = 0x12204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122048u;
        // 0x12204c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122050u;
        goto label_122050;
    }
    ctx->pc = 0x122048u;
    SET_GPR_U32(ctx, 31, 0x122050u);
    ctx->pc = 0x12204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122048u;
    // 0x12204c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122880u, 0x122048u, 0x122050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122050u;
label_122050:
    // 0x122050: 0xc048608  jal         func_121820
label_122054:
    if (ctx->pc == 0x122054u) {
        ctx->pc = 0x122054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122050u;
        // 0x122054: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122058u;
        goto label_122058;
    }
    ctx->pc = 0x122050u;
    SET_GPR_U32(ctx, 31, 0x122058u);
    ctx->pc = 0x122054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122050u;
    // 0x122054: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121820u, 0x122050u, 0x122058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122058u;
label_122058:
    // 0x122058: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x122058u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12205c:
    // 0x12205c: 0x10000010  b           . + 4 + (0x10 << 2)
label_122060:
    if (ctx->pc == 0x122060u) {
        ctx->pc = 0x122060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12205Cu;
        // 0x122060: 0xafb10058  sw          $s1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122064u;
        goto label_122064;
    }
    ctx->pc = 0x12205Cu;
    {
        const bool branch_taken_0x12205c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12205Cu;
        // 0x122060: 0xafb10058  sw          $s1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12205c) {
            ctx->pc = 0x1220A0u;
            goto label_1220a0;
        }
    }
    ctx->pc = 0x122064u;
label_122064:
    // 0x122064: 0x0  nop
    ctx->pc = 0x122064u;
    // NOP
label_122068:
    // 0x122068: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x122068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_12206c:
    // 0x12206c: 0xc048958  jal         func_122560
label_122070:
    if (ctx->pc == 0x122070u) {
        ctx->pc = 0x122070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12206Cu;
        // 0x122070: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122074u;
        goto label_122074;
    }
    ctx->pc = 0x12206Cu;
    SET_GPR_U32(ctx, 31, 0x122074u);
    ctx->pc = 0x122070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12206Cu;
    // 0x122070: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122560u, 0x12206Cu, 0x122074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122074u;
label_122074:
    // 0x122074: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x122074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_122078:
    // 0x122078: 0xc048a20  jal         func_122880
label_12207c:
    if (ctx->pc == 0x12207Cu) {
        ctx->pc = 0x12207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122078u;
        // 0x12207c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122080u;
        goto label_122080;
    }
    ctx->pc = 0x122078u;
    SET_GPR_U32(ctx, 31, 0x122080u);
    ctx->pc = 0x12207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122078u;
    // 0x12207c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122880u, 0x122078u, 0x122080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122080u;
label_122080:
    // 0x122080: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x122080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_122084:
    // 0x122084: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x122084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_122088:
    // 0x122088: 0xc048974  jal         func_1225D0
label_12208c:
    if (ctx->pc == 0x12208Cu) {
        ctx->pc = 0x12208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122088u;
        // 0x12208c: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122090u;
        goto label_122090;
    }
    ctx->pc = 0x122088u;
    SET_GPR_U32(ctx, 31, 0x122090u);
    ctx->pc = 0x12208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122088u;
    // 0x12208c: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x122088u, 0x122090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122090u;
label_122090:
    // 0x122090: 0x10000003  b           . + 4 + (0x3 << 2)
label_122094:
    if (ctx->pc == 0x122094u) {
        ctx->pc = 0x122098u;
        goto label_122098;
    }
    ctx->pc = 0x122090u;
    {
        const bool branch_taken_0x122090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122090) {
            ctx->pc = 0x1220A0u;
            goto label_1220a0;
        }
    }
    ctx->pc = 0x122098u;
label_122098:
    // 0x122098: 0xc048974  jal         func_1225D0
label_12209c:
    if (ctx->pc == 0x12209Cu) {
        ctx->pc = 0x12209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122098u;
        // 0x12209c: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1220A0u;
        goto label_1220a0;
    }
    ctx->pc = 0x122098u;
    SET_GPR_U32(ctx, 31, 0x1220A0u);
    ctx->pc = 0x12209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122098u;
    // 0x12209c: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x122098u, 0x1220A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220A0u;
label_1220a0:
    // 0x1220a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1220a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1220a4:
    // 0x1220a4: 0x1472ffda  bne         $v1, $s2, . + 4 + (-0x26 << 2)
label_1220a8:
    if (ctx->pc == 0x1220A8u) {
        ctx->pc = 0x1220ACu;
        goto label_1220ac;
    }
    ctx->pc = 0x1220A4u;
    {
        const bool branch_taken_0x1220a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x1220a4) {
            ctx->pc = 0x122010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122010;
        }
    }
    ctx->pc = 0x1220ACu;
label_1220ac:
    // 0x1220ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1220acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1220b0:
    // 0x1220b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1220b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1220b4:
    // 0x1220b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1220b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1220b8:
    // 0x1220b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1220b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1220bc:
    // 0x1220bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1220bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1220c0:
    // 0x1220c0: 0x3e00008  jr          $ra
label_1220c4:
    if (ctx->pc == 0x1220C4u) {
        ctx->pc = 0x1220C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220C0u;
        // 0x1220c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1220C8u;
        goto label_fallthrough_0x1220c0;
    }
    ctx->pc = 0x1220C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1220C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220C0u;
        // 0x1220c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1220C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1220c0:
    ctx->pc = 0x1220C8u;
}
