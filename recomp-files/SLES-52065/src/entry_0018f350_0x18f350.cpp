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

// Function: entry_0018f350
// Address: 0x18f350 - 0x18f388
void entry_0018f350_0x18f350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f350_0x18f350");
#endif

    switch (ctx->pc) {
        case 0x18f35cu: goto label_18f35c;
        default: break;
    }

    ctx->pc = 0x18f350u;

label_18f350:
    // 0x18f350: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x18f350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x18f354: 0xc05ebe8  jal         func_17AFA0
    ctx->pc = 0x18F354u;
    SET_GPR_U32(ctx, 31, 0x18F35Cu);
    ctx->pc = 0x18F358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F354u;
    // 0x18f358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AFA0u, 0x18F354u, 0x18F35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F35Cu;
label_18f35c:
    // 0x18f35c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18f35cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18f360: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x18f360u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18f364: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18F364u;
    {
        const bool branch_taken_0x18f364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F364u;
        // 0x18f368: 0x26520420  addiu       $s2, $s2, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f364) {
            ctx->pc = 0x18F350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f350;
        }
    }
    ctx->pc = 0x18F36Cu;
    // 0x18f36c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18f36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f370: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18f370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f374: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f37c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f380: 0x3e00008  jr          $ra
    ctx->pc = 0x18F380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F380u;
        // 0x18f384: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F388u;
}
