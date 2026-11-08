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

// Function: FUN_001eec90
// Address: 0x1eec90 - 0x1eee54
void FUN_001eec90_0x1eec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eec90_0x1eec90");
#endif

    switch (ctx->pc) {
        case 0x1eec90u: goto label_1eec90;
        case 0x1eec94u: goto label_1eec94;
        case 0x1eec98u: goto label_1eec98;
        case 0x1eec9cu: goto label_1eec9c;
        case 0x1eeca0u: goto label_1eeca0;
        case 0x1eeca4u: goto label_1eeca4;
        case 0x1eeca8u: goto label_1eeca8;
        case 0x1eecacu: goto label_1eecac;
        case 0x1eecb0u: goto label_1eecb0;
        case 0x1eecb4u: goto label_1eecb4;
        case 0x1eecb8u: goto label_1eecb8;
        case 0x1eecbcu: goto label_1eecbc;
        case 0x1eecc0u: goto label_1eecc0;
        case 0x1eecc4u: goto label_1eecc4;
        case 0x1eecc8u: goto label_1eecc8;
        case 0x1eecccu: goto label_1eeccc;
        case 0x1eecd0u: goto label_1eecd0;
        case 0x1eecd4u: goto label_1eecd4;
        case 0x1eecd8u: goto label_1eecd8;
        case 0x1eecdcu: goto label_1eecdc;
        case 0x1eece0u: goto label_1eece0;
        case 0x1eece4u: goto label_1eece4;
        case 0x1eece8u: goto label_1eece8;
        case 0x1eececu: goto label_1eecec;
        case 0x1eecf0u: goto label_1eecf0;
        case 0x1eecf4u: goto label_1eecf4;
        case 0x1eecf8u: goto label_1eecf8;
        case 0x1eecfcu: goto label_1eecfc;
        case 0x1eed00u: goto label_1eed00;
        case 0x1eed04u: goto label_1eed04;
        case 0x1eed08u: goto label_1eed08;
        case 0x1eed0cu: goto label_1eed0c;
        case 0x1eed10u: goto label_1eed10;
        case 0x1eed14u: goto label_1eed14;
        case 0x1eed18u: goto label_1eed18;
        case 0x1eed1cu: goto label_1eed1c;
        case 0x1eed20u: goto label_1eed20;
        case 0x1eed24u: goto label_1eed24;
        case 0x1eed28u: goto label_1eed28;
        case 0x1eed2cu: goto label_1eed2c;
        case 0x1eed30u: goto label_1eed30;
        case 0x1eed34u: goto label_1eed34;
        case 0x1eed38u: goto label_1eed38;
        case 0x1eed3cu: goto label_1eed3c;
        case 0x1eed40u: goto label_1eed40;
        case 0x1eed44u: goto label_1eed44;
        case 0x1eed48u: goto label_1eed48;
        case 0x1eed4cu: goto label_1eed4c;
        case 0x1eed50u: goto label_1eed50;
        case 0x1eed54u: goto label_1eed54;
        case 0x1eed58u: goto label_1eed58;
        case 0x1eed5cu: goto label_1eed5c;
        case 0x1eed60u: goto label_1eed60;
        case 0x1eed64u: goto label_1eed64;
        case 0x1eed68u: goto label_1eed68;
        case 0x1eed6cu: goto label_1eed6c;
        case 0x1eed70u: goto label_1eed70;
        case 0x1eed74u: goto label_1eed74;
        case 0x1eed78u: goto label_1eed78;
        case 0x1eed7cu: goto label_1eed7c;
        case 0x1eed80u: goto label_1eed80;
        case 0x1eed84u: goto label_1eed84;
        case 0x1eed88u: goto label_1eed88;
        case 0x1eed8cu: goto label_1eed8c;
        case 0x1eed90u: goto label_1eed90;
        case 0x1eed94u: goto label_1eed94;
        case 0x1eed98u: goto label_1eed98;
        case 0x1eed9cu: goto label_1eed9c;
        case 0x1eeda0u: goto label_1eeda0;
        case 0x1eeda4u: goto label_1eeda4;
        case 0x1eeda8u: goto label_1eeda8;
        case 0x1eedacu: goto label_1eedac;
        case 0x1eedb0u: goto label_1eedb0;
        case 0x1eedb4u: goto label_1eedb4;
        case 0x1eedb8u: goto label_1eedb8;
        case 0x1eedbcu: goto label_1eedbc;
        case 0x1eedc0u: goto label_1eedc0;
        case 0x1eedc4u: goto label_1eedc4;
        case 0x1eedc8u: goto label_1eedc8;
        case 0x1eedccu: goto label_1eedcc;
        case 0x1eedd0u: goto label_1eedd0;
        case 0x1eedd4u: goto label_1eedd4;
        case 0x1eedd8u: goto label_1eedd8;
        case 0x1eeddcu: goto label_1eeddc;
        case 0x1eede0u: goto label_1eede0;
        case 0x1eede4u: goto label_1eede4;
        case 0x1eede8u: goto label_1eede8;
        case 0x1eedecu: goto label_1eedec;
        case 0x1eedf0u: goto label_1eedf0;
        case 0x1eedf4u: goto label_1eedf4;
        case 0x1eedf8u: goto label_1eedf8;
        case 0x1eedfcu: goto label_1eedfc;
        case 0x1eee00u: goto label_1eee00;
        case 0x1eee04u: goto label_1eee04;
        case 0x1eee08u: goto label_1eee08;
        case 0x1eee0cu: goto label_1eee0c;
        case 0x1eee10u: goto label_1eee10;
        case 0x1eee14u: goto label_1eee14;
        case 0x1eee18u: goto label_1eee18;
        case 0x1eee1cu: goto label_1eee1c;
        case 0x1eee20u: goto label_1eee20;
        case 0x1eee24u: goto label_1eee24;
        case 0x1eee28u: goto label_1eee28;
        case 0x1eee2cu: goto label_1eee2c;
        case 0x1eee30u: goto label_1eee30;
        case 0x1eee34u: goto label_1eee34;
        case 0x1eee38u: goto label_1eee38;
        case 0x1eee3cu: goto label_1eee3c;
        case 0x1eee40u: goto label_1eee40;
        case 0x1eee44u: goto label_1eee44;
        case 0x1eee48u: goto label_1eee48;
        case 0x1eee4cu: goto label_1eee4c;
        case 0x1eee50u: goto label_1eee50;
        default: break;
    }

    ctx->pc = 0x1eec90u;

