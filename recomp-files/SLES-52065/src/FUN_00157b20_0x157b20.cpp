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

// Function: FUN_00157b20
// Address: 0x157b20 - 0x157b50
void FUN_00157b20_0x157b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157b20_0x157b20");
#endif

    ctx->pc = 0x157b20u;

    // 0x157b20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x157b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157b24: 0x3c024033  lui         $v0, 0x4033
    ctx->pc = 0x157b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16435 << 16));
    // 0x157b28: 0xac8302e0  sw          $v1, 0x2E0($a0)
    ctx->pc = 0x157b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 3));
    // 0x157b2c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x157b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x157b30: 0xac8302d8  sw          $v1, 0x2D8($a0)
    ctx->pc = 0x157b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 3));
    // 0x157b34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157b38: 0xac8302dc  sw          $v1, 0x2DC($a0)
    ctx->pc = 0x157b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 732), GPR_U32(ctx, 3));
    // 0x157b3c: 0xc7808020  lwc1        $f0, -0x7FE0($gp)
    ctx->pc = 0x157b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157b40: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x157b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x157b44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157b48: 0x3e00008  jr          $ra
    ctx->pc = 0x157B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B48u;
        // 0x157b4c: 0xe48001d0  swc1        $f0, 0x1D0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 464), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157B50u;
}
