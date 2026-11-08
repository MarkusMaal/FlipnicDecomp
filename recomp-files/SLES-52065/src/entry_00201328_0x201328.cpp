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

// Function: entry_00201328
// Address: 0x201328 - 0x201348
void entry_00201328_0x201328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201328_0x201328");
#endif

    ctx->pc = 0x201328u;

label_201328:
    // 0x201328: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x201328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20132c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20132cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x201330: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x201330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x201334: 0x0  nop
    ctx->pc = 0x201334u;
    // NOP
    // 0x201338: 0x0  nop
    ctx->pc = 0x201338u;
    // NOP
    // 0x20133c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20133Cu;
    {
        const bool branch_taken_0x20133c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x20133c) {
            ctx->pc = 0x201328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201328;
        }
    }
    ctx->pc = 0x201344u;
    // 0x201344: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201348u;
}
