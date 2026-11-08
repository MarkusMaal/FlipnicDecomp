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

// Function: FUN_001f60c8
// Address: 0x1f60c8 - 0x1f612c
void FUN_001f60c8_0x1f60c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f60c8_0x1f60c8");
#endif

    switch (ctx->pc) {
        case 0x1f6114u: goto label_1f6114;
        default: break;
    }

    ctx->pc = 0x1f60c8u;

    // 0x1f60c8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f60c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f60cc: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1f60ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f60d0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1f60d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f60d4: 0x70e31818  mult1       $v1, $a3, $v1
    ctx->pc = 0x1f60d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f60d8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1f60d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f60dc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f60dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f60e0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f60e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f60e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f60e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f60e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f60e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f60ec: 0x244210d0  addiu       $v0, $v0, 0x10D0
    ctx->pc = 0x1f60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
    // 0x1f60f0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f60f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f60f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f60f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f60f8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f60f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f60fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F60FCu;
    {
        const bool branch_taken_0x1f60fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60FCu;
        // 0x1f6100: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f60fc) {
            ctx->pc = 0x1F610Cu;
            goto label_1f610c;
        }
    }
    ctx->pc = 0x1F6104u;
    // 0x1f6104: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6104u;
    {
        const bool branch_taken_0x1f6104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6104u;
        // 0x1f6108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6104) {
            ctx->pc = 0x1F611Cu;
            goto label_1f611c;
        }
    }
    ctx->pc = 0x1F610Cu;
label_1f610c:
    // 0x1f610c: 0xc07d7ba  jal         func_1F5EE8
    ctx->pc = 0x1F610Cu;
    SET_GPR_U32(ctx, 31, 0x1F6114u);
    ctx->pc = 0x1F6110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F610Cu;
    // 0x1f6110: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5EE8u, 0x1F610Cu, 0x1F6114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6114u;
label_1f6114:
    // 0x1f6114: 0xa0500071  sb          $s0, 0x71($v0)
    ctx->pc = 0x1f6114u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 16));
    // 0x1f6118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f611c:
    // 0x1f611c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f611cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6124: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6124u;
        // 0x1f6128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F612Cu;
}
