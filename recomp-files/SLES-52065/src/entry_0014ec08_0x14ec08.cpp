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

// Function: entry_0014ec08
// Address: 0x14ec08 - 0x14ec20
void entry_0014ec08_0x14ec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ec08_0x14ec08");
#endif

    ctx->pc = 0x14ec08u;

    // 0x14ec08: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14ec0c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x14ec0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x14ec10: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x14ec10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x14ec14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14ec18: 0x1651fff7  bne         $s2, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14EC18u;
    {
        const bool branch_taken_0x14ec18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x14EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC18u;
        // 0x14ec1c: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec18) {
            ctx->pc = 0x14EBF8u;
            return;
        }
    }
    ctx->pc = 0x14EC20u;
}
