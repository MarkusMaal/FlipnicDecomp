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

// Function: entry_0016978c
// Address: 0x16978c - 0x1697ac
void entry_0016978c_0x16978c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016978c_0x16978c");
#endif

    switch (ctx->pc) {
        case 0x1697a4u: goto label_1697a4;
        default: break;
    }

    ctx->pc = 0x16978cu;

label_16978c:
    // 0x16978c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_169790:
    if (ctx->pc == 0x169790u) {
        ctx->pc = 0x169790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16978Cu;
        // 0x169790: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169794u;
        goto label_169794;
    }
    ctx->pc = 0x16978Cu;
    {
        const bool branch_taken_0x16978c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x169790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16978Cu;
        // 0x169790: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16978c) {
            ctx->pc = 0x1697ACu;
            return;
        }
    }
    ctx->pc = 0x169794u;
label_169794:
    // 0x169794: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x169794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_169798:
    // 0x169798: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16979c:
    // 0x16979c: 0x320f809  jalr        $t9
label_1697a0:
    if (ctx->pc == 0x1697A0u) {
        ctx->pc = 0x1697A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16979Cu;
        // 0x1697a0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1697A4u;
        goto label_1697a4;
    }
    ctx->pc = 0x16979Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1697A4u);
        ctx->pc = 0x1697A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16979Cu;
        // 0x1697a0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16979Cu, 0x1697A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1697A4u;
label_1697a4:
    // 0x1697a4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1697a8:
    if (ctx->pc == 0x1697A8u) {
        ctx->pc = 0x1697A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697A4u;
        // 0x1697a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1697ACu;
        goto label_fallthrough_0x1697a4;
    }
    ctx->pc = 0x1697A4u;
    {
        const bool branch_taken_0x1697a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1697A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697A4u;
        // 0x1697a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697a4) {
            ctx->pc = 0x16980Cu;
            return;
        }
    }
label_fallthrough_0x1697a4:
    ctx->pc = 0x1697ACu;
}
