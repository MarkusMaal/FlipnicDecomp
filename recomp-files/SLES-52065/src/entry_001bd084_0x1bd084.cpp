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

// Function: entry_001bd084
// Address: 0x1bd084 - 0x1bd0b0
void entry_001bd084_0x1bd084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd084_0x1bd084");
#endif

    switch (ctx->pc) {
        case 0x1bd098u: goto label_1bd098;
        case 0x1bd0a0u: goto label_1bd0a0;
        default: break;
    }

    ctx->pc = 0x1bd084u;

    // 0x1bd084: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bd084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bd088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd08c: 0x24a511d0  addiu       $a1, $a1, 0x11D0
    ctx->pc = 0x1bd08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4560));
    // 0x1bd090: 0xc04b3ac  jal         func_12CEB0
    ctx->pc = 0x1BD090u;
    SET_GPR_U32(ctx, 31, 0x1BD098u);
    ctx->pc = 0x1BD094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD090u;
    // 0x1bd094: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CEB0u, 0x1BD090u, 0x1BD098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD098u;
label_1bd098:
    // 0x1bd098: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1BD098u;
    SET_GPR_U32(ctx, 31, 0x1BD0A0u);
    ctx->pc = 0x1BD09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD098u;
    // 0x1bd09c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1BD098u, 0x1BD0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD0A0u;
label_1bd0a0:
    // 0x1bd0a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd0a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bd0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0a8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1BD0A8u;
    {
        const bool branch_taken_0x1bd0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0A8u;
        // 0x1bd0ac: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd0a8) {
            ctx->pc = 0x1BD13Cu;
            return;
        }
    }
    ctx->pc = 0x1BD0B0u;
}
