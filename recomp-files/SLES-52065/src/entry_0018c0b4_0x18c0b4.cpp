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

// Function: entry_0018c0b4
// Address: 0x18c0b4 - 0x18c0cc
void entry_0018c0b4_0x18c0b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c0b4_0x18c0b4");
#endif

    ctx->pc = 0x18c0b4u;

    // 0x18c0b4: 0x8e2205b0  lw          $v0, 0x5B0($s1)
    ctx->pc = 0x18c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1456)));
    // 0x18c0b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C0B8u;
    {
        const bool branch_taken_0x18c0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0B8u;
        // 0x18c0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0b8) {
            ctx->pc = 0x18C0CCu;
            return;
        }
    }
    ctx->pc = 0x18C0C0u;
    // 0x18c0c0: 0x8e2205b4  lw          $v0, 0x5B4($s1)
    ctx->pc = 0x18c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1460)));
    // 0x18c0c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18c0c8: 0xae2205b4  sw          $v0, 0x5B4($s1)
    ctx->pc = 0x18c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 2));
    ctx->pc = 0x18c0ccu;
}
