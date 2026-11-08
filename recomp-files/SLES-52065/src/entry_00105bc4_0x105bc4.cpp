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

// Function: entry_00105bc4
// Address: 0x105bc4 - 0x105bdc
void entry_00105bc4_0x105bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105bc4_0x105bc4");
#endif

    ctx->pc = 0x105bc4u;

    // 0x105bc4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x105bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x105bc8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105bc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105bcc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105BCCu;
    {
        const bool branch_taken_0x105bcc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BCCu;
        // 0x105bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105bcc) {
            ctx->pc = 0x105BDCu;
            return;
        }
    }
    ctx->pc = 0x105BD4u;
    // 0x105bd4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105BD4u;
    SET_GPR_U32(ctx, 31, 0x105BDCu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105BD4u, 0x105BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105BDCu;
}
