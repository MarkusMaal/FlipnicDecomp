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

// Function: FUN_001f5f98
// Address: 0x1f5f98 - 0x1f6014
void FUN_001f5f98_0x1f5f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f5f98_0x1f5f98");
#endif

    switch (ctx->pc) {
        case 0x1f5fe8u: goto label_1f5fe8;
        case 0x1f5ffcu: goto label_1f5ffc;
        default: break;
    }

    ctx->pc = 0x1f5f98u;

    // 0x1f5f98: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f5f98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f9c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1f5f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f5fa0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1f5fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f5fa4: 0x70e31818  mult1       $v1, $a3, $v1
    ctx->pc = 0x1f5fa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f5fa8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1f5fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f5fac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f5fb0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f5fb4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f5fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f5fb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f5fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f5fbc: 0x244210d0  addiu       $v0, $v0, 0x10D0
    ctx->pc = 0x1f5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
    // 0x1f5fc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5fc4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f5fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f5fc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f5fcc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f5fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f5fd0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5FD0u;
    {
        const bool branch_taken_0x1f5fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FD0u;
        // 0x1f5fd4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fd0) {
            ctx->pc = 0x1F5FE0u;
            goto label_1f5fe0;
        }
    }
    ctx->pc = 0x1F5FD8u;
    // 0x1f5fd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5FD8u;
    {
        const bool branch_taken_0x1f5fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FD8u;
        // 0x1f5fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fd8) {
            ctx->pc = 0x1F6000u;
            goto label_1f6000;
        }
    }
    ctx->pc = 0x1F5FE0u;
label_1f5fe0:
    // 0x1f5fe0: 0xc07d7ba  jal         func_1F5EE8
    ctx->pc = 0x1F5FE0u;
    SET_GPR_U32(ctx, 31, 0x1F5FE8u);
    ctx->pc = 0x1F5FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5FE0u;
    // 0x1f5fe4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5EE8u, 0x1F5FE0u, 0x1F5FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FE8u;
label_1f5fe8:
    // 0x1f5fe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ff0: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1f5ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1f5ff4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1F5FF4u;
    SET_GPR_U32(ctx, 31, 0x1F5FFCu);
    ctx->pc = 0x1F5FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5FF4u;
    // 0x1f5ff8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1F5FF4u, 0x1F5FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FFCu;
label_1f5ffc:
    // 0x1f5ffc: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1f5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1f6000:
    // 0x1f6000: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f6000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6004: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f6004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f600c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F600Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F600Cu;
        // 0x1f6010: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F600Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6014u;
}
