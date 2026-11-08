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

// Function: FUN_001f68e8
// Address: 0x1f68e8 - 0x1f6944
void FUN_001f68e8_0x1f68e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f68e8_0x1f68e8");
#endif

    switch (ctx->pc) {
        case 0x1f6928u: goto label_1f6928;
        default: break;
    }

    ctx->pc = 0x1f68e8u;

    // 0x1f68e8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f68e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f68ec: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1f68ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f68f0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1f68f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f68f4: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1f68f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f68f8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1f68f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f68fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f68fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6900: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f6900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f6904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6908: 0x244210d0  addiu       $v0, $v0, 0x10D0
    ctx->pc = 0x1f6908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
    // 0x1f690c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f690cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f6910: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f6910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f6914: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f6914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f6918: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6918u;
    {
        const bool branch_taken_0x1f6918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6918u;
        // 0x1f691c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6918) {
            ctx->pc = 0x1F6938u;
            goto label_1f6938;
        }
    }
    ctx->pc = 0x1F6920u;
    // 0x1f6920: 0xc07d9e0  jal         func_1F6780
    ctx->pc = 0x1F6920u;
    SET_GPR_U32(ctx, 31, 0x1F6928u);
    ctx->pc = 0x1F6924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6920u;
    // 0x1f6924: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6780u, 0x1F6920u, 0x1F6928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6928u;
label_1f6928:
    // 0x1f6928: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x1f6928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x1f692c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f692cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f6930: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1f6930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1f6934: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f6938:
    // 0x1f6938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f693c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F693Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F693Cu;
        // 0x1f6940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F693Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6944u;
}
