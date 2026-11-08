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

// Function: entry_00116078
// Address: 0x116078 - 0x116098
void entry_00116078_0x116078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116078_0x116078");
#endif

    ctx->pc = 0x116078u;

    // 0x116078: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116078u;
    {
        const bool branch_taken_0x116078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116078u;
        // 0x11607c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116078) {
            ctx->pc = 0x116098u;
            return;
        }
    }
    ctx->pc = 0x116080u;
    // 0x116080: 0x8f838314  lw          $v1, -0x7CEC($gp)
    ctx->pc = 0x116080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935316)));
    // 0x116084: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x116084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x116088: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x116088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x11608c: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x11608Cu;
    {
        const bool branch_taken_0x11608c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x116090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11608Cu;
        // 0x116090: 0xaf848314  sw          $a0, -0x7CEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935316), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11608c) {
            ctx->pc = 0x1161B8u;
            return;
        }
    }
    ctx->pc = 0x116094u;
    // 0x116094: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116098u;
}
