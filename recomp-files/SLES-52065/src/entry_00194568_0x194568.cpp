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

// Function: entry_00194568
// Address: 0x194568 - 0x194588
void entry_00194568_0x194568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194568_0x194568");
#endif

    ctx->pc = 0x194568u;

    // 0x194568: 0x8e830324  lw          $v1, 0x324($s4)
    ctx->pc = 0x194568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
    // 0x19456c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19456cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194570: 0xae830330  sw          $v1, 0x330($s4)
    ctx->pc = 0x194570u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 816), GPR_U32(ctx, 3));
    // 0x194574: 0xae800324  sw          $zero, 0x324($s4)
    ctx->pc = 0x194574u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 0));
    // 0x194578: 0xae80033c  sw          $zero, 0x33C($s4)
    ctx->pc = 0x194578u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 0));
    // 0x19457c: 0xae800340  sw          $zero, 0x340($s4)
    ctx->pc = 0x19457cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 0));
    // 0x194580: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x194580u;
    {
        const bool branch_taken_0x194580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194580u;
        // 0x194584: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194580) {
            ctx->pc = 0x1945B8u;
            return;
        }
    }
    ctx->pc = 0x194588u;
}
