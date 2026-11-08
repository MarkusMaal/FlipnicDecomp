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

// Function: entry_00122010
// Address: 0x122010 - 0x122038
void entry_00122010_0x122010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122010_0x122010");
#endif

    ctx->pc = 0x122010u;

label_122010:
    // 0x122010: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x122010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_122014:
    // 0x122014: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x122014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_122018:
    // 0x122018: 0x1453001f  bne         $v0, $s3, . + 4 + (0x1F << 2)
label_12201c:
    if (ctx->pc == 0x12201Cu) {
        ctx->pc = 0x122020u;
        goto label_122020;
    }
    ctx->pc = 0x122018u;
    {
        const bool branch_taken_0x122018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x122018) {
            ctx->pc = 0x122098u;
            return;
        }
    }
    ctx->pc = 0x122020u;
label_122020:
    // 0x122020: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_122024:
    if (ctx->pc == 0x122024u) {
        ctx->pc = 0x122028u;
        goto label_122028;
    }
    ctx->pc = 0x122020u;
    {
        const bool branch_taken_0x122020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x122020) {
            ctx->pc = 0x122038u;
            return;
        }
    }
    ctx->pc = 0x122028u;
label_122028:
    // 0x122028: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x122028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12202c:
    // 0x12202c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x12202cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_122030:
    // 0x122030: 0x320f809  jalr        $t9
label_122034:
    if (ctx->pc == 0x122034u) {
        ctx->pc = 0x122034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122030u;
        // 0x122034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122038u;
        goto label_fallthrough_0x122030;
    }
    ctx->pc = 0x122030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x122038u);
        ctx->pc = 0x122034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122030u;
        // 0x122034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122030u, 0x122038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x122030:
    ctx->pc = 0x122038u;
}
