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

// Function: entry_0011d1e4
// Address: 0x11d1e4 - 0x11d230
void entry_0011d1e4_0x11d1e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d1e4_0x11d1e4");
#endif

    ctx->pc = 0x11d1e4u;

    // 0x11d1e4: 0x120000f0  beqz        $s0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x11D1E4u;
    {
        const bool branch_taken_0x11d1e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d1e4) {
            ctx->pc = 0x11D5A8u;
            return;
        }
    }
    ctx->pc = 0x11D1ECu;
    // 0x11d1ec: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x11d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x11d1f0: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x11d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x11d1f4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x11d1f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11d1f8: 0x1020007b  beqz        $at, . + 4 + (0x7B << 2)
    ctx->pc = 0x11D1F8u;
    {
        const bool branch_taken_0x11d1f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1F8u;
        // 0x11d1fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1f8) {
            ctx->pc = 0x11D3E8u;
            return;
        }
    }
    ctx->pc = 0x11D200u;
    // 0x11d200: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x11d200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11d204: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x11d204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11d208: 0x10a40054  beq         $a1, $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x11D208u;
    {
        const bool branch_taken_0x11d208 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x11d208) {
            ctx->pc = 0x11D35Cu;
            return;
        }
    }
    ctx->pc = 0x11D210u;
    // 0x11d210: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x11d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d214: 0x10a4002b  beq         $a1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x11D214u;
    {
        const bool branch_taken_0x11d214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x11d214) {
            ctx->pc = 0x11D2C4u;
            return;
        }
    }
    ctx->pc = 0x11D21Cu;
    // 0x11d21c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d220: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D220u;
    {
        const bool branch_taken_0x11d220 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x11d220) {
            ctx->pc = 0x11D230u;
            return;
        }
    }
    ctx->pc = 0x11D228u;
    // 0x11d228: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x11D228u;
    {
        const bool branch_taken_0x11d228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d228) {
            ctx->pc = 0x11D3E8u;
            return;
        }
    }
    ctx->pc = 0x11D230u;
}
