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

// Function: entry_001c2680
// Address: 0x1c2680 - 0x1c26a0
void entry_001c2680_0x1c2680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2680_0x1c2680");
#endif

    ctx->pc = 0x1c2680u;

    // 0x1c2680: 0x1444017b  bne         $v0, $a0, . + 4 + (0x17B << 2)
    ctx->pc = 0x1C2680u;
    {
        const bool branch_taken_0x1c2680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c2680) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2688u;
    // 0x1c2688: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x1c2688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1c268c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2690: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2690u;
    {
        const bool branch_taken_0x1c2690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c2690) {
            ctx->pc = 0x1C26A0u;
            return;
        }
    }
    ctx->pc = 0x1C2698u;
    // 0x1c2698: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x1C2698u;
    {
        const bool branch_taken_0x1c2698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2698u;
        // 0x1c269c: 0xae240248  sw          $a0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2698) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C26A0u;
}
