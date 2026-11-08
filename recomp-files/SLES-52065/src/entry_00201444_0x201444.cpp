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

// Function: entry_00201444
// Address: 0x201444 - 0x201470
void entry_00201444_0x201444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201444_0x201444");
#endif

    ctx->pc = 0x201444u;

    // 0x201444: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x201444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x201448: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x201448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20144c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x20144Cu;
    {
        const bool branch_taken_0x20144c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20144c) {
            ctx->pc = 0x201480u;
            return;
        }
    }
    ctx->pc = 0x201454u;
    // 0x201454: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x201454u;
    {
        const bool branch_taken_0x201454 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x201458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201454u;
        // 0x201458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201454) {
            ctx->pc = 0x201470u;
            return;
        }
    }
    ctx->pc = 0x20145Cu;
    // 0x20145c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20145cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201460: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x201460u;
    {
        const bool branch_taken_0x201460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201460u;
        // 0x201464: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201460) {
            ctx->pc = 0x2014A0u;
            return;
        }
    }
    ctx->pc = 0x201468u;
    // 0x201468: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x201468u;
    {
        const bool branch_taken_0x201468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201468u;
        // 0x20146c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201468) {
            ctx->pc = 0x2014B0u;
            return;
        }
    }
    ctx->pc = 0x201470u;
}
