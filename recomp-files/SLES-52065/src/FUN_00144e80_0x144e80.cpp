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

// Function: FUN_00144e80
// Address: 0x144e80 - 0x144f04
void FUN_00144e80_0x144e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144e80_0x144e80");
#endif

    switch (ctx->pc) {
        case 0x144ec8u: goto label_144ec8;
        default: break;
    }

    ctx->pc = 0x144e80u;

    // 0x144e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x144e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x144e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x144e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x144e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144e90: 0x8c9101a4  lw          $s1, 0x1A4($a0)
    ctx->pc = 0x144e90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x144e94: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x144E94u;
    {
        const bool branch_taken_0x144e94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x144E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E94u;
        // 0x144e98: 0x24820020  addiu       $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e94) {
            ctx->pc = 0x144EF0u;
            goto label_144ef0;
        }
    }
    ctx->pc = 0x144E9Cu;
    // 0x144e9c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x144e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x144ea0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x144ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x144ea4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x144ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x144ea8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x144ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x144eac: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x144eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x144eb0: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x144eb0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x144eb4: 0x0  nop
    ctx->pc = 0x144eb4u;
    // NOP
    // 0x144eb8: 0x0  nop
    ctx->pc = 0x144eb8u;
    // NOP
    // 0x144ebc: 0x2812  mflo        $a1
    ctx->pc = 0x144ebcu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x144ec0: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x144EC0u;
    SET_GPR_U32(ctx, 31, 0x144EC8u);
    ctx->pc = 0x144EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144EC0u;
    // 0x144ec4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x144EC0u, 0x144EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144EC8u;
label_144ec8:
    // 0x144ec8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x144ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x144ecc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x144eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144ed0: 0x203001b  divu        $zero, $s0, $v1
    ctx->pc = 0x144ed0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x144ed4: 0x0  nop
    ctx->pc = 0x144ed4u;
    // NOP
    // 0x144ed8: 0x0  nop
    ctx->pc = 0x144ed8u;
    // NOP
    // 0x144edc: 0x1810  mfhi        $v1
    ctx->pc = 0x144edcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x144ee0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x144ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x144ee4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144ee8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x144ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144eec: 0x0  nop
    ctx->pc = 0x144eecu;
    // NOP
label_144ef0:
    // 0x144ef0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x144ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144ef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144efc: 0x3e00008  jr          $ra
    ctx->pc = 0x144EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144EFCu;
        // 0x144f00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144F04u;
}
