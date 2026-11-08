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

// Function: entry_001e41f0
// Address: 0x1e41f0 - 0x1e4210
void entry_001e41f0_0x1e41f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e41f0_0x1e41f0");
#endif

    ctx->pc = 0x1e41f0u;

    // 0x1e41f0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1e41f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e41f4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e41f8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1e41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e41fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e41fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e4200: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4200u;
        // 0x1e4204: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4208u;
    // 0x1e4208: 0x0  nop
    ctx->pc = 0x1e4208u;
    // NOP
    // 0x1e420c: 0x0  nop
    ctx->pc = 0x1e420cu;
    // NOP
    ctx->pc = 0x1e4210u;
}
