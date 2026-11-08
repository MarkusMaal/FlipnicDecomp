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

// Function: caseD_17
// Address: 0x109f58 - 0x10a098
void caseD_17_0x109f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_17_0x109f58");
#endif

    switch (ctx->pc) {
        case 0x109f58u: goto label_109f58;
        case 0x109f5cu: goto label_109f5c;
        case 0x109f60u: goto label_109f60;
        case 0x109f64u: goto label_109f64;
        case 0x109f68u: goto label_109f68;
        case 0x109f6cu: goto label_109f6c;
        case 0x109f70u: goto label_109f70;
        case 0x109f74u: goto label_109f74;
        case 0x109f78u: goto label_109f78;
        case 0x109f7cu: goto label_109f7c;
        case 0x109f80u: goto label_109f80;
        case 0x109f84u: goto label_109f84;
        case 0x109f88u: goto label_109f88;
        case 0x109f8cu: goto label_109f8c;
        case 0x109f90u: goto label_109f90;
        case 0x109f94u: goto label_109f94;
        case 0x109f98u: goto label_109f98;
        case 0x109f9cu: goto label_109f9c;
        case 0x109fa0u: goto label_109fa0;
        case 0x109fa4u: goto label_109fa4;
        case 0x109fa8u: goto label_109fa8;
        case 0x109facu: goto label_109fac;
        case 0x109fb0u: goto label_109fb0;
        case 0x109fb4u: goto label_109fb4;
        case 0x109fb8u: goto label_109fb8;
        case 0x109fbcu: goto label_109fbc;
        case 0x109fc0u: goto label_109fc0;
        case 0x109fc4u: goto label_109fc4;
        case 0x109fc8u: goto label_109fc8;
        case 0x109fccu: goto label_109fcc;
        case 0x109fd0u: goto label_109fd0;
        case 0x109fd4u: goto label_109fd4;
        case 0x109fd8u: goto label_109fd8;
        case 0x109fdcu: goto label_109fdc;
        case 0x109fe0u: goto label_109fe0;
        case 0x109fe4u: goto label_109fe4;
        case 0x109fe8u: goto label_109fe8;
        case 0x109fecu: goto label_109fec;
        case 0x109ff0u: goto label_109ff0;
        case 0x109ff4u: goto label_109ff4;
        case 0x109ff8u: goto label_109ff8;
        case 0x109ffcu: goto label_109ffc;
        case 0x10a000u: goto label_10a000;
        case 0x10a004u: goto label_10a004;
        case 0x10a008u: goto label_10a008;
        case 0x10a00cu: goto label_10a00c;
        case 0x10a010u: goto label_10a010;
        case 0x10a014u: goto label_10a014;
        case 0x10a018u: goto label_10a018;
        case 0x10a01cu: goto label_10a01c;
        case 0x10a020u: goto label_10a020;
        case 0x10a024u: goto label_10a024;
        case 0x10a028u: goto label_10a028;
        case 0x10a02cu: goto label_10a02c;
        case 0x10a030u: goto label_10a030;
        case 0x10a034u: goto label_10a034;
        case 0x10a038u: goto label_10a038;
        case 0x10a03cu: goto label_10a03c;
        case 0x10a040u: goto label_10a040;
        case 0x10a044u: goto label_10a044;
        case 0x10a048u: goto label_10a048;
        case 0x10a04cu: goto label_10a04c;
        case 0x10a050u: goto label_10a050;
        case 0x10a054u: goto label_10a054;
        case 0x10a058u: goto label_10a058;
        case 0x10a05cu: goto label_10a05c;
        case 0x10a060u: goto label_10a060;
        case 0x10a064u: goto label_10a064;
        case 0x10a068u: goto label_10a068;
        case 0x10a06cu: goto label_10a06c;
        case 0x10a070u: goto label_10a070;
        case 0x10a074u: goto label_10a074;
        case 0x10a078u: goto label_10a078;
        case 0x10a07cu: goto label_10a07c;
        case 0x10a080u: goto label_10a080;
        case 0x10a084u: goto label_10a084;
        case 0x10a088u: goto label_10a088;
        case 0x10a08cu: goto label_10a08c;
        case 0x10a090u: goto label_10a090;
        case 0x10a094u: goto label_10a094;
        default: break;
    }

    ctx->pc = 0x109f58u;

