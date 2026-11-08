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

// Function: entry_0018aa70
// Address: 0x18aa70 - 0x18aa94
void entry_0018aa70_0x18aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018aa70_0x18aa70");
#endif

    switch (ctx->pc) {
        case 0x18aa78u: goto label_18aa78;
        default: break;
    }

    ctx->pc = 0x18aa70u;

    // 0x18aa70: 0xc07845e  jal         func_1E1178
    ctx->pc = 0x18AA70u;
    SET_GPR_U32(ctx, 31, 0x18AA78u);
    ctx->pc = 0x1E1178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1178u, 0x18AA70u, 0x18AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA78u;
label_18aa78:
    // 0x18aa78: 0x2b11821  addu        $v1, $s5, $s1
    ctx->pc = 0x18aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x18aa7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18aa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18aa80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18aa84: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AA84u;
    {
        const bool branch_taken_0x18aa84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18aa84) {
            ctx->pc = 0x18AA94u;
            return;
        }
    }
    ctx->pc = 0x18AA8Cu;
    // 0x18aa8c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x18AA8Cu;
    {
        const bool branch_taken_0x18aa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA8Cu;
        // 0x18aa90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa8c) {
            ctx->pc = 0x18AB4Cu;
            return;
        }
    }
    ctx->pc = 0x18AA94u;
}
