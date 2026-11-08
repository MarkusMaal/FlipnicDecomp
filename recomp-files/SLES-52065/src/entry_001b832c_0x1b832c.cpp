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

// Function: entry_001b832c
// Address: 0x1b832c - 0x1b8364
void entry_001b832c_0x1b832c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b832c_0x1b832c");
#endif

    switch (ctx->pc) {
        case 0x1b8344u: goto label_1b8344;
        case 0x1b8358u: goto label_1b8358;
        default: break;
    }

    ctx->pc = 0x1b832cu;

    // 0x1b832c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B832Cu;
    {
        const bool branch_taken_0x1b832c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B832Cu;
        // 0x1b8330: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b832c) {
            ctx->pc = 0x1B8368u;
            return;
        }
    }
    ctx->pc = 0x1B8334u;
    // 0x1b8334: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B8334u;
    {
        const bool branch_taken_0x1b8334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8334u;
        // 0x1b8338: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8334) {
            ctx->pc = 0x1B8364u;
            return;
        }
    }
    ctx->pc = 0x1B833Cu;
    // 0x1b833c: 0xc06e0e8  jal         func_1B83A0
    ctx->pc = 0x1B833Cu;
    SET_GPR_U32(ctx, 31, 0x1B8344u);
    ctx->pc = 0x1B83A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83A0u, 0x1B833Cu, 0x1B8344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8344u;
label_1b8344:
    // 0x1b8344: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b8344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8348: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8348u;
    {
        const bool branch_taken_0x1b8348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8348u;
        // 0x1b834c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8348) {
            ctx->pc = 0x1B8364u;
            return;
        }
    }
    ctx->pc = 0x1B8350u;
    // 0x1b8350: 0xc06e0e8  jal         func_1B83A0
    ctx->pc = 0x1B8350u;
    SET_GPR_U32(ctx, 31, 0x1B8358u);
    ctx->pc = 0x1B83A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83A0u, 0x1B8350u, 0x1B8358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8358u;
label_1b8358:
    // 0x1b8358: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b8358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b835c: 0xc06ed40  jal         func_1BB500
    ctx->pc = 0x1B835Cu;
    SET_GPR_U32(ctx, 31, 0x1B8364u);
    ctx->pc = 0x1B8360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B835Cu;
    // 0x1b8360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB500u, 0x1B835Cu, 0x1B8364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8364u;
}
