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

// Function: FUN_0014f0b0
// Address: 0x14f0b0 - 0x14f0dc
void FUN_0014f0b0_0x14f0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014f0b0_0x14f0b0");
#endif

    switch (ctx->pc) {
        case 0x14f0d0u: goto label_14f0d0;
        default: break;
    }

    ctx->pc = 0x14f0b0u;

    // 0x14f0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14f0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14f0b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14f0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f0b8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x14f0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14f0bc: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x14f0bcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x14f0c0: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x14f0c0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x14f0c4: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x14f0c4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x14f0c8: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x14F0C8u;
    SET_GPR_U32(ctx, 31, 0x14F0D0u);
    ctx->pc = 0x14F0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F0C8u;
    // 0x14f0cc: 0xe7af001c  swc1        $f15, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x14F0C8u, 0x14F0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F0D0u;
label_14f0d0:
    // 0x14f0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14f0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x14F0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0D4u;
        // 0x14f0d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F0DCu;
}
