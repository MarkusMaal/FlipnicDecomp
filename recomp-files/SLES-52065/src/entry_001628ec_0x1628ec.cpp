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

// Function: entry_001628ec
// Address: 0x1628ec - 0x162904
void entry_001628ec_0x1628ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001628ec_0x1628ec");
#endif

    switch (ctx->pc) {
        case 0x1628fcu: goto label_1628fc;
        default: break;
    }

    ctx->pc = 0x1628ecu;

    // 0x1628ec: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1628ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1628f0: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x1628f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1628f4: 0xc055b84  jal         func_156E10
    ctx->pc = 0x1628F4u;
    SET_GPR_U32(ctx, 31, 0x1628FCu);
    ctx->pc = 0x1628F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1628F4u;
    // 0x1628f8: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156E10u, 0x1628F4u, 0x1628FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1628FCu;
label_1628fc:
    // 0x1628fc: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1628FCu;
    {
        const bool branch_taken_0x1628fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628FCu;
        // 0x162900: 0x8e590008  lw          $t9, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628fc) {
            ctx->pc = 0x162B54u;
            return;
        }
    }
    ctx->pc = 0x162904u;
}
