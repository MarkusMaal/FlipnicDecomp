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

// Function: entry_0019a030
// Address: 0x19a030 - 0x19a054
void entry_0019a030_0x19a030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a030_0x19a030");
#endif

    ctx->pc = 0x19a030u;

    // 0x19a030: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x19a030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19a034: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19A034u;
    {
        const bool branch_taken_0x19a034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a034) {
            ctx->pc = 0x19A054u;
            return;
        }
    }
    ctx->pc = 0x19A03Cu;
    // 0x19a03c: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x19a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19a040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a044: 0xac830344  sw          $v1, 0x344($a0)
    ctx->pc = 0x19a044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 836), GPR_U32(ctx, 3));
    // 0x19a048: 0x8c830344  lw          $v1, 0x344($a0)
    ctx->pc = 0x19a048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x19a04c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a050: 0xac83032c  sw          $v1, 0x32C($a0)
    ctx->pc = 0x19a050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 812), GPR_U32(ctx, 3));
    ctx->pc = 0x19a054u;
}
