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

// Function: entry_001a985c
// Address: 0x1a985c - 0x1a98cc
void entry_001a985c_0x1a985c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a985c_0x1a985c");
#endif

    switch (ctx->pc) {
        case 0x1a9878u: goto label_1a9878;
        default: break;
    }

    ctx->pc = 0x1a985cu;

    // 0x1a985c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x1a985cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a9860: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1A9860u;
    {
        const bool branch_taken_0x1a9860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9860) {
            ctx->pc = 0x1A996Cu;
            return;
        }
    }
    ctx->pc = 0x1A9868u;
    // 0x1a9868: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1a9868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a986c: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1a986cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a9870: 0xc057040  jal         func_15C100
    ctx->pc = 0x1A9870u;
    SET_GPR_U32(ctx, 31, 0x1A9878u);
    ctx->pc = 0x1A9874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9870u;
    // 0x1a9874: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A9870u, 0x1A9878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9878u;
label_1a9878:
    // 0x1a9878: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x1a9878u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a987c: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x1a987cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1a9880: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1A9880u;
    {
        const bool branch_taken_0x1a9880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a9880) {
            ctx->pc = 0x1A9958u;
            return;
        }
    }
    ctx->pc = 0x1A9888u;
    // 0x1a9888: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1a9888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1a988c: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A988Cu;
    {
        const bool branch_taken_0x1a988c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a988c) {
            ctx->pc = 0x1A9910u;
            return;
        }
    }
    ctx->pc = 0x1A9894u;
    // 0x1a9894: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1a9894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1a9898: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A9898u;
    {
        const bool branch_taken_0x1a9898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a9898) {
            ctx->pc = 0x1A9900u;
            return;
        }
    }
    ctx->pc = 0x1A98A0u;
    // 0x1a98a0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1a98a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a98a4: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A98A4u;
    {
        const bool branch_taken_0x1a98a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a98a4) {
            ctx->pc = 0x1A98F0u;
            return;
        }
    }
    ctx->pc = 0x1A98ACu;
    // 0x1a98ac: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1a98acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1a98b0: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A98B0u;
    {
        const bool branch_taken_0x1a98b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a98b0) {
            ctx->pc = 0x1A98E0u;
            return;
        }
    }
    ctx->pc = 0x1A98B8u;
    // 0x1a98b8: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x1a98b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1a98bc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A98BCu;
    {
        const bool branch_taken_0x1a98bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a98bc) {
            ctx->pc = 0x1A98CCu;
            return;
        }
    }
    ctx->pc = 0x1A98C4u;
    // 0x1a98c4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1A98C4u;
    {
        const bool branch_taken_0x1a98c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a98c4) {
            ctx->pc = 0x1A996Cu;
            return;
        }
    }
    ctx->pc = 0x1A98CCu;
}
