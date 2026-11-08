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

// Function: entry_001bcec4
// Address: 0x1bcec4 - 0x1bcee8
void entry_001bcec4_0x1bcec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcec4_0x1bcec4");
#endif

    switch (ctx->pc) {
        case 0x1bced4u: goto label_1bced4;
        default: break;
    }

    ctx->pc = 0x1bcec4u;

    // 0x1bcec4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1bcec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bcec8: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1bcec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bcecc: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1BCECCu;
    SET_GPR_U32(ctx, 31, 0x1BCED4u);
    ctx->pc = 0x1BCED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCECCu;
    // 0x1bced0: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1BCECCu, 0x1BCED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCED4u;
label_1bced4:
    // 0x1bced4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCED4u;
    {
        const bool branch_taken_0x1bced4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bced4) {
            ctx->pc = 0x1BCEE8u;
            return;
        }
    }
    ctx->pc = 0x1BCEDCu;
    // 0x1bcedc: 0x8ea2007c  lw          $v0, 0x7C($s5)
    ctx->pc = 0x1bcedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x1bcee0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bcee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bcee4: 0xaea2007c  sw          $v0, 0x7C($s5)
    ctx->pc = 0x1bcee4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 2));
    ctx->pc = 0x1bcee8u;
}
