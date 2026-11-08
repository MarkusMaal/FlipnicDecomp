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

// Function: FUN_0018ffa0
// Address: 0x18ffa0 - 0x1900a0
void FUN_0018ffa0_0x18ffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018ffa0_0x18ffa0");
#endif

    switch (ctx->pc) {
        case 0x18ffd4u: goto label_18ffd4;
        case 0x18ffecu: goto label_18ffec;
        default: break;
    }

    ctx->pc = 0x18ffa0u;

    // 0x18ffa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18ffa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18ffa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18ffa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18ffa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ffa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ffac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ffacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ffb0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18ffb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ffb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ffb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18ffb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffbc: 0x838386f0  lb          $v1, -0x7910($gp)
    ctx->pc = 0x18ffbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936304)));
    // 0x18ffc0: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18FFC0u;
    {
        const bool branch_taken_0x18ffc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFC0u;
        // 0x18ffc4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ffc0) {
            ctx->pc = 0x18FFF4u;
            goto label_18fff4;
        }
    }
    ctx->pc = 0x18FFC8u;
    // 0x18ffc8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x18ffcc: 0xc063ecc  jal         func_18FB30
    ctx->pc = 0x18FFCCu;
    SET_GPR_U32(ctx, 31, 0x18FFD4u);
    ctx->pc = 0x18FFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FFCCu;
    // 0x18ffd0: 0x2484d390  addiu       $a0, $a0, -0x2C70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FB30u, 0x18FFCCu, 0x18FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FFD4u;
label_18ffd4:
    // 0x18ffd4: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x18ffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x18ffd8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18ffd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x18ffdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ffdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffe0: 0x24a5fca0  addiu       $a1, $a1, -0x360
    ctx->pc = 0x18ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966432));
    // 0x18ffe4: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x18FFE4u;
    SET_GPR_U32(ctx, 31, 0x18FFECu);
    ctx->pc = 0x18FFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FFE4u;
    // 0x18ffe8: 0x24c6d380  addiu       $a2, $a2, -0x2C80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x18FFE4u, 0x18FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FFECu;
label_18ffec:
    // 0x18ffec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fff0: 0xa38386f0  sb          $v1, -0x7910($gp)
    ctx->pc = 0x18fff0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936304), (uint8_t)GPR_U32(ctx, 3));
label_18fff4:
    // 0x18fff4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x18fff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x18fff8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x18fff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x18fffc: 0x123100  sll         $a2, $s2, 4
    ctx->pc = 0x18fffcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190000: 0x2463d3a0  addiu       $v1, $v1, -0x2C60
    ctx->pc = 0x190000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955936));
    // 0x190004: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x190004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x190008: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x190008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19000c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19000Cu;
    {
        const bool branch_taken_0x19000c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19000Cu;
        // 0x190010: 0x24a5d390  addiu       $a1, $a1, -0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19000c) {
            ctx->pc = 0x19003Cu;
            goto label_19003c;
        }
    }
    ctx->pc = 0x190014u;
    // 0x190014: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x190014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x190018: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x190018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19001c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x19001cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x190020: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x190020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x190024: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x190024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x190028: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x190028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x19002c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x19002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x190030: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x190030u;
    {
        const bool branch_taken_0x190030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190030) {
            ctx->pc = 0x19003Cu;
            goto label_19003c;
        }
    }
    ctx->pc = 0x190038u;
    // 0x190038: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x190038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_19003c:
    // 0x19003c: 0x14b10003  bne         $a1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19003Cu;
    {
        const bool branch_taken_0x19003c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x190040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19003Cu;
        // 0x190040: 0xae050018  sw          $a1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19003c) {
            ctx->pc = 0x19004Cu;
            goto label_19004c;
        }
    }
    ctx->pc = 0x190044u;
    // 0x190044: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x190044u;
    {
        const bool branch_taken_0x190044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190044u;
        // 0x190048: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190044) {
            ctx->pc = 0x190088u;
            goto label_190088;
        }
    }
    ctx->pc = 0x19004Cu;
label_19004c:
    // 0x19004c: 0xd11821  addu        $v1, $a2, $s1
    ctx->pc = 0x19004cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x190050: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x190050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x190054: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x190054u;
    {
        const bool branch_taken_0x190054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190054) {
            ctx->pc = 0x190084u;
            goto label_190084;
        }
    }
    ctx->pc = 0x19005Cu;
    // 0x19005c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x19005cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x190060: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x190060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x190064: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x190064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x190068: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x190068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x19006c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x19006cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x190070: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x190070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x190074: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x190074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x190078: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x190078u;
    {
        const bool branch_taken_0x190078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190078) {
            ctx->pc = 0x190084u;
            goto label_190084;
        }
    }
    ctx->pc = 0x190080u;
    // 0x190080: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x190080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_190084:
    // 0x190084: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x190084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_190088:
    // 0x190088: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x190088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19008c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19008cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190098: 0x3e00008  jr          $ra
    ctx->pc = 0x190098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190098u;
        // 0x19009c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1900A0u;
}
