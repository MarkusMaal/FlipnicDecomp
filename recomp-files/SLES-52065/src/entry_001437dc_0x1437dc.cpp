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

// Function: entry_001437dc
// Address: 0x1437dc - 0x14380c
void entry_001437dc_0x1437dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001437dc_0x1437dc");
#endif

    ctx->pc = 0x1437dcu;

label_1437dc:
    // 0x1437dc: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x1437dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x1437e0: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1437e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1437e4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1437e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1437e8: 0x285082b  sltu        $at, $s4, $a1
    ctx->pc = 0x1437e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1437ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1437ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1437f0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1437f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1437f4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1437f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1437f8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1437f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1437fc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1437fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x143800: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x143800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x143804: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x143804u;
    {
        const bool branch_taken_0x143804 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x143808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143804u;
        // 0x143808: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143804) {
            ctx->pc = 0x1437DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1437dc;
        }
    }
    ctx->pc = 0x14380Cu;
}
