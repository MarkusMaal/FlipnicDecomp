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

// Function: entry_00180994
// Address: 0x180994 - 0x1809ac
void entry_00180994_0x180994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180994_0x180994");
#endif

    ctx->pc = 0x180994u;

    // 0x180994: 0x83838680  lb          $v1, -0x7980($gp)
    ctx->pc = 0x180994u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936192)));
    // 0x180998: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x180998u;
    {
        const bool branch_taken_0x180998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180998u;
        // 0x18099c: 0x24040a00  addiu       $a0, $zero, 0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180998) {
            ctx->pc = 0x1809ACu;
            return;
        }
    }
    ctx->pc = 0x1809A0u;
    // 0x1809a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1809a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1809a4: 0xaf84867c  sw          $a0, -0x7984($gp)
    ctx->pc = 0x1809a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936188), GPR_U32(ctx, 4));
    // 0x1809a8: 0xa3838680  sb          $v1, -0x7980($gp)
    ctx->pc = 0x1809a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936192), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1809acu;
}
