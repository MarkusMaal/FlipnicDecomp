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

// Function: entry_001d8188
// Address: 0x1d8188 - 0x1d81a0
void entry_001d8188_0x1d8188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8188_0x1d8188");
#endif

    ctx->pc = 0x1d8188u;

    // 0x1d8188: 0x54a30005  bnel        $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8188u;
    {
        const bool branch_taken_0x1d8188 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d8188) {
            ctx->pc = 0x1D818Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8188u;
            // 0x1d818c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D81A0u;
            return;
        }
    }
    ctx->pc = 0x1D8190u;
    // 0x1d8190: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d8190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8194: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1d8194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1d8198: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8198u;
    {
        const bool branch_taken_0x1d8198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8198u;
        // 0x1d819c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8198) {
            ctx->pc = 0x1D81A4u;
            return;
        }
    }
    ctx->pc = 0x1D81A0u;
}
