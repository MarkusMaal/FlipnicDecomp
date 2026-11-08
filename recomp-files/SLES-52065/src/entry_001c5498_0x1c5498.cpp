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

// Function: entry_001c5498
// Address: 0x1c5498 - 0x1c54b4
void entry_001c5498_0x1c5498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5498_0x1c5498");
#endif

    ctx->pc = 0x1c5498u;

    // 0x1c5498: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c5498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c549c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c54a0: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x1c54a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x1c54a4: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c54a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c54a8: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C54A8u;
    {
        const bool branch_taken_0x1c54a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54A8u;
        // 0x1c54ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54a8) {
            ctx->pc = 0x1C5510u;
            return;
        }
    }
    ctx->pc = 0x1C54B0u;
    // 0x1c54b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c54b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c54b4u;
}
