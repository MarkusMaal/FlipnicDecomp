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

// Function: FUN_001edc90
// Address: 0x1edc90 - 0x1eddb8
void FUN_001edc90_0x1edc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001edc90_0x1edc90");
#endif

    switch (ctx->pc) {
        case 0x1edc90u: goto label_1edc90;
        case 0x1edc94u: goto label_1edc94;
        case 0x1edc98u: goto label_1edc98;
        case 0x1edc9cu: goto label_1edc9c;
        case 0x1edca0u: goto label_1edca0;
        case 0x1edca4u: goto label_1edca4;
        case 0x1edca8u: goto label_1edca8;
        case 0x1edcacu: goto label_1edcac;
        case 0x1edcb0u: goto label_1edcb0;
        case 0x1edcb4u: goto label_1edcb4;
        case 0x1edcb8u: goto label_1edcb8;
        case 0x1edcbcu: goto label_1edcbc;
        case 0x1edcc0u: goto label_1edcc0;
        case 0x1edcc4u: goto label_1edcc4;
        case 0x1edcc8u: goto label_1edcc8;
        case 0x1edcccu: goto label_1edccc;
        case 0x1edcd0u: goto label_1edcd0;
        case 0x1edcd4u: goto label_1edcd4;
        case 0x1edcd8u: goto label_1edcd8;
        case 0x1edcdcu: goto label_1edcdc;
        case 0x1edce0u: goto label_1edce0;
        case 0x1edce4u: goto label_1edce4;
        case 0x1edce8u: goto label_1edce8;
        case 0x1edcecu: goto label_1edcec;
        case 0x1edcf0u: goto label_1edcf0;
        case 0x1edcf4u: goto label_1edcf4;
        case 0x1edcf8u: goto label_1edcf8;
        case 0x1edcfcu: goto label_1edcfc;
        case 0x1edd00u: goto label_1edd00;
        case 0x1edd04u: goto label_1edd04;
        case 0x1edd08u: goto label_1edd08;
        case 0x1edd0cu: goto label_1edd0c;
        case 0x1edd10u: goto label_1edd10;
        case 0x1edd14u: goto label_1edd14;
        case 0x1edd18u: goto label_1edd18;
        case 0x1edd1cu: goto label_1edd1c;
        case 0x1edd20u: goto label_1edd20;
        case 0x1edd24u: goto label_1edd24;
        case 0x1edd28u: goto label_1edd28;
        case 0x1edd2cu: goto label_1edd2c;
        case 0x1edd30u: goto label_1edd30;
        case 0x1edd34u: goto label_1edd34;
        case 0x1edd38u: goto label_1edd38;
        case 0x1edd3cu: goto label_1edd3c;
        case 0x1edd40u: goto label_1edd40;
        case 0x1edd44u: goto label_1edd44;
        case 0x1edd48u: goto label_1edd48;
        case 0x1edd4cu: goto label_1edd4c;
        case 0x1edd50u: goto label_1edd50;
        case 0x1edd54u: goto label_1edd54;
        case 0x1edd58u: goto label_1edd58;
        case 0x1edd5cu: goto label_1edd5c;
        case 0x1edd60u: goto label_1edd60;
        case 0x1edd64u: goto label_1edd64;
        case 0x1edd68u: goto label_1edd68;
        case 0x1edd6cu: goto label_1edd6c;
        case 0x1edd70u: goto label_1edd70;
        case 0x1edd74u: goto label_1edd74;
        case 0x1edd78u: goto label_1edd78;
        case 0x1edd7cu: goto label_1edd7c;
        case 0x1edd80u: goto label_1edd80;
        case 0x1edd84u: goto label_1edd84;
        case 0x1edd88u: goto label_1edd88;
        case 0x1edd8cu: goto label_1edd8c;
        case 0x1edd90u: goto label_1edd90;
        case 0x1edd94u: goto label_1edd94;
        case 0x1edd98u: goto label_1edd98;
        case 0x1edd9cu: goto label_1edd9c;
        case 0x1edda0u: goto label_1edda0;
        case 0x1edda4u: goto label_1edda4;
        case 0x1edda8u: goto label_1edda8;
        case 0x1eddacu: goto label_1eddac;
        case 0x1eddb0u: goto label_1eddb0;
        case 0x1eddb4u: goto label_1eddb4;
        default: break;
    }

    ctx->pc = 0x1edc90u;

label_1edc90:
    // 0x1edc90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1edc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1edc94:
    // 0x1edc94: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1edc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_1edc98:
    // 0x1edc98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1edc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1edc9c:
    // 0x1edc9c: 0xc07d0ea  jal         func_1F43A8
