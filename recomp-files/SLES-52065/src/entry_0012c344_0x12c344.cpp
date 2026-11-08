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

// Function: entry_0012c344
// Address: 0x12c344 - 0x12c360
void entry_0012c344_0x12c344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c344_0x12c344");
#endif

    ctx->pc = 0x12c344u;

    // 0x12c344: 0x0  nop
    ctx->pc = 0x12c344u;
    // NOP
    // 0x12c348: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C348u;
    {
        const bool branch_taken_0x12c348 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12c348) {
            ctx->pc = 0x12C360u;
            return;
        }
    }
    ctx->pc = 0x12C350u;
    // 0x12c350: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C350u;
    {
        const bool branch_taken_0x12c350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12c350) {
            ctx->pc = 0x12C360u;
            return;
        }
    }
    ctx->pc = 0x12C358u;
    // 0x12c358: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12c358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12c35c: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x12c35cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12c360u;
}
