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

// Function: entry_0019ee6c
// Address: 0x19ee6c - 0x19ee80
void entry_0019ee6c_0x19ee6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ee6c_0x19ee6c");
#endif

    ctx->pc = 0x19ee6cu;

    // 0x19ee6c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19ee70: 0x9062282b  lbu         $v0, 0x282B($v1)
    ctx->pc = 0x19ee70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10283)));
    // 0x19ee74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19EE74u;
    {
        const bool branch_taken_0x19ee74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ee74) {
            ctx->pc = 0x19EE80u;
            return;
        }
    }
    ctx->pc = 0x19EE7Cu;
    // 0x19ee7c: 0xac6028f0  sw          $zero, 0x28F0($v1)
    ctx->pc = 0x19ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10480), GPR_U32(ctx, 0));
    ctx->pc = 0x19ee80u;
}
