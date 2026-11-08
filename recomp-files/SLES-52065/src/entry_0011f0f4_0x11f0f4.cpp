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

// Function: entry_0011f0f4
// Address: 0x11f0f4 - 0x11f114
void entry_0011f0f4_0x11f0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f0f4_0x11f0f4");
#endif

    ctx->pc = 0x11f0f4u;

    // 0x11f0f4: 0x0  nop
    ctx->pc = 0x11f0f4u;
    // NOP
    // 0x11f0f8: 0x8e630088  lw          $v1, 0x88($s3)
    ctx->pc = 0x11f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x11f0fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f100: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F100u;
    {
        const bool branch_taken_0x11f100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F100u;
        // 0x11f104: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f100) {
            ctx->pc = 0x11F114u;
            return;
        }
    }
    ctx->pc = 0x11F108u;
    // 0x11f108: 0x2f41023  subu        $v0, $s7, $s4
    ctx->pc = 0x11f108u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x11f10c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x11F10Cu;
    {
        const bool branch_taken_0x11f10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F10Cu;
        // 0x11f110: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f10c) {
            ctx->pc = 0x11F25Cu;
            return;
        }
    }
    ctx->pc = 0x11F114u;
}
