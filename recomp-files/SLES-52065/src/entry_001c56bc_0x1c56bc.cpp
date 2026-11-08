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

// Function: entry_001c56bc
// Address: 0x1c56bc - 0x1c56d4
void entry_001c56bc_0x1c56bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c56bc_0x1c56bc");
#endif

    switch (ctx->pc) {
        case 0x1c56c8u: goto label_1c56c8;
        default: break;
    }

    ctx->pc = 0x1c56bcu;

    // 0x1c56bc: 0x0  nop
    ctx->pc = 0x1c56bcu;
    // NOP
    // 0x1c56c0: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1C56C0u;
    SET_GPR_U32(ctx, 31, 0x1C56C8u);
    ctx->pc = 0x1C56C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56C0u;
    // 0x1c56c4: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1C56C0u, 0x1C56C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56C8u;
label_1c56c8:
    // 0x1c56c8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x1c56c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1c56cc: 0x1462ffea  bne         $v1, $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1C56CCu;
    {
        const bool branch_taken_0x1c56cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c56cc) {
            ctx->pc = 0x1C5678u;
            return;
        }
    }
    ctx->pc = 0x1C56D4u;
}
