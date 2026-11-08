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

// Function: entry_001289e4
// Address: 0x1289e4 - 0x128a00
void entry_001289e4_0x1289e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001289e4_0x1289e4");
#endif

    ctx->pc = 0x1289e4u;

    // 0x1289e4: 0x8382846c  lb          $v0, -0x7B94($gp)
    ctx->pc = 0x1289e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935660)));
    // 0x1289e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1289E8u;
    {
        const bool branch_taken_0x1289e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1289ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289E8u;
        // 0x1289ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289e8) {
            ctx->pc = 0x128A00u;
            return;
        }
    }
    ctx->pc = 0x1289F0u;
    // 0x1289f0: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x1289f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x1289f4: 0xa382846c  sb          $v0, -0x7B94($gp)
    ctx->pc = 0x1289f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935660), (uint8_t)GPR_U32(ctx, 2));
    // 0x1289f8: 0x346251ec  ori         $v0, $v1, 0x51EC
    ctx->pc = 0x1289f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x1289fc: 0xaf828468  sw          $v0, -0x7B98($gp)
    ctx->pc = 0x1289fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935656), GPR_U32(ctx, 2));
    ctx->pc = 0x128a00u;
}
