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

// Function: entry_001a3d24
// Address: 0x1a3d24 - 0x1a3d64
void entry_001a3d24_0x1a3d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3d24_0x1a3d24");
#endif

    switch (ctx->pc) {
        case 0x1a3d58u: goto label_1a3d58;
        default: break;
    }

    ctx->pc = 0x1a3d24u;

    // 0x1a3d24: 0x8e2507bc  lw          $a1, 0x7BC($s1)
    ctx->pc = 0x1a3d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1980)));
    // 0x1a3d28: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A3D28u;
    {
        const bool branch_taken_0x1a3d28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3d28) {
            ctx->pc = 0x1A3D98u;
            return;
        }
    }
    ctx->pc = 0x1A3D30u;
    // 0x1a3d30: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x1a3d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x1a3d34: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A3D34u;
    {
        const bool branch_taken_0x1a3d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3d34) {
            ctx->pc = 0x1A3D64u;
            return;
        }
    }
    ctx->pc = 0x1A3D3Cu;
    // 0x1a3d3c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x1a3d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1a3d40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a3d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a3d44: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A3D44u;
    {
        const bool branch_taken_0x1a3d44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a3d44) {
            ctx->pc = 0x1A3D98u;
            return;
        }
    }
    ctx->pc = 0x1A3D4Cu;
    // 0x1a3d4c: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x1a3d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1a3d50: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A3D50u;
    SET_GPR_U32(ctx, 31, 0x1A3D58u);
    ctx->pc = 0x1A3D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D50u;
    // 0x1a3d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A3D50u, 0x1A3D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D58u;
label_1a3d58:
    // 0x1a3d58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3d5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A3D5Cu;
    {
        const bool branch_taken_0x1a3d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D5Cu;
        // 0x1a3d60: 0xae230790  sw          $v1, 0x790($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3d5c) {
            ctx->pc = 0x1A3D98u;
            return;
        }
    }
    ctx->pc = 0x1A3D64u;
}
