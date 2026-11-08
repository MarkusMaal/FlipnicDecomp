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

// Function: entry_001e4da0
// Address: 0x1e4da0 - 0x1e4dc8
void entry_001e4da0_0x1e4da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4da0_0x1e4da0");
#endif

    ctx->pc = 0x1e4da0u;

    // 0x1e4da0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e4da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e4da4: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x1e4da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e4da8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1E4DA8u;
    {
        const bool branch_taken_0x1e4da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4da8) {
            ctx->pc = 0x1E4D18u;
            return;
        }
    }
    ctx->pc = 0x1E4DB0u;
    // 0x1e4db0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e4db4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1e4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e4db8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4DB8u;
    {
        const bool branch_taken_0x1e4db8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DB8u;
        // 0x1e4dbc: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4db8) {
            ctx->pc = 0x1E4DC8u;
            return;
        }
    }
    ctx->pc = 0x1E4DC0u;
    // 0x1e4dc0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e4dc4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e4dc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1e4dc8u;
}
