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

// Function: entry_001e4ec8
// Address: 0x1e4ec8 - 0x1e4ee4
void entry_001e4ec8_0x1e4ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4ec8_0x1e4ec8");
#endif

    ctx->pc = 0x1e4ec8u;

    // 0x1e4ec8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e4ecc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e4ed0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e4ed0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e4ed4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4ED4u;
    {
        const bool branch_taken_0x1e4ed4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4ED4u;
        // 0x1e4ed8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ed4) {
            ctx->pc = 0x1E4EE4u;
            return;
        }
    }
    ctx->pc = 0x1E4EDCu;
    // 0x1e4edc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E4EDCu;
    {
        const bool branch_taken_0x1e4edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4edc) {
            ctx->pc = 0x1E4F1Cu;
            return;
        }
    }
    ctx->pc = 0x1E4EE4u;
}
