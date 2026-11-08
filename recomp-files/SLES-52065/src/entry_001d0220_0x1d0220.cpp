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

// Function: entry_001d0220
// Address: 0x1d0220 - 0x1d0258
void entry_001d0220_0x1d0220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0220_0x1d0220");
#endif

    switch (ctx->pc) {
        case 0x1d0240u: goto label_1d0240;
        case 0x1d024cu: goto label_1d024c;
        default: break;
    }

    ctx->pc = 0x1d0220u;

    // 0x1d0220: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x1d0220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1d0224: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1d0224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1d0228: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d0228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d022c: 0x90630014  lbu         $v1, 0x14($v1)
    ctx->pc = 0x1d022cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1d0230: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D0230u;
    {
        const bool branch_taken_0x1d0230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0230u;
        // 0x1d0234: 0x26640030  addiu       $a0, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0230) {
            ctx->pc = 0x1D029Cu;
            return;
        }
    }
    ctx->pc = 0x1D0238u;
    // 0x1d0238: 0xc06dd2c  jal         func_1B74B0
    ctx->pc = 0x1D0238u;
    SET_GPR_U32(ctx, 31, 0x1D0240u);
    ctx->pc = 0x1D023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0238u;
    // 0x1d023c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74B0u, 0x1D0238u, 0x1D0240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0240u;
label_1d0240:
    // 0x1d0240: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d0240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0244: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1D0244u;
    SET_GPR_U32(ctx, 31, 0x1D024Cu);
    ctx->pc = 0x1D0248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0244u;
    // 0x1d0248: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1D0244u, 0x1D024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D024Cu;
label_1d024c:
    // 0x1d024c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d024cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0250: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0250u;
    {
        const bool branch_taken_0x1d0250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0250u;
        // 0x1d0254: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0250) {
            ctx->pc = 0x1D0278u;
            return;
        }
    }
    ctx->pc = 0x1D0258u;
}
