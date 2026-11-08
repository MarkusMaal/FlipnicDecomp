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

// Function: entry_001de5bc
// Address: 0x1de5bc - 0x1de5d4
void entry_001de5bc_0x1de5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de5bc_0x1de5bc");
#endif

    ctx->pc = 0x1de5bcu;

    // 0x1de5bc: 0x31022000  andi        $v0, $t0, 0x2000
    ctx->pc = 0x1de5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8192);
    // 0x1de5c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE5C0u;
    {
        const bool branch_taken_0x1de5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5C0u;
        // 0x1de5c4: 0x2402dfff  addiu       $v0, $zero, -0x2001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5c0) {
            ctx->pc = 0x1DE5D4u;
            return;
        }
    }
    ctx->pc = 0x1DE5C8u;
    // 0x1de5c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1de5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de5cc: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1de5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1de5d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1de5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1de5d4u;
}
