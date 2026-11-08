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

// Function: FUN_001ab9a0
// Address: 0x1ab9a0 - 0x1abb94
void FUN_001ab9a0_0x1ab9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab9a0_0x1ab9a0");
#endif

    switch (ctx->pc) {
        case 0x1ab9b8u: goto label_1ab9b8;
        case 0x1abaccu: goto label_1abacc;
        case 0x1abb04u: goto label_1abb04;
        case 0x1abb10u: goto label_1abb10;
        case 0x1abb28u: goto label_1abb28;
        case 0x1abb38u: goto label_1abb38;
        case 0x1abb58u: goto label_1abb58;
        case 0x1abb70u: goto label_1abb70;
        case 0x1abb7cu: goto label_1abb7c;
        default: break;
    }

    ctx->pc = 0x1ab9a0u;

    // 0x1ab9a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ab9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ab9a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ab9a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ab9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab9ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ab9acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9b0: 0xc045fb4  jal         func_117ED0
    ctx->pc = 0x1AB9B0u;
    SET_GPR_U32(ctx, 31, 0x1AB9B8u);
    ctx->pc = 0x1AB9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB9B0u;
    // 0x1ab9b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117ED0u, 0x1AB9B0u, 0x1AB9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB9B8u;
label_1ab9b8:
    // 0x1ab9b8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1ab9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1ab9bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab9c0: 0x1045001e  beq         $v0, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AB9C0u;
    {
        const bool branch_taken_0x1ab9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1AB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9C0u;
        // 0x1ab9c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9c0) {
            ctx->pc = 0x1ABA3Cu;
            goto label_1aba3c;
        }
    }
    ctx->pc = 0x1AB9C8u;
    // 0x1ab9c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB9C8u;
    {
        const bool branch_taken_0x1ab9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab9c8) {
            ctx->pc = 0x1AB9D8u;
            goto label_1ab9d8;
        }
    }
    ctx->pc = 0x1AB9D0u;
    // 0x1ab9d0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1AB9D0u;
    {
        const bool branch_taken_0x1ab9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9D0u;
        // 0x1ab9d4: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9d0) {
            ctx->pc = 0x1ABB80u;
            goto label_1abb80;
        }
    }
    ctx->pc = 0x1AB9D8u;
label_1ab9d8:
    // 0x1ab9d8: 0x8f84838c  lw          $a0, -0x7C74($gp)
    ctx->pc = 0x1ab9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1ab9dc: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x1ab9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1ab9e0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1ab9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ab9e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ab9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab9e8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ab9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ab9ec: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ab9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ab9f0: 0x84620010  lh          $v0, 0x10($v1)
    ctx->pc = 0x1ab9f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ab9f4: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB9F4u;
    {
        const bool branch_taken_0x1ab9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ab9f4) {
            ctx->pc = 0x1ABA04u;
            goto label_1aba04;
        }
    }
    ctx->pc = 0x1AB9FCu;
    // 0x1ab9fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB9FCu;
    {
        const bool branch_taken_0x1ab9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab9fc) {
            ctx->pc = 0x1ABA08u;
            goto label_1aba08;
        }
    }
    ctx->pc = 0x1ABA04u;
label_1aba04:
    // 0x1aba04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aba04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aba08:
    // 0x1aba08: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1ABA08u;
    {
        const bool branch_taken_0x1aba08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aba08) {
            ctx->pc = 0x1ABA34u;
            goto label_1aba34;
        }
    }
    ctx->pc = 0x1ABA10u;
    // 0x1aba10: 0x84630088  lh          $v1, 0x88($v1)
    ctx->pc = 0x1aba10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1aba14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aba14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aba18: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABA18u;
    {
        const bool branch_taken_0x1aba18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aba18) {
            ctx->pc = 0x1ABA28u;
            goto label_1aba28;
        }
    }
    ctx->pc = 0x1ABA20u;
    // 0x1aba20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABA20u;
    {
        const bool branch_taken_0x1aba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aba20) {
            ctx->pc = 0x1ABA2Cu;
            goto label_1aba2c;
        }
    }
    ctx->pc = 0x1ABA28u;
