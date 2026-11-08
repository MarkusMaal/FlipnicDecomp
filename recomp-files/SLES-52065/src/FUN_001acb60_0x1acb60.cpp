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

// Function: FUN_001acb60
// Address: 0x1acb60 - 0x1acd54
void FUN_001acb60_0x1acb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001acb60_0x1acb60");
#endif

    switch (ctx->pc) {
        case 0x1acb78u: goto label_1acb78;
        case 0x1acc8cu: goto label_1acc8c;
        case 0x1accc4u: goto label_1accc4;
        case 0x1accd0u: goto label_1accd0;
        case 0x1acce8u: goto label_1acce8;
        case 0x1accf8u: goto label_1accf8;
        case 0x1acd18u: goto label_1acd18;
        case 0x1acd30u: goto label_1acd30;
        case 0x1acd3cu: goto label_1acd3c;
        default: break;
    }

    ctx->pc = 0x1acb60u;

    // 0x1acb60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1acb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1acb64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1acb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1acb68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1acb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1acb6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1acb6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb70: 0xc045fb4  jal         func_117ED0
    ctx->pc = 0x1ACB70u;
    SET_GPR_U32(ctx, 31, 0x1ACB78u);
    ctx->pc = 0x1ACB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB70u;
    // 0x1acb74: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117ED0u, 0x1ACB70u, 0x1ACB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB78u;
label_1acb78:
    // 0x1acb78: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1acb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1acb7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1acb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acb80: 0x1045001e  beq         $v0, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1ACB80u;
    {
        const bool branch_taken_0x1acb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1ACB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB80u;
        // 0x1acb84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb80) {
            ctx->pc = 0x1ACBFCu;
            goto label_1acbfc;
        }
    }
    ctx->pc = 0x1ACB88u;
    // 0x1acb88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACB88u;
    {
        const bool branch_taken_0x1acb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acb88) {
            ctx->pc = 0x1ACB98u;
            goto label_1acb98;
        }
    }
    ctx->pc = 0x1ACB90u;
    // 0x1acb90: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1ACB90u;
    {
        const bool branch_taken_0x1acb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB90u;
        // 0x1acb94: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb90) {
            ctx->pc = 0x1ACD40u;
            goto label_1acd40;
        }
    }
    ctx->pc = 0x1ACB98u;
label_1acb98:
    // 0x1acb98: 0x8f84838c  lw          $a0, -0x7C74($gp)
    ctx->pc = 0x1acb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1acb9c: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x1acb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1acba0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1acba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1acba4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1acba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1acba8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1acba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1acbac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1acbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acbb0: 0x84620010  lh          $v0, 0x10($v1)
    ctx->pc = 0x1acbb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1acbb4: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACBB4u;
    {
        const bool branch_taken_0x1acbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1acbb4) {
            ctx->pc = 0x1ACBC4u;
            goto label_1acbc4;
        }
    }
    ctx->pc = 0x1ACBBCu;
    // 0x1acbbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACBBCu;
    {
        const bool branch_taken_0x1acbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acbbc) {
            ctx->pc = 0x1ACBC8u;
            goto label_1acbc8;
        }
    }
    ctx->pc = 0x1ACBC4u;
label_1acbc4:
    // 0x1acbc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acbc8:
    // 0x1acbc8: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1ACBC8u;
    {
        const bool branch_taken_0x1acbc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acbc8) {
            ctx->pc = 0x1ACBF4u;
            goto label_1acbf4;
        }
    }
    ctx->pc = 0x1ACBD0u;
    // 0x1acbd0: 0x84630088  lh          $v1, 0x88($v1)
    ctx->pc = 0x1acbd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1acbd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acbd8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACBD8u;
    {
        const bool branch_taken_0x1acbd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1acbd8) {
            ctx->pc = 0x1ACBE8u;
            goto label_1acbe8;
        }
    }
    ctx->pc = 0x1ACBE0u;
    // 0x1acbe0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACBE0u;
    {
        const bool branch_taken_0x1acbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acbe0) {
            ctx->pc = 0x1ACBECu;
            goto label_1acbec;
        }
    }
    ctx->pc = 0x1ACBE8u;
