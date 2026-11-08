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

// Function: FUN_001871b0
// Address: 0x1871b0 - 0x1871c4
void FUN_001871b0_0x1871b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001871b0_0x1871b0");
#endif

    ctx->pc = 0x1871b0u;

    // 0x1871b0: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x1871b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1871b4: 0xf88d0010  sqc2        $vf13, 0x10($a0)
    ctx->pc = 0x1871b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x1871b8: 0xf88e0020  sqc2        $vf14, 0x20($a0)
    ctx->pc = 0x1871b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x1871bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1871BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1871C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871BCu;
        // 0x1871c0: 0xf88f0030  sqc2        $vf15, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[15]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1871BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1871C4u;
}
