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

// Function: entry_0012f4b8
// Address: 0x12f4b8 - 0x12f4d0
void entry_0012f4b8_0x12f4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f4b8_0x12f4b8");
#endif

    ctx->pc = 0x12f4b8u;

    // 0x12f4b8: 0x13d1821  addu        $v1, $t1, $sp
    ctx->pc = 0x12f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x12f4bc: 0x24681920  addiu       $t0, $v1, 0x1920
    ctx->pc = 0x12f4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 6432));
    // 0x12f4c0: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F4C0u;
    {
        const bool branch_taken_0x12f4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x12F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4C0u;
        // 0x12f4c4: 0xa5020000  sh          $v0, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4c0) {
            ctx->pc = 0x12F4D0u;
            return;
        }
    }
    ctx->pc = 0x12F4C8u;
    // 0x12f4c8: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12F4C8u;
    {
        const bool branch_taken_0x12f4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x12f4c8) {
            ctx->pc = 0x12F4ECu;
            return;
        }
    }
    ctx->pc = 0x12F4D0u;
}
