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

// Function: entry_001ad2e8
// Address: 0x1ad2e8 - 0x1ad308
void entry_001ad2e8_0x1ad2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad2e8_0x1ad2e8");
#endif

    switch (ctx->pc) {
        case 0x1ad2f8u: goto label_1ad2f8;
        default: break;
    }

    ctx->pc = 0x1ad2e8u;

    // 0x1ad2e8: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1ad2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1ad2ec: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x1ad2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ad2f0: 0xc057040  jal         func_15C100
    ctx->pc = 0x1AD2F0u;
    SET_GPR_U32(ctx, 31, 0x1AD2F8u);
    ctx->pc = 0x1AD2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD2F0u;
    // 0x1ad2f4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AD2F0u, 0x1AD2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD2F8u;
label_1ad2f8:
    // 0x1ad2f8: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x1ad2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1ad2fc: 0xac62067c  sw          $v0, 0x67C($v1)
    ctx->pc = 0x1ad2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1660), GPR_U32(ctx, 2));
    // 0x1ad300: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1AD300u;
    {
        const bool branch_taken_0x1ad300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD300u;
        // 0x1ad304: 0x26d60020  addiu       $s6, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad300) {
            ctx->pc = 0x1AD36Cu;
            return;
        }
    }
    ctx->pc = 0x1AD308u;
}
