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

// Function: entry_0010fbf8
// Address: 0x10fbf8 - 0x10fc0c
void entry_0010fbf8_0x10fbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fbf8_0x10fbf8");
#endif

    ctx->pc = 0x10fbf8u;

    // 0x10fbf8: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x10fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x10fbfc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x10fbfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10fc00: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x10FC00u;
    {
        const bool branch_taken_0x10fc00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fc00) {
            ctx->pc = 0x10FAD8u;
            return;
        }
    }
    ctx->pc = 0x10FC08u;
    // 0x10fc08: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x10fc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->pc = 0x10fc0cu;
}
