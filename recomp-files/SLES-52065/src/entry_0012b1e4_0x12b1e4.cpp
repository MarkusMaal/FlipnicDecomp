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

// Function: entry_0012b1e4
// Address: 0x12b1e4 - 0x12b204
void entry_0012b1e4_0x12b1e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b1e4_0x12b1e4");
#endif

    ctx->pc = 0x12b1e4u;

    // 0x12b1e4: 0x0  nop
    ctx->pc = 0x12b1e4u;
    // NOP
    // 0x12b1e8: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x12b1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x12b1ec: 0x80a50000  lb          $a1, 0x0($a1)
    ctx->pc = 0x12b1ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12b1f0: 0x0  nop
    ctx->pc = 0x12b1f0u;
    // NOP
    // 0x12b1f4: 0x14a3fffa  bne         $a1, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12B1F4u;
    {
        const bool branch_taken_0x12b1f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x12b1f4) {
            ctx->pc = 0x12B1E0u;
            return;
        }
    }
    ctx->pc = 0x12B1FCu;
    // 0x12b1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x12B1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1FCu;
        // 0x12b200: 0xac870150  sw          $a3, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B204u;
}
