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

// Function: entry_00205584
// Address: 0x205584 - 0x2055a4
void entry_00205584_0x205584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205584_0x205584");
#endif

    switch (ctx->pc) {
        case 0x205598u: goto label_205598;
        default: break;
    }

    ctx->pc = 0x205584u;

    // 0x205584: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x205584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x205588: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x205588u;
    {
        const bool branch_taken_0x205588 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x20558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205588u;
        // 0x20558c: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205588) {
            ctx->pc = 0x2055A4u;
            return;
        }
    }
    ctx->pc = 0x205590u;
    // 0x205590: 0xc080432  jal         func_2010C8
    ctx->pc = 0x205590u;
    SET_GPR_U32(ctx, 31, 0x205598u);
    ctx->pc = 0x205594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205590u;
    // 0x205594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x205590u, 0x205598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205598u;
label_205598:
    // 0x205598: 0x144001e0  bnez        $v0, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x205598u;
    {
        const bool branch_taken_0x205598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205598u;
        // 0x20559c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205598) {
            ctx->pc = 0x205D1Cu;
            return;
        }
    }
    ctx->pc = 0x2055A0u;
    // 0x2055a0: 0x32620020  andi        $v0, $s3, 0x20
    ctx->pc = 0x2055a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
    ctx->pc = 0x2055a4u;
}
