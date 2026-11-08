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

// Function: entry_001c3294
// Address: 0x1c3294 - 0x1c32ac
void entry_001c3294_0x1c3294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3294_0x1c3294");
#endif

    switch (ctx->pc) {
        case 0x1c32a4u: goto label_1c32a4;
        default: break;
    }

    ctx->pc = 0x1c3294u;

    // 0x1c3294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3298: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c329c: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C329Cu;
    SET_GPR_U32(ctx, 31, 0x1C32A4u);
    ctx->pc = 0x1C32A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C329Cu;
    // 0x1c32a0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C329Cu, 0x1C32A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32A4u;
label_1c32a4:
    // 0x1c32a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C32A4u;
    {
        const bool branch_taken_0x1c32a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c32a4) {
            ctx->pc = 0x1C32B0u;
            return;
        }
    }
    ctx->pc = 0x1C32ACu;
}
