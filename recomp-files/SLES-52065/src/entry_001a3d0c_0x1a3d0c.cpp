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

// Function: entry_001a3d0c
// Address: 0x1a3d0c - 0x1a3d24
void entry_001a3d0c_0x1a3d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3d0c_0x1a3d0c");
#endif

    switch (ctx->pc) {
        case 0x1a3d18u: goto label_1a3d18;
        default: break;
    }

    ctx->pc = 0x1a3d0cu;

    // 0x1a3d0c: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x1a3d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1a3d10: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A3D10u;
    SET_GPR_U32(ctx, 31, 0x1A3D18u);
    ctx->pc = 0x1A3D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D10u;
    // 0x1a3d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A3D10u, 0x1A3D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D18u;
label_1a3d18:
    // 0x1a3d18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3d1c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A3D1Cu;
    {
        const bool branch_taken_0x1a3d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D1Cu;
        // 0x1a3d20: 0xae230790  sw          $v1, 0x790($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d1c) {
            ctx->pc = 0x1A3D98u;
            return;
        }
    }
    ctx->pc = 0x1A3D24u;
}
