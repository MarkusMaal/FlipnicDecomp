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

// Function: entry_0013f098
// Address: 0x13f098 - 0x13f0a4
void entry_0013f098_0x13f098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f098_0x13f098");
#endif

    switch (ctx->pc) {
        case 0x13f0a0u: goto label_13f0a0;
        default: break;
    }

    ctx->pc = 0x13f098u;

    // 0x13f098: 0xc050ce4  jal         func_143390
    ctx->pc = 0x13F098u;
    SET_GPR_U32(ctx, 31, 0x13F0A0u);
    ctx->pc = 0x13F09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F098u;
    // 0x13f09c: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143390u, 0x13F098u, 0x13F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F0A0u;
label_13f0a0:
    // 0x13f0a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x13f0a4u;
}
