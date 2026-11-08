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

// Function: entry_0019f224
// Address: 0x19f224 - 0x19f24c
void entry_0019f224_0x19f224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f224_0x19f224");
#endif

    switch (ctx->pc) {
        case 0x19f240u: goto label_19f240;
        default: break;
    }

    ctx->pc = 0x19f224u;

    // 0x19f224: 0x8e83068c  lw          $v1, 0x68C($s4)
    ctx->pc = 0x19f224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
    // 0x19f228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f22c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F22Cu;
    {
        const bool branch_taken_0x19f22c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F22Cu;
        // 0x19f230: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f22c) {
            ctx->pc = 0x19F24Cu;
            return;
        }
    }
    ctx->pc = 0x19F234u;
    // 0x19f234: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f238: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F238u;
    SET_GPR_U32(ctx, 31, 0x19F240u);
    ctx->pc = 0x19F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F238u;
    // 0x19f23c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F238u, 0x19F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F240u;
label_19f240:
    // 0x19f240: 0x100001e0  b           . + 4 + (0x1E0 << 2)
    ctx->pc = 0x19F240u;
    {
        const bool branch_taken_0x19f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f240) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F248u;
    // 0x19f248: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19f248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x19f24cu;
}
