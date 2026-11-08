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

// Function: entry_0019da18
// Address: 0x19da18 - 0x19da3c
void entry_0019da18_0x19da18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019da18_0x19da18");
#endif

    ctx->pc = 0x19da18u;

    // 0x19da18: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x19da18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19da1c: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x19da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x19da20: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x19DA20u;
    {
        const bool branch_taken_0x19da20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19da20) {
            ctx->pc = 0x19DA88u;
            return;
        }
    }
    ctx->pc = 0x19DA28u;
    // 0x19da28: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x19da28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x19da2c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DA2Cu;
    {
        const bool branch_taken_0x19da2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19da2c) {
            ctx->pc = 0x19DA3Cu;
            return;
        }
    }
    ctx->pc = 0x19DA34u;
    // 0x19da34: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19DA34u;
    {
        const bool branch_taken_0x19da34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19da34) {
            ctx->pc = 0x19DAB0u;
            return;
        }
    }
    ctx->pc = 0x19DA3Cu;
}
