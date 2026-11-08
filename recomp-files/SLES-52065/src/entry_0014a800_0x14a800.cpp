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

// Function: entry_0014a800
// Address: 0x14a800 - 0x14a830
void entry_0014a800_0x14a800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a800_0x14a800");
#endif

    switch (ctx->pc) {
        case 0x14a818u: goto label_14a818;
        default: break;
    }

    ctx->pc = 0x14a800u;

    // 0x14a800: 0x8fa3066c  lw          $v1, 0x66C($sp)
    ctx->pc = 0x14a800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1644)));
    // 0x14a804: 0x8fa2068c  lw          $v0, 0x68C($sp)
    ctx->pc = 0x14a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1676)));
    // 0x14a808: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14A808u;
    {
        const bool branch_taken_0x14a808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A808u;
        // 0x14a80c: 0x27a403c0  addiu       $a0, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a808) {
            ctx->pc = 0x14A7E0u;
            return;
        }
    }
    ctx->pc = 0x14A810u;
    // 0x14a810: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A810u;
    SET_GPR_U32(ctx, 31, 0x14A818u);
    ctx->pc = 0x14A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A810u;
    // 0x14a814: 0x27a50640  addiu       $a1, $sp, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A810u, 0x14A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A818u;
label_14a818:
    // 0x14a818: 0x8fa5064c  lw          $a1, 0x64C($sp)
    ctx->pc = 0x14a818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1612)));
    // 0x14a81c: 0x8fa40650  lw          $a0, 0x650($sp)
    ctx->pc = 0x14a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x14a820: 0x8fa30654  lw          $v1, 0x654($sp)
    ctx->pc = 0x14a820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
    // 0x14a824: 0xafa503cc  sw          $a1, 0x3CC($sp)
    ctx->pc = 0x14a824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 972), GPR_U32(ctx, 5));
    // 0x14a828: 0xafa403d0  sw          $a0, 0x3D0($sp)
    ctx->pc = 0x14a828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 4));
    // 0x14a82c: 0xafa303d4  sw          $v1, 0x3D4($sp)
    ctx->pc = 0x14a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 980), GPR_U32(ctx, 3));
    ctx->pc = 0x14a830u;
}
