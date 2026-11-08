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

// Function: entry_001deb64
// Address: 0x1deb64 - 0x1deb98
void entry_001deb64_0x1deb64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001deb64_0x1deb64");
#endif

    ctx->pc = 0x1deb64u;

    // 0x1deb64: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1deb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1deb68: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1deb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1deb6c: 0x24517308  addiu       $s1, $v0, 0x7308
    ctx->pc = 0x1deb6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29448));
    // 0x1deb70: 0x24707300  addiu       $s0, $v1, 0x7300
    ctx->pc = 0x1deb70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29440));
    // 0x1deb74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1deb74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387308u));
    // 0x1deb78: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1deb78u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x387300u));
    // 0x1deb7c: 0x14460006  bne         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEB7Cu;
    {
        const bool branch_taken_0x1deb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1DEB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB7Cu;
        // 0x1deb80: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb7c) {
            ctx->pc = 0x1DEB98u;
            return;
        }
    }
    ctx->pc = 0x1DEB84u;
    // 0x1deb84: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1deb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1deb88: 0x1047000a  beq         $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1DEB88u;
    {
        const bool branch_taken_0x1deb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1DEB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB88u;
        // 0x1deb8c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb88) {
            ctx->pc = 0x1DEBB4u;
            return;
        }
    }
    ctx->pc = 0x1DEB90u;
    // 0x1deb90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DEB90u;
    {
        const bool branch_taken_0x1deb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deb90) {
            ctx->pc = 0x1DEB9Cu;
            return;
        }
    }
    ctx->pc = 0x1DEB98u;
}
