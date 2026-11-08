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

// Function: entry_0012c324
// Address: 0x12c324 - 0x12c344
void entry_0012c324_0x12c324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c324_0x12c324");
#endif

    ctx->pc = 0x12c324u;

    // 0x12c324: 0x0  nop
    ctx->pc = 0x12c324u;
    // NOP
    // 0x12c328: 0x2093021  addu        $a2, $s0, $t1
    ctx->pc = 0x12c328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x12c32c: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x12c32cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x12c330: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C330u;
    {
        const bool branch_taken_0x12c330 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C330u;
        // 0x12c334: 0x24ca0004  addiu       $t2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c330) {
            ctx->pc = 0x12C344u;
            return;
        }
    }
    ctx->pc = 0x12C338u;
    // 0x12c338: 0xa4c20024  sh          $v0, 0x24($a2)
    ctx->pc = 0x12c338u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x12c33c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12C33Cu;
    {
        const bool branch_taken_0x12c33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C33Cu;
        // 0x12c340: 0xa5440000  sh          $a0, 0x0($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c33c) {
            ctx->pc = 0x12C360u;
            return;
        }
    }
    ctx->pc = 0x12C344u;
}
