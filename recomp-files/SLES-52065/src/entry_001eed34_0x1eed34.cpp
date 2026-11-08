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

// Function: entry_001eed34
// Address: 0x1eed34 - 0x1eed60
void entry_001eed34_0x1eed34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eed34_0x1eed34");
#endif

    switch (ctx->pc) {
        case 0x1eed3cu: goto label_1eed3c;
        default: break;
    }

    ctx->pc = 0x1eed34u;

    // 0x1eed34: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EED34u;
    SET_GPR_U32(ctx, 31, 0x1EED3Cu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EED34u, 0x1EED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED3Cu;
label_1eed3c:
    // 0x1eed3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1eed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1eed40: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1eed40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1eed44: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1eed44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x1eed48: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1eed48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1eed4c: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x1eed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x1eed50: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1eed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1eed54: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1EED54u;
    {
        const bool branch_taken_0x1eed54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eed54) {
            ctx->pc = 0x1EED58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EED54u;
            // 0x1eed58: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EED90u;
            return;
        }
    }
    ctx->pc = 0x1EED5Cu;
    // 0x1eed5c: 0x0  nop
    ctx->pc = 0x1eed5cu;
    // NOP
    ctx->pc = 0x1eed60u;
}
