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

// Function: entry_001ed488
// Address: 0x1ed488 - 0x1ed4b8
void entry_001ed488_0x1ed488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed488_0x1ed488");
#endif

    switch (ctx->pc) {
        case 0x1ed490u: goto label_1ed490;
        case 0x1ed4acu: goto label_1ed4ac;
        default: break;
    }

    ctx->pc = 0x1ed488u;

label_1ed488:
    // 0x1ed488: 0xc081daa  jal         func_2076A8
    ctx->pc = 0x1ED488u;
    SET_GPR_U32(ctx, 31, 0x1ED490u);
    ctx->pc = 0x1ED48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED488u;
    // 0x1ed48c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076A8u, 0x1ED488u, 0x1ED490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED490u;
label_1ed490:
    // 0x1ed490: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ed490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ed494: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1ed494u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x1ed498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed49c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ed49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ed4a0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ed4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ed4a4: 0xc081c38  jal         func_2070E0
    ctx->pc = 0x1ED4A4u;
    SET_GPR_U32(ctx, 31, 0x1ED4ACu);
    ctx->pc = 0x1ED4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED4A4u;
    // 0x1ed4a8: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2070E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2070E0u, 0x1ED4A4u, 0x1ED4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED4ACu;
label_1ed4ac:
    // 0x1ed4ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ed4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed4b0: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1ED4B0u;
    {
        const bool branch_taken_0x1ed4b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4B0u;
        // 0x1ed4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4b0) {
            ctx->pc = 0x1ED488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed488;
        }
    }
    ctx->pc = 0x1ED4B8u;
}
