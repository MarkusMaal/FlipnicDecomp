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

// Function: entry_00136324
// Address: 0x136324 - 0x136340
void entry_00136324_0x136324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136324_0x136324");
#endif

    ctx->pc = 0x136324u;

label_136324:
    // 0x136324: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x136324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x136328: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x136328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x13632c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x13632cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x136330: 0x285082b  sltu        $at, $s4, $a1
    ctx->pc = 0x136330u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x136334: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x136334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x136338: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x136338u;
    {
        const bool branch_taken_0x136338 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x136338) {
            ctx->pc = 0x136324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136324;
        }
    }
    ctx->pc = 0x136340u;
}
