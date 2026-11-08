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

// Function: entry_00208170
// Address: 0x208170 - 0x208184
void entry_00208170_0x208170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208170_0x208170");
#endif

    ctx->pc = 0x208170u;

    // 0x208170: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x208170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x208174: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x208174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x208178: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x208178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20817c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x20817Cu;
    {
        const bool branch_taken_0x20817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20817Cu;
        // 0x208180: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20817c) {
            ctx->pc = 0x20832Cu;
            return;
        }
    }
    ctx->pc = 0x208184u;
}
