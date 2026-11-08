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

// Function: entry_0010f910
// Address: 0x10f910 - 0x10f940
void entry_0010f910_0x10f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f910_0x10f910");
#endif

    switch (ctx->pc) {
        case 0x10f924u: goto label_10f924;
        default: break;
    }

    ctx->pc = 0x10f910u;

label_10f910:
    // 0x10f910: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10f910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10f914:
    // 0x10f914: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10f914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10f918:
    // 0x10f918: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x10f918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_10f91c:
    // 0x10f91c: 0x320f809  jalr        $t9
label_10f920:
    if (ctx->pc == 0x10F920u) {
        ctx->pc = 0x10F924u;
        goto label_10f924;
    }
    ctx->pc = 0x10F91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F924u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F91Cu, 0x10F924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F924u;
label_10f924:
    // 0x10f924: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_10f928:
    if (ctx->pc == 0x10F928u) {
        ctx->pc = 0x10F92Cu;
        goto label_10f92c;
    }
    ctx->pc = 0x10F924u;
    {
        const bool branch_taken_0x10f924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f924) {
            ctx->pc = 0x10F940u;
            return;
        }
    }
    ctx->pc = 0x10F92Cu;
label_10f92c:
    // 0x10f92c: 0x8e030228  lw          $v1, 0x228($s0)
    ctx->pc = 0x10f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_10f930:
    // 0x10f930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f934:
    // 0x10f934: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10f934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10f938:
    // 0x10f938: 0x10000002  b           . + 4 + (0x2 << 2)
label_10f93c:
    if (ctx->pc == 0x10F93Cu) {
        ctx->pc = 0x10F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F938u;
        // 0x10f93c: 0xae030228  sw          $v1, 0x228($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F940u;
        goto label_fallthrough_0x10f938;
    }
    ctx->pc = 0x10F938u;
    {
        const bool branch_taken_0x10f938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F938u;
        // 0x10f93c: 0xae030228  sw          $v1, 0x228($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f938) {
            ctx->pc = 0x10F944u;
            return;
        }
    }
label_fallthrough_0x10f938:
    ctx->pc = 0x10F940u;
}
