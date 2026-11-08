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

// Function: entry_00103e2c
// Address: 0x103e2c - 0x103e68
void entry_00103e2c_0x103e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103e2c_0x103e2c");
#endif

    switch (ctx->pc) {
        case 0x103e34u: goto label_103e34;
        case 0x103e44u: goto label_103e44;
        default: break;
    }

    ctx->pc = 0x103e2cu;

    // 0x103e2c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103E2Cu;
    SET_GPR_U32(ctx, 31, 0x103E34u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103E2Cu, 0x103E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E34u;
label_103e34:
    // 0x103e34: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103E34u;
    {
        const bool branch_taken_0x103e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E34u;
        // 0x103e38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e34) {
            ctx->pc = 0x103E68u;
            return;
        }
    }
    ctx->pc = 0x103E3Cu;
    // 0x103e3c: 0xc041860  jal         func_106180
    ctx->pc = 0x103E3Cu;
    SET_GPR_U32(ctx, 31, 0x103E44u);
    ctx->pc = 0x103E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E3Cu;
    // 0x103e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x103E3Cu, 0x103E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E44u;
label_103e44:
    // 0x103e44: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103e48: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103e4c: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x103e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x103e50: 0x2463af40  addiu       $v1, $v1, -0x50C0
    ctx->pc = 0x103e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946624));
    // 0x103e54: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103e58: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103e5c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103e60: 0x2442afa0  addiu       $v0, $v0, -0x5060
    ctx->pc = 0x103e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946720));
    // 0x103e64: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103e68u;
}
