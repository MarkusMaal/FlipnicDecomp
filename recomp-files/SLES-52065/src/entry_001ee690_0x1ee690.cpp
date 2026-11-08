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

// Function: entry_001ee690
// Address: 0x1ee690 - 0x1ee6cc
void entry_001ee690_0x1ee690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee690_0x1ee690");
#endif

    switch (ctx->pc) {
        case 0x1ee6b8u: goto label_1ee6b8;
        case 0x1ee6c8u: goto label_1ee6c8;
        default: break;
    }

    ctx->pc = 0x1ee690u;

    // 0x1ee690: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ee690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee694: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ee694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee698: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ee698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1ee69c: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x1ee69cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x1ee6a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee6a4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1ee6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ee6a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ee6a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee6ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ee6acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee6b0: 0xc07b704  jal         func_1EDC10
    ctx->pc = 0x1EE6B0u;
    SET_GPR_U32(ctx, 31, 0x1EE6B8u);
    ctx->pc = 0x1EE6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE6B0u;
    // 0x1ee6b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC10u, 0x1EE6B0u, 0x1EE6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE6B8u;
label_1ee6b8:
    // 0x1ee6b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE6B8u;
    {
        const bool branch_taken_0x1ee6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6B8u;
        // 0x1ee6bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee6b8) {
            ctx->pc = 0x1EE6CCu;
            return;
        }
    }
    ctx->pc = 0x1EE6C0u;
    // 0x1ee6c0: 0xc07b836  jal         func_1EE0D8
    ctx->pc = 0x1EE6C0u;
    SET_GPR_U32(ctx, 31, 0x1EE6C8u);
    ctx->pc = 0x1EE6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE6C0u;
    // 0x1ee6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0D8u, 0x1EE6C0u, 0x1EE6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE6C8u;
label_1ee6c8:
    // 0x1ee6c8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1ee6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x1ee6ccu;
}
