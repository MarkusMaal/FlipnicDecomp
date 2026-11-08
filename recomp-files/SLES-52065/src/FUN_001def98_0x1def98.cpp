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

// Function: FUN_001def98
// Address: 0x1def98 - 0x1df054
void FUN_001def98_0x1def98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001def98_0x1def98");
#endif

    switch (ctx->pc) {
        case 0x1df030u: goto label_1df030;
        default: break;
    }

    ctx->pc = 0x1def98u;

    // 0x1def98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1def98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1def9c: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x1def9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1defa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1defa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1defa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1defa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1defa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1defa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1defac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1defacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1defb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1defb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1defb4: 0x8e300060  lw          $s0, 0x60($s1)
    ctx->pc = 0x1defb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1defb8: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1defb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1defbc: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x1defbcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1defc0: 0x92050005  lbu         $a1, 0x5($s0)
    ctx->pc = 0x1defc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1defc4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1defc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1defc8: 0x92090007  lbu         $t1, 0x7($s0)
    ctx->pc = 0x1defc8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x1defcc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1defccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1defd0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1defd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1defd4: 0x92070008  lbu         $a3, 0x8($s0)
    ctx->pc = 0x1defd4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1defd8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1defd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1defdc: 0x9205000b  lbu         $a1, 0xB($s0)
    ctx->pc = 0x1defdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x1defe0: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x1defe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x1defe4: 0x92090009  lbu         $t1, 0x9($s0)
    ctx->pc = 0x1defe4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x1defe8: 0x9208000a  lbu         $t0, 0xA($s0)
    ctx->pc = 0x1defe8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1defec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1defecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1deff0: 0x9206000c  lbu         $a2, 0xC($s0)
    ctx->pc = 0x1deff0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1deff4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1deff4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1deff8: 0x9204000d  lbu         $a0, 0xD($s0)
    ctx->pc = 0x1deff8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x1deffc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1deffcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1df000: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1df000u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1df004: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x1df004u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x1df008: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x1df008u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x1df00c: 0x146a000c  bne         $v1, $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x1DF00Cu;
    {
        const bool branch_taken_0x1df00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x1DF010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF00Cu;
        // 0x1df010: 0xc42025  or          $a0, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df00c) {
            ctx->pc = 0x1DF040u;
            goto label_1df040;
        }
    }
    ctx->pc = 0x1DF014u;
    // 0x1df014: 0x54e0000b  bnel        $a3, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1DF014u;
    {
        const bool branch_taken_0x1df014 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df014) {
            ctx->pc = 0x1DF018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF014u;
            // 0x1df018: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF044u;
            goto label_1df044;
        }
    }
    ctx->pc = 0x1DF01Cu;
    // 0x1df01c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df020: 0x55030008  bnel        $t0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DF020u;
    {
        const bool branch_taken_0x1df020 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x1df020) {
            ctx->pc = 0x1DF024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF020u;
            // 0x1df024: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF044u;
            goto label_1df044;
        }
    }
    ctx->pc = 0x1DF028u;
    // 0x1df028: 0xc08218c  jal         func_208630
    ctx->pc = 0x1DF028u;
    SET_GPR_U32(ctx, 31, 0x1DF030u);
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1DF028u, 0x1DF030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF030u;
label_1df030:
    // 0x1df030: 0x2603000e  addiu       $v1, $s0, 0xE
    ctx->pc = 0x1df030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x1df034: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x1df034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x1df038: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x1df038u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
    // 0x1df03c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df040:
    // 0x1df040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1df044:
    // 0x1df044: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1df044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df048: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1df048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df04c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF04Cu;
        // 0x1df050: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF054u;
}
