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

// Function: FUN_0012ebf0
// Address: 0x12ebf0 - 0x12ec38
void FUN_0012ebf0_0x12ebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012ebf0_0x12ebf0");
#endif

    ctx->pc = 0x12ebf0u;

    // 0x12ebf0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x12ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ebf4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12ebf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebf8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12ebfc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x12ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12ec00: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x12ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x12ec04: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x12ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12ec08: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x12ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x12ec0c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x12ec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ec10: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x12ec10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x12ec14: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x12ec14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ec18: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x12ec18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x12ec1c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x12ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x12ec20: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x12ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x12ec24: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x12ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x12ec28: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x12ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x12ec2c: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x12ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x12ec30: 0x3e00008  jr          $ra
    ctx->pc = 0x12EC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC30u;
        // 0x12ec34: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EC38u;
}
