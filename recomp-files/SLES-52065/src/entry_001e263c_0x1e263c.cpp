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

// Function: entry_001e263c
// Address: 0x1e263c - 0x1e2684
void entry_001e263c_0x1e263c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e263c_0x1e263c");
#endif

    switch (ctx->pc) {
        case 0x1e265cu: goto label_1e265c;
        default: break;
    }

    ctx->pc = 0x1e263cu;

    // 0x1e263c: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x1e263cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2640: 0x1a000026  blez        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E2640u;
    {
        const bool branch_taken_0x1e2640 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1e2640) {
            ctx->pc = 0x1E26DCu;
            return;
        }
    }
    ctx->pc = 0x1E2648u;
    // 0x1e2648: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1e2648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e264c: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x1e264cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1e2650: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1e2650u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1e2654: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1E2654u;
    SET_GPR_U32(ctx, 31, 0x1E265Cu);
    ctx->pc = 0x1E2658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2654u;
    // 0x1e2658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1E2654u, 0x1E265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E265Cu;
label_1e265c:
    // 0x1e265c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e2660: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1e2660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1e2664: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e2664u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e2668: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1e2668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1e266c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e266cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e2670: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1e2670u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1e2674: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e2674u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2678: 0x50102f  dsubu       $v0, $v0, $s0
    ctx->pc = 0x1e2678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 16));
    // 0x1e267c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E267Cu;
    {
        const bool branch_taken_0x1e267c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E267Cu;
        // 0x1e2680: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e267c) {
            ctx->pc = 0x1E26DCu;
            return;
        }
    }
    ctx->pc = 0x1E2684u;
}
