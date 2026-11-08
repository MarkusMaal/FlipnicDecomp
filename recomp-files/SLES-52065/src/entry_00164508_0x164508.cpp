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

// Function: entry_00164508
// Address: 0x164508 - 0x164524
void entry_00164508_0x164508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164508_0x164508");
#endif

    ctx->pc = 0x164508u;

    // 0x164508: 0x864301f4  lh          $v1, 0x1F4($s2)
    ctx->pc = 0x164508u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x16450c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16450cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164510: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x164510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x164514: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x164514u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x164518: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x164518u;
    {
        const bool branch_taken_0x164518 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164518u;
        // 0x16451c: 0x3c024023  lui         $v0, 0x4023 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16419 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164518) {
            ctx->pc = 0x164524u;
            return;
        }
    }
    ctx->pc = 0x164520u;
    // 0x164520: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x164520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    ctx->pc = 0x164524u;
}
