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

// Function: entry_001438bc
// Address: 0x1438bc - 0x1438f0
void entry_001438bc_0x1438bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001438bc_0x1438bc");
#endif

    switch (ctx->pc) {
        case 0x1438c8u: goto label_1438c8;
        case 0x1438e8u: goto label_1438e8;
        default: break;
    }

    ctx->pc = 0x1438bcu;

    // 0x1438bc: 0x0  nop
    ctx->pc = 0x1438bcu;
    // NOP
    // 0x1438c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1438C0u;
    SET_GPR_U32(ctx, 31, 0x1438C8u);
    ctx->pc = 0x1438C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1438C0u;
    // 0x1438c4: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1438C0u, 0x1438C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438C8u;
label_1438c8:
    // 0x1438c8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1438c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1438cc: 0x16e00008  bnez        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1438CCu;
    {
        const bool branch_taken_0x1438cc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1438D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438CCu;
        // 0x1438d0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1438cc) {
            ctx->pc = 0x1438F0u;
            return;
        }
    }
    ctx->pc = 0x1438D4u;
    // 0x1438d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1438d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1438d8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1438d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1438dc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1438dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1438e0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1438E0u;
    SET_GPR_U32(ctx, 31, 0x1438E8u);
    ctx->pc = 0x1438E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1438E0u;
    // 0x1438e4: 0x24a5f140  addiu       $a1, $a1, -0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1438E0u, 0x1438E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438E8u;
label_1438e8:
    // 0x1438e8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1438E8u;
    SET_GPR_U32(ctx, 31, 0x1438F0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1438E8u, 0x1438F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438F0u;
}
