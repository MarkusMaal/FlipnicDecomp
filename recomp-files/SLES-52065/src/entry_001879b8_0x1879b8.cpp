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

// Function: entry_001879b8
// Address: 0x1879b8 - 0x1879f0
void entry_001879b8_0x1879b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001879b8_0x1879b8");
#endif

    switch (ctx->pc) {
        case 0x1879c0u: goto label_1879c0;
        case 0x1879e4u: goto label_1879e4;
        case 0x1879ecu: goto label_1879ec;
        default: break;
    }

    ctx->pc = 0x1879b8u;

    // 0x1879b8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1879B8u;
    SET_GPR_U32(ctx, 31, 0x1879C0u);
    ctx->pc = 0x1879BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1879B8u;
    // 0x1879bc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1879B8u, 0x1879C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1879C0u;
label_1879c0:
    // 0x1879c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1879c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879c4: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1879C4u;
    {
        const bool branch_taken_0x1879c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1879C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1879C4u;
        // 0x1879c8: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1879c4) {
            ctx->pc = 0x1879F0u;
            return;
        }
    }
    ctx->pc = 0x1879CCu;
    // 0x1879cc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1879ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1879d0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1879d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1879d4: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1879d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1879d8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1879d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1879dc: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1879DCu;
    SET_GPR_U32(ctx, 31, 0x1879E4u);
    ctx->pc = 0x1879E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1879DCu;
    // 0x1879e0: 0x24a5f9c0  addiu       $a1, $a1, -0x640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1879DCu, 0x1879E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1879E4u;
label_1879e4:
    // 0x1879e4: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1879E4u;
    SET_GPR_U32(ctx, 31, 0x1879ECu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1879E4u, 0x1879ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1879ECu;
label_1879ec:
    // 0x1879ec: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1879ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x1879f0u;
}
