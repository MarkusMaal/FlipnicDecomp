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

// Function: entry_00194304
// Address: 0x194304 - 0x194328
void entry_00194304_0x194304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194304_0x194304");
#endif

    ctx->pc = 0x194304u;

    // 0x194304: 0x0  nop
    ctx->pc = 0x194304u;
    // NOP
    // 0x194308: 0x8e830324  lw          $v1, 0x324($s4)
    ctx->pc = 0x194308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 804)));
    // 0x19430c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19430cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194310: 0xae830330  sw          $v1, 0x330($s4)
    ctx->pc = 0x194310u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 816), GPR_U32(ctx, 3));
    // 0x194314: 0xae800324  sw          $zero, 0x324($s4)
    ctx->pc = 0x194314u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 804), GPR_U32(ctx, 0));
    // 0x194318: 0xae80033c  sw          $zero, 0x33C($s4)
    ctx->pc = 0x194318u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 0));
    // 0x19431c: 0xae800340  sw          $zero, 0x340($s4)
    ctx->pc = 0x19431cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 0));
    // 0x194320: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x194320u;
    {
        const bool branch_taken_0x194320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194320u;
        // 0x194324: 0xae800344  sw          $zero, 0x344($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194320) {
            ctx->pc = 0x194358u;
            return;
        }
    }
    ctx->pc = 0x194328u;
}
