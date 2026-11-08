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

// Function: entry_001235bc
// Address: 0x1235bc - 0x1235f4
void entry_001235bc_0x1235bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001235bc_0x1235bc");
#endif

    switch (ctx->pc) {
        case 0x1235c4u: goto label_1235c4;
        case 0x1235e8u: goto label_1235e8;
        case 0x1235f0u: goto label_1235f0;
        default: break;
    }

    ctx->pc = 0x1235bcu;

    // 0x1235bc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1235BCu;
    SET_GPR_U32(ctx, 31, 0x1235C4u);
    ctx->pc = 0x1235C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235BCu;
    // 0x1235c0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1235BCu, 0x1235C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235C4u;
label_1235c4:
    // 0x1235c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1235c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235c8: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1235C8u;
    {
        const bool branch_taken_0x1235c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1235CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235C8u;
        // 0x1235cc: 0x2611000c  addiu       $s1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235c8) {
            ctx->pc = 0x1235F4u;
            return;
        }
    }
    ctx->pc = 0x1235D0u;
    // 0x1235d0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1235d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1235d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1235d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1235d8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1235d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1235dc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1235dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1235e0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1235E0u;
    SET_GPR_U32(ctx, 31, 0x1235E8u);
    ctx->pc = 0x1235E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235E0u;
    // 0x1235e4: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1235E0u, 0x1235E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235E8u;
label_1235e8:
    // 0x1235e8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1235E8u;
    SET_GPR_U32(ctx, 31, 0x1235F0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1235E8u, 0x1235F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235F0u;
label_1235f0:
    // 0x1235f0: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x1235f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x1235f4u;
}
