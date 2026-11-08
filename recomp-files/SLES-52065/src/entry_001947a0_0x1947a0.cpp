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

// Function: entry_001947a0
// Address: 0x1947a0 - 0x1947c0
void entry_001947a0_0x1947a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001947a0_0x1947a0");
#endif

    ctx->pc = 0x1947a0u;

    // 0x1947a0: 0x8e830324  lw          $v1, 0x324($s4)
    ctx->pc = 0x1947a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
    // 0x1947a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1947a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947a8: 0xae830330  sw          $v1, 0x330($s4)
    ctx->pc = 0x1947a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 816), GPR_U32(ctx, 3));
    // 0x1947ac: 0xae800324  sw          $zero, 0x324($s4)
    ctx->pc = 0x1947acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 0));
    // 0x1947b0: 0xae80033c  sw          $zero, 0x33C($s4)
    ctx->pc = 0x1947b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 0));
    // 0x1947b4: 0xae800340  sw          $zero, 0x340($s4)
    ctx->pc = 0x1947b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 0));
    // 0x1947b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1947B8u;
    {
        const bool branch_taken_0x1947b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1947BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947B8u;
        // 0x1947bc: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1947b8) {
            ctx->pc = 0x1947F0u;
            return;
        }
    }
    ctx->pc = 0x1947C0u;
}
