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

// Function: entry_00200308
// Address: 0x200308 - 0x200324
void entry_00200308_0x200308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200308_0x200308");
#endif

    ctx->pc = 0x200308u;

label_200308:
    // 0x200308: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x200308u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x20030c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x20030cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x200310: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x200310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x200314: 0x0  nop
    ctx->pc = 0x200314u;
    // NOP
    // 0x200318: 0x0  nop
    ctx->pc = 0x200318u;
    // NOP
    // 0x20031c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20031Cu;
    {
        const bool branch_taken_0x20031c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x20031c) {
            ctx->pc = 0x200308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200308;
        }
    }
    ctx->pc = 0x200324u;
}
