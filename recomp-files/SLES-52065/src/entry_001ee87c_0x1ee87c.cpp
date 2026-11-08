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

// Function: entry_001ee87c
// Address: 0x1ee87c - 0x1ee8b4
void entry_001ee87c_0x1ee87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee87c_0x1ee87c");
#endif

    switch (ctx->pc) {
        case 0x1ee8a4u: goto label_1ee8a4;
        default: break;
    }

    ctx->pc = 0x1ee87cu;

    // 0x1ee87c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ee87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee880: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ee880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee884: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x1ee884u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1ee888: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1ee888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee88c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ee88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1ee890: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1ee890u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee894: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x1ee894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x1ee898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee89c: 0xc07b704  jal         func_1EDC10
    ctx->pc = 0x1EE89Cu;
    SET_GPR_U32(ctx, 31, 0x1EE8A4u);
    ctx->pc = 0x1EE8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE89Cu;
    // 0x1ee8a0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC10u, 0x1EE89Cu, 0x1EE8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE8A4u;
label_1ee8a4:
    // 0x1ee8a4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EE8A4u;
    {
        const bool branch_taken_0x1ee8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8A4u;
        // 0x1ee8a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8a4) {
            ctx->pc = 0x1EE934u;
            return;
        }
    }
    ctx->pc = 0x1EE8ACu;
    // 0x1ee8ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1EE8ACu;
    {
        const bool branch_taken_0x1ee8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee8ac) {
            ctx->pc = 0x1EE910u;
            return;
        }
    }
    ctx->pc = 0x1EE8B4u;
}
