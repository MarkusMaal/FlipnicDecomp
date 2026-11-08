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

// Function: FUN_001adcc0
// Address: 0x1adcc0 - 0x1adeb0
void FUN_001adcc0_0x1adcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001adcc0_0x1adcc0");
#endif

    switch (ctx->pc) {
        case 0x1adcd8u: goto label_1adcd8;
        case 0x1addecu: goto label_1addec;
        case 0x1ade24u: goto label_1ade24;
        case 0x1ade30u: goto label_1ade30;
        case 0x1ade44u: goto label_1ade44;
        case 0x1ade54u: goto label_1ade54;
        case 0x1ade74u: goto label_1ade74;
        case 0x1ade8cu: goto label_1ade8c;
        case 0x1ade98u: goto label_1ade98;
        default: break;
    }

    ctx->pc = 0x1adcc0u;

    // 0x1adcc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1adcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1adcc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1adcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1adcc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1adcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1adccc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1adcccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adcd0: 0xc045fb4  jal         func_117ED0
    ctx->pc = 0x1ADCD0u;
    SET_GPR_U32(ctx, 31, 0x1ADCD8u);
    ctx->pc = 0x1ADCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADCD0u;
    // 0x1adcd4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117ED0u, 0x1ADCD0u, 0x1ADCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADCD8u;
label_1adcd8:
    // 0x1adcd8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1adcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1adcdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1adcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adce0: 0x1045001e  beq         $v0, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1ADCE0u;
    {
        const bool branch_taken_0x1adce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1ADCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCE0u;
        // 0x1adce4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adce0) {
            ctx->pc = 0x1ADD5Cu;
            goto label_1add5c;
        }
    }
    ctx->pc = 0x1ADCE8u;
    // 0x1adce8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADCE8u;
    {
        const bool branch_taken_0x1adce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adce8) {
            ctx->pc = 0x1ADCF8u;
            goto label_1adcf8;
        }
    }
    ctx->pc = 0x1ADCF0u;
    // 0x1adcf0: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1ADCF0u;
    {
        const bool branch_taken_0x1adcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCF0u;
        // 0x1adcf4: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcf0) {
            ctx->pc = 0x1ADE9Cu;
            goto label_1ade9c;
        }
    }
    ctx->pc = 0x1ADCF8u;
label_1adcf8:
    // 0x1adcf8: 0x8f84838c  lw          $a0, -0x7C74($gp)
    ctx->pc = 0x1adcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1adcfc: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x1adcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1add00: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1add00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1add04: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1add04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1add08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1add08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1add0c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1add0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1add10: 0x84620010  lh          $v0, 0x10($v1)
    ctx->pc = 0x1add10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1add14: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADD14u;
    {
        const bool branch_taken_0x1add14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1add14) {
            ctx->pc = 0x1ADD24u;
            goto label_1add24;
        }
    }
    ctx->pc = 0x1ADD1Cu;
    // 0x1add1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADD1Cu;
    {
        const bool branch_taken_0x1add1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1add1c) {
            ctx->pc = 0x1ADD28u;
            goto label_1add28;
        }
    }
    ctx->pc = 0x1ADD24u;
label_1add24:
    // 0x1add24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1add24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1add28:
    // 0x1add28: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1ADD28u;
    {
        const bool branch_taken_0x1add28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1add28) {
            ctx->pc = 0x1ADD54u;
            goto label_1add54;
        }
    }
    ctx->pc = 0x1ADD30u;
    // 0x1add30: 0x84630088  lh          $v1, 0x88($v1)
    ctx->pc = 0x1add30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1add34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1add34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1add38: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADD38u;
    {
        const bool branch_taken_0x1add38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1add38) {
            ctx->pc = 0x1ADD48u;
            goto label_1add48;
        }
    }
    ctx->pc = 0x1ADD40u;
    // 0x1add40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADD40u;
    {
        const bool branch_taken_0x1add40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1add40) {
            ctx->pc = 0x1ADD4Cu;
            goto label_1add4c;
        }
    }
    ctx->pc = 0x1ADD48u;
