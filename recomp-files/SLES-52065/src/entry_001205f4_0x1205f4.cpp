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

// Function: entry_001205f4
// Address: 0x1205f4 - 0x120610
void entry_001205f4_0x1205f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001205f4_0x1205f4");
#endif

    ctx->pc = 0x1205f4u;

    // 0x1205f4: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x1205f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1205f8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1205F8u;
    {
        const bool branch_taken_0x1205f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1205FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205F8u;
        // 0x1205fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1205f8) {
            ctx->pc = 0x120610u;
            return;
        }
    }
    ctx->pc = 0x120600u;
    // 0x120600: 0x8f83875c  lw          $v1, -0x78A4($gp)
    ctx->pc = 0x120600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x120604: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x120604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x120608: 0xaf83875c  sw          $v1, -0x78A4($gp)
    ctx->pc = 0x120608u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 3));
    // 0x12060c: 0xaf838780  sw          $v1, -0x7880($gp)
    ctx->pc = 0x12060cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 3));
    ctx->pc = 0x120610u;
}
