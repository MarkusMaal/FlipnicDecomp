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

// Function: entry_001e4630
// Address: 0x1e4630 - 0x1e464c
void entry_001e4630_0x1e4630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4630_0x1e4630");
#endif

    ctx->pc = 0x1e4630u;

    // 0x1e4630: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4630u;
    {
        const bool branch_taken_0x1e4630 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4630u;
        // 0x1e4634: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4630) {
            ctx->pc = 0x1E464Cu;
            return;
        }
    }
    ctx->pc = 0x1E4638u;
    // 0x1e4638: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e463c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e463cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4640: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e4640u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1e4644: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1E4644u;
    {
        const bool branch_taken_0x1e4644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4644u;
        // 0x1e4648: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4644) {
            ctx->pc = 0x1E46E0u;
            return;
        }
    }
    ctx->pc = 0x1E464Cu;
}
