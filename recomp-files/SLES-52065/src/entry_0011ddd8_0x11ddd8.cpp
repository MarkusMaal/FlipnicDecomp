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

// Function: entry_0011ddd8
// Address: 0x11ddd8 - 0x11ddfc
void entry_0011ddd8_0x11ddd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ddd8_0x11ddd8");
#endif

    ctx->pc = 0x11ddd8u;

    // 0x11ddd8: 0x8e4203e8  lw          $v0, 0x3E8($s2)
    ctx->pc = 0x11ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1000)));
    // 0x11dddc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11DDDCu;
    {
        const bool branch_taken_0x11dddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11dddc) {
            ctx->pc = 0x11DE10u;
            return;
        }
    }
    ctx->pc = 0x11DDE4u;
    // 0x11dde4: 0x8e420420  lw          $v0, 0x420($s2)
    ctx->pc = 0x11dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1056)));
    // 0x11dde8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DDE8u;
    {
        const bool branch_taken_0x11dde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDE8u;
        // 0x11ddec: 0x26620004  addiu       $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dde8) {
            ctx->pc = 0x11DDFCu;
            return;
        }
    }
    ctx->pc = 0x11DDF0u;
    // 0x11ddf0: 0x2662007c  addiu       $v0, $s3, 0x7C
    ctx->pc = 0x11ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 124));
    // 0x11ddf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11DDF4u;
    {
        const bool branch_taken_0x11ddf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDF4u;
        // 0x11ddf8: 0xae4203e8  sw          $v0, 0x3E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ddf4) {
            ctx->pc = 0x11DE00u;
            return;
        }
    }
    ctx->pc = 0x11DDFCu;
}