label_1eec90:
    // 0x1eec90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1eec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1eec94:
    // 0x1eec94: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1eec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_1eec98:
    // 0x1eec98: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1eec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1eec9c:
    // 0x1eec9c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1eec9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eeca0:
    // 0x1eeca0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1eeca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1eeca4:
    // 0x1eeca4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1eeca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1eeca8:
    // 0x1eeca8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eeca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eecac:
    // 0x1eecac: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1eecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1eecb0:
    // 0x1eecb0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1eecb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1eecb4:
    // 0x1eecb4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1eecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eecb8:
    // 0x1eecb8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1eecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1eecbc:
    // 0x1eecbc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1eecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1eecc0:
    // 0x1eecc0: 0x40f809  jalr        $v0
label_1eecc4:
    if (ctx->pc == 0x1EECC4u) {
        ctx->pc = 0x1EECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECC0u;
        // 0x1eecc4: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EECC8u;
        goto label_1eecc8;
    }
    ctx->pc = 0x1EECC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EECC8u);
        ctx->pc = 0x1EECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECC0u;
        // 0x1eecc4: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EECC0u, 0x1EECC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EECC8u;
label_1eecc8:
    // 0x1eecc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1eecc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eeccc:
    // 0x1eeccc: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
label_1eecd0:
    if (ctx->pc == 0x1EECD0u) {
        ctx->pc = 0x1EECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECCCu;
        // 0x1eecd0: 0x8e34002c  lw          $s4, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EECD4u;
        goto label_1eecd4;
    }
    ctx->pc = 0x1EECCCu;
    {
        const bool branch_taken_0x1eeccc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eeccc) {
            ctx->pc = 0x1EECD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EECCCu;
            // 0x1eecd0: 0x8e34002c  lw          $s4, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EECD4u;
            goto label_1eecd4;
        }
    }
    ctx->pc = 0x1EECD4u;
label_1eecd4:
    // 0x1eecd4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1eecd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1eecd8:
    // 0x1eecd8: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
label_1eecdc:
    if (ctx->pc == 0x1EECDCu) {
        ctx->pc = 0x1EECE0u;
        goto label_1eece0;
    }
    ctx->pc = 0x1EECD8u;
    {
        const bool branch_taken_0x1eecd8 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1eecd8) {
            ctx->pc = 0x1EECE8u;
            goto label_1eece8;
        }
    }
    ctx->pc = 0x1EECE0u;
label_1eece0:
    // 0x1eece0: 0xc07b76e  jal         func_1EDDB8
