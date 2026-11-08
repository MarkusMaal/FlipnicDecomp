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

// Function: entry_001de5a0
// Address: 0x1de5a0 - 0x1de5bc
void entry_001de5a0_0x1de5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de5a0_0x1de5a0");
#endif

    ctx->pc = 0x1de5a0u;

    // 0x1de5a0: 0x31021000  andi        $v0, $t0, 0x1000
    ctx->pc = 0x1de5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4096);
    // 0x1de5a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE5A4u;
    {
        const bool branch_taken_0x1de5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5A4u;
        // 0x1de5a8: 0x2402efff  addiu       $v0, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5a4) {
            ctx->pc = 0x1DE5BCu;
            return;
        }
    }
    ctx->pc = 0x1DE5ACu;
    // 0x1de5ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1de5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de5b0: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1de5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1de5b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1de5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1de5b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1de5b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1de5bcu;
}
