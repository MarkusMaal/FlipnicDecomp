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

// Function: entry_00191418
// Address: 0x191418 - 0x191444
void entry_00191418_0x191418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191418_0x191418");
#endif

    ctx->pc = 0x191418u;

    // 0x191418: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x191418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x19141c: 0x24670040  addiu       $a3, $v1, 0x40
    ctx->pc = 0x19141cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x191420: 0x8463022c  lh          $v1, 0x22C($v1)
    ctx->pc = 0x191420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 556)));
    // 0x191424: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x191424u;
    {
        const bool branch_taken_0x191424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x191424) {
            ctx->pc = 0x191454u;
            return;
        }
    }
    ctx->pc = 0x19142Cu;
    // 0x19142c: 0x84e301e8  lh          $v1, 0x1E8($a3)
    ctx->pc = 0x19142cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x191430: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191430u;
    {
        const bool branch_taken_0x191430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x191434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191430u;
        // 0x191434: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191430) {
            ctx->pc = 0x191444u;
            return;
        }
    }
    ctx->pc = 0x191438u;
    // 0x191438: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191438u;
    {
        const bool branch_taken_0x191438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191438u;
        // 0x19143c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191438) {
            ctx->pc = 0x191444u;
            return;
        }
    }
    ctx->pc = 0x191440u;
    // 0x191440: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191440u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191444u;
}
