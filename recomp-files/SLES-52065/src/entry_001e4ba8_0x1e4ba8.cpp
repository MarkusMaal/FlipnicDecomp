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

// Function: entry_001e4ba8
// Address: 0x1e4ba8 - 0x1e4bd0
void entry_001e4ba8_0x1e4ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4ba8_0x1e4ba8");
#endif

    ctx->pc = 0x1e4ba8u;

    // 0x1e4ba8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e4bac: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x1e4bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e4bb0: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x1E4BB0u;
    {
        const bool branch_taken_0x1e4bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4bb0) {
            ctx->pc = 0x1E4A70u;
            return;
        }
    }
    ctx->pc = 0x1E4BB8u;
    // 0x1e4bb8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e4bbc: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1e4bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e4bc0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4BC0u;
    {
        const bool branch_taken_0x1e4bc0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BC0u;
        // 0x1e4bc4: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4bc0) {
            ctx->pc = 0x1E4BD0u;
            return;
        }
    }
    ctx->pc = 0x1E4BC8u;
    // 0x1e4bc8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e4bcc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e4bccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1e4bd0u;
}
