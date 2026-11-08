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

// Function: entry_001fdda4
// Address: 0x1fdda4 - 0x1fddc0
void entry_001fdda4_0x1fdda4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdda4_0x1fdda4");
#endif

    switch (ctx->pc) {
        case 0x1fddbcu: goto label_1fddbc;
        default: break;
    }

    ctx->pc = 0x1fdda4u;

    // 0x1fdda4: 0x24030108  addiu       $v1, $zero, 0x108
    ctx->pc = 0x1fdda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x1fdda8: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x1fdda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
    // 0x1fddac: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDDACu;
    {
        const bool branch_taken_0x1fddac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fddac) {
            ctx->pc = 0x1FDDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDDACu;
            // 0x1fddb0: 0x8e150028  lw          $s5, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDDC0u;
            return;
        }
    }
    ctx->pc = 0x1FDDB4u;
    // 0x1fddb4: 0xc07f4fc  jal         func_1FD3F0
    ctx->pc = 0x1FDDB4u;
    SET_GPR_U32(ctx, 31, 0x1FDDBCu);
    ctx->pc = 0x1FDDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDDB4u;
    // 0x1fddb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1FDDB4u, 0x1FDDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDDBCu;
label_1fddbc:
    // 0x1fddbc: 0x8e150028  lw          $s5, 0x28($s0)
    ctx->pc = 0x1fddbcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1fddc0u;
}
