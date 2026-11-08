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

// Function: entry_00143bbc
// Address: 0x143bbc - 0x143be0
void entry_00143bbc_0x143bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143bbc_0x143bbc");
#endif

    ctx->pc = 0x143bbcu;

    // 0x143bbc: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x143bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x143bc0: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x143bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x143bc4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x143bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x143bc8: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x143bc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143bcc: 0x2741023  subu        $v0, $s3, $s4
    ctx->pc = 0x143bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x143bd0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143BD0u;
    {
        const bool branch_taken_0x143bd0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x143BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BD0u;
        // 0x143bd4: 0x28143  sra         $s0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143bd0) {
            ctx->pc = 0x143BE0u;
            return;
        }
    }
    ctx->pc = 0x143BD8u;
    // 0x143bd8: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x143bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x143bdc: 0x28143  sra         $s0, $v0, 5
    ctx->pc = 0x143bdcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 5));
    ctx->pc = 0x143be0u;
}
