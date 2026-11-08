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

// Function: entry_00200ed8
// Address: 0x200ed8 - 0x200eec
void entry_00200ed8_0x200ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200ed8_0x200ed8");
#endif

    switch (ctx->pc) {
        case 0x200ee4u: goto label_200ee4;
        default: break;
    }

    ctx->pc = 0x200ed8u;

    // 0x200ed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200edc: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x200EDCu;
    SET_GPR_U32(ctx, 31, 0x200EE4u);
    ctx->pc = 0x200EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200EDCu;
    // 0x200ee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x200EDCu, 0x200EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EE4u;
label_200ee4:
    // 0x200ee4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x200EE4u;
    {
        const bool branch_taken_0x200ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EE4u;
        // 0x200ee8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ee4) {
            ctx->pc = 0x201008u;
            return;
        }
    }
    ctx->pc = 0x200EECu;
}
