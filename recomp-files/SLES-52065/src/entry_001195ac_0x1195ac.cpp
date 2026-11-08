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

// Function: entry_001195ac
// Address: 0x1195ac - 0x1195c0
void entry_001195ac_0x1195ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001195ac_0x1195ac");
#endif

    switch (ctx->pc) {
        case 0x1195b8u: goto label_1195b8;
        default: break;
    }

    ctx->pc = 0x1195acu;

    // 0x1195ac: 0x0  nop
    ctx->pc = 0x1195acu;
    // NOP
    // 0x1195b0: 0xc04018c  jal         func_100630
    ctx->pc = 0x1195B0u;
    SET_GPR_U32(ctx, 31, 0x1195B8u);
    ctx->pc = 0x1195B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1195B0u;
    // 0x1195b4: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1195B0u, 0x1195B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195B8u;
label_1195b8:
    // 0x1195b8: 0xc04018c  jal         func_100630
    ctx->pc = 0x1195B8u;
    SET_GPR_U32(ctx, 31, 0x1195C0u);
    ctx->pc = 0x1195BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1195B8u;
    // 0x1195bc: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1195B8u, 0x1195C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195C0u;
}
