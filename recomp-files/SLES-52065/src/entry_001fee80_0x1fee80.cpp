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

// Function: entry_001fee80
// Address: 0x1fee80 - 0x1fee94
void entry_001fee80_0x1fee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fee80_0x1fee80");
#endif

    ctx->pc = 0x1fee80u;

    // 0x1fee80: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fee80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fee84: 0xdc62ddf0  ld          $v0, -0x2210($v1)
    ctx->pc = 0x1fee84u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x21DDF0u));
    // 0x1fee88: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1fee88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1fee8c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FEE8Cu;
    {
        const bool branch_taken_0x1fee8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fee8c) {
            ctx->pc = 0x1FEE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEE8Cu;
            // 0x1fee90: 0xfc64ddf0  sd          $a0, -0x2210($v1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 3), 4294958576), GPR_U64(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEE94u;
            return;
        }
    }
    ctx->pc = 0x1FEE94u;
}
