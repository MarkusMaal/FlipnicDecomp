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

// Function: entry_00165f34
// Address: 0x165f34 - 0x165f50
void entry_00165f34_0x165f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165f34_0x165f34");
#endif

    ctx->pc = 0x165f34u;

    // 0x165f34: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x165F34u;
    {
        const bool branch_taken_0x165f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F34u;
        // 0x165f38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f34) {
            ctx->pc = 0x165F50u;
            return;
        }
    }
    ctx->pc = 0x165F3Cu;
    // 0x165f3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x165f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165f40: 0xa4850226  sh          $a1, 0x226($a0)
    ctx->pc = 0x165f40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 550), (uint16_t)GPR_U32(ctx, 5));
    // 0x165f44: 0xa4830224  sh          $v1, 0x224($a0)
    ctx->pc = 0x165f44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x165f48: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x165f48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x165f4c: 0xa4830222  sh          $v1, 0x222($a0)
    ctx->pc = 0x165f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 546), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x165f50u;
}