label_1eece4:
    if (ctx->pc == 0x1EECE4u) {
        ctx->pc = 0x1EECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECE0u;
        // 0x1eece4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EECE8u;
        goto label_1eece8;
    }
    ctx->pc = 0x1EECE0u;
    SET_GPR_U32(ctx, 31, 0x1EECE8u);
    ctx->pc = 0x1EECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EECE0u;
    // 0x1eece4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EECE0u, 0x1EECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EECE8u;
label_1eece8:
    // 0x1eece8: 0x1a800003  blez        $s4, . + 4 + (0x3 << 2)
label_1eecec:
    if (ctx->pc == 0x1EECECu) {
        ctx->pc = 0x1EECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECE8u;
        // 0x1eecec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EECF0u;
        goto label_1eecf0;
    }
    ctx->pc = 0x1EECE8u;
    {
        const bool branch_taken_0x1eece8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1EECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECE8u;
        // 0x1eecec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eece8) {
            ctx->pc = 0x1EECF8u;
            goto label_1eecf8;
        }
    }
    ctx->pc = 0x1EECF0u;
label_1eecf0:
    // 0x1eecf0: 0xc07b76e  jal         func_1EDDB8
label_1eecf4:
    if (ctx->pc == 0x1EECF4u) {
        ctx->pc = 0x1EECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECF0u;
        // 0x1eecf4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EECF8u;
        goto label_1eecf8;
    }
    ctx->pc = 0x1EECF0u;
    SET_GPR_U32(ctx, 31, 0x1EECF8u);
    ctx->pc = 0x1EECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EECF0u;
    // 0x1eecf4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EECF0u, 0x1EECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EECF8u;
label_1eecf8:
    // 0x1eecf8: 0xc07d0d8  jal         func_1F4360
label_1eecfc:
    if (ctx->pc == 0x1EECFCu) {
        ctx->pc = 0x1EED00u;
        goto label_1eed00;
    }
    ctx->pc = 0x1EECF8u;
    SET_GPR_U32(ctx, 31, 0x1EED00u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EECF8u, 0x1EED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED00u;
label_1eed00:
    // 0x1eed00: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x1eed00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1eed04:
    // 0x1eed04: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1eed04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_1eed08:
    // 0x1eed08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1eed0c:
    if (ctx->pc == 0x1EED0Cu) {
        ctx->pc = 0x1EED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED08u;
        // 0x1eed0c: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED10u;
        goto label_1eed10;
    }
    ctx->pc = 0x1EED08u;
    {
        const bool branch_taken_0x1eed08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED08u;
        // 0x1eed0c: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed08) {
            ctx->pc = 0x1EED24u;
            goto label_1eed24;
        }
    }
    ctx->pc = 0x1EED10u;
label_1eed10:
    // 0x1eed10: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1eed10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1eed14:
    // 0x1eed14: 0xc07b84a  jal         func_1EE128
label_1eed18:
    if (ctx->pc == 0x1EED18u) {
        ctx->pc = 0x1EED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED14u;
        // 0x1eed18: 0x2484e180  addiu       $a0, $a0, -0x1E80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED1Cu;
        goto label_1eed1c;
    }
    ctx->pc = 0x1EED14u;
    SET_GPR_U32(ctx, 31, 0x1EED1Cu);
    ctx->pc = 0x1EED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED14u;
    // 0x1eed18: 0x2484e180  addiu       $a0, $a0, -0x1E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE128u, 0x1EED14u, 0x1EED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED1Cu;
label_1eed1c:
    // 0x1eed1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1eed20:
    if (ctx->pc == 0x1EED20u) {
        ctx->pc = 0x1EED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED1Cu;
        // 0x1eed20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED24u;
        goto label_1eed24;
    }
    ctx->pc = 0x1EED1Cu;
    {
        const bool branch_taken_0x1eed1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED1Cu;
        // 0x1eed20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed1c) {
            ctx->pc = 0x1EED34u;
            goto label_1eed34;
        }
    }
    ctx->pc = 0x1EED24u;
label_1eed24:
    // 0x1eed24: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1eed24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1eed28:
    // 0x1eed28: 0xc07b83e  jal         func_1EE0F8
label_1eed2c:
    if (ctx->pc == 0x1EED2Cu) {
        ctx->pc = 0x1EED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED28u;
        // 0x1eed2c: 0x2484e180  addiu       $a0, $a0, -0x1E80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED30u;
        goto label_1eed30;
    }
    ctx->pc = 0x1EED28u;
    SET_GPR_U32(ctx, 31, 0x1EED30u);
    ctx->pc = 0x1EED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED28u;
    // 0x1eed2c: 0x2484e180  addiu       $a0, $a0, -0x1E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0F8u, 0x1EED28u, 0x1EED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED30u;
