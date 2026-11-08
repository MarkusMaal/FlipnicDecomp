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

// Function: FUN_00120f60
// Address: 0x120f60 - 0x12104c
void FUN_00120f60_0x120f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00120f60_0x120f60");
#endif

    switch (ctx->pc) {
        case 0x120f60u: goto label_120f60;
        case 0x120f64u: goto label_120f64;
        case 0x120f68u: goto label_120f68;
        case 0x120f6cu: goto label_120f6c;
        case 0x120f70u: goto label_120f70;
        case 0x120f74u: goto label_120f74;
        case 0x120f78u: goto label_120f78;
        case 0x120f7cu: goto label_120f7c;
        case 0x120f80u: goto label_120f80;
        case 0x120f84u: goto label_120f84;
        case 0x120f88u: goto label_120f88;
        case 0x120f8cu: goto label_120f8c;
        case 0x120f90u: goto label_120f90;
        case 0x120f94u: goto label_120f94;
        case 0x120f98u: goto label_120f98;
        case 0x120f9cu: goto label_120f9c;
        case 0x120fa0u: goto label_120fa0;
        case 0x120fa4u: goto label_120fa4;
        case 0x120fa8u: goto label_120fa8;
        case 0x120facu: goto label_120fac;
        case 0x120fb0u: goto label_120fb0;
        case 0x120fb4u: goto label_120fb4;
        case 0x120fb8u: goto label_120fb8;
        case 0x120fbcu: goto label_120fbc;
        case 0x120fc0u: goto label_120fc0;
        case 0x120fc4u: goto label_120fc4;
        case 0x120fc8u: goto label_120fc8;
        case 0x120fccu: goto label_120fcc;
        case 0x120fd0u: goto label_120fd0;
        case 0x120fd4u: goto label_120fd4;
        case 0x120fd8u: goto label_120fd8;
        case 0x120fdcu: goto label_120fdc;
        case 0x120fe0u: goto label_120fe0;
        case 0x120fe4u: goto label_120fe4;
        case 0x120fe8u: goto label_120fe8;
        case 0x120fecu: goto label_120fec;
        case 0x120ff0u: goto label_120ff0;
        case 0x120ff4u: goto label_120ff4;
        case 0x120ff8u: goto label_120ff8;
        case 0x120ffcu: goto label_120ffc;
        case 0x121000u: goto label_121000;
        case 0x121004u: goto label_121004;
        case 0x121008u: goto label_121008;
        case 0x12100cu: goto label_12100c;
        case 0x121010u: goto label_121010;
        case 0x121014u: goto label_121014;
        case 0x121018u: goto label_121018;
        case 0x12101cu: goto label_12101c;
        case 0x121020u: goto label_121020;
        case 0x121024u: goto label_121024;
        case 0x121028u: goto label_121028;
        case 0x12102cu: goto label_12102c;
        case 0x121030u: goto label_121030;
        case 0x121034u: goto label_121034;
        case 0x121038u: goto label_121038;
        case 0x12103cu: goto label_12103c;
        case 0x121040u: goto label_121040;
        case 0x121044u: goto label_121044;
        case 0x121048u: goto label_121048;
        default: break;
    }

    ctx->pc = 0x120f60u;

label_120f60:
    // 0x120f60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x120f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_120f64:
    // 0x120f64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x120f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_120f68:
    // 0x120f68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x120f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_120f6c:
    // 0x120f6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x120f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_120f70:
    // 0x120f70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x120f70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_120f74:
    // 0x120f74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x120f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_120f78:
    // 0x120f78: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x120f78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_120f7c:
    // 0x120f7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x120f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_120f80:
    // 0x120f80: 0x12800029  beqz        $s4, . + 4 + (0x29 << 2)
label_120f84:
    if (ctx->pc == 0x120F84u) {
        ctx->pc = 0x120F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F80u;
        // 0x120f84: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120F88u;
        goto label_120f88;
    }
    ctx->pc = 0x120F80u;
    {
        const bool branch_taken_0x120f80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x120F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F80u;
        // 0x120f84: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f80) {
            ctx->pc = 0x121028u;
            goto label_121028;
        }
    }
    ctx->pc = 0x120F88u;
label_120f88:
    // 0x120f88: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x120f88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_120f8c:
    // 0x120f8c: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x120f8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_120f90:
    // 0x120f90: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_120f94:
    if (ctx->pc == 0x120F94u) {
        ctx->pc = 0x120F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F90u;
        // 0x120f94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120F98u;
        goto label_120f98;
    }
    ctx->pc = 0x120F90u;
    {
        const bool branch_taken_0x120f90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F90u;
        // 0x120f94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f90) {
            ctx->pc = 0x120FE8u;
            goto label_120fe8;
        }
    }
    ctx->pc = 0x120F98u;
label_120f98:
    // 0x120f98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x120f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120f9c:
    // 0x120f9c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x120f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_120fa0:
    // 0x120fa0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x120fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_120fa4:
    // 0x120fa4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x120fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_120fa8:
    // 0x120fa8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_120fac:
    if (ctx->pc == 0x120FACu) {
        ctx->pc = 0x120FB0u;
        goto label_120fb0;
    }
    ctx->pc = 0x120FA8u;
    {
        const bool branch_taken_0x120fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x120fa8) {
            ctx->pc = 0x120FD8u;
            goto label_120fd8;
        }
    }
    ctx->pc = 0x120FB0u;
