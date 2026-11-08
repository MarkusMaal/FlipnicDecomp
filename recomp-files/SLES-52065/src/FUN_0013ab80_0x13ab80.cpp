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

// Function: FUN_0013ab80
// Address: 0x13ab80 - 0x13ac38
void FUN_0013ab80_0x13ab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ab80_0x13ab80");
#endif

    switch (ctx->pc) {
        case 0x13abf4u: goto label_13abf4;
        case 0x13ac2cu: goto label_13ac2c;
        default: break;
    }

    ctx->pc = 0x13ab80u;

    // 0x13ab80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13ab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13ab84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ab88: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x13ab88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13ab8c: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x13ab8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13ab90: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x13AB90u;
    {
        const bool branch_taken_0x13ab90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB90u;
        // 0x13ab94: 0xa6082b  sltu        $at, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab90) {
            ctx->pc = 0x13ABFCu;
            goto label_13abfc;
        }
    }
    ctx->pc = 0x13AB98u;
    // 0x13ab98: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x13ab98u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
    // 0x13ab9c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x13ab9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13aba0: 0x25296fc0  addiu       $t1, $t1, 0x6FC0
    ctx->pc = 0x13aba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 28608));
    // 0x13aba4: 0x79280000  lq          $t0, 0x0($t1)
    ctx->pc = 0x13aba4u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x366FC0u));
    // 0x13aba8: 0x79260010  lq          $a2, 0x10($t1)
    ctx->pc = 0x13aba8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x366FD0u));
    // 0x13abac: 0x79230020  lq          $v1, 0x20($t1)
    ctx->pc = 0x13abacu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x366FE0u));
    // 0x13abb0: 0x79220030  lq          $v0, 0x30($t1)
    ctx->pc = 0x13abb0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x366FF0u));
    // 0x13abb4: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x13abb4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x13abb8: 0x7ce60010  sq          $a2, 0x10($a3)
    ctx->pc = 0x13abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 6));
    // 0x13abbc: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x13abbcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x13abc0: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x13abc0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x13abc4: 0x79230040  lq          $v1, 0x40($t1)
    ctx->pc = 0x13abc4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x367000u));
    // 0x13abc8: 0x79220050  lq          $v0, 0x50($t1)
    ctx->pc = 0x13abc8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x367010u));
    // 0x13abcc: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x13abccu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
    // 0x13abd0: 0x7ce20050  sq          $v0, 0x50($a3)
    ctx->pc = 0x13abd0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    // 0x13abd4: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x13abd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13abd8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13abdc: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x13abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x13abe0: 0xa83023  subu        $a2, $a1, $t0
    ctx->pc = 0x13abe0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x13abe4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x13abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x13abe8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x13abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13abec: 0xc04ec70  jal         func_13B1C0
    ctx->pc = 0x13ABECu;
    SET_GPR_U32(ctx, 31, 0x13ABF4u);
    ctx->pc = 0x13ABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ABECu;
    // 0x13abf0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B1C0u, 0x13ABECu, 0x13ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ABF4u;
label_13abf4:
    // 0x13abf4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13ABF4u;
    {
        const bool branch_taken_0x13abf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ABF4u;
        // 0x13abf8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13abf4) {
            ctx->pc = 0x13AC30u;
            goto label_13ac30;
        }
    }
    ctx->pc = 0x13ABFCu;
label_13abfc:
    // 0x13abfc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x13ABFCu;
    {
        const bool branch_taken_0x13abfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13abfc) {
            ctx->pc = 0x13AC2Cu;
            goto label_13ac2c;
        }
    }
    ctx->pc = 0x13AC04u;
    // 0x13ac04: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x13ac04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13ac08: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x13ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13ac0c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x13ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13ac10: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x13ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x13ac14: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x13ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13ac18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13ac1c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13ac20: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x13ac20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x13ac24: 0xc04ec24  jal         func_13B090
    ctx->pc = 0x13AC24u;
    SET_GPR_U32(ctx, 31, 0x13AC2Cu);
    ctx->pc = 0x13AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AC24u;
    // 0x13ac28: 0xe23021  addu        $a2, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B090u, 0x13AC24u, 0x13AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC2Cu;
label_13ac2c:
    // 0x13ac2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ac2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ac30:
    // 0x13ac30: 0x3e00008  jr          $ra
    ctx->pc = 0x13AC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AC30u;
        // 0x13ac34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AC38u;
}
