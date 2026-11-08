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

// Function: entry_00140b20
// Address: 0x140b20 - 0x140b48
void entry_00140b20_0x140b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140b20_0x140b20");
#endif

    ctx->pc = 0x140b20u;

    // 0x140b20: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x140b20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x140b24: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x140b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x140b28: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x140b28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x140b2c: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x140b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x140b30: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x140b30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x140b34: 0x109382b  sltu        $a3, $t0, $t1
    ctx->pc = 0x140b34u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x140b38: 0x14e00053  bnez        $a3, . + 4 + (0x53 << 2)
    ctx->pc = 0x140B38u;
    {
        const bool branch_taken_0x140b38 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x140B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B38u;
        // 0x140b3c: 0x1093823  subu        $a3, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b38) {
            ctx->pc = 0x140C88u;
            return;
        }
    }
    ctx->pc = 0x140B40u;
    // 0x140b40: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x140B40u;
    {
        const bool branch_taken_0x140b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B40u;
        // 0x140b44: 0xaca70008  sw          $a3, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b40) {
            ctx->pc = 0x140C88u;
            return;
        }
    }
    ctx->pc = 0x140B48u;
}
