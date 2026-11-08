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

// Function: entry_001c59ac
// Address: 0x1c59ac - 0x1c59d8
void entry_001c59ac_0x1c59ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c59ac_0x1c59ac");
#endif

    switch (ctx->pc) {
        case 0x1c59b4u: goto label_1c59b4;
        case 0x1c59ccu: goto label_1c59cc;
        default: break;
    }

    ctx->pc = 0x1c59acu;

    // 0x1c59ac: 0xc06e598  jal         func_1B9660
    ctx->pc = 0x1C59ACu;
    SET_GPR_U32(ctx, 31, 0x1C59B4u);
    ctx->pc = 0x1C59B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C59ACu;
    // 0x1c59b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9660u, 0x1C59ACu, 0x1C59B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C59B4u;
label_1c59b4:
    // 0x1c59b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c59b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59b8: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x1c59b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1c59bc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C59BCu;
    {
        const bool branch_taken_0x1c59bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59BCu;
        // 0x1c59c0: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59bc) {
            ctx->pc = 0x1C5A64u;
            return;
        }
    }
    ctx->pc = 0x1C59C4u;
    // 0x1c59c4: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1C59C4u;
    SET_GPR_U32(ctx, 31, 0x1C59CCu);
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1C59C4u, 0x1C59CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C59CCu;
label_1c59cc:
    // 0x1c59cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c59ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c59d0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1C59D0u;
    {
        const bool branch_taken_0x1c59d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59D0u;
        // 0x1c59d4: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59d0) {
            ctx->pc = 0x1C5A50u;
            return;
        }
    }
    ctx->pc = 0x1C59D8u;
}
