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

// Function: entry_001c545c
// Address: 0x1c545c - 0x1c5498
void entry_001c545c_0x1c545c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c545c_0x1c545c");
#endif

    switch (ctx->pc) {
        case 0x1c5484u: goto label_1c5484;
        case 0x1c5490u: goto label_1c5490;
        default: break;
    }

    ctx->pc = 0x1c545cu;

    // 0x1c545c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c5460: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c5460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c5464: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x1c5464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x1c5468: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c5468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c546c: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C546Cu;
    {
        const bool branch_taken_0x1c546c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c546c) {
            ctx->pc = 0x1C5510u;
            return;
        }
    }
    ctx->pc = 0x1C5474u;
    // 0x1c5474: 0xae050070  sw          $a1, 0x70($s0)
    ctx->pc = 0x1c5474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
    // 0x1c5478: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c5478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c547c: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C547Cu;
    SET_GPR_U32(ctx, 31, 0x1C5484u);
    ctx->pc = 0x1C5480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C547Cu;
    // 0x1c5480: 0xae06006c  sw          $a2, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C547Cu, 0x1C5484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5484u;
label_1c5484:
    // 0x1c5484: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5488: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C5488u;
    SET_GPR_U32(ctx, 31, 0x1C5490u);
    ctx->pc = 0x1C548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5488u;
    // 0x1c548c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C5488u, 0x1C5490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5490u;
label_1c5490:
    // 0x1c5490: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1C5490u;
    {
        const bool branch_taken_0x1c5490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5490) {
            ctx->pc = 0x1C5510u;
            return;
        }
    }
    ctx->pc = 0x1C5498u;
}
