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

// Function: entry_001c56e8
// Address: 0x1c56e8 - 0x1c5720
void entry_001c56e8_0x1c56e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c56e8_0x1c56e8");
#endif

    switch (ctx->pc) {
        case 0x1c56fcu: goto label_1c56fc;
        case 0x1c5708u: goto label_1c5708;
        case 0x1c5718u: goto label_1c5718;
        default: break;
    }

    ctx->pc = 0x1c56e8u;

    // 0x1c56e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c56e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c56ec: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1c56ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1c56f0: 0x24a51f20  addiu       $a1, $a1, 0x1F20
    ctx->pc = 0x1c56f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7968));
    // 0x1c56f4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C56F4u;
    SET_GPR_U32(ctx, 31, 0x1C56FCu);
    ctx->pc = 0x1C56F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56F4u;
    // 0x1c56f8: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C56F4u, 0x1C56FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56FCu;
label_1c56fc:
    // 0x1c56fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c56fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5700: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1C5700u;
    SET_GPR_U32(ctx, 31, 0x1C5708u);
    ctx->pc = 0x1C5704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5700u;
    // 0x1c5704: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1C5700u, 0x1C5708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5708u;
label_1c5708:
    // 0x1c5708: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c5708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c570c: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1c570cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1c5710: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C5710u;
    SET_GPR_U32(ctx, 31, 0x1C5718u);
    ctx->pc = 0x1C5714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5710u;
    // 0x1c5714: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C5710u, 0x1C5718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5718u;
label_1c5718:
    // 0x1c5718: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c5718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c571c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c571cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c5720u;
}
