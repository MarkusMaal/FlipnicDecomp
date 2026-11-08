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

// Function: FUN_00177d50
// Address: 0x177d50 - 0x177da8
void FUN_00177d50_0x177d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00177d50_0x177d50");
#endif

    switch (ctx->pc) {
        case 0x177d70u: goto label_177d70;
        case 0x177d7cu: goto label_177d7c;
        default: break;
    }

    ctx->pc = 0x177d50u;

    // 0x177d50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x177d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x177d54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x177d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x177d58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x177d5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x177d60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x177d60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177d68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x177d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x177d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177d70:
    // 0x177d70: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x177d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x177d74: 0xc05e03c  jal         func_1780F0
    ctx->pc = 0x177D74u;
    SET_GPR_U32(ctx, 31, 0x177D7Cu);
    ctx->pc = 0x177D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D74u;
    // 0x177d78: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780F0u, 0x177D74u, 0x177D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D7Cu;
label_177d7c:
    // 0x177d7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x177d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x177d80: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x177d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x177d84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x177D84u;
    {
        const bool branch_taken_0x177d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D84u;
        // 0x177d88: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d84) {
            ctx->pc = 0x177D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177d70;
        }
    }
    ctx->pc = 0x177D8Cu;
    // 0x177d8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x177d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177d90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x177d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177d94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177d98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177d9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177da0: 0x3e00008  jr          $ra
    ctx->pc = 0x177DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DA0u;
        // 0x177da4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177DA8u;
}