label_1edca0:
    if (ctx->pc == 0x1EDCA0u) {
        ctx->pc = 0x1EDCA4u;
        goto label_1edca4;
    }
    ctx->pc = 0x1EDC9Cu;
    SET_GPR_U32(ctx, 31, 0x1EDCA4u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EDC9Cu, 0x1EDCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDCA4u;
label_1edca4:
    // 0x1edca4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1edca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1edca8:
    // 0x1edca8: 0x8c67c7d8  lw          $a3, -0x3828($v1)
    ctx->pc = 0x1edca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952920)));
label_1edcac:
    // 0x1edcac: 0x2470c7d8  addiu       $s0, $v1, -0x3828
    ctx->pc = 0x1edcacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952920));
label_1edcb0:
    // 0x1edcb0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1edcb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1edcb4:
    // 0x1edcb4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1edcb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1edcb8:
    // 0x1edcb8: 0x10a0003b  beqz        $a1, . + 4 + (0x3B << 2)
label_1edcbc:
    if (ctx->pc == 0x1EDCBCu) {
        ctx->pc = 0x1EDCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCB8u;
        // 0x1edcbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDCC0u;
        goto label_1edcc0;
    }
    ctx->pc = 0x1EDCB8u;
    {
        const bool branch_taken_0x1edcb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCB8u;
        // 0x1edcbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edcb8) {
            ctx->pc = 0x1EDDA8u;
            goto label_1edda8;
        }
    }
    ctx->pc = 0x1EDCC0u;
label_1edcc0:
    // 0x1edcc0: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x1edcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_1edcc4:
    // 0x1edcc4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1edcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1edcc8:
    // 0x1edcc8: 0x24a4001e  addiu       $a0, $a1, 0x1E
    ctx->pc = 0x1edcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
label_1edccc:
    // 0x1edccc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1edcccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1edcd0:
    // 0x1edcd0: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1edcd0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_1edcd4:
    // 0x1edcd4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1edcd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1edcd8:
    // 0x1edcd8: 0x42903  sra         $a1, $a0, 4
    ctx->pc = 0x1edcd8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 4));
label_1edcdc:
    // 0x1edcdc: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x1edcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_1edce0:
    // 0x1edce0: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
label_1edce4:
    if (ctx->pc == 0x1EDCE4u) {
        ctx->pc = 0x1EDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCE0u;
        // 0x1edce4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDCE8u;
        goto label_1edce8;
    }
    ctx->pc = 0x1EDCE0u;
    {
        const bool branch_taken_0x1edce0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1EDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCE0u;
        // 0x1edce4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edce0) {
            ctx->pc = 0x1EDD0Cu;
            goto label_1edd0c;
        }
    }
    ctx->pc = 0x1EDCE8u;
label_1edce8:
    // 0x1edce8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1edce8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1edcec:
    // 0x1edcec: 0x0  nop
    ctx->pc = 0x1edcecu;
    // NOP
label_1edcf0:
    // 0x1edcf0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1edcf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1edcf4:
    // 0x1edcf4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1edcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1edcf8:
    // 0x1edcf8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1edcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1edcfc:
    // 0x1edcfc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1edcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1edd00:
    // 0x1edd00: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1edd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1edd04:
    // 0x1edd04: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1edd08:
    if (ctx->pc == 0x1EDD08u) {
        ctx->pc = 0x1EDD0Cu;
        goto label_1edd0c;
    }
    ctx->pc = 0x1EDD04u;
    {
        const bool branch_taken_0x1edd04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edd04) {
            ctx->pc = 0x1EDCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1edcf0;
        }
    }
    ctx->pc = 0x1EDD0Cu;
label_1edd0c:
    // 0x1edd0c: 0xc07ae84  jal         func_1EBA10
label_1edd10:
    if (ctx->pc == 0x1EDD10u) {
        ctx->pc = 0x1EDD14u;
        goto label_1edd14;
    }
    ctx->pc = 0x1EDD0Cu;
    SET_GPR_U32(ctx, 31, 0x1EDD14u);
    ctx->pc = 0x1EBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA10u, 0x1EDD0Cu, 0x1EDD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD14u;
label_1edd14:
    // 0x1edd14: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1edd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1edd18:
    // 0x1edd18: 0x4610013  bgez        $v1, . + 4 + (0x13 << 2)
label_1edd1c:
    if (ctx->pc == 0x1EDD1Cu) {
        ctx->pc = 0x1EDD20u;
        goto label_1edd20;
    }
    ctx->pc = 0x1EDD18u;
    {
        const bool branch_taken_0x1edd18 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1edd18) {
            ctx->pc = 0x1EDD68u;
            goto label_1edd68;
        }
    }
    ctx->pc = 0x1EDD20u;
