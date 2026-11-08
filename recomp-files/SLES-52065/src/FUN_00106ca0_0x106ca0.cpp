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

// Function: FUN_00106ca0
// Address: 0x106ca0 - 0x106cd4
void FUN_00106ca0_0x106ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106ca0_0x106ca0");
#endif

    switch (ctx->pc) {
        case 0x106cb4u: goto label_106cb4;
        case 0x106cc4u: goto label_106cc4;
        default: break;
    }

    ctx->pc = 0x106ca0u;

    // 0x106ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106ca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106ca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106cac: 0xc05638c  jal         func_158E30
    ctx->pc = 0x106CACu;
    SET_GPR_U32(ctx, 31, 0x106CB4u);
    ctx->pc = 0x106CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106CACu;
    // 0x106cb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158E30u, 0x106CACu, 0x106CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106CB4u;
label_106cb4:
    // 0x106cb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x106cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x106cb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x106cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x106cbc: 0xc058708  jal         func_161C20
    ctx->pc = 0x106CBCu;
    SET_GPR_U32(ctx, 31, 0x106CC4u);
    ctx->pc = 0x106CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106CBCu;
    // 0x106cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161C20u, 0x106CBCu, 0x106CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106CC4u;
label_106cc4:
    // 0x106cc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106cc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x106CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CCCu;
        // 0x106cd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106CD4u;
}
