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

// Function: entry_0017e3b8
// Address: 0x17e3b8 - 0x17e3dc
void entry_0017e3b8_0x17e3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e3b8_0x17e3b8");
#endif

    ctx->pc = 0x17e3b8u;

    // 0x17e3b8: 0x1243001a  beq         $s2, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x17E3B8u;
    {
        const bool branch_taken_0x17e3b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e3b8) {
            ctx->pc = 0x17E424u;
            return;
        }
    }
    ctx->pc = 0x17E3C0u;
    // 0x17e3c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e3c4: 0x1243000e  beq         $s2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x17E3C4u;
    {
        const bool branch_taken_0x17e3c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e3c4) {
            ctx->pc = 0x17E400u;
            return;
        }
    }
    ctx->pc = 0x17E3CCu;
    // 0x17e3cc: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E3CCu;
    {
        const bool branch_taken_0x17e3cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e3cc) {
            ctx->pc = 0x17E3DCu;
            return;
        }
    }
    ctx->pc = 0x17E3D4u;
    // 0x17e3d4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x17E3D4u;
    {
        const bool branch_taken_0x17e3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3D4u;
        // 0x17e3d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3d4) {
            ctx->pc = 0x17E494u;
            return;
        }
    }
    ctx->pc = 0x17E3DCu;
}