label_1eed30:
    // 0x1eed30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1eed30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eed34:
    // 0x1eed34: 0xc07d0ea  jal         func_1F43A8
label_1eed38:
    if (ctx->pc == 0x1EED38u) {
        ctx->pc = 0x1EED3Cu;
        goto label_1eed3c;
    }
    ctx->pc = 0x1EED34u;
    SET_GPR_U32(ctx, 31, 0x1EED3Cu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EED34u, 0x1EED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED3Cu;
label_1eed3c:
    // 0x1eed3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1eed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1eed40:
    // 0x1eed40: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1eed40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1eed44:
    // 0x1eed44: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1eed44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
label_1eed48:
    // 0x1eed48: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1eed48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1eed4c:
    // 0x1eed4c: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x1eed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
label_1eed50:
    // 0x1eed50: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1eed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1eed54:
    // 0x1eed54: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1eed58:
    if (ctx->pc == 0x1EED58u) {
        ctx->pc = 0x1EED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED54u;
        // 0x1eed58: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED5Cu;
        goto label_1eed5c;
    }
    ctx->pc = 0x1EED54u;
    {
        const bool branch_taken_0x1eed54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eed54) {
            ctx->pc = 0x1EED58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EED54u;
            // 0x1eed58: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EED90u;
            goto label_1eed90;
        }
    }
    ctx->pc = 0x1EED5Cu;
label_1eed5c:
    // 0x1eed5c: 0x0  nop
    ctx->pc = 0x1eed5cu;
    // NOP
label_1eed60:
    // 0x1eed60: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1eed60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1eed64:
    // 0x1eed64: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x1eed64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1eed68:
    // 0x1eed68: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1eed68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_1eed6c:
    // 0x1eed6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eed6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eed70:
    // 0x1eed70: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1eed70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1eed74:
    // 0x1eed74: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1eed74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eed78:
    // 0x1eed78: 0xc07b704  jal         func_1EDC10
label_1eed7c:
    if (ctx->pc == 0x1EED7Cu) {
        ctx->pc = 0x1EED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED78u;
        // 0x1eed7c: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED80u;
        goto label_1eed80;
    }
    ctx->pc = 0x1EED78u;
    SET_GPR_U32(ctx, 31, 0x1EED80u);
    ctx->pc = 0x1EED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EED78u;
    // 0x1eed7c: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC10u, 0x1EED78u, 0x1EED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED80u;
label_1eed80:
    // 0x1eed80: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_1eed84:
    if (ctx->pc == 0x1EED84u) {
        ctx->pc = 0x1EED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED80u;
        // 0x1eed84: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED88u;
        goto label_1eed88;
    }
    ctx->pc = 0x1EED80u;
    {
        const bool branch_taken_0x1eed80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED80u;
        // 0x1eed84: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed80) {
            ctx->pc = 0x1EED60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eed60;
        }
    }
    ctx->pc = 0x1EED88u;
label_1eed88:
    // 0x1eed88: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1eed8c:
    if (ctx->pc == 0x1EED8Cu) {
        ctx->pc = 0x1EED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED88u;
        // 0x1eed8c: 0xdfb40060  ld          $s4, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED90u;
        goto label_1eed90;
    }
    ctx->pc = 0x1EED88u;
    {
        const bool branch_taken_0x1eed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED88u;
        // 0x1eed8c: 0xdfb40060  ld          $s4, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed88) {
            ctx->pc = 0x1EEE3Cu;
            goto label_1eee3c;
        }
    }
    ctx->pc = 0x1EED90u;
label_1eed90:
    // 0x1eed90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1eed90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eed94:
    // 0x1eed94: 0x1a800007  blez        $s4, . + 4 + (0x7 << 2)
label_1eed98:
    if (ctx->pc == 0x1EED98u) {
        ctx->pc = 0x1EED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED94u;
        // 0x1eed98: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EED9Cu;
        goto label_1eed9c;
    }
    ctx->pc = 0x1EED94u;
    {
        const bool branch_taken_0x1eed94 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1EED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED94u;
        // 0x1eed98: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed94) {
            ctx->pc = 0x1EEDB4u;
            goto label_1eedb4;
        }
    }
    ctx->pc = 0x1EED9Cu;
label_1eed9c:
    // 0x1eed9c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1eed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1eeda0:
    // 0x1eeda0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1eeda0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eeda4:
    // 0x1eeda4: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1eeda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_1eeda8:
    // 0x1eeda8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1eeda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1eedac:
    // 0x1eedac: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x1eedacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
