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

// Function: entry_00122d44
// Address: 0x122d44 - 0x122d60
void entry_00122d44_0x122d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122d44_0x122d44");
#endif

    switch (ctx->pc) {
        case 0x122d58u: goto label_122d58;
        default: break;
    }

    ctx->pc = 0x122d44u;

    // 0x122d44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x122d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122d48: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x122d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x122d4c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x122d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x122d50: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x122D50u;
    SET_GPR_U32(ctx, 31, 0x122D58u);
    ctx->pc = 0x122D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D50u;
    // 0x122d54: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x122D50u, 0x122D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D58u;
label_122d58:
    // 0x122d58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x122d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x122d5c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x122d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x122d60u;
}
