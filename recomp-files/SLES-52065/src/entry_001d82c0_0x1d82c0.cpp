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

// Function: entry_001d82c0
// Address: 0x1d82c0 - 0x1d82ec
void entry_001d82c0_0x1d82c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d82c0_0x1d82c0");
#endif

    switch (ctx->pc) {
        case 0x1d82ccu: goto label_1d82cc;
        default: break;
    }

    ctx->pc = 0x1d82c0u;

    // 0x1d82c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d82c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d82c4: 0xc077506  jal         func_1DD418
    ctx->pc = 0x1D82C4u;
    SET_GPR_U32(ctx, 31, 0x1D82CCu);
    ctx->pc = 0x1D82C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D82C4u;
    // 0x1d82c8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD418u, 0x1D82C4u, 0x1D82CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82CCu;
label_1d82cc:
    // 0x1d82cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d82d0: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x1d82d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1d82d4: 0x28430018  slti        $v1, $v0, 0x18
    ctx->pc = 0x1d82d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d82d8: 0x2446ffe8  addiu       $a2, $v0, -0x18
    ctx->pc = 0x1d82d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x1d82dc: 0x522804  sllv        $a1, $s2, $v0
    ctx->pc = 0x1d82dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d82e0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D82E0u;
    {
        const bool branch_taken_0x1d82e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82E0u;
        // 0x1d82e4: 0x38640001  xori        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82e0) {
            ctx->pc = 0x1D82ECu;
            return;
        }
    }
    ctx->pc = 0x1D82E8u;
    // 0x1d82e8: 0xd22804  sllv        $a1, $s2, $a2
    ctx->pc = 0x1d82e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 6) & 0x1F));
    ctx->pc = 0x1d82ecu;
}
