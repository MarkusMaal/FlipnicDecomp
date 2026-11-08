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

// Function: entry_001015e8
// Address: 0x1015e8 - 0x101618
void entry_001015e8_0x1015e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001015e8_0x1015e8");
#endif

    switch (ctx->pc) {
        case 0x1015f0u: goto label_1015f0;
        default: break;
    }

    ctx->pc = 0x1015e8u;

    // 0x1015e8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1015E8u;
    SET_GPR_U32(ctx, 31, 0x1015F0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1015E8u, 0x1015F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015F0u;
label_1015f0:
    // 0x1015f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1015F0u;
    {
        const bool branch_taken_0x1015f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1015f0) {
            ctx->pc = 0x101618u;
            return;
        }
    }
    ctx->pc = 0x1015F8u;
    // 0x1015f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1015f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1015fc: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x1015fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x101600: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x101604: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x101604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x101608: 0xa0440048  sb          $a0, 0x48($v0)
    ctx->pc = 0x101608u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 4));
    // 0x10160c: 0xa0440049  sb          $a0, 0x49($v0)
    ctx->pc = 0x10160cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 73), (uint8_t)GPR_U32(ctx, 4));
    // 0x101610: 0xa043004a  sb          $v1, 0x4A($v0)
    ctx->pc = 0x101610u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 74), (uint8_t)GPR_U32(ctx, 3));
    // 0x101614: 0xa040004b  sb          $zero, 0x4B($v0)
    ctx->pc = 0x101614u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 75), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x101618u;
}
