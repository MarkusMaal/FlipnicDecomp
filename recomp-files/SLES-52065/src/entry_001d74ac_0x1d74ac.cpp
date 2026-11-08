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

// Function: entry_001d74ac
// Address: 0x1d74ac - 0x1d74c0
void entry_001d74ac_0x1d74ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d74ac_0x1d74ac");
#endif

    switch (ctx->pc) {
        case 0x1d74b4u: goto label_1d74b4;
        default: break;
    }

    ctx->pc = 0x1d74acu;

    // 0x1d74ac: 0xc077832  jal         func_1DE0C8
    ctx->pc = 0x1D74ACu;
    SET_GPR_U32(ctx, 31, 0x1D74B4u);
    ctx->pc = 0x1DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0C8u, 0x1D74ACu, 0x1D74B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74B4u;
label_1d74b4:
    // 0x1d74b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D74B4u;
    {
        const bool branch_taken_0x1d74b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74B4u;
        // 0x1d74b8: 0x96a30060  lhu         $v1, 0x60($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74b4) {
            ctx->pc = 0x1D74F0u;
            return;
        }
    }
    ctx->pc = 0x1D74BCu;
    // 0x1d74bc: 0x0  nop
    ctx->pc = 0x1d74bcu;
    // NOP
    ctx->pc = 0x1d74c0u;
}
