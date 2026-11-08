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

// Function: entry_00122360
// Address: 0x122360 - 0x122390
void entry_00122360_0x122360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122360_0x122360");
#endif

    switch (ctx->pc) {
        case 0x122368u: goto label_122368;
        case 0x122388u: goto label_122388;
        default: break;
    }

    ctx->pc = 0x122360u;

    // 0x122360: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x122360u;
    SET_GPR_U32(ctx, 31, 0x122368u);
    ctx->pc = 0x122364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122360u;
    // 0x122364: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x122360u, 0x122368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122368u;
label_122368:
    // 0x122368: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x122368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12236c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12236Cu;
    {
        const bool branch_taken_0x12236c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x122370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12236Cu;
        // 0x122370: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12236c) {
            ctx->pc = 0x122390u;
            return;
        }
    }
    ctx->pc = 0x122374u;
    // 0x122374: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122378: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x12237c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12237cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122380: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x122380u;
    SET_GPR_U32(ctx, 31, 0x122388u);
    ctx->pc = 0x122384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122380u;
    // 0x122384: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x122380u, 0x122388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122388u;
label_122388:
    // 0x122388: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122388u;
    SET_GPR_U32(ctx, 31, 0x122390u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122388u, 0x122390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122390u;
}
