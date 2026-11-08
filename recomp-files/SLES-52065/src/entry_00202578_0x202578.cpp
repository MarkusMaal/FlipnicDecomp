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

// Function: entry_00202578
// Address: 0x202578 - 0x202598
void entry_00202578_0x202578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202578_0x202578");
#endif

    ctx->pc = 0x202578u;

label_202578:
    // 0x202578: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x202578u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x20257c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x20257cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x202580: 0x0  nop
    ctx->pc = 0x202580u;
    // NOP
    // 0x202584: 0x0  nop
    ctx->pc = 0x202584u;
    // NOP
    // 0x202588: 0x0  nop
    ctx->pc = 0x202588u;
    // NOP
    // 0x20258c: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20258Cu;
    {
        const bool branch_taken_0x20258c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x20258c) {
            ctx->pc = 0x202578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202578;
        }
    }
    ctx->pc = 0x202594u;
    // 0x202594: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x202594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
    ctx->pc = 0x202598u;
}
