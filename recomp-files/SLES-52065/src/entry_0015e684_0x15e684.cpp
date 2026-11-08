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

// Function: entry_0015e684
// Address: 0x15e684 - 0x15e6a0
void entry_0015e684_0x15e684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e684_0x15e684");
#endif

    ctx->pc = 0x15e684u;

    // 0x15e684: 0x0  nop
    ctx->pc = 0x15e684u;
    // NOP
    // 0x15e688: 0x8e430240  lw          $v1, 0x240($s2)
    ctx->pc = 0x15e688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 576)));
    // 0x15e68c: 0x18600020  blez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x15E68Cu;
    {
        const bool branch_taken_0x15e68c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x15E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E68Cu;
        // 0x15e690: 0x3c03c47a  lui         $v1, 0xC47A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50298 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e68c) {
            ctx->pc = 0x15E710u;
            return;
        }
    }
    ctx->pc = 0x15E694u;
    // 0x15e694: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15e694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e698: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15e698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15e69c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15e6a0u;
}
