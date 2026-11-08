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

// Function: entry_001fd22c
// Address: 0x1fd22c - 0x1fd244
void entry_001fd22c_0x1fd22c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd22c_0x1fd22c");
#endif

    ctx->pc = 0x1fd22cu;

    // 0x1fd22c: 0xa2b30000  sb          $s3, 0x0($s5)
    ctx->pc = 0x1fd22cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x1fd230: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1fd230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd234: 0x1684ff8e  bne         $s4, $a0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x1FD234u;
    {
        const bool branch_taken_0x1fd234 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD234u;
        // 0x1fd238: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd234) {
            ctx->pc = 0x1FD070u;
            return;
        }
    }
    ctx->pc = 0x1FD23Cu;
    // 0x1fd23c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FD23Cu;
    {
        const bool branch_taken_0x1fd23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD23Cu;
        // 0x1fd240: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd23c) {
            ctx->pc = 0x1FD294u;
            return;
        }
    }
    ctx->pc = 0x1FD244u;
}