label_1aba28:
    // 0x1aba28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aba28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aba2c:
    // 0x1aba2c: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1ABA2Cu;
    {
        const bool branch_taken_0x1aba2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aba2c) {
            ctx->pc = 0x1ABB7Cu;
            goto label_1abb7c;
        }
    }
    ctx->pc = 0x1ABA34u;
label_1aba34:
    // 0x1aba34: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1ABA34u;
    {
        const bool branch_taken_0x1aba34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA34u;
        // 0x1aba38: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba34) {
            ctx->pc = 0x1ABB7Cu;
            goto label_1abb7c;
        }
    }
    ctx->pc = 0x1ABA3Cu;
label_1aba3c:
    // 0x1aba3c: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x1aba3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1aba40: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1aba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1aba44: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x1aba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1aba48: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1aba48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1aba4c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1aba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1aba50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aba50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1aba54: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1aba54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1aba58: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1aba58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1aba5c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABA5Cu;
    {
        const bool branch_taken_0x1aba5c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1ABA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA5Cu;
        // 0x1aba60: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba5c) {
            ctx->pc = 0x1ABA68u;
            goto label_1aba68;
        }
    }
    ctx->pc = 0x1ABA64u;
    // 0x1aba64: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1aba64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_1aba68:
    // 0x1aba68: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1aba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1aba6c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1ABA6Cu;
    {
        const bool branch_taken_0x1aba6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aba6c) {
            ctx->pc = 0x1ABAC0u;
            goto label_1abac0;
        }
    }
    ctx->pc = 0x1ABA74u;
    // 0x1aba74: 0x84830010  lh          $v1, 0x10($a0)
    ctx->pc = 0x1aba74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1aba78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aba7c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABA7Cu;
    {
        const bool branch_taken_0x1aba7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aba7c) {
            ctx->pc = 0x1ABA8Cu;
            goto label_1aba8c;
        }
    }
    ctx->pc = 0x1ABA84u;
    // 0x1aba84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABA84u;
    {
        const bool branch_taken_0x1aba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aba84) {
            ctx->pc = 0x1ABA90u;
            goto label_1aba90;
        }
    }
    ctx->pc = 0x1ABA8Cu;
label_1aba8c:
    // 0x1aba8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aba8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aba90:
    // 0x1aba90: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ABA90u;
    {
        const bool branch_taken_0x1aba90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aba90) {
            ctx->pc = 0x1ABABCu;
            goto label_1ababc;
        }
    }
    ctx->pc = 0x1ABA98u;
    // 0x1aba98: 0x84830088  lh          $v1, 0x88($a0)
    ctx->pc = 0x1aba98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1aba9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abaa0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABAA0u;
    {
        const bool branch_taken_0x1abaa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abaa0) {
            ctx->pc = 0x1ABAB0u;
            goto label_1abab0;
        }
    }
    ctx->pc = 0x1ABAA8u;
    // 0x1abaa8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABAA8u;
    {
        const bool branch_taken_0x1abaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abaa8) {
            ctx->pc = 0x1ABAB4u;
            goto label_1abab4;
        }
    }
    ctx->pc = 0x1ABAB0u;
label_1abab0:
    // 0x1abab0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1abab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abab4:
    // 0x1abab4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABAB4u;
    {
        const bool branch_taken_0x1abab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abab4) {
            ctx->pc = 0x1ABAC0u;
            goto label_1abac0;
        }
    }
    ctx->pc = 0x1ABABCu;
label_1ababc:
    // 0x1ababc: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x1ababcu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1abac0:
    // 0x1abac0: 0x8e310010  lw          $s1, 0x10($s1)
    ctx->pc = 0x1abac0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1abac4: 0xc069afc  jal         func_1A6BF0
    ctx->pc = 0x1ABAC4u;
    SET_GPR_U32(ctx, 31, 0x1ABACCu);
    ctx->pc = 0x1ABAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABAC4u;
    // 0x1abac8: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1ABAC4u, 0x1ABACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABACCu;
