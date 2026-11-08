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

// Function: entry_001b3914
// Address: 0x1b3914 - 0x1b3948
void entry_001b3914_0x1b3914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3914_0x1b3914");
#endif

    switch (ctx->pc) {
        case 0x1b3920u: goto label_1b3920;
        default: break;
    }

    ctx->pc = 0x1b3914u;

    // 0x1b3914: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x1b3914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1b3918: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B3918u;
    SET_GPR_U32(ctx, 31, 0x1B3920u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B3918u, 0x1B3920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3920u;
label_1b3920:
    // 0x1b3920: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3920u;
    {
        const bool branch_taken_0x1b3920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3920) {
            ctx->pc = 0x1B3948u;
            return;
        }
    }
    ctx->pc = 0x1B3928u;
    // 0x1b3928: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b3928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b392c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1b392cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b3930: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1b3930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1b3934: 0xa0430048  sb          $v1, 0x48($v0)
    ctx->pc = 0x1b3934u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3938: 0xa0430049  sb          $v1, 0x49($v0)
    ctx->pc = 0x1b3938u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 73), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b393c: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x1b393cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1b3940: 0xa043004a  sb          $v1, 0x4A($v0)
    ctx->pc = 0x1b3940u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 74), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3944: 0xa040004b  sb          $zero, 0x4B($v0)
    ctx->pc = 0x1b3944u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 75), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1b3948u;
}
