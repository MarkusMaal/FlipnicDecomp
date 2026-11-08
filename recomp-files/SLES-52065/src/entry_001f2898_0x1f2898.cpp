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

// Function: entry_001f2898
// Address: 0x1f2898 - 0x1f28d8
void entry_001f2898_0x1f2898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2898_0x1f2898");
#endif

    switch (ctx->pc) {
        case 0x1f28c8u: goto label_1f28c8;
        default: break;
    }

    ctx->pc = 0x1f2898u;

    // 0x1f2898: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f2898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f289c: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f289cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f28a0: 0x2484f9c0  addiu       $a0, $a0, -0x640
    ctx->pc = 0x1f28a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965696));
    // 0x1f28a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f28a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f28a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f28a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f28ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f28acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f28b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f28b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f28b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f28b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f28b8: 0x2609fa00  addiu       $t1, $s0, -0x600
    ctx->pc = 0x1f28b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965760));
    // 0x1f28bc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f28bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f28c0: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F28C0u;
    SET_GPR_U32(ctx, 31, 0x1F28C8u);
    ctx->pc = 0x1F28C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F28C0u;
    // 0x1f28c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F28C0u, 0x1F28C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28C8u;
label_1f28c8:
    // 0x1f28c8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F28C8u;
    {
        const bool branch_taken_0x1f28c8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f28c8) {
            ctx->pc = 0x1F28CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F28C8u;
            // 0x1f28cc: 0x8e02fa00  lw          $v0, -0x600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F28D8u;
            return;
        }
    }
    ctx->pc = 0x1F28D0u;
    // 0x1f28d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f28d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f28d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1f28d8u;
}
