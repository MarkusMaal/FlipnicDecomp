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

// Function: entry_001ec51c
// Address: 0x1ec51c - 0x1ec554
void entry_001ec51c_0x1ec51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec51c_0x1ec51c");
#endif

    switch (ctx->pc) {
        case 0x1ec550u: goto label_1ec550;
        default: break;
    }

    ctx->pc = 0x1ec51cu;

    // 0x1ec51c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1ec51cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1ec520: 0x2463be58  addiu       $v1, $v1, -0x41A8
    ctx->pc = 0x1ec520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950488));
    // 0x1ec524: 0x8ca4be50  lw          $a0, -0x41B0($a1)
    ctx->pc = 0x1ec524u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38BE50u));
    // 0x1ec528: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ec528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ec52c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1ec52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1ec530: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1ec530u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ec534: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ec534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ec538: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1ec538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ec53c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ec53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1ec540: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ec540u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec544: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x1ec544u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ec548: 0xc07ad94  jal         func_1EB650
    ctx->pc = 0x1EC548u;
    SET_GPR_U32(ctx, 31, 0x1EC550u);
    ctx->pc = 0x1EC54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC548u;
    // 0x1ec54c: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB650u, 0x1EC548u, 0x1EC550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC550u;
label_1ec550:
    // 0x1ec550: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ec550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ec554u;
}
