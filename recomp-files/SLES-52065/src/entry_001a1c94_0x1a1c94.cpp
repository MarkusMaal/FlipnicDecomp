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

// Function: entry_001a1c94
// Address: 0x1a1c94 - 0x1a1cd4
void entry_001a1c94_0x1a1c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1c94_0x1a1c94");
#endif

    switch (ctx->pc) {
        case 0x1a1cb0u: goto label_1a1cb0;
        default: break;
    }

    ctx->pc = 0x1a1c94u;

    // 0x1a1c94: 0x8e8306a0  lw          $v1, 0x6A0($s4)
    ctx->pc = 0x1a1c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1696)));
    // 0x1a1c98: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1a1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a1c9c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1a1c9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a1ca0: 0x102000bc  beqz        $at, . + 4 + (0xBC << 2)
    ctx->pc = 0x1A1CA0u;
    {
        const bool branch_taken_0x1a1ca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CA0u;
        // 0x1a1ca4: 0xae8206a0  sw          $v0, 0x6A0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ca0) {
            ctx->pc = 0x1A1F94u;
            return;
        }
    }
    ctx->pc = 0x1A1CA8u;
    // 0x1a1ca8: 0xc045ae8  jal         func_116BA0
    ctx->pc = 0x1A1CA8u;
    SET_GPR_U32(ctx, 31, 0x1A1CB0u);
    ctx->pc = 0x1A1CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1CA8u;
    // 0x1a1cac: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x1A1CA8u, 0x1A1CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CB0u;
label_1a1cb0:
    // 0x1a1cb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a1cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1cb4: 0x8e8206b0  lw          $v0, 0x6B0($s4)
    ctx->pc = 0x1a1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1712)));
    // 0x1a1cb8: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1CB8u;
    {
        const bool branch_taken_0x1a1cb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a1cb8) {
            ctx->pc = 0x1A1CD4u;
            return;
        }
    }
    ctx->pc = 0x1A1CC0u;
    // 0x1a1cc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a1cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a1cc4: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x1a1cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a1cc8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1CC8u;
    {
        const bool branch_taken_0x1a1cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1cc8) {
            ctx->pc = 0x1A1CD4u;
            return;
        }
    }
    ctx->pc = 0x1A1CD0u;
    // 0x1a1cd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a1cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a1cd4u;
}
