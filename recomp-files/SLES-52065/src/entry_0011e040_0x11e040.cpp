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

// Function: entry_0011e040
// Address: 0x11e040 - 0x11e068
void entry_0011e040_0x11e040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e040_0x11e040");
#endif

    ctx->pc = 0x11e040u;

    // 0x11e040: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x11E040u;
    {
        const bool branch_taken_0x11e040 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E040u;
        // 0x11e044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e040) {
            ctx->pc = 0x11E080u;
            return;
        }
    }
    ctx->pc = 0x11E048u;
    // 0x11e048: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x11e048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11e04c: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E04Cu;
    {
        const bool branch_taken_0x11e04c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E04Cu;
        // 0x11e050: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e04c) {
            ctx->pc = 0x11E068u;
            return;
        }
    }
    ctx->pc = 0x11E054u;
    // 0x11e054: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x11e054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11e058: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11e058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e05c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x11e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x11e060: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11E060u;
    {
        const bool branch_taken_0x11e060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E060u;
        // 0x11e064: 0xae1100d8  sw          $s1, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e060) {
            ctx->pc = 0x11E080u;
            return;
        }
    }
    ctx->pc = 0x11E068u;
}
