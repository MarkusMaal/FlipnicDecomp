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

// Function: entry_0011cfd8
// Address: 0x11cfd8 - 0x11cff4
void entry_0011cfd8_0x11cfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cfd8_0x11cfd8");
#endif

    ctx->pc = 0x11cfd8u;

    // 0x11cfd8: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x11cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11cfdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11cfe0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CFE0u;
    {
        const bool branch_taken_0x11cfe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11cfe0) {
            ctx->pc = 0x11CFF4u;
            return;
        }
    }
    ctx->pc = 0x11CFE8u;
    // 0x11cfe8: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x11cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x11cfec: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x11cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x11cff0: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x11cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    ctx->pc = 0x11cff4u;
}
