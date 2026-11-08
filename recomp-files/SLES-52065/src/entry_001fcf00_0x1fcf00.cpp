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

// Function: entry_001fcf00
// Address: 0x1fcf00 - 0x1fcf1c
void entry_001fcf00_0x1fcf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcf00_0x1fcf00");
#endif

    switch (ctx->pc) {
        case 0x1fcf18u: goto label_1fcf18;
        default: break;
    }

    ctx->pc = 0x1fcf00u;

    // 0x1fcf00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1fcf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fcf04: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCF04u;
    {
        const bool branch_taken_0x1fcf04 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1FCF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF04u;
        // 0x1fcf08: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf04) {
            ctx->pc = 0x1FCF1Cu;
            return;
        }
    }
    ctx->pc = 0x1FCF0Cu;
    // 0x1fcf0c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1fcf0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf10: 0xc08009a  jal         func_200268
    ctx->pc = 0x1FCF10u;
    SET_GPR_U32(ctx, 31, 0x1FCF18u);
    ctx->pc = 0x1FCF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF10u;
    // 0x1fcf14: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x1FCF10u, 0x1FCF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF18u;
label_1fcf18:
    // 0x1fcf18: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1fcf18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    ctx->pc = 0x1fcf1cu;
}