label_1eedb0:
    // 0x1eedb0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1eedb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_1eedb4:
    // 0x1eedb4: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x1eedb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1eedb8:
    // 0x1eedb8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1eedb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1eedbc:
    // 0x1eedbc: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x1eedbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_1eedc0:
    // 0x1eedc0: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1eedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1eedc4:
    // 0x1eedc4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1eedc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1eedc8:
    // 0x1eedc8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eedc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1eedcc:
    // 0x1eedcc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1eedccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1eedd0:
    // 0x1eedd0: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1eedd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1eedd4:
    // 0x1eedd4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1eedd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1eedd8:
    // 0x1eedd8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1eedd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1eeddc:
    // 0x1eeddc: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x1eeddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1eede0:
    // 0x1eede0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1eede0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1eede4:
    // 0x1eede4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1eede8:
    // 0x1eede8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1eede8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1eedec:
    // 0x1eedec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1eedecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1eedf0:
    // 0x1eedf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eedf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1eedf4:
    // 0x1eedf4: 0x0  nop
    ctx->pc = 0x1eedf4u;
    // NOP
label_1eedf8:
    // 0x1eedf8: 0xc07ae78  jal         func_1EB9E0
label_1eedfc:
    if (ctx->pc == 0x1EEDFCu) {
        ctx->pc = 0x1EEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEDF8u;
        // 0x1eedfc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE00u;
        goto label_1eee00;
    }
    ctx->pc = 0x1EEDF8u;
    SET_GPR_U32(ctx, 31, 0x1EEE00u);
    ctx->pc = 0x1EEDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEDF8u;
    // 0x1eedfc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9E0u, 0x1EEDF8u, 0x1EEE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE00u;
label_1eee00:
    // 0x1eee00: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1eee04:
    if (ctx->pc == 0x1EEE04u) {
        ctx->pc = 0x1EEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE00u;
        // 0x1eee04: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE08u;
        goto label_1eee08;
    }
    ctx->pc = 0x1EEE00u;
    {
        const bool branch_taken_0x1eee00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE00u;
        // 0x1eee04: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee00) {
            ctx->pc = 0x1EEE38u;
            goto label_1eee38;
        }
    }
    ctx->pc = 0x1EEE08u;
label_1eee08:
    // 0x1eee08: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1eee08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_1eee0c:
    // 0x1eee0c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1eee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1eee10:
    // 0x1eee10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1eee10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1eee14:
    // 0x1eee14: 0x0  nop
    ctx->pc = 0x1eee14u;
    // NOP
label_1eee18:
    // 0x1eee18: 0x0  nop
    ctx->pc = 0x1eee18u;
    // NOP
label_1eee1c:
    // 0x1eee1c: 0x0  nop
    ctx->pc = 0x1eee1cu;
    // NOP
label_1eee20:
    // 0x1eee20: 0x0  nop
    ctx->pc = 0x1eee20u;
    // NOP
label_1eee24:
    // 0x1eee24: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
label_1eee28:
    if (ctx->pc == 0x1EEE28u) {
        ctx->pc = 0x1EEE2Cu;
        goto label_1eee2c;
    }
    ctx->pc = 0x1EEE24u;
    {
        const bool branch_taken_0x1eee24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1eee24) {
            ctx->pc = 0x1EEE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eee10;
        }
    }
    ctx->pc = 0x1EEE2Cu;
label_1eee2c:
    // 0x1eee2c: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
label_1eee30:
    if (ctx->pc == 0x1EEE30u) {
        ctx->pc = 0x1EEE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE2Cu;
        // 0x1eee30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE34u;
        goto label_1eee34;
    }
    ctx->pc = 0x1EEE2Cu;
    {
        const bool branch_taken_0x1eee2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eee2c) {
            ctx->pc = 0x1EEE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEE2Cu;
            // 0x1eee30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eedf8;
        }
    }
    ctx->pc = 0x1EEE34u;
label_1eee34:
    // 0x1eee34: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1eee34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1eee38:
    // 0x1eee38: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1eee38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1eee3c:
    // 0x1eee3c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1eee3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1eee40:
    // 0x1eee40: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1eee40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1eee44:
    // 0x1eee44: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1eee44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1eee48:
    // 0x1eee48: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1eee48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1eee4c:
    // 0x1eee4c: 0x3e00008  jr          $ra
label_1eee50:
    if (ctx->pc == 0x1EEE50u) {
        ctx->pc = 0x1EEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE4Cu;
        // 0x1eee50: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EEE54u;
        goto label_fallthrough_0x1eee4c;
    }
    ctx->pc = 0x1EEE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEE4Cu;
        // 0x1eee50: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1eee4c:
    ctx->pc = 0x1EEE54u;
}
