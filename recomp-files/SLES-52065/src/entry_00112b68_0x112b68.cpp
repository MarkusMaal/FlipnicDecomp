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

// Function: entry_00112b68
// Address: 0x112b68 - 0x112b88
void entry_00112b68_0x112b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112b68_0x112b68");
#endif

    ctx->pc = 0x112b68u;

    // 0x112b68: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x112b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x112b6c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x112b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112b70: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x112B70u;
    {
        const bool branch_taken_0x112b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112b70) {
            ctx->pc = 0x112B24u;
            return;
        }
    }
    ctx->pc = 0x112B78u;
    // 0x112b78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112b7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112b80: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x112B80u;
    {
        const bool branch_taken_0x112b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B80u;
        // 0x112b84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b80) {
            ctx->pc = 0x112BD4u;
            return;
        }
    }
    ctx->pc = 0x112B88u;
}
