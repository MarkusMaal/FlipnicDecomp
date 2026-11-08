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

// Function: entry_001e8cac
// Address: 0x1e8cac - 0x1e8cd0
void entry_001e8cac_0x1e8cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8cac_0x1e8cac");
#endif

    ctx->pc = 0x1e8cacu;

label_1e8cac:
    // 0x1e8cac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1e8cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e8cb0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1e8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e8cb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e8cb8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1e8cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8cbc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1e8cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e8cc0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e8cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e8cc4: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x1e8cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1e8cc8: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E8CC8u;
    {
        const bool branch_taken_0x1e8cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8cc8) {
            ctx->pc = 0x1E8CACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8cac;
        }
    }
    ctx->pc = 0x1E8CD0u;
}
