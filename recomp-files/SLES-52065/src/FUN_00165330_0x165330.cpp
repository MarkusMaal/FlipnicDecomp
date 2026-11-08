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

// Function: FUN_00165330
// Address: 0x165330 - 0x165378
void FUN_00165330_0x165330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00165330_0x165330");
#endif

    switch (ctx->pc) {
        case 0x165364u: goto label_165364;
        default: break;
    }

    ctx->pc = 0x165330u;

    // 0x165330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165334: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x165334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x165338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16533c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16533cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165340: 0x848201f4  lh          $v0, 0x1F4($a0)
    ctx->pc = 0x165340u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 500)));
    // 0x165344: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x165344u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x165348: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x165348u;
    {
        const bool branch_taken_0x165348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165348u;
        // 0x16534c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165348) {
            ctx->pc = 0x165354u;
            goto label_165354;
        }
    }
    ctx->pc = 0x165350u;
    // 0x165350: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x165350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165354:
    // 0x165354: 0x8e0501f0  lw          $a1, 0x1F0($s0)
    ctx->pc = 0x165354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x165358: 0x260401e0  addiu       $a0, $s0, 0x1E0
    ctx->pc = 0x165358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x16535c: 0xc054980  jal         func_152600
    ctx->pc = 0x16535Cu;
    SET_GPR_U32(ctx, 31, 0x165364u);
    ctx->pc = 0x165360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16535Cu;
    // 0x165360: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152600u, 0x16535Cu, 0x165364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165364u;
label_165364:
    // 0x165364: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x165364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
    // 0x165368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16536c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16536cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165370: 0x3e00008  jr          $ra
    ctx->pc = 0x165370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165370u;
        // 0x165374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165378u;
}
