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

// Function: entry_001d82ec
// Address: 0x1d82ec - 0x1d82fc
void entry_001d82ec_0x1d82ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d82ec_0x1d82ec");
#endif

    switch (ctx->pc) {
        case 0x1d82f4u: goto label_1d82f4;
        default: break;
    }

    ctx->pc = 0x1d82ecu;

    // 0x1d82ec: 0xc077818  jal         func_1DE060
    ctx->pc = 0x1D82ECu;
    SET_GPR_U32(ctx, 31, 0x1D82F4u);
    ctx->pc = 0x1D82F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D82ECu;
    // 0x1d82f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE060u, 0x1D82ECu, 0x1D82F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82F4u;
label_1d82f4:
    // 0x1d82f4: 0x623fff2  bgezl       $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D82F4u;
    {
        const bool branch_taken_0x1d82f4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1d82f4) {
            ctx->pc = 0x1D82F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D82F4u;
            // 0x1d82f8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D82C0u;
            return;
        }
    }
    ctx->pc = 0x1D82FCu;
}