label_1add48:
    // 0x1add48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1add48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1add4c:
    // 0x1add4c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1ADD4Cu;
    {
        const bool branch_taken_0x1add4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1add4c) {
            ctx->pc = 0x1ADE98u;
            goto label_1ade98;
        }
    }
    ctx->pc = 0x1ADD54u;
label_1add54:
    // 0x1add54: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1ADD54u;
    {
        const bool branch_taken_0x1add54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD54u;
        // 0x1add58: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add54) {
            ctx->pc = 0x1ADE98u;
            goto label_1ade98;
        }
    }
    ctx->pc = 0x1ADD5Cu;
label_1add5c:
    // 0x1add5c: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x1add5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1add60: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1add60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1add64: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x1add64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1add68: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1add68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1add6c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1add6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1add70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1add70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1add74: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1add74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1add78: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1add78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1add7c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADD7Cu;
    {
        const bool branch_taken_0x1add7c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1ADD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD7Cu;
        // 0x1add80: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add7c) {
            ctx->pc = 0x1ADD88u;
            goto label_1add88;
        }
    }
    ctx->pc = 0x1ADD84u;
    // 0x1add84: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1add84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_1add88:
    // 0x1add88: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1add88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1add8c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1ADD8Cu;
    {
        const bool branch_taken_0x1add8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1add8c) {
            ctx->pc = 0x1ADDE0u;
            goto label_1adde0;
        }
    }
    ctx->pc = 0x1ADD94u;
    // 0x1add94: 0x84830010  lh          $v1, 0x10($a0)
    ctx->pc = 0x1add94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1add98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1add98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1add9c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADD9Cu;
    {
        const bool branch_taken_0x1add9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1add9c) {
            ctx->pc = 0x1ADDACu;
            goto label_1addac;
        }
    }
    ctx->pc = 0x1ADDA4u;
    // 0x1adda4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADDA4u;
    {
        const bool branch_taken_0x1adda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adda4) {
            ctx->pc = 0x1ADDB0u;
            goto label_1addb0;
        }
    }
    ctx->pc = 0x1ADDACu;
label_1addac:
    // 0x1addac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1addacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1addb0:
    // 0x1addb0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ADDB0u;
    {
        const bool branch_taken_0x1addb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1addb0) {
            ctx->pc = 0x1ADDDCu;
            goto label_1adddc;
        }
    }
    ctx->pc = 0x1ADDB8u;
    // 0x1addb8: 0x84830088  lh          $v1, 0x88($a0)
    ctx->pc = 0x1addb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1addbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1addbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1addc0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADDC0u;
    {
        const bool branch_taken_0x1addc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1addc0) {
            ctx->pc = 0x1ADDD0u;
            goto label_1addd0;
        }
    }
    ctx->pc = 0x1ADDC8u;
    // 0x1addc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADDC8u;
    {
        const bool branch_taken_0x1addc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1addc8) {
            ctx->pc = 0x1ADDD4u;
            goto label_1addd4;
        }
    }
    ctx->pc = 0x1ADDD0u;
label_1addd0:
    // 0x1addd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1addd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1addd4:
    // 0x1addd4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADDD4u;
    {
        const bool branch_taken_0x1addd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1addd4) {
            ctx->pc = 0x1ADDE0u;
            goto label_1adde0;
        }
    }
    ctx->pc = 0x1ADDDCu;
label_1adddc:
    // 0x1adddc: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x1adddcu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1adde0:
    // 0x1adde0: 0x8e310010  lw          $s1, 0x10($s1)
    ctx->pc = 0x1adde0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1adde4: 0xc069afc  jal         func_1A6BF0
    ctx->pc = 0x1ADDE4u;
    SET_GPR_U32(ctx, 31, 0x1ADDECu);
    ctx->pc = 0x1ADDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADDE4u;
    // 0x1adde8: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1ADDE4u, 0x1ADDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADDECu;
