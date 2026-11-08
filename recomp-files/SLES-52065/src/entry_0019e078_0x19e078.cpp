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

// Function: entry_0019e078
// Address: 0x19e078 - 0x19e09c
void entry_0019e078_0x19e078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e078_0x19e078");
#endif

    switch (ctx->pc) {
        case 0x19e094u: goto label_19e094;
        default: break;
    }

    ctx->pc = 0x19e078u;

label_19e078:
    // 0x19e078: 0x12a00057  beqz        $s5, . + 4 + (0x57 << 2)
label_19e07c:
    if (ctx->pc == 0x19E07Cu) {
        ctx->pc = 0x19E080u;
        goto label_19e080;
    }
    ctx->pc = 0x19E078u;
    {
        const bool branch_taken_0x19e078 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e078) {
            ctx->pc = 0x19E1D8u;
            return;
        }
    }
    ctx->pc = 0x19E080u;
label_19e080:
    // 0x19e080: 0x8eb9031c  lw          $t9, 0x31C($s5)
    ctx->pc = 0x19e080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 796)));
label_19e084:
    // 0x19e084: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19e084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19e088:
    // 0x19e088: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19e088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19e08c:
    // 0x19e08c: 0x320f809  jalr        $t9
label_19e090:
    if (ctx->pc == 0x19E090u) {
        ctx->pc = 0x19E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E08Cu;
        // 0x19e090: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E094u;
        goto label_19e094;
    }
    ctx->pc = 0x19E08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E094u);
        ctx->pc = 0x19E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E08Cu;
        // 0x19e090: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E08Cu, 0x19E094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E094u;
label_19e094:
    // 0x19e094: 0x10000051  b           . + 4 + (0x51 << 2)
label_19e098:
    if (ctx->pc == 0x19E098u) {
        ctx->pc = 0x19E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E094u;
        // 0x19e098: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E09Cu;
        goto label_fallthrough_0x19e094;
    }
    ctx->pc = 0x19E094u;
    {
        const bool branch_taken_0x19e094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E094u;
        // 0x19e098: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e094) {
            ctx->pc = 0x19E1DCu;
            return;
        }
    }
label_fallthrough_0x19e094:
    ctx->pc = 0x19E09Cu;
}