label_1acbe8:
    // 0x1acbe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acbec:
    // 0x1acbec: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1ACBECu;
    {
        const bool branch_taken_0x1acbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acbec) {
            ctx->pc = 0x1ACD3Cu;
            goto label_1acd3c;
        }
    }
    ctx->pc = 0x1ACBF4u;
label_1acbf4:
    // 0x1acbf4: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1ACBF4u;
    {
        const bool branch_taken_0x1acbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBF4u;
        // 0x1acbf8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acbf4) {
            ctx->pc = 0x1ACD3Cu;
            goto label_1acd3c;
        }
    }
    ctx->pc = 0x1ACBFCu;
label_1acbfc:
    // 0x1acbfc: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x1acbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1acc00: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1acc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1acc04: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x1acc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1acc08: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1acc08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1acc0c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1acc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1acc10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1acc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1acc14: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1acc14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1acc18: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1acc18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1acc1c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACC1Cu;
    {
        const bool branch_taken_0x1acc1c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1ACC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC1Cu;
        // 0x1acc20: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc1c) {
            ctx->pc = 0x1ACC28u;
            goto label_1acc28;
        }
    }
    ctx->pc = 0x1ACC24u;
    // 0x1acc24: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1acc24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_1acc28:
    // 0x1acc28: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1acc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1acc2c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1ACC2Cu;
    {
        const bool branch_taken_0x1acc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acc2c) {
            ctx->pc = 0x1ACC80u;
            goto label_1acc80;
        }
    }
    ctx->pc = 0x1ACC34u;
    // 0x1acc34: 0x84830010  lh          $v1, 0x10($a0)
    ctx->pc = 0x1acc34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1acc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acc3c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACC3Cu;
    {
        const bool branch_taken_0x1acc3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1acc3c) {
            ctx->pc = 0x1ACC4Cu;
            goto label_1acc4c;
        }
    }
    ctx->pc = 0x1ACC44u;
    // 0x1acc44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACC44u;
    {
        const bool branch_taken_0x1acc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acc44) {
            ctx->pc = 0x1ACC50u;
            goto label_1acc50;
        }
    }
    ctx->pc = 0x1ACC4Cu;
label_1acc4c:
    // 0x1acc4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acc4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acc50:
    // 0x1acc50: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ACC50u;
    {
        const bool branch_taken_0x1acc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acc50) {
            ctx->pc = 0x1ACC7Cu;
            goto label_1acc7c;
        }
    }
    ctx->pc = 0x1ACC58u;
    // 0x1acc58: 0x84830088  lh          $v1, 0x88($a0)
    ctx->pc = 0x1acc58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1acc5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acc60: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACC60u;
    {
        const bool branch_taken_0x1acc60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1acc60) {
            ctx->pc = 0x1ACC70u;
            goto label_1acc70;
        }
    }
    ctx->pc = 0x1ACC68u;
    // 0x1acc68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACC68u;
    {
        const bool branch_taken_0x1acc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acc68) {
            ctx->pc = 0x1ACC74u;
            goto label_1acc74;
        }
    }
    ctx->pc = 0x1ACC70u;
label_1acc70:
    // 0x1acc70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1acc70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acc74:
    // 0x1acc74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACC74u;
    {
        const bool branch_taken_0x1acc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acc74) {
            ctx->pc = 0x1ACC80u;
            goto label_1acc80;
        }
    }
    ctx->pc = 0x1ACC7Cu;
label_1acc7c:
    // 0x1acc7c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x1acc7cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1acc80:
    // 0x1acc80: 0x8e310010  lw          $s1, 0x10($s1)
    ctx->pc = 0x1acc80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1acc84: 0xc069afc  jal         func_1A6BF0
    ctx->pc = 0x1ACC84u;
    SET_GPR_U32(ctx, 31, 0x1ACC8Cu);
    ctx->pc = 0x1ACC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC84u;
    // 0x1acc88: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1ACC84u, 0x1ACC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC8Cu;
