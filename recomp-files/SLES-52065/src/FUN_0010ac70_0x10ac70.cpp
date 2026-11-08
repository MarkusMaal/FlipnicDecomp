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

// Function: FUN_0010ac70
// Address: 0x10ac70 - 0x10ad80
void FUN_0010ac70_0x10ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010ac70_0x10ac70");
#endif

    switch (ctx->pc) {
        case 0x10ac70u: goto label_10ac70;
        case 0x10ac74u: goto label_10ac74;
        case 0x10ac78u: goto label_10ac78;
        case 0x10ac7cu: goto label_10ac7c;
        case 0x10ac80u: goto label_10ac80;
        case 0x10ac84u: goto label_10ac84;
        case 0x10ac88u: goto label_10ac88;
        case 0x10ac8cu: goto label_10ac8c;
        case 0x10ac90u: goto label_10ac90;
        case 0x10ac94u: goto label_10ac94;
        case 0x10ac98u: goto label_10ac98;
        case 0x10ac9cu: goto label_10ac9c;
        case 0x10aca0u: goto label_10aca0;
        case 0x10aca4u: goto label_10aca4;
        case 0x10aca8u: goto label_10aca8;
        case 0x10acacu: goto label_10acac;
        case 0x10acb0u: goto label_10acb0;
        case 0x10acb4u: goto label_10acb4;
        case 0x10acb8u: goto label_10acb8;
        case 0x10acbcu: goto label_10acbc;
        case 0x10acc0u: goto label_10acc0;
        case 0x10acc4u: goto label_10acc4;
        case 0x10acc8u: goto label_10acc8;
        case 0x10acccu: goto label_10accc;
        case 0x10acd0u: goto label_10acd0;
        case 0x10acd4u: goto label_10acd4;
        case 0x10acd8u: goto label_10acd8;
        case 0x10acdcu: goto label_10acdc;
        case 0x10ace0u: goto label_10ace0;
        case 0x10ace4u: goto label_10ace4;
        case 0x10ace8u: goto label_10ace8;
        case 0x10acecu: goto label_10acec;
        case 0x10acf0u: goto label_10acf0;
        case 0x10acf4u: goto label_10acf4;
        case 0x10acf8u: goto label_10acf8;
        case 0x10acfcu: goto label_10acfc;
        case 0x10ad00u: goto label_10ad00;
        case 0x10ad04u: goto label_10ad04;
        case 0x10ad08u: goto label_10ad08;
        case 0x10ad0cu: goto label_10ad0c;
        case 0x10ad10u: goto label_10ad10;
        case 0x10ad14u: goto label_10ad14;
        case 0x10ad18u: goto label_10ad18;
        case 0x10ad1cu: goto label_10ad1c;
        case 0x10ad20u: goto label_10ad20;
        case 0x10ad24u: goto label_10ad24;
        case 0x10ad28u: goto label_10ad28;
        case 0x10ad2cu: goto label_10ad2c;
        case 0x10ad30u: goto label_10ad30;
        case 0x10ad34u: goto label_10ad34;
        case 0x10ad38u: goto label_10ad38;
        case 0x10ad3cu: goto label_10ad3c;
        case 0x10ad40u: goto label_10ad40;
        case 0x10ad44u: goto label_10ad44;
        case 0x10ad48u: goto label_10ad48;
        case 0x10ad4cu: goto label_10ad4c;
        case 0x10ad50u: goto label_10ad50;
        case 0x10ad54u: goto label_10ad54;
        case 0x10ad58u: goto label_10ad58;
        case 0x10ad5cu: goto label_10ad5c;
        case 0x10ad60u: goto label_10ad60;
        case 0x10ad64u: goto label_10ad64;
        case 0x10ad68u: goto label_10ad68;
        case 0x10ad6cu: goto label_10ad6c;
        case 0x10ad70u: goto label_10ad70;
        case 0x10ad74u: goto label_10ad74;
        case 0x10ad78u: goto label_10ad78;
        case 0x10ad7cu: goto label_10ad7c;
        default: break;
    }

    ctx->pc = 0x10ac70u;

label_10ac70:
    // 0x10ac70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10ac74:
    // 0x10ac74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ac74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10ac78:
    // 0x10ac78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10ac78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10ac7c:
    // 0x10ac7c: 0x8c8201d4  lw          $v0, 0x1D4($a0)
    ctx->pc = 0x10ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_10ac80:
    // 0x10ac80: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_10ac84:
    if (ctx->pc == 0x10AC84u) {
        ctx->pc = 0x10AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC80u;
        // 0x10ac84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AC88u;
        goto label_10ac88;
    }
    ctx->pc = 0x10AC80u;
    {
        const bool branch_taken_0x10ac80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC80u;
        // 0x10ac84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac80) {
            ctx->pc = 0x10AD30u;
            goto label_10ad30;
        }
    }
    ctx->pc = 0x10AC88u;
