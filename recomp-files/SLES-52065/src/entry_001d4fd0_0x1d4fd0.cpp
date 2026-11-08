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

// Function: entry_001d4fd0
// Address: 0x1d4fd0 - 0x1d4ffc
void entry_001d4fd0_0x1d4fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4fd0_0x1d4fd0");
#endif

    switch (ctx->pc) {
        case 0x1d4fdcu: goto label_1d4fdc;
        default: break;
    }

    ctx->pc = 0x1d4fd0u;

    // 0x1d4fd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4fd4: 0xc077506  jal         func_1DD418
    ctx->pc = 0x1D4FD4u;
    SET_GPR_U32(ctx, 31, 0x1D4FDCu);
    ctx->pc = 0x1D4FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4FD4u;
    // 0x1d4fd8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD418u, 0x1D4FD4u, 0x1D4FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4FDCu;
label_1d4fdc:
    // 0x1d4fdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d4fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d4fe0: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x1d4fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1d4fe4: 0x28430018  slti        $v1, $v0, 0x18
    ctx->pc = 0x1d4fe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d4fe8: 0x2446ffe8  addiu       $a2, $v0, -0x18
    ctx->pc = 0x1d4fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x1d4fec: 0x522804  sllv        $a1, $s2, $v0
    ctx->pc = 0x1d4fecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4ff0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4FF0u;
    {
        const bool branch_taken_0x1d4ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FF0u;
        // 0x1d4ff4: 0x38640001  xori        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ff0) {
            ctx->pc = 0x1D4FFCu;
            return;
        }
    }
    ctx->pc = 0x1D4FF8u;
    // 0x1d4ff8: 0xd22804  sllv        $a1, $s2, $a2
    ctx->pc = 0x1d4ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 6) & 0x1F));
    ctx->pc = 0x1d4ffcu;
}
