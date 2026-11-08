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

// Function: entry_001a9920
// Address: 0x1a9920 - 0x1a9944
void entry_001a9920_0x1a9920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9920_0x1a9920");
#endif

    ctx->pc = 0x1a9920u;

    // 0x1a9920: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a9920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a9924: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x1a9924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x1a9928: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a9928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a992c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a992cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a9930: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9930u;
    {
        const bool branch_taken_0x1a9930 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1A9934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9930u;
        // 0x1a9934: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9930) {
            ctx->pc = 0x1A9944u;
            return;
        }
    }
    ctx->pc = 0x1A9938u;
    // 0x1a9938: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9938u;
    {
        const bool branch_taken_0x1a9938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9938) {
            ctx->pc = 0x1A9944u;
            return;
        }
    }
    ctx->pc = 0x1A9940u;
    // 0x1a9940: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1a9940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    ctx->pc = 0x1a9944u;
}
