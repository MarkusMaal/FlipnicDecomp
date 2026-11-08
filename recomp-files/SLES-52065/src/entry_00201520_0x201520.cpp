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

// Function: entry_00201520
// Address: 0x201520 - 0x20154c
void entry_00201520_0x201520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201520_0x201520");
#endif

    ctx->pc = 0x201520u;

    // 0x201520: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x201520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x201524: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x201524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201528: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x201528u;
    {
        const bool branch_taken_0x201528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201528u;
        // 0x20152c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201528) {
            ctx->pc = 0x20157Cu;
            return;
        }
    }
    ctx->pc = 0x201530u;
    // 0x201530: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x201530u;
    {
        const bool branch_taken_0x201530 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x201530) {
            ctx->pc = 0x20154Cu;
            return;
        }
    }
    ctx->pc = 0x201538u;
    // 0x201538: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x201538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20153c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20153Cu;
    {
        const bool branch_taken_0x20153c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20153Cu;
        // 0x201540: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20153c) {
            ctx->pc = 0x20155Cu;
            return;
        }
    }
    ctx->pc = 0x201544u;
    // 0x201544: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x201544u;
    {
        const bool branch_taken_0x201544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201544u;
        // 0x201548: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201544) {
            ctx->pc = 0x20156Cu;
            return;
        }
    }
    ctx->pc = 0x20154Cu;
}