label_10ac88:
    // 0x10ac88: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10ac8c:
    // 0x10ac8c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x10ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_10ac90:
    // 0x10ac90: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x10ac90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_10ac94:
    // 0x10ac94: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_10ac98:
    if (ctx->pc == 0x10AC98u) {
        ctx->pc = 0x10AC9Cu;
        goto label_10ac9c;
    }
    ctx->pc = 0x10AC94u;
    {
        const bool branch_taken_0x10ac94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ac94) {
            ctx->pc = 0x10ACC8u;
            goto label_10acc8;
        }
    }
    ctx->pc = 0x10AC9Cu;
label_10ac9c:
    // 0x10ac9c: 0x8e022314  lw          $v0, 0x2314($s0)
    ctx->pc = 0x10ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8980)));
label_10aca0:
    // 0x10aca0: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
label_10aca4:
    if (ctx->pc == 0x10ACA4u) {
        ctx->pc = 0x10ACA8u;
        goto label_10aca8;
    }
    ctx->pc = 0x10ACA0u;
    {
        const bool branch_taken_0x10aca0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10aca0) {
            ctx->pc = 0x10ACC8u;
            goto label_10acc8;
        }
    }
    ctx->pc = 0x10ACA8u;
label_10aca8:
    // 0x10aca8: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x10aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_10acac:
    // 0x10acac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10acb0:
    if (ctx->pc == 0x10ACB0u) {
        ctx->pc = 0x10ACB4u;
        goto label_10acb4;
    }
    ctx->pc = 0x10ACACu;
    {
        const bool branch_taken_0x10acac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10acac) {
            ctx->pc = 0x10ACBCu;
            goto label_10acbc;
        }
    }
    ctx->pc = 0x10ACB4u;
label_10acb4:
    // 0x10acb4: 0x10000007  b           . + 4 + (0x7 << 2)
label_10acb8:
    if (ctx->pc == 0x10ACB8u) {
        ctx->pc = 0x10ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACB4u;
        // 0x10acb8: 0xae002314  sw          $zero, 0x2314($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8980), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ACBCu;
        goto label_10acbc;
    }
    ctx->pc = 0x10ACB4u;
    {
        const bool branch_taken_0x10acb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACB4u;
        // 0x10acb8: 0xae002314  sw          $zero, 0x2314($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8980), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10acb4) {
            ctx->pc = 0x10ACD4u;
            goto label_10acd4;
        }
    }
    ctx->pc = 0x10ACBCu;
label_10acbc:
    // 0x10acbc: 0x8e022318  lw          $v0, 0x2318($s0)
    ctx->pc = 0x10acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8984)));
label_10acc0:
    // 0x10acc0: 0x10000004  b           . + 4 + (0x4 << 2)
label_10acc4:
    if (ctx->pc == 0x10ACC4u) {
        ctx->pc = 0x10ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACC0u;
        // 0x10acc4: 0xae022314  sw          $v0, 0x2314($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ACC8u;
        goto label_10acc8;
    }
    ctx->pc = 0x10ACC0u;
    {
        const bool branch_taken_0x10acc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACC0u;
        // 0x10acc4: 0xae022314  sw          $v0, 0x2314($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10acc0) {
            ctx->pc = 0x10ACD4u;
            goto label_10acd4;
        }
    }
    ctx->pc = 0x10ACC8u;
label_10acc8:
    // 0x10acc8: 0x8e022314  lw          $v0, 0x2314($s0)
    ctx->pc = 0x10acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8980)));
label_10accc:
    // 0x10accc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10acccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10acd0:
    // 0x10acd0: 0xae022314  sw          $v0, 0x2314($s0)
    ctx->pc = 0x10acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8980), GPR_U32(ctx, 2));
label_10acd4:
    // 0x10acd4: 0x8e022314  lw          $v0, 0x2314($s0)
    ctx->pc = 0x10acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8980)));
label_10acd8:
    // 0x10acd8: 0x1c400015  bgtz        $v0, . + 4 + (0x15 << 2)
label_10acdc:
    if (ctx->pc == 0x10ACDCu) {
        ctx->pc = 0x10ACE0u;
        goto label_10ace0;
    }
    ctx->pc = 0x10ACD8u;
    {
        const bool branch_taken_0x10acd8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x10acd8) {
            ctx->pc = 0x10AD30u;
            goto label_10ad30;
        }
    }
    ctx->pc = 0x10ACE0u;
label_10ace0:
    // 0x10ace0: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x10ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_10ace4:
    // 0x10ace4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ace8:
    // 0x10ace8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10acec:
    // 0x10acec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10acecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_10acf0:
    // 0x10acf0: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x10acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_10acf4:
    // 0x10acf4: 0x8e022318  lw          $v0, 0x2318($s0)
    ctx->pc = 0x10acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8984)));
label_10acf8:
    // 0x10acf8: 0xc0430e8  jal         func_10C3A0
