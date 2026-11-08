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

// Function: entry_001760f0
// Address: 0x1760f0 - 0x176108
void entry_001760f0_0x1760f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001760f0_0x1760f0");
#endif

    ctx->pc = 0x1760f0u;

    // 0x1760f0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1760f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1760f4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1760f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1760f8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1760F8u;
    {
        const bool branch_taken_0x1760f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1760FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1760F8u;
        // 0x1760fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1760f8) {
            ctx->pc = 0x1760B0u;
            return;
        }
    }
    ctx->pc = 0x176100u;
    // 0x176100: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x176100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176104: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x176108u;
}
