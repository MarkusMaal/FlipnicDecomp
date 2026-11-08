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

// Function: entry_001882c8
// Address: 0x1882c8 - 0x1882ec
void entry_001882c8_0x1882c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001882c8_0x1882c8");
#endif

    switch (ctx->pc) {
        case 0x1882dcu: goto label_1882dc;
        default: break;
    }

    ctx->pc = 0x1882c8u;

    // 0x1882c8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1882c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1882cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1882ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882d0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1882d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1882d4: 0xc081798  jal         func_205E60
    ctx->pc = 0x1882D4u;
    SET_GPR_U32(ctx, 31, 0x1882DCu);
    ctx->pc = 0x1882D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882D4u;
    // 0x1882d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205E60u, 0x1882D4u, 0x1882DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882DCu;
label_1882dc:
    // 0x1882dc: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x1882dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1882e0: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x1882e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1882e4: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1882E4u;
    {
        const bool branch_taken_0x1882e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1882E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882E4u;
        // 0x1882e8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882e4) {
            ctx->pc = 0x188310u;
            return;
        }
    }
    ctx->pc = 0x1882ECu;
}
