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

// Function: entry_00164de8
// Address: 0x164de8 - 0x164e04
void entry_00164de8_0x164de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164de8_0x164de8");
#endif

    ctx->pc = 0x164de8u;

    // 0x164de8: 0x86830218  lh          $v1, 0x218($s4)
    ctx->pc = 0x164de8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 536)));
    // 0x164dec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x164decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164df0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164DF0u;
    {
        const bool branch_taken_0x164df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DF0u;
        // 0x164df4: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164df0) {
            ctx->pc = 0x164E04u;
            return;
        }
    }
    ctx->pc = 0x164DF8u;
    // 0x164df8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164dfc: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x164dfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x164e00: 0xae620350  sw          $v0, 0x350($s3)
    ctx->pc = 0x164e00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 848), GPR_U32(ctx, 2));
    ctx->pc = 0x164e04u;
}
