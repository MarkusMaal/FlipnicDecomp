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

// Function: entry_001c5fdc
// Address: 0x1c5fdc - 0x1c5fe8
void entry_001c5fdc_0x1c5fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5fdc_0x1c5fdc");
#endif

    switch (ctx->pc) {
        case 0x1c5fe4u: goto label_1c5fe4;
        default: break;
    }

    ctx->pc = 0x1c5fdcu;

    // 0x1c5fdc: 0xc0718e4  jal         func_1C6390
    ctx->pc = 0x1C5FDCu;
    SET_GPR_U32(ctx, 31, 0x1C5FE4u);
    ctx->pc = 0x1C5FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5FDCu;
    // 0x1c5fe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6390u, 0x1C5FDCu, 0x1C5FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FE4u;
label_1c5fe4:
    // 0x1c5fe4: 0xa240006c  sb          $zero, 0x6C($s2)
    ctx->pc = 0x1c5fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 108), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c5fe8u;
}
