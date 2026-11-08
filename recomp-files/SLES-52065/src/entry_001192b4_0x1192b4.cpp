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

// Function: entry_001192b4
// Address: 0x1192b4 - 0x1192f4
void entry_001192b4_0x1192b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001192b4_0x1192b4");
#endif

    switch (ctx->pc) {
        case 0x1192c8u: goto label_1192c8;
        case 0x1192e0u: goto label_1192e0;
        default: break;
    }

    ctx->pc = 0x1192b4u;

    // 0x1192b4: 0x1a60001f  blez        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x1192B4u;
    {
        const bool branch_taken_0x1192b4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1192B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192B4u;
        // 0x1192b8: 0x131100  sll         $v0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192b4) {
            ctx->pc = 0x119334u;
            return;
        }
    }
    ctx->pc = 0x1192BCu;
    // 0x1192bc: 0xa79383a4  sh          $s3, -0x7C5C($gp)
    ctx->pc = 0x1192bcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935460), (uint16_t)GPR_U32(ctx, 19));
    // 0x1192c0: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1192C0u;
    SET_GPR_U32(ctx, 31, 0x1192C8u);
    ctx->pc = 0x1192C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1192C0u;
    // 0x1192c4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1192C0u, 0x1192C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1192C8u;
label_1192c8:
    // 0x1192c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1192c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1192ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1192d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192d4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1192d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1192d8: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x1192D8u;
    SET_GPR_U32(ctx, 31, 0x1192E0u);
    ctx->pc = 0x1192DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1192D8u;
    // 0x1192dc: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x1192D8u, 0x1192E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1192E0u;
label_1192e0:
    // 0x1192e0: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x1192e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1192e4: 0xaf8283a8  sw          $v0, -0x7C58($gp)
    ctx->pc = 0x1192e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935464), GPR_U32(ctx, 2));
    // 0x1192e8: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1192E8u;
    {
        const bool branch_taken_0x1192e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1192ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192E8u;
        // 0x1192ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192e8) {
            ctx->pc = 0x119334u;
            return;
        }
    }
    ctx->pc = 0x1192F0u;
    // 0x1192f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1192f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1192f4u;
}
