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

// Function: entry_0010b260
// Address: 0x10b260 - 0x10b278
void entry_0010b260_0x10b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b260_0x10b260");
#endif

    ctx->pc = 0x10b260u;

    // 0x10b260: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10b260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b264: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x10b264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10b268: 0xac850264  sw          $a1, 0x264($a0)
    ctx->pc = 0x10b268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 5));
    // 0x10b26c: 0xac83026c  sw          $v1, 0x26C($a0)
    ctx->pc = 0x10b26cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 620), GPR_U32(ctx, 3));
    // 0x10b270: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10B270u;
    {
        const bool branch_taken_0x10b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B270u;
        // 0x10b274: 0xac800274  sw          $zero, 0x274($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b270) {
            ctx->pc = 0x10B28Cu;
            return;
        }
    }
    ctx->pc = 0x10B278u;
}
