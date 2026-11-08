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

// Function: entry_001236d4
// Address: 0x1236d4 - 0x123704
void entry_001236d4_0x1236d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001236d4_0x1236d4");
#endif

    switch (ctx->pc) {
        case 0x1236dcu: goto label_1236dc;
        case 0x1236fcu: goto label_1236fc;
        default: break;
    }

    ctx->pc = 0x1236d4u;

    // 0x1236d4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1236D4u;
    SET_GPR_U32(ctx, 31, 0x1236DCu);
    ctx->pc = 0x1236D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236D4u;
    // 0x1236d8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1236D4u, 0x1236DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236DCu;
label_1236dc:
    // 0x1236dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1236dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236e0: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1236E0u;
    {
        const bool branch_taken_0x1236e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1236E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236E0u;
        // 0x1236e4: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236e0) {
            ctx->pc = 0x123704u;
            return;
        }
    }
    ctx->pc = 0x1236E8u;
    // 0x1236e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1236e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1236ec: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1236ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1236f0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1236f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1236f4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1236F4u;
    SET_GPR_U32(ctx, 31, 0x1236FCu);
    ctx->pc = 0x1236F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236F4u;
    // 0x1236f8: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1236F4u, 0x1236FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1236FCu;
label_1236fc:
    // 0x1236fc: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1236FCu;
    SET_GPR_U32(ctx, 31, 0x123704u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1236FCu, 0x123704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123704u;
}
