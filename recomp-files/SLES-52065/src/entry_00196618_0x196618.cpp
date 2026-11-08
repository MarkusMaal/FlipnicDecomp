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

// Function: entry_00196618
// Address: 0x196618 - 0x196644
void entry_00196618_0x196618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196618_0x196618");
#endif

    ctx->pc = 0x196618u;

    // 0x196618: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19661c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x19661cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x196620: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x196620u;
    {
        const bool branch_taken_0x196620 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x196624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196620u;
        // 0x196624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196620) {
            ctx->pc = 0x196648u;
            return;
        }
    }
    ctx->pc = 0x196628u;
    // 0x196628: 0x8e630664  lw          $v1, 0x664($s3)
    ctx->pc = 0x196628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
    // 0x19662c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x19662cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x196630: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196630u;
    {
        const bool branch_taken_0x196630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x196630) {
            ctx->pc = 0x196644u;
            return;
        }
    }
    ctx->pc = 0x196638u;
    // 0x196638: 0x8e630670  lw          $v1, 0x670($s3)
    ctx->pc = 0x196638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1648)));
    // 0x19663c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19663Cu;
    {
        const bool branch_taken_0x19663c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19663c) {
            ctx->pc = 0x196648u;
            return;
        }
    }
    ctx->pc = 0x196644u;
}
