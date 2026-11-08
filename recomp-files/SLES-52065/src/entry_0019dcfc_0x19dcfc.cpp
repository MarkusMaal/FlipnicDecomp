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

// Function: entry_0019dcfc
// Address: 0x19dcfc - 0x19dd0c
void entry_0019dcfc_0x19dcfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dcfc_0x19dcfc");
#endif

    switch (ctx->pc) {
        case 0x19dd04u: goto label_19dd04;
        default: break;
    }

    ctx->pc = 0x19dcfcu;

    // 0x19dcfc: 0xc063de0  jal         func_18F780
    ctx->pc = 0x19DCFCu;
    SET_GPR_U32(ctx, 31, 0x19DD04u);
    ctx->pc = 0x19DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DCFCu;
    // 0x19dd00: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x19DCFCu, 0x19DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD04u;
label_19dd04:
    // 0x19dd04: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x19DD04u;
    {
        const bool branch_taken_0x19dd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dd04) {
            ctx->pc = 0x19E09Cu;
            return;
        }
    }
    ctx->pc = 0x19DD0Cu;
}
