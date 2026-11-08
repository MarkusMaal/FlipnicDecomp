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

// Function: entry_001b6f18
// Address: 0x1b6f18 - 0x1b6f50
void entry_001b6f18_0x1b6f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6f18_0x1b6f18");
#endif

    switch (ctx->pc) {
        case 0x1b6f20u: goto label_1b6f20;
        case 0x1b6f44u: goto label_1b6f44;
        case 0x1b6f4cu: goto label_1b6f4c;
        default: break;
    }

    ctx->pc = 0x1b6f18u;

    // 0x1b6f18: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6F18u;
    SET_GPR_U32(ctx, 31, 0x1B6F20u);
    ctx->pc = 0x1B6F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F18u;
    // 0x1b6f1c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6F18u, 0x1B6F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F20u;
label_1b6f20:
    // 0x1b6f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f24: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6F24u;
    {
        const bool branch_taken_0x1b6f24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F24u;
        // 0x1b6f28: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f24) {
            ctx->pc = 0x1B6F50u;
            return;
        }
    }
    ctx->pc = 0x1B6F2Cu;
    // 0x1b6f2c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1b6f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1b6f30: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b6f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b6f34: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1b6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1b6f38: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1b6f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b6f3c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1B6F3Cu;
    SET_GPR_U32(ctx, 31, 0x1B6F44u);
    ctx->pc = 0x1B6F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F3Cu;
    // 0x1b6f40: 0x24a50fa0  addiu       $a1, $a1, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1B6F3Cu, 0x1B6F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F44u;
label_1b6f44:
    // 0x1b6f44: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1B6F44u;
    SET_GPR_U32(ctx, 31, 0x1B6F4Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1B6F44u, 0x1B6F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F4Cu;
label_1b6f4c:
    // 0x1b6f4c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1b6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x1b6f50u;
}
