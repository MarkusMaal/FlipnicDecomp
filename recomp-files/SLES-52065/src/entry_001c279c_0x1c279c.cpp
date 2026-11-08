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

// Function: entry_001c279c
// Address: 0x1c279c - 0x1c27b8
void entry_001c279c_0x1c279c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c279c_0x1c279c");
#endif

    ctx->pc = 0x1c279cu;

    // 0x1c279c: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x1c279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1c27a0: 0x2841001d  slti        $at, $v0, 0x1D
    ctx->pc = 0x1c27a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1c27a4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C27A4u;
    {
        const bool branch_taken_0x1c27a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C27A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27A4u;
        // 0x1c27a8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27a4) {
            ctx->pc = 0x1C27B8u;
            return;
        }
    }
    ctx->pc = 0x1C27ACu;
    // 0x1c27ac: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c27acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c27b0: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x1C27B0u;
    {
        const bool branch_taken_0x1c27b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C27B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27B0u;
        // 0x1c27b4: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27b0) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C27B8u;
}
