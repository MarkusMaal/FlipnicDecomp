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

// Function: FUN_0018ae90
// Address: 0x18ae90 - 0x18aee0
void FUN_0018ae90_0x18ae90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018ae90_0x18ae90");
#endif

    switch (ctx->pc) {
        case 0x18aeb4u: goto label_18aeb4;
        case 0x18aec8u: goto label_18aec8;
        default: break;
    }

    ctx->pc = 0x18ae90u;

    // 0x18ae90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18ae90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18ae94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18ae94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18ae98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ae98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ae9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ae9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18aea0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18aea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18aea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18aea8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18aea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aeac: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x18AEACu;
    SET_GPR_U32(ctx, 31, 0x18AEB4u);
    ctx->pc = 0x18AEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AEACu;
    // 0x18aeb0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x18AEACu, 0x18AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AEB4u;
label_18aeb4:
    // 0x18aeb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18aeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aeb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18aeb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aebc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18aebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aec0: 0xc062bb8  jal         func_18AEE0
    ctx->pc = 0x18AEC0u;
    SET_GPR_U32(ctx, 31, 0x18AEC8u);
    ctx->pc = 0x18AEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AEC0u;
    // 0x18aec4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEE0u, 0x18AEC0u, 0x18AEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AEC8u;
label_18aec8:
    // 0x18aec8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18aec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18aecc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18aeccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18aed0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18aed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18aed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18aed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18aed8: 0x3e00008  jr          $ra
    ctx->pc = 0x18AED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AED8u;
        // 0x18aedc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AEE0u;
}
