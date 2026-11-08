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

// Function: entry_0015afd4
// Address: 0x15afd4 - 0x15afe8
void entry_0015afd4_0x15afd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015afd4_0x15afd4");
#endif

    ctx->pc = 0x15afd4u;

    // 0x15afd4: 0x82220029  lb          $v0, 0x29($s1)
    ctx->pc = 0x15afd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x15afd8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x15afd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15afdc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15AFDCu;
    {
        const bool branch_taken_0x15afdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFDCu;
        // 0x15afe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afdc) {
            ctx->pc = 0x15AFE8u;
            return;
        }
    }
    ctx->pc = 0x15AFE4u;
    // 0x15afe4: 0xa20201d3  sb          $v0, 0x1D3($s0)
    ctx->pc = 0x15afe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x15afe8u;
}
