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

// Function: entry_0016a6b0
// Address: 0x16a6b0 - 0x16a6c4
void entry_0016a6b0_0x16a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a6b0_0x16a6b0");
#endif

    ctx->pc = 0x16a6b0u;

    // 0x16a6b0: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A6B0u;
    {
        const bool branch_taken_0x16a6b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x16A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6B0u;
        // 0x16a6b4: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6b0) {
            ctx->pc = 0x16A6C4u;
            return;
        }
    }
    ctx->pc = 0x16A6B8u;
    // 0x16a6b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16a6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16a6bc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16A6BCu;
    {
        const bool branch_taken_0x16a6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6BCu;
        // 0x16a6c0: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6bc) {
            ctx->pc = 0x16A728u;
            return;
        }
    }
    ctx->pc = 0x16A6C4u;
}