label_1abacc:
    // 0x1abacc: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1abaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1abad0: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1abad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x1abad4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABAD4u;
    {
        const bool branch_taken_0x1abad4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1ABAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAD4u;
        // 0x1abad8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abad4) {
            ctx->pc = 0x1ABAE4u;
            goto label_1abae4;
        }
    }
    ctx->pc = 0x1ABADCu;
    // 0x1abadc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ABADCu;
    {
        const bool branch_taken_0x1abadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABADCu;
        // 0x1abae0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abadc) {
            ctx->pc = 0x1ABAFCu;
            goto label_1abafc;
        }
    }
    ctx->pc = 0x1ABAE4u;
label_1abae4:
    // 0x1abae4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1abae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1abae8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1abae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1abaec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1abaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1abaf0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1abaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1abaf4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1abaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1abaf8: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1abaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1abafc:
    // 0x1abafc: 0xc055c40  jal         func_157100
    ctx->pc = 0x1ABAFCu;
    SET_GPR_U32(ctx, 31, 0x1ABB04u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1ABAFCu, 0x1ABB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB04u;
label_1abb04:
    // 0x1abb04: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1abb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1abb08: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1ABB08u;
    SET_GPR_U32(ctx, 31, 0x1ABB10u);
    ctx->pc = 0x1ABB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB08u;
    // 0x1abb0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1ABB08u, 0x1ABB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB10u;
label_1abb10:
    // 0x1abb10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1abb10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1abb14: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1abb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1abb18: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1abb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1abb1c: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1abb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1abb20: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1ABB20u;
    SET_GPR_U32(ctx, 31, 0x1ABB28u);
    ctx->pc = 0x1ABB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB20u;
    // 0x1abb24: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1ABB20u, 0x1ABB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB28u;
label_1abb28:
    // 0x1abb28: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1abb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1abb2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1abb2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1abb30: 0xc062858  jal         func_18A160
    ctx->pc = 0x1ABB30u;
    SET_GPR_U32(ctx, 31, 0x1ABB38u);
    ctx->pc = 0x1ABB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB30u;
    // 0x1abb34: 0x26240710  addiu       $a0, $s1, 0x710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1ABB30u, 0x1ABB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB38u;
label_1abb38:
    // 0x1abb38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1abb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1abb3c: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1abb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1abb40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1abb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1abb44: 0x0  nop
    ctx->pc = 0x1abb44u;
    // NOP
    // 0x1abb48: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1abb48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1abb4c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1abb4cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1abb50: 0xc062860  jal         func_18A180
    ctx->pc = 0x1ABB50u;
    SET_GPR_U32(ctx, 31, 0x1ABB58u);
    ctx->pc = 0x1ABB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB50u;
    // 0x1abb54: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1ABB50u, 0x1ABB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB58u;
label_1abb58:
    // 0x1abb58: 0x8e260670  lw          $a2, 0x670($s1)
    ctx->pc = 0x1abb58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1abb5c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1abb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1abb60: 0x8e27069c  lw          $a3, 0x69C($s1)
    ctx->pc = 0x1abb60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x1abb64: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1abb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1abb68: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1ABB68u;
    SET_GPR_U32(ctx, 31, 0x1ABB70u);
    ctx->pc = 0x1ABB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB68u;
    // 0x1abb6c: 0x24a50920  addiu       $a1, $a1, 0x920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1ABB68u, 0x1ABB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB70u;
label_1abb70:
    // 0x1abb70: 0x26240710  addiu       $a0, $s1, 0x710
    ctx->pc = 0x1abb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x1abb74: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1ABB74u;
    SET_GPR_U32(ctx, 31, 0x1ABB7Cu);
    ctx->pc = 0x1ABB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB74u;
    // 0x1abb78: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1ABB74u, 0x1ABB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB7Cu;
label_1abb7c:
    // 0x1abb7c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1abb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1abb80:
    // 0x1abb80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1abb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abb84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abb84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abb88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abb88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB8Cu;
        // 0x1abb90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABB94u;
}