label_10acfc:
    if (ctx->pc == 0x10ACFCu) {
        ctx->pc = 0x10ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACF8u;
        // 0x10acfc: 0xae022314  sw          $v0, 0x2314($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD00u;
        goto label_10ad00;
    }
    ctx->pc = 0x10ACF8u;
    SET_GPR_U32(ctx, 31, 0x10AD00u);
    ctx->pc = 0x10ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACF8u;
    // 0x10acfc: 0xae022314  sw          $v0, 0x2314($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8980), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C3A0u, 0x10ACF8u, 0x10AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD00u;
label_10ad00:
    // 0x10ad00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ad00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10ad04:
    // 0x10ad04: 0x3c023eae  lui         $v0, 0x3EAE
    ctx->pc = 0x10ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16046 << 16));
label_10ad08:
    // 0x10ad08: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x10ad08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_10ad0c:
    // 0x10ad0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10ad0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10ad10:
    // 0x10ad10: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x10ad10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10ad14:
    // 0x10ad14: 0xc043160  jal         func_10C580
label_10ad18:
    if (ctx->pc == 0x10AD18u) {
        ctx->pc = 0x10AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD14u;
        // 0x10ad18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD1Cu;
        goto label_10ad1c;
    }
    ctx->pc = 0x10AD14u;
    SET_GPR_U32(ctx, 31, 0x10AD1Cu);
    ctx->pc = 0x10AD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD14u;
    // 0x10ad18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C580u, 0x10AD14u, 0x10AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD1Cu;
label_10ad1c:
    // 0x10ad1c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10ad1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10ad20:
    // 0x10ad20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ad20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ad24:
    // 0x10ad24: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10ad24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10ad28:
    // 0x10ad28: 0x320f809  jalr        $t9
label_10ad2c:
    if (ctx->pc == 0x10AD2Cu) {
        ctx->pc = 0x10AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD28u;
        // 0x10ad2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD30u;
        goto label_10ad30;
    }
    ctx->pc = 0x10AD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10AD30u);
        ctx->pc = 0x10AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD28u;
        // 0x10ad2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AD28u, 0x10AD30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10AD30u;
label_10ad30:
    // 0x10ad30: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x10ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10ad34:
    // 0x10ad34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10ad38:
    // 0x10ad38: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_10ad3c:
    if (ctx->pc == 0x10AD3Cu) {
        ctx->pc = 0x10AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD38u;
        // 0x10ad3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD40u;
        goto label_10ad40;
    }
    ctx->pc = 0x10AD38u;
    {
        const bool branch_taken_0x10ad38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD38u;
        // 0x10ad3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad38) {
            ctx->pc = 0x10AD70u;
            goto label_10ad70;
        }
    }
    ctx->pc = 0x10AD40u;
label_10ad40:
    // 0x10ad40: 0x8603024e  lh          $v1, 0x24E($s0)
    ctx->pc = 0x10ad40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 590)));
label_10ad44:
    // 0x10ad44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10ad48:
    // 0x10ad48: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_10ad4c:
    if (ctx->pc == 0x10AD4Cu) {
        ctx->pc = 0x10AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD48u;
        // 0x10ad4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD50u;
        goto label_10ad50;
    }
    ctx->pc = 0x10AD48u;
    {
        const bool branch_taken_0x10ad48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD48u;
        // 0x10ad4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad48) {
            ctx->pc = 0x10AD70u;
            goto label_10ad70;
        }
    }
    ctx->pc = 0x10AD50u;
label_10ad50:
    // 0x10ad50: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10ad50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10ad54:
    // 0x10ad54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ad54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ad58:
    // 0x10ad58: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10ad58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10ad5c:
    // 0x10ad5c: 0x320f809  jalr        $t9
label_10ad60:
    if (ctx->pc == 0x10AD60u) {
        ctx->pc = 0x10AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD5Cu;
        // 0x10ad60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD64u;
        goto label_10ad64;
    }
    ctx->pc = 0x10AD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10AD64u);
        ctx->pc = 0x10AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD5Cu;
        // 0x10ad60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AD5Cu, 0x10AD64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10AD64u;
label_10ad64:
    // 0x10ad64: 0xc043114  jal         func_10C450
label_10ad68:
    if (ctx->pc == 0x10AD68u) {
        ctx->pc = 0x10AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD64u;
        // 0x10ad68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD6Cu;
        goto label_10ad6c;
    }
    ctx->pc = 0x10AD64u;
    SET_GPR_U32(ctx, 31, 0x10AD6Cu);
    ctx->pc = 0x10AD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD64u;
    // 0x10ad68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C450u, 0x10AD64u, 0x10AD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD6Cu;
label_10ad6c:
    // 0x10ad6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ad70:
    // 0x10ad70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ad70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10ad74:
    // 0x10ad74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10ad74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10ad78:
    // 0x10ad78: 0x3e00008  jr          $ra
label_10ad7c:
    if (ctx->pc == 0x10AD7Cu) {
        ctx->pc = 0x10AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD78u;
        // 0x10ad7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD80u;
        goto label_fallthrough_0x10ad78;
    }
    ctx->pc = 0x10AD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD78u;
        // 0x10ad7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10ad78:
    ctx->pc = 0x10AD80u;
}
