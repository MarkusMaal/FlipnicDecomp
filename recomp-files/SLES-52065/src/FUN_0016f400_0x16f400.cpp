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

// Function: FUN_0016f400
// Address: 0x16f400 - 0x16f47c
void FUN_0016f400_0x16f400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016f400_0x16f400");
#endif

    switch (ctx->pc) {
        case 0x16f434u: goto label_16f434;
        case 0x16f43cu: goto label_16f43c;
        default: break;
    }

    ctx->pc = 0x16f400u;

    // 0x16f400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16f400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16f404: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16f404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16f408: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16f408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16f40c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f410: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16f410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f414: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16f414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f418: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F418u;
    {
        const bool branch_taken_0x16f418 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F418u;
        // 0x16f41c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f418) {
            ctx->pc = 0x16F428u;
            goto label_16f428;
        }
    }
    ctx->pc = 0x16F420u;
    // 0x16f420: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16F420u;
    {
        const bool branch_taken_0x16f420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F420u;
        // 0x16f424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f420) {
            ctx->pc = 0x16F464u;
            goto label_16f464;
        }
    }
    ctx->pc = 0x16F428u;
label_16f428:
    // 0x16f428: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x16f428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16f42c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x16F42Cu;
    {
        const bool branch_taken_0x16f42c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F42Cu;
        // 0x16f430: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f42c) {
            ctx->pc = 0x16F45Cu;
            goto label_16f45c;
        }
    }
    ctx->pc = 0x16F434u;
label_16f434:
    // 0x16f434: 0xc05bc60  jal         func_16F180
    ctx->pc = 0x16F434u;
    SET_GPR_U32(ctx, 31, 0x16F43Cu);
    ctx->pc = 0x16F438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F434u;
    // 0x16f438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F180u, 0x16F434u, 0x16F43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F43Cu;
label_16f43c:
    // 0x16f43c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F43Cu;
    {
        const bool branch_taken_0x16f43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f43c) {
            ctx->pc = 0x16F44Cu;
            goto label_16f44c;
        }
    }
    ctx->pc = 0x16F444u;
    // 0x16f444: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16F444u;
    {
        const bool branch_taken_0x16f444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F444u;
        // 0x16f448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f444) {
            ctx->pc = 0x16F464u;
            goto label_16f464;
        }
    }
    ctx->pc = 0x16F44Cu;
label_16f44c:
    // 0x16f44c: 0x26100006  addiu       $s0, $s0, 0x6
    ctx->pc = 0x16f44cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x16f450: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x16f450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16f454: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16F454u;
    {
        const bool branch_taken_0x16f454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F454u;
        // 0x16f458: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f454) {
            ctx->pc = 0x16F434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f434;
        }
    }
    ctx->pc = 0x16F45Cu;
label_16f45c:
    // 0x16f45c: 0x0  nop
    ctx->pc = 0x16f45cu;
    // NOP
    // 0x16f460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f464:
    // 0x16f464: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16f464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f468: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16f468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f46c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f46cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f474: 0x3e00008  jr          $ra
    ctx->pc = 0x16F474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F474u;
        // 0x16f478: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F47Cu;
}
