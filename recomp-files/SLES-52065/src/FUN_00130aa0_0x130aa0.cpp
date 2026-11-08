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

// Function: FUN_00130aa0
// Address: 0x130aa0 - 0x130ad0
void FUN_00130aa0_0x130aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130aa0_0x130aa0");
#endif

    switch (ctx->pc) {
        case 0x130ab4u: goto label_130ab4;
        case 0x130ac0u: goto label_130ac0;
        default: break;
    }

    ctx->pc = 0x130aa0u;

    // 0x130aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130aa8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x130aa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x130aac: 0xc04d988  jal         func_136620
    ctx->pc = 0x130AACu;
    SET_GPR_U32(ctx, 31, 0x130AB4u);
    ctx->pc = 0x130AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130AACu;
    // 0x130ab0: 0xc7948020  lwc1        $f20, -0x7FE0($gp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x130AACu, 0x130AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AB4u;
label_130ab4:
    // 0x130ab4: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x130ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x130ab8: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x130AB8u;
    SET_GPR_U32(ctx, 31, 0x130AC0u);
    ctx->pc = 0x130ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130AB8u;
    // 0x130abc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x130AB8u, 0x130AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AC0u;
label_130ac0:
    // 0x130ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130ac4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x130ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x130AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AC8u;
        // 0x130acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130AD0u;
}
