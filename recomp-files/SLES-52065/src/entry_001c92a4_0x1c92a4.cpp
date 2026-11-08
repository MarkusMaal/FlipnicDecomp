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

// Function: entry_001c92a4
// Address: 0x1c92a4 - 0x1c92c4
void entry_001c92a4_0x1c92a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c92a4_0x1c92a4");
#endif

    switch (ctx->pc) {
        case 0x1c92acu: goto label_1c92ac;
        default: break;
    }

    ctx->pc = 0x1c92a4u;

    // 0x1c92a4: 0xc072e84  jal         func_1CBA10
    ctx->pc = 0x1C92A4u;
    SET_GPR_U32(ctx, 31, 0x1C92ACu);
    ctx->pc = 0x1C92A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C92A4u;
    // 0x1c92a8: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBA10u, 0x1C92A4u, 0x1C92ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C92ACu;
label_1c92ac:
    // 0x1c92ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c92acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c92b0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c92b4: 0x24422400  addiu       $v0, $v0, 0x2400
    ctx->pc = 0x1c92b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9216));
    // 0x1c92b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c92bc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1C92BCu;
    {
        const bool branch_taken_0x1c92bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92BCu;
        // 0x1c92c0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92bc) {
            ctx->pc = 0x1C92C4u;
            return;
        }
    }
    ctx->pc = 0x1C92C4u;
}
