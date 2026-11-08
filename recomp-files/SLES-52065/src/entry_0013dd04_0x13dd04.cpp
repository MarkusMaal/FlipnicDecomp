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

// Function: entry_0013dd04
// Address: 0x13dd04 - 0x13dd28
void entry_0013dd04_0x13dd04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dd04_0x13dd04");
#endif

    ctx->pc = 0x13dd04u;

label_13dd04:
    // 0x13dd04: 0x9222018a  lbu         $v0, 0x18A($s1)
    ctx->pc = 0x13dd04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 394)));
label_13dd08:
    // 0x13dd08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_13dd0c:
    if (ctx->pc == 0x13DD0Cu) {
        ctx->pc = 0x13DD10u;
        goto label_13dd10;
    }
    ctx->pc = 0x13DD08u;
    {
        const bool branch_taken_0x13dd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dd08) {
            ctx->pc = 0x13DD28u;
            return;
        }
    }
    ctx->pc = 0x13DD10u;
label_13dd10:
    // 0x13dd10: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x13dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_13dd14:
    // 0x13dd14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13dd18:
    // 0x13dd18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13dd18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13dd1c:
    // 0x13dd1c: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x13dd1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_13dd20:
    // 0x13dd20: 0x320f809  jalr        $t9
label_13dd24:
    if (ctx->pc == 0x13DD24u) {
        ctx->pc = 0x13DD28u;
        goto label_fallthrough_0x13dd20;
    }
    ctx->pc = 0x13DD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DD28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DD20u, 0x13DD28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13dd20:
    ctx->pc = 0x13DD28u;
}
