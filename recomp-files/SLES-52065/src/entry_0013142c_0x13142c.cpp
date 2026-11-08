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

// Function: entry_0013142c
// Address: 0x13142c - 0x13144c
void entry_0013142c_0x13142c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013142c_0x13142c");
#endif

    ctx->pc = 0x13142cu;

label_13142c:
    // 0x13142c: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x13142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_131430:
    // 0x131430: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x131430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_131434:
    // 0x131434: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_131438:
    if (ctx->pc == 0x131438u) {
        ctx->pc = 0x13143Cu;
        goto label_13143c;
    }
    ctx->pc = 0x131434u;
    {
        const bool branch_taken_0x131434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131434) {
            ctx->pc = 0x13144Cu;
            return;
        }
    }
    ctx->pc = 0x13143Cu;
label_13143c:
    // 0x13143c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13143cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_131440:
    // 0x131440: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x131440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_131444:
    // 0x131444: 0x320f809  jalr        $t9
label_131448:
    if (ctx->pc == 0x131448u) {
        ctx->pc = 0x131448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131444u;
        // 0x131448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13144Cu;
        goto label_fallthrough_0x131444;
    }
    ctx->pc = 0x131444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13144Cu);
        ctx->pc = 0x131448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131444u;
        // 0x131448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131444u, 0x13144Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x131444:
    ctx->pc = 0x13144Cu;
}
