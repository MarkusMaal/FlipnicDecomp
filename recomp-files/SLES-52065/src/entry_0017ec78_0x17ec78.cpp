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

// Function: entry_0017ec78
// Address: 0x17ec78 - 0x17ec8c
void entry_0017ec78_0x17ec78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ec78_0x17ec78");
#endif

    ctx->pc = 0x17ec78u;

    // 0x17ec78: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x17ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x17ec7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x17ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ec80: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17ec84: 0x1062fff4  beq         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17EC84u;
    {
        const bool branch_taken_0x17ec84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17ec84) {
            ctx->pc = 0x17EC58u;
            return;
        }
    }
    ctx->pc = 0x17EC8Cu;
}
