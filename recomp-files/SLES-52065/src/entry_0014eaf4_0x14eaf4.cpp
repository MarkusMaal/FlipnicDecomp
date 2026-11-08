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

// Function: entry_0014eaf4
// Address: 0x14eaf4 - 0x14eb10
void entry_0014eaf4_0x14eaf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014eaf4_0x14eaf4");
#endif

    ctx->pc = 0x14eaf4u;

label_14eaf4:
    // 0x14eaf4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14eaf8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x14eafc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x14eafcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x14eb00: 0x251182b  sltu        $v1, $s2, $s1
    ctx->pc = 0x14eb00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14eb04: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x14eb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x14eb08: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14EB08u;
    {
        const bool branch_taken_0x14eb08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14eb08) {
            ctx->pc = 0x14EAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14eaf4;
        }
    }
    ctx->pc = 0x14EB10u;
}
