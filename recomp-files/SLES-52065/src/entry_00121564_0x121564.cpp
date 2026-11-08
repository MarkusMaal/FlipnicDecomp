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

// Function: entry_00121564
// Address: 0x121564 - 0x12159c
void entry_00121564_0x121564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121564_0x121564");
#endif

    switch (ctx->pc) {
        case 0x121574u: goto label_121574;
        case 0x121594u: goto label_121594;
        default: break;
    }

    ctx->pc = 0x121564u;

    // 0x121564: 0x0  nop
    ctx->pc = 0x121564u;
    // NOP
    // 0x121568: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x121568u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x12156c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x12156Cu;
    SET_GPR_U32(ctx, 31, 0x121574u);
    ctx->pc = 0x121570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12156Cu;
    // 0x121570: 0x26d00008  addiu       $s0, $s6, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x12156Cu, 0x121574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121574u;
label_121574:
    // 0x121574: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x121574u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121578: 0x16e00008  bnez        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x121578u;
    {
        const bool branch_taken_0x121578 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x12157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121578u;
        // 0x12157c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121578) {
            ctx->pc = 0x12159Cu;
            return;
        }
    }
    ctx->pc = 0x121580u;
    // 0x121580: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x121580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x121584: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x121584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x121588: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x121588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12158c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12158Cu;
    SET_GPR_U32(ctx, 31, 0x121594u);
    ctx->pc = 0x121590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12158Cu;
    // 0x121590: 0x24a5e970  addiu       $a1, $a1, -0x1690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12158Cu, 0x121594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121594u;
label_121594:
    // 0x121594: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x121594u;
    SET_GPR_U32(ctx, 31, 0x12159Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x121594u, 0x12159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12159Cu;
}
