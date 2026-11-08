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

// Function: entry_00159ec8
// Address: 0x159ec8 - 0x159f08
void entry_00159ec8_0x159ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159ec8_0x159ec8");
#endif

    ctx->pc = 0x159ec8u;

    // 0x159ec8: 0x86030234  lh          $v1, 0x234($s0)
    ctx->pc = 0x159ec8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x159ecc: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x159ECCu;
    {
        const bool branch_taken_0x159ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x159ecc) {
            ctx->pc = 0x159F08u;
            return;
        }
    }
    ctx->pc = 0x159ED4u;
    // 0x159ed4: 0x86030232  lh          $v1, 0x232($s0)
    ctx->pc = 0x159ed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x159ed8: 0xa603022e  sh          $v1, 0x22E($s0)
    ctx->pc = 0x159ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 558), (uint16_t)GPR_U32(ctx, 3));
    // 0x159edc: 0x86030228  lh          $v1, 0x228($s0)
    ctx->pc = 0x159edcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x159ee0: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x159EE0u;
    {
        const bool branch_taken_0x159ee0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x159ee0) {
            ctx->pc = 0x159F08u;
            return;
        }
    }
    ctx->pc = 0x159EE8u;
    // 0x159ee8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x159ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x159eec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x159eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x159ef0: 0xa6030228  sh          $v1, 0x228($s0)
    ctx->pc = 0x159ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 552), (uint16_t)GPR_U32(ctx, 3));
    // 0x159ef4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159ef8: 0x86030236  lh          $v1, 0x236($s0)
    ctx->pc = 0x159ef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 566)));
    // 0x159efc: 0xa603022a  sh          $v1, 0x22A($s0)
    ctx->pc = 0x159efcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 554), (uint16_t)GPR_U32(ctx, 3));
    // 0x159f00: 0xc042118  jal         func_108460
    ctx->pc = 0x159F00u;
    SET_GPR_U32(ctx, 31, 0x159F08u);
    ctx->pc = 0x159F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159F00u;
    // 0x159f04: 0xa602022c  sh          $v0, 0x22C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 556), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x159F00u, 0x159F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159F08u;
}
