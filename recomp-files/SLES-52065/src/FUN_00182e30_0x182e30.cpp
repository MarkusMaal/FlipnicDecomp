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

// Function: FUN_00182e30
// Address: 0x182e30 - 0x182e9c
void FUN_00182e30_0x182e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00182e30_0x182e30");
#endif

    switch (ctx->pc) {
        case 0x182e4cu: goto label_182e4c;
        case 0x182e5cu: goto label_182e5c;
        case 0x182e64u: goto label_182e64;
        case 0x182e88u: goto label_182e88;
        default: break;
    }

    ctx->pc = 0x182e30u;

    // 0x182e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x182e34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x182e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x182e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182e3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182e40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x182e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x182e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x182e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_182e4c:
    // 0x182e4c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x182e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x182e50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x182e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e54: 0xc061734  jal         func_185CD0
    ctx->pc = 0x182E54u;
    SET_GPR_U32(ctx, 31, 0x182E5Cu);
    ctx->pc = 0x182E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182E54u;
    // 0x182e58: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x182E54u, 0x182E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E5Cu;
label_182e5c:
    // 0x182e5c: 0xc061630  jal         func_1858C0
    ctx->pc = 0x182E5Cu;
    SET_GPR_U32(ctx, 31, 0x182E64u);
    ctx->pc = 0x182E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182E5Cu;
    // 0x182e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1858C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1858C0u, 0x182E5Cu, 0x182E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E64u;
label_182e64:
    // 0x182e64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x182e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x182e68: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x182e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x182e6c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x182E6Cu;
    {
        const bool branch_taken_0x182e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182E6Cu;
        // 0x182e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e6c) {
            ctx->pc = 0x182E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182e4c;
        }
    }
    ctx->pc = 0x182E74u;
    // 0x182e74: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x182e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x182e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x182e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e80: 0xc061734  jal         func_185CD0
    ctx->pc = 0x182E80u;
    SET_GPR_U32(ctx, 31, 0x182E88u);
    ctx->pc = 0x182E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182E80u;
    // 0x182e84: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x182E80u, 0x182E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E88u;
label_182e88:
    // 0x182e88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x182e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182e94: 0x3e00008  jr          $ra
    ctx->pc = 0x182E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182E94u;
        // 0x182e98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182E9Cu;
}
