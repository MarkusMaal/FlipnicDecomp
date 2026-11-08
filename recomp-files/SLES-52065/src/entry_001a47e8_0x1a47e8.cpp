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

// Function: entry_001a47e8
// Address: 0x1a47e8 - 0x1a4800
void entry_001a47e8_0x1a47e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a47e8_0x1a47e8");
#endif

    switch (ctx->pc) {
        case 0x1a47f4u: goto label_1a47f4;
        default: break;
    }

    ctx->pc = 0x1a47e8u;

    // 0x1a47e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a47e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a47ec: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A47ECu;
    SET_GPR_U32(ctx, 31, 0x1A47F4u);
    ctx->pc = 0x1A47F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A47ECu;
    // 0x1a47f0: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A47ECu, 0x1A47F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A47F4u;
label_1a47f4:
    // 0x1a47f4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1A47F4u;
    {
        const bool branch_taken_0x1a47f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a47f4) {
            ctx->pc = 0x1A486Cu;
            return;
        }
    }
    ctx->pc = 0x1A47FCu;
    // 0x1a47fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a47fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a4800u;
}
