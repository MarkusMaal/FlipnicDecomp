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

// Function: entry_001ed3b0
// Address: 0x1ed3b0 - 0x1ed3e8
void entry_001ed3b0_0x1ed3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed3b0_0x1ed3b0");
#endif

    switch (ctx->pc) {
        case 0x1ed3b8u: goto label_1ed3b8;
        case 0x1ed3d4u: goto label_1ed3d4;
        default: break;
    }

    ctx->pc = 0x1ed3b0u;

label_1ed3b0:
    // 0x1ed3b0: 0xc081a86  jal         func_206A18
    ctx->pc = 0x1ED3B0u;
    SET_GPR_U32(ctx, 31, 0x1ED3B8u);
    ctx->pc = 0x1ED3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED3B0u;
    // 0x1ed3b4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206A18u, 0x1ED3B0u, 0x1ED3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3B8u;
label_1ed3b8:
    // 0x1ed3b8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ed3b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ed3bc: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1ed3bcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x1ed3c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed3c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ed3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ed3c8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ed3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ed3cc: 0xc081850  jal         func_206140
    ctx->pc = 0x1ED3CCu;
    SET_GPR_U32(ctx, 31, 0x1ED3D4u);
    ctx->pc = 0x1ED3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED3CCu;
    // 0x1ed3d0: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206140u, 0x1ED3CCu, 0x1ED3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED3D4u;
label_1ed3d4:
    // 0x1ed3d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ed3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed3d8: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1ED3D8u;
    {
        const bool branch_taken_0x1ed3d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3D8u;
        // 0x1ed3dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed3d8) {
            ctx->pc = 0x1ED3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed3b0;
        }
    }
    ctx->pc = 0x1ED3E0u;
    // 0x1ed3e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ED3E0u;
    {
        const bool branch_taken_0x1ed3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed3e0) {
            ctx->pc = 0x1ED3ECu;
            return;
        }
    }
    ctx->pc = 0x1ED3E8u;
}
