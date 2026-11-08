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

// Function: entry_002023d0
// Address: 0x2023d0 - 0x2023f0
void entry_002023d0_0x2023d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002023d0_0x2023d0");
#endif

    ctx->pc = 0x2023d0u;

label_2023d0:
    // 0x2023d0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2023d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2023d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2023d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2023d8: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2023d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2023dc: 0x0  nop
    ctx->pc = 0x2023dcu;
    // NOP
    // 0x2023e0: 0x0  nop
    ctx->pc = 0x2023e0u;
    // NOP
    // 0x2023e4: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2023E4u;
    {
        const bool branch_taken_0x2023e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2023e4) {
            ctx->pc = 0x2023D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2023d0;
        }
    }
    ctx->pc = 0x2023ECu;
    // 0x2023ec: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x2023ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
    ctx->pc = 0x2023f0u;
}
