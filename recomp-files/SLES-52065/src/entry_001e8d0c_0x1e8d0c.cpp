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

// Function: entry_001e8d0c
// Address: 0x1e8d0c - 0x1e8d30
void entry_001e8d0c_0x1e8d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8d0c_0x1e8d0c");
#endif

    ctx->pc = 0x1e8d0cu;

label_1e8d0c:
    // 0x1e8d0c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1e8d0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e8d10: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1e8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e8d14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8d18: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1e8d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8d1c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1e8d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e8d20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e8d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e8d24: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x1e8d24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1e8d28: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E8D28u;
    {
        const bool branch_taken_0x1e8d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d28) {
            ctx->pc = 0x1E8D0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8d0c;
        }
    }
    ctx->pc = 0x1E8D30u;
}
