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

// Function: entry_002024bc
// Address: 0x2024bc - 0x2024d4
void entry_002024bc_0x2024bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002024bc_0x2024bc");
#endif

    ctx->pc = 0x2024bcu;

    // 0x2024bc: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x2024bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2024c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2024C0u;
    {
        const bool branch_taken_0x2024c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024C0u;
        // 0x2024c4: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024c0) {
            ctx->pc = 0x2024D4u;
            return;
        }
    }
    ctx->pc = 0x2024C8u;
    // 0x2024c8: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x2024c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x2024cc: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2024ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2024d0: 0xc2902d  daddu       $s2, $a2, $v0
    ctx->pc = 0x2024d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
    ctx->pc = 0x2024d4u;
}
