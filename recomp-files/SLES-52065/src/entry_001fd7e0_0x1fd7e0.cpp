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

// Function: entry_001fd7e0
// Address: 0x1fd7e0 - 0x1fd7f8
void entry_001fd7e0_0x1fd7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd7e0_0x1fd7e0");
#endif

    ctx->pc = 0x1fd7e0u;

    // 0x1fd7e0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1fd7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fd7e4: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD7E4u;
    {
        const bool branch_taken_0x1fd7e4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1FD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7E4u;
        // 0x1fd7e8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7e4) {
            ctx->pc = 0x1FD7F8u;
            return;
        }
    }
    ctx->pc = 0x1FD7ECu;
    // 0x1fd7ec: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1fd7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1fd7f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd7f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fd7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fd7f8u;
}