label_109f58:
    // 0x109f58: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x109f58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_109f5c:
    // 0x109f5c: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109f60:
    // 0x109f60: 0xc057040  jal         func_15C100
label_109f64:
    if (ctx->pc == 0x109F64u) {
        ctx->pc = 0x109F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F60u;
        // 0x109f64: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F68u;
        goto label_109f68;
    }
    ctx->pc = 0x109F60u;
    SET_GPR_U32(ctx, 31, 0x109F68u);
    ctx->pc = 0x109F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F60u;
    // 0x109f64: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x109F60u, 0x109F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F68u;
label_109f68:
    // 0x109f68: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109f6c:
    // 0x109f6c: 0xc057f04  jal         func_15FC10
label_109f70:
    if (ctx->pc == 0x109F70u) {
        ctx->pc = 0x109F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F6Cu;
        // 0x109f70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F74u;
        goto label_109f74;
    }
    ctx->pc = 0x109F6Cu;
    SET_GPR_U32(ctx, 31, 0x109F74u);
    ctx->pc = 0x109F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F6Cu;
    // 0x109f70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x109F6Cu, 0x109F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F74u;
label_109f74:
    // 0x109f74: 0xc049e34  jal         func_1278D0
label_109f78:
    if (ctx->pc == 0x109F78u) {
        ctx->pc = 0x109F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F74u;
        // 0x109f78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F7Cu;
        goto label_109f7c;
    }
    ctx->pc = 0x109F74u;
    SET_GPR_U32(ctx, 31, 0x109F7Cu);
    ctx->pc = 0x109F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F74u;
    // 0x109f78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x109F74u, 0x109F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F7Cu;
label_109f7c:
    // 0x109f7c: 0xc04a02c  jal         func_1280B0
label_109f80:
    if (ctx->pc == 0x109F80u) {
        ctx->pc = 0x109F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F7Cu;
        // 0x109f80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F84u;
        goto label_109f84;
    }
    ctx->pc = 0x109F7Cu;
    SET_GPR_U32(ctx, 31, 0x109F84u);
    ctx->pc = 0x109F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F7Cu;
    // 0x109f80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280B0u, 0x109F7Cu, 0x109F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F84u;
label_109f84:
    // 0x109f84: 0xc049e34  jal         func_1278D0
label_109f88:
    if (ctx->pc == 0x109F88u) {
        ctx->pc = 0x109F8Cu;
        goto label_109f8c;
    }
    ctx->pc = 0x109F84u;
    SET_GPR_U32(ctx, 31, 0x109F8Cu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x109F84u, 0x109F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F8Cu;
label_109f8c:
    // 0x109f8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x109f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109f90:
    // 0x109f90: 0xc049ed8  jal         func_127B60
label_109f94:
    if (ctx->pc == 0x109F94u) {
        ctx->pc = 0x109F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F90u;
        // 0x109f94: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F98u;
        goto label_109f98;
    }
    ctx->pc = 0x109F90u;
    SET_GPR_U32(ctx, 31, 0x109F98u);
    ctx->pc = 0x109F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F90u;
    // 0x109f94: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x109F90u, 0x109F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F98u;
label_109f98:
    // 0x109f98: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109f9c:
    // 0x109f9c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x109f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_109fa0:
    // 0x109fa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109fa4:
    // 0x109fa4: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x109fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_109fa8:
    // 0x109fa8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x109fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_109fac:
    // 0x109fac: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x109facu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_109fb0:
    // 0x109fb0: 0x320f809  jalr        $t9
label_109fb4:
    if (ctx->pc == 0x109FB4u) {
        ctx->pc = 0x109FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FB0u;
        // 0x109fb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109FB8u;
        goto label_109fb8;
    }
    ctx->pc = 0x109FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109FB8u);
        ctx->pc = 0x109FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FB0u;
        // 0x109fb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109FB0u, 0x109FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109FB8u;
label_109fb8:
    // 0x109fb8: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109fbc:
    // 0x109fbc: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x109fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_109fc0:
    // 0x109fc0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x109fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_109fc4:
    // 0x109fc4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x109fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_109fc8:
    // 0x109fc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_109fcc:
    // 0x109fcc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x109fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_109fd0:
    // 0x109fd0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_109fd4:
    // 0x109fd4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x109fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_109fd8:
    // 0x109fd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x109fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_109fdc:
    // 0x109fdc: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x109fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_109fe0:
    // 0x109fe0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x109fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_109fe4:
    // 0x109fe4: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x109fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_109fe8:
    // 0x109fe8: 0x320f809  jalr        $t9
