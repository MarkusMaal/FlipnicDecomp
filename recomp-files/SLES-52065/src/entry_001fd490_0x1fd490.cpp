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

// Function: entry_001fd490
// Address: 0x1fd490 - 0x1fd4a8
void entry_001fd490_0x1fd490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd490_0x1fd490");
#endif

    ctx->pc = 0x1fd490u;

    // 0x1fd490: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1fd490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1fd494: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1fd494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1fd498: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fd498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd49c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD49Cu;
    {
        const bool branch_taken_0x1fd49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD49Cu;
        // 0x1fd4a0: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd49c) {
            ctx->pc = 0x1FD4A8u;
            return;
        }
    }
    ctx->pc = 0x1FD4A4u;
    // 0x1fd4a4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1fd4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->pc = 0x1fd4a8u;
}
