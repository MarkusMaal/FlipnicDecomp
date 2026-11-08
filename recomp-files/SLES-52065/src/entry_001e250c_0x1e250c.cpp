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

// Function: entry_001e250c
// Address: 0x1e250c - 0x1e2554
void entry_001e250c_0x1e250c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e250c_0x1e250c");
#endif

    switch (ctx->pc) {
        case 0x1e252cu: goto label_1e252c;
        default: break;
    }

    ctx->pc = 0x1e250cu;

    // 0x1e250c: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x1e250cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2510: 0x1a000028  blez        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1E2510u;
    {
        const bool branch_taken_0x1e2510 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1e2510) {
            ctx->pc = 0x1E25B4u;
            return;
        }
    }
    ctx->pc = 0x1E2518u;
    // 0x1e2518: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x1e2518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1e251c: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x1e251cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1e2520: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1e2520u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1e2524: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1E2524u;
    SET_GPR_U32(ctx, 31, 0x1E252Cu);
    ctx->pc = 0x1E2528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2524u;
    // 0x1e2528: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1E2524u, 0x1E252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E252Cu;
label_1e252c:
    // 0x1e252c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1e252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1e2530: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1e2530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1e2534: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e2534u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e2538: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1e2538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1e253c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e2540: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1e2540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x1e2544: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e2544u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2548: 0x50102f  dsubu       $v0, $v0, $s0
    ctx->pc = 0x1e2548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 16));
    // 0x1e254c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1E254Cu;
    {
        const bool branch_taken_0x1e254c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E254Cu;
        // 0x1e2550: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e254c) {
            ctx->pc = 0x1E25B4u;
            return;
        }
    }
    ctx->pc = 0x1E2554u;
}