label_120fb0:
    // 0x120fb0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x120fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_120fb4:
    // 0x120fb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x120fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_120fb8:
    // 0x120fb8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x120fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_120fbc:
    // 0x120fbc: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x120fbcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_120fc0:
    // 0x120fc0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_120fc4:
    if (ctx->pc == 0x120FC4u) {
        ctx->pc = 0x120FC8u;
        goto label_120fc8;
    }
    ctx->pc = 0x120FC0u;
    {
        const bool branch_taken_0x120fc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x120fc0) {
            ctx->pc = 0x120FD8u;
            goto label_120fd8;
        }
    }
    ctx->pc = 0x120FC8u;
label_120fc8:
    // 0x120fc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x120fc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120fcc:
    // 0x120fcc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x120fccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_120fd0:
    // 0x120fd0: 0x320f809  jalr        $t9
label_120fd4:
    if (ctx->pc == 0x120FD4u) {
        ctx->pc = 0x120FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FD0u;
        // 0x120fd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120FD8u;
        goto label_120fd8;
    }
    ctx->pc = 0x120FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x120FD8u);
        ctx->pc = 0x120FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FD0u;
        // 0x120fd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120FD0u, 0x120FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120FD8u;
label_120fd8:
    // 0x120fd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x120fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_120fdc:
    // 0x120fdc: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x120fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_120fe0:
    // 0x120fe0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_120fe4:
    if (ctx->pc == 0x120FE4u) {
        ctx->pc = 0x120FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FE0u;
        // 0x120fe4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120FE8u;
        goto label_120fe8;
    }
    ctx->pc = 0x120FE0u;
    {
        const bool branch_taken_0x120fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FE0u;
        // 0x120fe4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120fe0) {
            ctx->pc = 0x120F9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120f9c;
        }
    }
    ctx->pc = 0x120FE8u;
label_120fe8:
    // 0x120fe8: 0x2684000c  addiu       $a0, $s4, 0xC
    ctx->pc = 0x120fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_120fec:
    // 0x120fec: 0xc04619c  jal         func_118670
label_120ff0:
    if (ctx->pc == 0x120FF0u) {
        ctx->pc = 0x120FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FECu;
        // 0x120ff0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120FF4u;
        goto label_120ff4;
    }
    ctx->pc = 0x120FECu;
    SET_GPR_U32(ctx, 31, 0x120FF4u);
    ctx->pc = 0x120FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120FECu;
    // 0x120ff0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x120FECu, 0x120FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120FF4u;
label_120ff4:
    // 0x120ff4: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_120ff8:
    if (ctx->pc == 0x120FF8u) {
        ctx->pc = 0x120FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FF4u;
        // 0x120ff8: 0x13143c  dsll32      $v0, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120FFCu;
        goto label_120ffc;
    }
    ctx->pc = 0x120FF4u;
    {
        const bool branch_taken_0x120ff4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x120FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FF4u;
        // 0x120ff8: 0x13143c  dsll32      $v0, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ff4) {
            ctx->pc = 0x121014u;
            goto label_121014;
        }
    }
    ctx->pc = 0x120FFCu;
label_120ffc:
    // 0x120ffc: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_121000:
    if (ctx->pc == 0x121000u) {
        ctx->pc = 0x121004u;
        goto label_121004;
    }
    ctx->pc = 0x120FFCu;
    {
        const bool branch_taken_0x120ffc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x120ffc) {
            ctx->pc = 0x121010u;
            goto label_121010;
        }
    }
    ctx->pc = 0x121004u;
label_121004:
    // 0x121004: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x121004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_121008:
    // 0x121008: 0xc048414  jal         func_121050
label_12100c:
    if (ctx->pc == 0x12100Cu) {
        ctx->pc = 0x12100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121008u;
        // 0x12100c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121010u;
        goto label_121010;
    }
    ctx->pc = 0x121008u;
    SET_GPR_U32(ctx, 31, 0x121010u);
    ctx->pc = 0x12100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121008u;
    // 0x12100c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x121008u, 0x121010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121010u;
label_121010:
    // 0x121010: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x121010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
label_121014:
    // 0x121014: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x121014u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_121018:
    // 0x121018: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_12101c:
    if (ctx->pc == 0x12101Cu) {
        ctx->pc = 0x12101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121018u;
        // 0x12101c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121020u;
        goto label_121020;
    }
    ctx->pc = 0x121018u;
    {
        const bool branch_taken_0x121018 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121018u;
        // 0x12101c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121018) {
            ctx->pc = 0x12102Cu;
            goto label_12102c;
        }
    }
    ctx->pc = 0x121020u;
label_121020:
    // 0x121020: 0xc0401a4  jal         func_100690
label_121024:
    if (ctx->pc == 0x121024u) {
        ctx->pc = 0x121024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121020u;
        // 0x121024: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121028u;
        goto label_121028;
    }
    ctx->pc = 0x121020u;
    SET_GPR_U32(ctx, 31, 0x121028u);
    ctx->pc = 0x121024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121020u;
    // 0x121024: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x121020u, 0x121028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121028u;
label_121028:
    // 0x121028: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x121028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12102c:
    // 0x12102c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12102cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_121030:
    // 0x121030: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x121030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_121034:
    // 0x121034: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x121034u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_121038:
    // 0x121038: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x121038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12103c:
    // 0x12103c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12103cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_121040:
    // 0x121040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x121040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_121044:
    // 0x121044: 0x3e00008  jr          $ra
label_121048:
    if (ctx->pc == 0x121048u) {
        ctx->pc = 0x121048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121044u;
        // 0x121048: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12104Cu;
        goto label_fallthrough_0x121044;
    }
    ctx->pc = 0x121044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121044u;
        // 0x121048: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x121044:
    ctx->pc = 0x12104Cu;
}
