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

// Function: entry_0013b564
// Address: 0x13b564 - 0x13b5a0
void entry_0013b564_0x13b564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b564_0x13b564");
#endif

    switch (ctx->pc) {
        case 0x13b578u: goto label_13b578;
        case 0x13b598u: goto label_13b598;
        default: break;
    }

    ctx->pc = 0x13b564u;

    // 0x13b564: 0x0  nop
    ctx->pc = 0x13b564u;
    // NOP
    // 0x13b568: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x13b568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x13b56c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13b570: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13B570u;
    SET_GPR_U32(ctx, 31, 0x13B578u);
    ctx->pc = 0x13B574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B570u;
    // 0x13b574: 0x22140  sll         $a0, $v0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13B570u, 0x13B578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B578u;
label_13b578:
    // 0x13b578: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x13b578u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b57c: 0x16e00008  bnez        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x13B57Cu;
    {
        const bool branch_taken_0x13b57c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B57Cu;
        // 0x13b580: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b57c) {
            ctx->pc = 0x13B5A0u;
            return;
        }
    }
    ctx->pc = 0x13B584u;
    // 0x13b584: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13b584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13b588: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x13b58c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13b58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13b590: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13B590u;
    SET_GPR_U32(ctx, 31, 0x13B598u);
    ctx->pc = 0x13B594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B590u;
    // 0x13b594: 0x24a5ef90  addiu       $a1, $a1, -0x1070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13B590u, 0x13B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B598u;
label_13b598:
    // 0x13b598: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13B598u;
    SET_GPR_U32(ctx, 31, 0x13B5A0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13B598u, 0x13B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B5A0u;
}
