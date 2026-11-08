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

// Function: FUN_00130a70
// Address: 0x130a70 - 0x130aa0
void FUN_00130a70_0x130a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130a70_0x130a70");
#endif

    switch (ctx->pc) {
        case 0x130a84u: goto label_130a84;
        case 0x130a90u: goto label_130a90;
        default: break;
    }

    ctx->pc = 0x130a70u;

    // 0x130a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130a74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130a78: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x130a78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x130a7c: 0xc04d988  jal         func_136620
    ctx->pc = 0x130A7Cu;
    SET_GPR_U32(ctx, 31, 0x130A84u);
    ctx->pc = 0x130A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A7Cu;
    // 0x130a80: 0xc7948020  lwc1        $f20, -0x7FE0($gp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x130A7Cu, 0x130A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A84u;
label_130a84:
    // 0x130a84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x130a84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x130a88: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x130A88u;
    SET_GPR_U32(ctx, 31, 0x130A90u);
    ctx->pc = 0x130A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A88u;
    // 0x130a8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x130A88u, 0x130A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A90u;
label_130a90:
    // 0x130a90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130a94: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x130a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130a98: 0x3e00008  jr          $ra
    ctx->pc = 0x130A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A98u;
        // 0x130a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130AA0u;
}
