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

// Function: entry_0017edbc
// Address: 0x17edbc - 0x17edd4
void entry_0017edbc_0x17edbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017edbc_0x17edbc");
#endif

    ctx->pc = 0x17edbcu;

    // 0x17edbc: 0x0  nop
    ctx->pc = 0x17edbcu;
    // NOP
    // 0x17edc0: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x17edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x17edc4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x17edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x17edc8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17edcc: 0x1062fff3  beq         $v1, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x17EDCCu;
    {
        const bool branch_taken_0x17edcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17edcc) {
            ctx->pc = 0x17ED9Cu;
            return;
        }
    }
    ctx->pc = 0x17EDD4u;
}
