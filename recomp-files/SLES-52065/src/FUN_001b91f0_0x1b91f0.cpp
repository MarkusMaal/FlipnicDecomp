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

// Function: FUN_001b91f0
// Address: 0x1b91f0 - 0x1b920c
void FUN_001b91f0_0x1b91f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b91f0_0x1b91f0");
#endif

    ctx->pc = 0x1b91f0u;

    // 0x1b91f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b91f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b91f4: 0xa08300c4  sb          $v1, 0xC4($a0)
    ctx->pc = 0x1b91f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 196), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b91f8: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x1b91f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x1b91fc: 0xc48000bc  lwc1        $f0, 0xBC($a0)
    ctx->pc = 0x1b91fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9200: 0xe48000c8  swc1        $f0, 0xC8($a0)
    ctx->pc = 0x1b9200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 200), bits); }
    // 0x1b9204: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9204u;
        // 0x1b9208: 0xa08000c3  sb          $zero, 0xC3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 195), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B920Cu;
}
