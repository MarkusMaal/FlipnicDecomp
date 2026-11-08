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

// Function: entry_001da1e8
// Address: 0x1da1e8 - 0x1da220
void entry_001da1e8_0x1da1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da1e8_0x1da1e8");
#endif

    ctx->pc = 0x1da1e8u;

    // 0x1da1e8: 0x253071d0  addiu       $s0, $t1, 0x71D0
    ctx->pc = 0x1da1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 29136));
    // 0x1da1ec: 0x24c370d0  addiu       $v1, $a2, 0x70D0
    ctx->pc = 0x1da1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28880));
    // 0x1da1f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1da1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da1f4: 0x32d3000f  andi        $s3, $s6, 0xF
    ctx->pc = 0x1da1f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x1da1f8: 0x32f5000f  andi        $s5, $s7, 0xF
    ctx->pc = 0x1da1f8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)15);
    // 0x1da1fc: 0x2412007e  addiu       $s2, $zero, 0x7E
    ctx->pc = 0x1da1fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1da200: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1da200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da204: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da208: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x1da208u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da20c: 0x244b0009  addiu       $t3, $v0, 0x9
    ctx->pc = 0x1da20cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1da210: 0x280702d  daddu       $t6, $s4, $zero
    ctx->pc = 0x1da210u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da214: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1DA214u;
    {
        const bool branch_taken_0x1da214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA214u;
        // 0x1da218: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da214) {
            ctx->pc = 0x1DA2B0u;
            return;
        }
    }
    ctx->pc = 0x1DA21Cu;
    // 0x1da21c: 0x0  nop
    ctx->pc = 0x1da21cu;
    // NOP
    ctx->pc = 0x1da220u;
}