label_1edd20:
    // 0x1edd20: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1edd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1edd24:
    // 0x1edd24: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1edd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1edd28:
    // 0x1edd28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1edd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1edd2c:
    // 0x1edd2c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1edd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1edd30:
    // 0x1edd30: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x1edd30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1edd34:
    // 0x1edd34: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x1edd34u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1edd38:
    // 0x1edd38: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_1edd3c:
    if (ctx->pc == 0x1EDD3Cu) {
        ctx->pc = 0x1EDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD38u;
        // 0x1edd3c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD40u;
        goto label_1edd40;
    }
    ctx->pc = 0x1EDD38u;
    {
        const bool branch_taken_0x1edd38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD38u;
        // 0x1edd3c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd38) {
            ctx->pc = 0x1EDD9Cu;
            goto label_1edd9c;
        }
    }
    ctx->pc = 0x1EDD40u;
label_1edd40:
    // 0x1edd40: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1edd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1edd44:
    // 0x1edd44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1edd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1edd48:
    // 0x1edd48: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1edd48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1edd4c:
    // 0x1edd4c: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
label_1edd50:
    if (ctx->pc == 0x1EDD50u) {
        ctx->pc = 0x1EDD54u;
        goto label_1edd54;
    }
    ctx->pc = 0x1EDD4Cu;
    {
        const bool branch_taken_0x1edd4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edd4c) {
            ctx->pc = 0x1EDD9Cu;
            goto label_1edd9c;
        }
    }
    ctx->pc = 0x1EDD54u;
label_1edd54:
    // 0x1edd54: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1edd54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1edd58:
    // 0x1edd58: 0xc0f809  jalr        $a2
label_1edd5c:
    if (ctx->pc == 0x1EDD5Cu) {
        ctx->pc = 0x1EDD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD58u;
        // 0x1edd5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD60u;
        goto label_1edd60;
    }
    ctx->pc = 0x1EDD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1EDD60u);
        ctx->pc = 0x1EDD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD58u;
        // 0x1edd5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDD58u, 0x1EDD60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDD60u;
label_1edd60:
    // 0x1edd60: 0x1000000e  b           . + 4 + (0xE << 2)
label_1edd64:
    if (ctx->pc == 0x1EDD64u) {
        ctx->pc = 0x1EDD68u;
        goto label_1edd68;
    }
    ctx->pc = 0x1EDD60u;
    {
        const bool branch_taken_0x1edd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edd60) {
            ctx->pc = 0x1EDD9Cu;
            goto label_1edd9c;
        }
    }
    ctx->pc = 0x1EDD68u;
label_1edd68:
    // 0x1edd68: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1edd68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1edd6c:
    // 0x1edd6c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1edd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1edd70:
    // 0x1edd70: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1edd70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1edd74:
    // 0x1edd74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1edd78:
    if (ctx->pc == 0x1EDD78u) {
        ctx->pc = 0x1EDD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD74u;
        // 0x1edd78: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD7Cu;
        goto label_1edd7c;
    }
    ctx->pc = 0x1EDD74u;
    {
        const bool branch_taken_0x1edd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD74u;
        // 0x1edd78: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd74) {
            ctx->pc = 0x1EDD9Cu;
            goto label_1edd9c;
        }
    }
    ctx->pc = 0x1EDD7Cu;
label_1edd7c:
    // 0x1edd7c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1edd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1edd80:
    // 0x1edd80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1edd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1edd84:
    // 0x1edd84: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1edd84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1edd88:
    // 0x1edd88: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1edd8c:
    if (ctx->pc == 0x1EDD8Cu) {
        ctx->pc = 0x1EDD90u;
        goto label_1edd90;
    }
    ctx->pc = 0x1EDD88u;
    {
        const bool branch_taken_0x1edd88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edd88) {
            ctx->pc = 0x1EDD9Cu;
            goto label_1edd9c;
        }
    }
    ctx->pc = 0x1EDD90u;
label_1edd90:
    // 0x1edd90: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1edd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1edd94:
    // 0x1edd94: 0xc0f809  jalr        $a2
label_1edd98:
    if (ctx->pc == 0x1EDD98u) {
        ctx->pc = 0x1EDD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD94u;
        // 0x1edd98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD9Cu;
        goto label_1edd9c;
    }
    ctx->pc = 0x1EDD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1EDD9Cu);
        ctx->pc = 0x1EDD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD94u;
        // 0x1edd98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDD94u, 0x1EDD9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDD9Cu;
label_1edd9c:
    // 0x1edd9c: 0xf  sync
    ctx->pc = 0x1edd9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1edda0:
    // 0x1edda0: 0x42000038  ei
    ctx->pc = 0x1edda0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1edda4:
    // 0x1edda4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1edda4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edda8:
    // 0x1edda8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1edda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1eddac:
    // 0x1eddac: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1eddacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1eddb0:
    // 0x1eddb0: 0x3e00008  jr          $ra
label_1eddb4:
    if (ctx->pc == 0x1EDDB4u) {
        ctx->pc = 0x1EDDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDB0u;
        // 0x1eddb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDDB8u;
        goto label_fallthrough_0x1eddb0;
    }
    ctx->pc = 0x1EDDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDB0u;
        // 0x1eddb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1eddb0:
    ctx->pc = 0x1EDDB8u;
}
