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

// Function: entry_001771d8
// Address: 0x1771d8 - 0x1771f4
void entry_001771d8_0x1771d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001771d8_0x1771d8");
#endif

    ctx->pc = 0x1771d8u;

    // 0x1771d8: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x1771d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1771dc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1771DCu;
    {
        const bool branch_taken_0x1771dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1771E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771DCu;
        // 0x1771e0: 0x41140  sll         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771dc) {
            ctx->pc = 0x1771ACu;
            return;
        }
    }
    ctx->pc = 0x1771E4u;
    // 0x1771e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1771e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1771e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1771e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1771ec: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1771ECu;
    {
        const bool branch_taken_0x1771ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1771F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771ECu;
        // 0x1771f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771ec) {
            ctx->pc = 0x177298u;
            return;
        }
    }
    ctx->pc = 0x1771F4u;
}
