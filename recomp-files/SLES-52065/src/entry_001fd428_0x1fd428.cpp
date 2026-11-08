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

// Function: entry_001fd428
// Address: 0x1fd428 - 0x1fd448
void entry_001fd428_0x1fd428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd428_0x1fd428");
#endif

    ctx->pc = 0x1fd428u;

    // 0x1fd428: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1fd428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1fd42c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD42Cu;
    {
        const bool branch_taken_0x1fd42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd42c) {
            ctx->pc = 0x1FD430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD42Cu;
            // 0x1fd430: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD448u;
            return;
        }
    }
    ctx->pc = 0x1FD434u;
    // 0x1fd434: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fd434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fd438: 0x8c43d9ac  lw          $v1, -0x2654($v0)
    ctx->pc = 0x1fd438u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1fd43c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x1fd43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x1fd440: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1fd440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1fd444: 0x0  nop
    ctx->pc = 0x1fd444u;
    // NOP
    ctx->pc = 0x1fd448u;
}
