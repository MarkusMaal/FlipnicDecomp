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

// Function: entry_0017e310
// Address: 0x17e310 - 0x17e340
void entry_0017e310_0x17e310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e310_0x17e310");
#endif

    switch (ctx->pc) {
        case 0x17e324u: goto label_17e324;
        case 0x17e330u: goto label_17e330;
        default: break;
    }

    ctx->pc = 0x17e310u;

    // 0x17e310: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17e310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17e314: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17e314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e318: 0x24847730  addiu       $a0, $a0, 0x7730
    ctx->pc = 0x17e318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    // 0x17e31c: 0xc05f9bc  jal         func_17E6F0
    ctx->pc = 0x17E31Cu;
    SET_GPR_U32(ctx, 31, 0x17E324u);
    ctx->pc = 0x17E320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E31Cu;
    // 0x17e320: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E6F0u, 0x17E31Cu, 0x17E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E324u;
label_17e324:
    // 0x17e324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17e324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e328: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x17E328u;
    SET_GPR_U32(ctx, 31, 0x17E330u);
    ctx->pc = 0x17E32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E328u;
    // 0x17e32c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x17E328u, 0x17E330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E330u;
label_17e330:
    // 0x17e330: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E330u;
    {
        const bool branch_taken_0x17e330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e330) {
            ctx->pc = 0x17E340u;
            return;
        }
    }
    ctx->pc = 0x17E338u;
    // 0x17e338: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17E338u;
    {
        const bool branch_taken_0x17e338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E338u;
        // 0x17e33c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e338) {
            ctx->pc = 0x17E354u;
            return;
        }
    }
    ctx->pc = 0x17E340u;
}
