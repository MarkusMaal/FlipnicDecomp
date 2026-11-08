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

// Function: FUN_001f6948
// Address: 0x1f6948 - 0x1f699c
void FUN_001f6948_0x1f6948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6948_0x1f6948");
#endif

    switch (ctx->pc) {
        case 0x1f6990u: goto label_1f6990;
        default: break;
    }

    ctx->pc = 0x1f6948u;

    // 0x1f6948: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f6948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f694c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1f694cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f6950: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1f6950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f6954: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1f6954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f6958: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1f6958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f695c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f695cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6960: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f6960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f6964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6968: 0x244210d0  addiu       $v0, $v0, 0x10D0
    ctx->pc = 0x1f6968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
    // 0x1f696c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f6970: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f6970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f6974: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f6974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f6978: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6978u;
    {
        const bool branch_taken_0x1f6978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6978u;
        // 0x1f697c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6978) {
            ctx->pc = 0x1F6988u;
            goto label_1f6988;
        }
    }
    ctx->pc = 0x1F6980u;
    // 0x1f6980: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6980u;
    {
        const bool branch_taken_0x1f6980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6980u;
        // 0x1f6984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6980) {
            ctx->pc = 0x1F6990u;
            goto label_1f6990;
        }
    }
    ctx->pc = 0x1F6988u;
label_1f6988:
    // 0x1f6988: 0xc07da0e  jal         func_1F6838
    ctx->pc = 0x1F6988u;
    SET_GPR_U32(ctx, 31, 0x1F6990u);
    ctx->pc = 0x1F698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6988u;
    // 0x1f698c: 0x24060fff  addiu       $a2, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6838u, 0x1F6988u, 0x1F6990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6990u;
label_1f6990:
    // 0x1f6990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6994: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6994u;
        // 0x1f6998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F699Cu;
}
