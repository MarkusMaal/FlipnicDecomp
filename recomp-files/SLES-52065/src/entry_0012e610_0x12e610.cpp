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

// Function: entry_0012e610
// Address: 0x12e610 - 0x12e628
void entry_0012e610_0x12e610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e610_0x12e610");
#endif

    ctx->pc = 0x12e610u;

    // 0x12e610: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x12e610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12e614: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x12e614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x12e618: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x12e618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x12e61c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12e620: 0x1651ffe9  bne         $s2, $s1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12E620u;
    {
        const bool branch_taken_0x12e620 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x12E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E620u;
        // 0x12e624: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e620) {
            ctx->pc = 0x12E5C8u;
            return;
        }
    }
    ctx->pc = 0x12E628u;
}
