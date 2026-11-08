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

// Function: entry_001f6e8c
// Address: 0x1f6e8c - 0x1f6eac
void entry_001f6e8c_0x1f6e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6e8c_0x1f6e8c");
#endif

    ctx->pc = 0x1f6e8cu;

label_1f6e8c:
    // 0x1f6e8c: 0x8e231340  lw          $v1, 0x1340($s1)
    ctx->pc = 0x1f6e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4928)));
label_1f6e90:
    // 0x1f6e90: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1f6e94:
    if (ctx->pc == 0x1F6E94u) {
        ctx->pc = 0x1F6E98u;
        goto label_1f6e98;
    }
    ctx->pc = 0x1F6E90u;
    {
        const bool branch_taken_0x1f6e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e90) {
            ctx->pc = 0x1F6EACu;
            return;
        }
    }
    ctx->pc = 0x1F6E98u;
label_1f6e98:
    // 0x1f6e98: 0x8e02bb68  lw          $v0, -0x4498($s0)
    ctx->pc = 0x1f6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949736)));
label_1f6e9c:
    // 0x1f6e9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f6ea0:
    if (ctx->pc == 0x1F6EA0u) {
        ctx->pc = 0x1F6EA4u;
        goto label_1f6ea4;
    }
    ctx->pc = 0x1F6E9Cu;
    {
        const bool branch_taken_0x1f6e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e9c) {
            ctx->pc = 0x1F6EACu;
            return;
        }
    }
    ctx->pc = 0x1F6EA4u;
label_1f6ea4:
    // 0x1f6ea4: 0x60f809  jalr        $v1
label_1f6ea8:
    if (ctx->pc == 0x1F6EA8u) {
        ctx->pc = 0x1F6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EA4u;
        // 0x1f6ea8: 0x8e04bb68  lw          $a0, -0x4498($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6EACu;
        goto label_fallthrough_0x1f6ea4;
    }
    ctx->pc = 0x1F6EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F6EACu);
        ctx->pc = 0x1F6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EA4u;
        // 0x1f6ea8: 0x8e04bb68  lw          $a0, -0x4498($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949736)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6EA4u, 0x1F6EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1f6ea4:
    ctx->pc = 0x1F6EACu;
}
