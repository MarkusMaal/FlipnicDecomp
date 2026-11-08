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

// Function: entry_00132a00
// Address: 0x132a00 - 0x132a3c
void entry_00132a00_0x132a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132a00_0x132a00");
#endif

    switch (ctx->pc) {
        case 0x132a18u: goto label_132a18;
        case 0x132a34u: goto label_132a34;
        default: break;
    }

    ctx->pc = 0x132a00u;

    // 0x132a00: 0x83828210  lb          $v0, -0x7DF0($gp)
    ctx->pc = 0x132a00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935056)));
    // 0x132a04: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x132A04u;
    {
        const bool branch_taken_0x132a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A04u;
        // 0x132a08: 0xafb30064  sw          $s3, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a04) {
            ctx->pc = 0x132A3Cu;
            return;
        }
    }
    ctx->pc = 0x132A0Cu;
    // 0x132a0c: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132a10: 0xc04ca54  jal         func_132950
    ctx->pc = 0x132A10u;
    SET_GPR_U32(ctx, 31, 0x132A18u);
    ctx->pc = 0x132A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A10u;
    // 0x132a14: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132950u, 0x132A10u, 0x132A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A18u;
label_132a18:
    // 0x132a18: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132a1c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x132a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x132a20: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x132a20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x132a24: 0x2484ccc8  addiu       $a0, $a0, -0x3338
    ctx->pc = 0x132a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    // 0x132a28: 0x24a528c0  addiu       $a1, $a1, 0x28C0
    ctx->pc = 0x132a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10432));
    // 0x132a2c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x132A2Cu;
    SET_GPR_U32(ctx, 31, 0x132A34u);
    ctx->pc = 0x132A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A2Cu;
    // 0x132a30: 0x24c662a0  addiu       $a2, $a2, 0x62A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x132A2Cu, 0x132A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A34u;
label_132a34:
    // 0x132a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132a38: 0xa3828210  sb          $v0, -0x7DF0($gp)
    ctx->pc = 0x132a38u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935056), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x132a3cu;
}
