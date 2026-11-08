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

// Function: entry_00205f34
// Address: 0x205f34 - 0x205f60
void entry_00205f34_0x205f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205f34_0x205f34");
#endif

    switch (ctx->pc) {
        case 0x205f50u: goto label_205f50;
        default: break;
    }

    ctx->pc = 0x205f34u;

    // 0x205f34: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x205f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x205f38: 0xa32023  subu        $a0, $a1, $v1
    ctx->pc = 0x205f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x205f3c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x205f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x205f40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205F40u;
    {
        const bool branch_taken_0x205f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F40u;
        // 0x205f44: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f40) {
            ctx->pc = 0x205F60u;
            return;
        }
    }
    ctx->pc = 0x205F48u;
    // 0x205f48: 0xc07f4fc  jal         func_1FD3F0
    ctx->pc = 0x205F48u;
    SET_GPR_U32(ctx, 31, 0x205F50u);
    ctx->pc = 0x205F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F48u;
    // 0x205f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x205F48u, 0x205F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F50u;
label_205f50:
    // 0x205f50: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x205F50u;
    {
        const bool branch_taken_0x205f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F50u;
        // 0x205f54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f50) {
            ctx->pc = 0x205FB8u;
            return;
        }
    }
    ctx->pc = 0x205F58u;
    // 0x205f58: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x205f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x205f5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x205f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x205f60u;
}
