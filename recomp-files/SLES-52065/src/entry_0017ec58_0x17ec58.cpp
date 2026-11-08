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

// Function: entry_0017ec58
// Address: 0x17ec58 - 0x17ec70
void entry_0017ec58_0x17ec58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ec58_0x17ec58");
#endif

    ctx->pc = 0x17ec58u;

    // 0x17ec58: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17ec5c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x17ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x17ec60: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EC60u;
    {
        const bool branch_taken_0x17ec60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x17ec60) {
            ctx->pc = 0x17EC70u;
            return;
        }
    }
    ctx->pc = 0x17EC68u;
    // 0x17ec68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17EC68u;
    {
        const bool branch_taken_0x17ec68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC68u;
        // 0x17ec6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec68) {
            ctx->pc = 0x17EC98u;
            return;
        }
    }
    ctx->pc = 0x17EC70u;
}