label_109fec:
    if (ctx->pc == 0x109FECu) {
        ctx->pc = 0x109FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FE8u;
        // 0x109fec: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109FF0u;
        goto label_109ff0;
    }
    ctx->pc = 0x109FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109FF0u);
        ctx->pc = 0x109FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FE8u;
        // 0x109fec: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109FE8u, 0x109FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109FF0u;
label_109ff0:
    // 0x109ff0: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109ff4:
    // 0x109ff4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x109ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_109ff8:
    // 0x109ff8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x109ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_109ffc:
    // 0x109ffc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x109ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_10a000:
    // 0x10a000: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10a004:
    // 0x10a004: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10a004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_10a008:
    // 0x10a008: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10a008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10a00c:
    // 0x10a00c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x10a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10a010:
    // 0x10a010: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10a010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10a014:
    // 0x10a014: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x10a014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_10a018:
    // 0x10a018: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10a018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10a01c:
    // 0x10a01c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x10a01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_10a020:
    // 0x10a020: 0x320f809  jalr        $t9
label_10a024:
    if (ctx->pc == 0x10A024u) {
        ctx->pc = 0x10A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A020u;
        // 0x10a024: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A028u;
        goto label_10a028;
    }
    ctx->pc = 0x10A020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10A028u);
        ctx->pc = 0x10A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A020u;
        // 0x10a024: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A020u, 0x10A028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A028u;
label_10a028:
    // 0x10a028: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x10a028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10a02c:
    // 0x10a02c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x10a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_10a030:
    // 0x10a030: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x10a030u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_10a034:
    // 0x10a034: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x10a034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_10a038:
    // 0x10a038: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10a03c:
    // 0x10a03c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10a03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a040:
    // 0x10a040: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_10a044:
    // 0x10a044: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10a044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10a048:
    // 0x10a048: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x10a048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10a04c:
    // 0x10a04c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10a050:
    // 0x10a050: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x10a050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_10a054:
    // 0x10a054: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10a054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10a058:
    // 0x10a058: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x10a058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_10a05c:
    // 0x10a05c: 0x320f809  jalr        $t9
label_10a060:
    if (ctx->pc == 0x10A060u) {
        ctx->pc = 0x10A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A05Cu;
        // 0x10a060: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A064u;
        goto label_10a064;
    }
    ctx->pc = 0x10A05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10A064u);
        ctx->pc = 0x10A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A05Cu;
        // 0x10a060: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A05Cu, 0x10A064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A064u;
label_10a064:
    // 0x10a064: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x10a064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10a068:
    // 0x10a068: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x10a068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_10a06c:
    // 0x10a06c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x10a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_10a070:
    // 0x10a070: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10a070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10a074:
    // 0x10a074: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x10a074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_10a078:
    // 0x10a078: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10a078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10a07c:
    // 0x10a07c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10a080:
    // 0x10a080: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
label_10a084:
    if (ctx->pc == 0x10A084u) {
        ctx->pc = 0x10A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A080u;
        // 0x10a084: 0x24430040  addiu       $v1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A088u;
        goto label_10a088;
    }
    ctx->pc = 0x10A080u;
    {
        const bool branch_taken_0x10a080 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x10A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A080u;
        // 0x10a084: 0x24430040  addiu       $v1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a080) {
            ctx->pc = 0x10A098u;
            return;
        }
    }
    ctx->pc = 0x10A088u;
label_10a088:
    // 0x10a088: 0x846201ec  lh          $v0, 0x1EC($v1)
    ctx->pc = 0x10a088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 492)));
label_10a08c:
    // 0x10a08c: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
label_10a090:
    if (ctx->pc == 0x10A090u) {
        ctx->pc = 0x10A094u;
        goto label_10a094;
    }
    ctx->pc = 0x10A08Cu;
    {
        const bool branch_taken_0x10a08c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10a08c) {
            ctx->pc = 0x10A098u;
            return;
        }
    }
    ctx->pc = 0x10A094u;
label_10a094:
    // 0x10a094: 0xa46201ee  sh          $v0, 0x1EE($v1)
    ctx->pc = 0x10a094u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 494), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x10a098u;
}
