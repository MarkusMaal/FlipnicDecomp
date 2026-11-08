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

// Function: entry_00112cc8
// Address: 0x112cc8 - 0x112ce0
void entry_00112cc8_0x112cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112cc8_0x112cc8");
#endif

    ctx->pc = 0x112cc8u;

    // 0x112cc8: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x112cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x112ccc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x112cccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x112cd0: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x112CD0u;
    {
        const bool branch_taken_0x112cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112cd0) {
            ctx->pc = 0x112C60u;
            return;
        }
    }
    ctx->pc = 0x112CD8u;
    // 0x112cd8: 0x1000024a  b           . + 4 + (0x24A << 2)
    ctx->pc = 0x112CD8u;
    {
        const bool branch_taken_0x112cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CD8u;
        // 0x112cdc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112cd8) {
            ctx->pc = 0x113604u;
            return;
        }
    }
    ctx->pc = 0x112CE0u;
}
