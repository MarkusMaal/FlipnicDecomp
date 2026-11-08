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

// Function: entry_001b47d8
// Address: 0x1b47d8 - 0x1b480c
void entry_001b47d8_0x1b47d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b47d8_0x1b47d8");
#endif

    switch (ctx->pc) {
        case 0x1b47ecu: goto label_1b47ec;
        default: break;
    }

    ctx->pc = 0x1b47d8u;

    // 0x1b47d8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1b47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1b47dc: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1b47dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1b47e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b47e4: 0xc0485c8  jal         func_121720
    ctx->pc = 0x1B47E4u;
    SET_GPR_U32(ctx, 31, 0x1B47ECu);
    ctx->pc = 0x1B47E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B47E4u;
    // 0x1b47e8: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121720u, 0x1B47E4u, 0x1B47ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B47ECu;
label_1b47ec:
    // 0x1b47ec: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x1b47ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1b47f0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b47f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1b47f4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b47f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b47f8: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x1b47f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b47fc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B47FCu;
    {
        const bool branch_taken_0x1b47fc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47FCu;
        // 0x1b4800: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47fc) {
            ctx->pc = 0x1B480Cu;
            return;
        }
    }
    ctx->pc = 0x1B4804u;
    // 0x1b4804: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1b4804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1b4808: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1b4808u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    ctx->pc = 0x1b480cu;
}
