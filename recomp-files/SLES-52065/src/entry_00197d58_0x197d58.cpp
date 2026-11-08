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

// Function: entry_00197d58
// Address: 0x197d58 - 0x197d9c
void entry_00197d58_0x197d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197d58_0x197d58");
#endif

    ctx->pc = 0x197d58u;

label_197d58:
    // 0x197d58: 0x12e00037  beqz        $s7, . + 4 + (0x37 << 2)
label_197d5c:
    if (ctx->pc == 0x197D5Cu) {
        ctx->pc = 0x197D60u;
        goto label_197d60;
    }
    ctx->pc = 0x197D58u;
    {
        const bool branch_taken_0x197d58 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x197d58) {
            ctx->pc = 0x197E38u;
            return;
        }
    }
    ctx->pc = 0x197D60u;
label_197d60:
    // 0x197d60: 0x8ea206a8  lw          $v0, 0x6A8($s5)
    ctx->pc = 0x197d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1704)));
label_197d64:
    // 0x197d64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_197d68:
    if (ctx->pc == 0x197D68u) {
        ctx->pc = 0x197D6Cu;
        goto label_197d6c;
    }
    ctx->pc = 0x197D64u;
    {
        const bool branch_taken_0x197d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197d64) {
            ctx->pc = 0x197D9Cu;
            return;
        }
    }
    ctx->pc = 0x197D6Cu;
label_197d6c:
    // 0x197d6c: 0x8ea306ac  lw          $v1, 0x6AC($s5)
    ctx->pc = 0x197d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1708)));
label_197d70:
    // 0x197d70: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x197d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_197d74:
    // 0x197d74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_197d78:
    // 0x197d78: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x197d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_197d7c:
    // 0x197d7c: 0x8c6306b0  lw          $v1, 0x6B0($v1)
    ctx->pc = 0x197d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1712)));
label_197d80:
    // 0x197d80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_197d84:
    // 0x197d84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x197d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_197d88:
    // 0x197d88: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x197d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_197d8c:
    // 0x197d8c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x197d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_197d90:
    // 0x197d90: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x197d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_197d94:
    // 0x197d94: 0x320f809  jalr        $t9
label_197d98:
    if (ctx->pc == 0x197D98u) {
        ctx->pc = 0x197D9Cu;
        goto label_fallthrough_0x197d94;
    }
    ctx->pc = 0x197D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197D9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197D94u, 0x197D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x197d94:
    ctx->pc = 0x197D9Cu;
}