label_1addec:
    // 0x1addec: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1addecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1addf0: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1addf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x1addf4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADDF4u;
    {
        const bool branch_taken_0x1addf4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1ADDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDF4u;
        // 0x1addf8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1addf4) {
            ctx->pc = 0x1ADE04u;
            goto label_1ade04;
        }
    }
    ctx->pc = 0x1ADDFCu;
    // 0x1addfc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ADDFCu;
    {
        const bool branch_taken_0x1addfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDFCu;
        // 0x1ade00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1addfc) {
            ctx->pc = 0x1ADE1Cu;
            goto label_1ade1c;
        }
    }
    ctx->pc = 0x1ADE04u;
label_1ade04:
    // 0x1ade04: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ade04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ade08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ade08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ade0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ade0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ade10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ade10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ade14: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ade14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ade18: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1ade18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1ade1c:
    // 0x1ade1c: 0xc055c40  jal         func_157100
    ctx->pc = 0x1ADE1Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE24u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1ADE1Cu, 0x1ADE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE24u;
label_1ade24:
    // 0x1ade24: 0x26240700  addiu       $a0, $s1, 0x700
    ctx->pc = 0x1ade24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
    // 0x1ade28: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1ADE28u;
    SET_GPR_U32(ctx, 31, 0x1ADE30u);
    ctx->pc = 0x1ADE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE28u;
    // 0x1ade2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1ADE28u, 0x1ADE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE30u;
label_1ade30:
    // 0x1ade30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ade30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ade34: 0x26240700  addiu       $a0, $s1, 0x700
    ctx->pc = 0x1ade34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
    // 0x1ade38: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ade38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1ade3c: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1ADE3Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE44u);
    ctx->pc = 0x1ADE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE3Cu;
    // 0x1ade40: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1ADE3Cu, 0x1ADE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE44u;
label_1ade44:
    // 0x1ade44: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ade44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ade48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ade48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ade4c: 0xc062858  jal         func_18A160
    ctx->pc = 0x1ADE4Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE54u);
    ctx->pc = 0x1ADE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE4Cu;
    // 0x1ade50: 0x26240700  addiu       $a0, $s1, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1ADE4Cu, 0x1ADE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE54u;
label_1ade54:
    // 0x1ade54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ade54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ade58: 0x26240700  addiu       $a0, $s1, 0x700
    ctx->pc = 0x1ade58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
    // 0x1ade5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ade5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ade60: 0x0  nop
    ctx->pc = 0x1ade60u;
    // NOP
    // 0x1ade64: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ade64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1ade68: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1ade68u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1ade6c: 0xc062860  jal         func_18A180
    ctx->pc = 0x1ADE6Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE74u);
    ctx->pc = 0x1ADE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE6Cu;
    // 0x1ade70: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1ADE6Cu, 0x1ADE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE74u;
label_1ade74:
    // 0x1ade74: 0x8e260670  lw          $a2, 0x670($s1)
    ctx->pc = 0x1ade74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1ade78: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ade78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ade7c: 0x8e270690  lw          $a3, 0x690($s1)
    ctx->pc = 0x1ade7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x1ade80: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1ade80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ade84: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1ADE84u;
    SET_GPR_U32(ctx, 31, 0x1ADE8Cu);
    ctx->pc = 0x1ADE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE84u;
    // 0x1ade88: 0x24a50aa8  addiu       $a1, $a1, 0xAA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1ADE84u, 0x1ADE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE8Cu;
label_1ade8c:
    // 0x1ade8c: 0x26240700  addiu       $a0, $s1, 0x700
    ctx->pc = 0x1ade8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
    // 0x1ade90: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1ADE90u;
    SET_GPR_U32(ctx, 31, 0x1ADE98u);
    ctx->pc = 0x1ADE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE90u;
    // 0x1ade94: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1ADE90u, 0x1ADE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE98u;
label_1ade98:
    // 0x1ade98: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1ade98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1ade9c:
    // 0x1ade9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ade9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1adea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1adea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adea8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEA8u;
        // 0x1adeac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADEB0u;
}
