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

// Function: FUN_00179820
// Address: 0x179820 - 0x17983c
void FUN_00179820_0x179820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00179820_0x179820");
#endif

    ctx->pc = 0x179820u;

    // 0x179820: 0xe48c0820  swc1        $f12, 0x820($a0)
    ctx->pc = 0x179820u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2080), bits); }
    // 0x179824: 0xe48d0824  swc1        $f13, 0x824($a0)
    ctx->pc = 0x179824u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2084), bits); }
    // 0x179828: 0xe48e0828  swc1        $f14, 0x828($a0)
    ctx->pc = 0x179828u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2088), bits); }
    // 0x17982c: 0xe48f082c  swc1        $f15, 0x82C($a0)
    ctx->pc = 0x17982cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2092), bits); }
    // 0x179830: 0xe4900830  swc1        $f16, 0x830($a0)
    ctx->pc = 0x179830u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2096), bits); }
    // 0x179834: 0x3e00008  jr          $ra
    ctx->pc = 0x179834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179834u;
        // 0x179838: 0xe4910834  swc1        $f17, 0x834($a0) (Delay Slot)
        { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17983Cu;
}
