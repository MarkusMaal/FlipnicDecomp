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

// Function: entry_001b1250
// Address: 0x1b1250 - 0x1b1274
void entry_001b1250_0x1b1250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1250_0x1b1250");
#endif

    ctx->pc = 0x1b1250u;

label_1b1250:
    // 0x1b1250: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x1b1250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1b1254:
    // 0x1b1254: 0x8c6402f4  lw          $a0, 0x2F4($v1)
    ctx->pc = 0x1b1254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 756)));
label_1b1258:
    // 0x1b1258: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1b1258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1b125c:
    // 0x1b125c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1b1260:
    if (ctx->pc == 0x1B1260u) {
        ctx->pc = 0x1B1264u;
        goto label_1b1264;
    }
    ctx->pc = 0x1B125Cu;
    {
        const bool branch_taken_0x1b125c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b125c) {
            ctx->pc = 0x1B1274u;
            return;
        }
    }
    ctx->pc = 0x1B1264u;
label_1b1264:
    // 0x1b1264: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1b1264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b1268:
    // 0x1b1268: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1b1268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1b126c:
    // 0x1b126c: 0x320f809  jalr        $t9
label_1b1270:
    if (ctx->pc == 0x1B1270u) {
        ctx->pc = 0x1B1274u;
        goto label_fallthrough_0x1b126c;
    }
    ctx->pc = 0x1B126Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1274u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B126Cu, 0x1B1274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1b126c:
    ctx->pc = 0x1B1274u;
}
