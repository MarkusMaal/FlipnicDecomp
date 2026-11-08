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

// Function: entry_0011d688
// Address: 0x11d688 - 0x11d6a0
void entry_0011d688_0x11d688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d688_0x11d688");
#endif

    switch (ctx->pc) {
        case 0x11d690u: goto label_11d690;
        default: break;
    }

    ctx->pc = 0x11d688u;

    // 0x11d688: 0xc04772c  jal         func_11DCB0
    ctx->pc = 0x11D688u;
    SET_GPR_U32(ctx, 31, 0x11D690u);
    ctx->pc = 0x11D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D688u;
    // 0x11d68c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DCB0u, 0x11D688u, 0x11D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D690u;
label_11d690:
    // 0x11d690: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D690u;
    {
        const bool branch_taken_0x11d690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D690u;
        // 0x11d694: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d690) {
            ctx->pc = 0x11D6A0u;
            return;
        }
    }
    ctx->pc = 0x11D698u;
    // 0x11d698: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x11D698u;
    {
        const bool branch_taken_0x11d698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D698u;
        // 0x11d69c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d698) {
            ctx->pc = 0x11DC7Cu;
            return;
        }
    }
    ctx->pc = 0x11D6A0u;
}
