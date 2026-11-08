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

// Function: entry_001c79c8
// Address: 0x1c79c8 - 0x1c79d8
void entry_001c79c8_0x1c79c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c79c8_0x1c79c8");
#endif

    switch (ctx->pc) {
        case 0x1c79d4u: goto label_1c79d4;
        default: break;
    }

    ctx->pc = 0x1c79c8u;

    // 0x1c79c8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1c79c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c79cc: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1C79CCu;
    SET_GPR_U32(ctx, 31, 0x1C79D4u);
    ctx->pc = 0x1C79D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79CCu;
    // 0x1c79d0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1C79CCu, 0x1C79D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79D4u;
label_1c79d4:
    // 0x1c79d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c79d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1c79d8u;
}
