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

// Function: FUN_0020ab90
// Address: 0x20ab90 - 0x20ac24
void FUN_0020ab90_0x20ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020ab90_0x20ab90");
#endif

    switch (ctx->pc) {
        case 0x20aba4u: goto label_20aba4;
        case 0x20abbcu: goto label_20abbc;
        case 0x20abf8u: goto label_20abf8;
        default: break;
    }

    ctx->pc = 0x20ab90u;

    // 0x20ab90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20ab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20ab94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20ab94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ab98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20ab9c: 0xc0827a6  jal         func_209E98
    ctx->pc = 0x20AB9Cu;
    SET_GPR_U32(ctx, 31, 0x20ABA4u);
    ctx->pc = 0x209E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209E98u, 0x20AB9Cu, 0x20ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABA4u;
label_20aba4:
    // 0x20aba4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20aba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aba8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x20aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20abac: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20ABACu;
    {
        const bool branch_taken_0x20abac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20abac) {
            ctx->pc = 0x20ABF0u;
            goto label_20abf0;
        }
    }
    ctx->pc = 0x20ABB4u;
    // 0x20abb4: 0xc07aeac  jal         func_1EBAB0
    ctx->pc = 0x20ABB4u;
    SET_GPR_U32(ctx, 31, 0x20ABBCu);
    ctx->pc = 0x1EBAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBAB0u, 0x20ABB4u, 0x20ABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABBCu;
label_20abbc:
    // 0x20abbc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x20abbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20abc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20abc4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20ABC4u;
    {
        const bool branch_taken_0x20abc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABC4u;
        // 0x20abc8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abc4) {
            ctx->pc = 0x20AC18u;
            goto label_20ac18;
        }
    }
    ctx->pc = 0x20ABCCu;
    // 0x20abcc: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x20abccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x20abd0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x20abd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x20abd4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x20abd4u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x20abd8: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x20abd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x20abdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20abdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20abe0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20abe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20abe4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20abe4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20abe8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20ABE8u;
    {
        const bool branch_taken_0x20abe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABE8u;
        // 0x20abec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abe8) {
            ctx->pc = 0x20AC1Cu;
            goto label_20ac1c;
        }
    }
    ctx->pc = 0x20ABF0u;
label_20abf0:
    // 0x20abf0: 0xc07aed0  jal         func_1EBB40
    ctx->pc = 0x20ABF0u;
    SET_GPR_U32(ctx, 31, 0x20ABF8u);
    ctx->pc = 0x1EBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBB40u, 0x20ABF0u, 0x20ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABF8u;
label_20abf8:
    // 0x20abf8: 0x2137b  dsra        $v0, $v0, 13
    ctx->pc = 0x20abf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 13);
    // 0x20abfc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x20abfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20ac00: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x20ac00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20ac04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ac08: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AC08u;
    {
        const bool branch_taken_0x20ac08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC08u;
        // 0x20ac0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac08) {
            ctx->pc = 0x20AC18u;
            goto label_20ac18;
        }
    }
    ctx->pc = 0x20AC10u;
    // 0x20ac10: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x20ac10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20ac14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20ac14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20ac18:
    // 0x20ac18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ac18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20ac1c:
    // 0x20ac1c: 0x3e00008  jr          $ra
    ctx->pc = 0x20AC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC1Cu;
        // 0x20ac20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AC24u;
}
