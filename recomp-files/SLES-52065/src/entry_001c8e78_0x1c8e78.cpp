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

// Function: entry_001c8e78
// Address: 0x1c8e78 - 0x1c8e98
void entry_001c8e78_0x1c8e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8e78_0x1c8e78");
#endif

    switch (ctx->pc) {
        case 0x1c8e90u: goto label_1c8e90;
        default: break;
    }

    ctx->pc = 0x1c8e78u;

    // 0x1c8e78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8e7c: 0x16430006  bne         $s2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8E7Cu;
    {
        const bool branch_taken_0x1c8e7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E7Cu;
        // 0x1c8e80: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e7c) {
            ctx->pc = 0x1C8E98u;
            return;
        }
    }
    ctx->pc = 0x1C8E84u;
    // 0x1c8e84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e88: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C8E88u;
    SET_GPR_U32(ctx, 31, 0x1C8E90u);
    ctx->pc = 0x1C8E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E88u;
    // 0x1c8e8c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C8E88u, 0x1C8E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E90u;
label_1c8e90:
    // 0x1c8e90: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1C8E90u;
    {
        const bool branch_taken_0x1c8e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E90u;
        // 0x1c8e94: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e90) {
            ctx->pc = 0x1C8FD8u;
            return;
        }
    }
    ctx->pc = 0x1C8E98u;
}
