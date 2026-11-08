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

// Function: entry_001480e0
// Address: 0x1480e0 - 0x148108
void entry_001480e0_0x1480e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001480e0_0x1480e0");
#endif

    switch (ctx->pc) {
        case 0x1480e8u: goto label_1480e8;
        default: break;
    }

    ctx->pc = 0x1480e0u;

    // 0x1480e0: 0xc050224  jal         func_140890
    ctx->pc = 0x1480E0u;
    SET_GPR_U32(ctx, 31, 0x1480E8u);
    ctx->pc = 0x1480E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1480E0u;
    // 0x1480e4: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x1480E0u, 0x1480E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1480E8u;
label_1480e8:
    // 0x1480e8: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x1480e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x1480ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1480ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1480f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1480f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1480f4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1480f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1480f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1480f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1480fc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1480fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x148100: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x148100u;
    {
        const bool branch_taken_0x148100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148100u;
        // 0x148104: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148100) {
            ctx->pc = 0x1481ACu;
            return;
        }
    }
    ctx->pc = 0x148108u;
}
