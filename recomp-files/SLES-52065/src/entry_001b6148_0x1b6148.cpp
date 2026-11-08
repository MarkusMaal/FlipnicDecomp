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

// Function: entry_001b6148
// Address: 0x1b6148 - 0x1b6170
void entry_001b6148_0x1b6148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6148_0x1b6148");
#endif

    switch (ctx->pc) {
        case 0x1b6164u: goto label_1b6164;
        default: break;
    }

    ctx->pc = 0x1b6148u;

label_1b6148:
    // 0x1b6148: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x1b6148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_1b614c:
    // 0x1b614c: 0xa082000c  sb          $v0, 0xC($a0)
    ctx->pc = 0x1b614cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 2));
label_1b6150:
    // 0x1b6150: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1b6150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1b6154:
    // 0x1b6154: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b6154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b6158:
    // 0x1b6158: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1b6158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1b615c:
    // 0x1b615c: 0x320f809  jalr        $t9
label_1b6160:
    if (ctx->pc == 0x1B6160u) {
        ctx->pc = 0x1B6164u;
        goto label_1b6164;
    }
    ctx->pc = 0x1B615Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B6164u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B615Cu, 0x1B6164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6164u;
label_1b6164:
    // 0x1b6164: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b6168:
    if (ctx->pc == 0x1B6168u) {
        ctx->pc = 0x1B616Cu;
        goto label_1b616c;
    }
    ctx->pc = 0x1B6164u;
    {
        const bool branch_taken_0x1b6164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6164) {
            ctx->pc = 0x1B6178u;
            return;
        }
    }
    ctx->pc = 0x1B616Cu;
label_1b616c:
    // 0x1b616c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b616cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b6170u;
}
