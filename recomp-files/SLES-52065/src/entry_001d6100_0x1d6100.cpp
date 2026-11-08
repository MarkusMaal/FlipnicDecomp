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

// Function: entry_001d6100
// Address: 0x1d6100 - 0x1d6140
void entry_001d6100_0x1d6100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6100_0x1d6100");
#endif

    ctx->pc = 0x1d6100u;

    // 0x1d6100: 0x240309e4  addiu       $v1, $zero, 0x9E4
    ctx->pc = 0x1d6100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d6104: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x1d6104u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1d6108: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x1d6108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d610c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d610cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6110: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d6110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d6114: 0x26a40558  addiu       $a0, $s5, 0x558
    ctx->pc = 0x1d6114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1368));
    // 0x1d6118: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d6118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d611c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d611cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d6120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6124: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d6124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d6128: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D6128u;
    {
        const bool branch_taken_0x1d6128 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6128u;
        // 0x1d612c: 0x8c5202b8  lw          $s2, 0x2B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6128) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D6130u;
    // 0x1d6130: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d6130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d6134: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d6134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d6138: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d6138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d613c: 0x0  nop
    ctx->pc = 0x1d613cu;
    // NOP
    ctx->pc = 0x1d6140u;
}
