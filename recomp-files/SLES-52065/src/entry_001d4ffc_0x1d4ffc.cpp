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

// Function: entry_001d4ffc
// Address: 0x1d4ffc - 0x1d500c
void entry_001d4ffc_0x1d4ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4ffc_0x1d4ffc");
#endif

    switch (ctx->pc) {
        case 0x1d5004u: goto label_1d5004;
        default: break;
    }

    ctx->pc = 0x1d4ffcu;

    // 0x1d4ffc: 0xc077818  jal         func_1DE060
    ctx->pc = 0x1D4FFCu;
    SET_GPR_U32(ctx, 31, 0x1D5004u);
    ctx->pc = 0x1D5000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4FFCu;
    // 0x1d5000: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE060u, 0x1D4FFCu, 0x1D5004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5004u;
label_1d5004:
    // 0x1d5004: 0x623fff2  bgezl       $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D5004u;
    {
        const bool branch_taken_0x1d5004 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1d5004) {
            ctx->pc = 0x1D5008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5004u;
            // 0x1d5008: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4FD0u;
            return;
        }
    }
    ctx->pc = 0x1D500Cu;
}