label_1acc8c:
    // 0x1acc8c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1acc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1acc90: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1acc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x1acc94: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACC94u;
    {
        const bool branch_taken_0x1acc94 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1ACC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC94u;
        // 0x1acc98: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc94) {
            ctx->pc = 0x1ACCA4u;
            goto label_1acca4;
        }
    }
    ctx->pc = 0x1ACC9Cu;
    // 0x1acc9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ACC9Cu;
    {
        const bool branch_taken_0x1acc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC9Cu;
        // 0x1acca0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc9c) {
            ctx->pc = 0x1ACCBCu;
            goto label_1accbc;
        }
    }
    ctx->pc = 0x1ACCA4u;
label_1acca4:
    // 0x1acca4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1acca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acca8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1acca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1accac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1accacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1accb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1accb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1accb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1accb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1accb8: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1accb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1accbc:
    // 0x1accbc: 0xc055c40  jal         func_157100
    ctx->pc = 0x1ACCBCu;
    SET_GPR_U32(ctx, 31, 0x1ACCC4u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1ACCBCu, 0x1ACCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCC4u;
label_1accc4:
    // 0x1accc4: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1accc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1accc8: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1ACCC8u;
    SET_GPR_U32(ctx, 31, 0x1ACCD0u);
    ctx->pc = 0x1ACCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACCC8u;
    // 0x1acccc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1ACCC8u, 0x1ACCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCD0u;
label_1accd0:
    // 0x1accd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1accd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1accd4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1accd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1accd8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1accd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1accdc: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1accdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1acce0: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1ACCE0u;
    SET_GPR_U32(ctx, 31, 0x1ACCE8u);
    ctx->pc = 0x1ACCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACCE0u;
    // 0x1acce4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1ACCE0u, 0x1ACCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCE8u;
label_1acce8:
    // 0x1acce8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1acce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1accec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1accecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1accf0: 0xc062858  jal         func_18A160
    ctx->pc = 0x1ACCF0u;
    SET_GPR_U32(ctx, 31, 0x1ACCF8u);
    ctx->pc = 0x1ACCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACCF0u;
    // 0x1accf4: 0x26240710  addiu       $a0, $s1, 0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1ACCF0u, 0x1ACCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACCF8u;
label_1accf8:
    // 0x1accf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1accf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1accfc: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1accfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1acd00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1acd00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1acd04: 0x0  nop
    ctx->pc = 0x1acd04u;
    // NOP
    // 0x1acd08: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1acd08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1acd0c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1acd0cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1acd10: 0xc062860  jal         func_18A180
    ctx->pc = 0x1ACD10u;
    SET_GPR_U32(ctx, 31, 0x1ACD18u);
    ctx->pc = 0x1ACD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD10u;
    // 0x1acd14: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1ACD10u, 0x1ACD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD18u;
label_1acd18:
    // 0x1acd18: 0x8e260670  lw          $a2, 0x670($s1)
    ctx->pc = 0x1acd18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1acd1c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1acd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1acd20: 0x8e27069c  lw          $a3, 0x69C($s1)
    ctx->pc = 0x1acd20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x1acd24: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1acd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1acd28: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1ACD28u;
    SET_GPR_U32(ctx, 31, 0x1ACD30u);
    ctx->pc = 0x1ACD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD28u;
    // 0x1acd2c: 0x24a509d0  addiu       $a1, $a1, 0x9D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1ACD28u, 0x1ACD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD30u;
label_1acd30:
    // 0x1acd30: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1acd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1acd34: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1ACD34u;
    SET_GPR_U32(ctx, 31, 0x1ACD3Cu);
    ctx->pc = 0x1ACD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD34u;
    // 0x1acd38: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1ACD34u, 0x1ACD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD3Cu;
label_1acd3c:
    // 0x1acd3c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1acd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1acd40:
    // 0x1acd40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1acd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1acd44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1acd44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1acd48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1acd48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD4Cu;
        // 0x1acd50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACD54u;
}
