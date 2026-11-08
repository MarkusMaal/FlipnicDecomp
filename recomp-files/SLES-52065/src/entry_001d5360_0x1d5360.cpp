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

// Function: entry_001d5360
// Address: 0x1d5360 - 0x1d53b0
void entry_001d5360_0x1d5360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5360_0x1d5360");
#endif

    ctx->pc = 0x1d5360u;

    // 0x1d5360: 0x8c820548  lw          $v0, 0x548($a0)
    ctx->pc = 0x1d5360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1352)));
    // 0x1d5364: 0x240309e4  addiu       $v1, $zero, 0x9E4
    ctx->pc = 0x1d5364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5368: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d5368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d536c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d536cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5370: 0x24a40558  addiu       $a0, $a1, 0x558
    ctx->pc = 0x1d5370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1368));
    // 0x1d5374: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1d5374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d5378: 0x24910058  addiu       $s1, $a0, 0x58
    ctx->pc = 0x1d5378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x1d537c: 0x24820260  addiu       $v0, $a0, 0x260
    ctx->pc = 0x1d537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 608));
    // 0x1d5380: 0x8e230200  lw          $v1, 0x200($s1)
    ctx->pc = 0x1d5380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1d5384: 0x8e250204  lw          $a1, 0x204($s1)
    ctx->pc = 0x1d5384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x1d5388: 0xaec2054c  sw          $v0, 0x54C($s6)
    ctx->pc = 0x1d5388u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1356), GPR_U32(ctx, 2));
    // 0x1d538c: 0x1065005a  beq         $v1, $a1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1D538Cu;
    {
        const bool branch_taken_0x1d538c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D538Cu;
        // 0x1d5390: 0xaee40550  sw          $a0, 0x550($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 1360), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d538c) {
            ctx->pc = 0x1D54F8u;
            return;
        }
    }
    ctx->pc = 0x1D5394u;
    // 0x1d5394: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d5394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1d5398: 0x24920060  addiu       $s2, $a0, 0x60
    ctx->pc = 0x1d5398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1d539c: 0x24549f14  addiu       $s4, $v0, -0x60EC
    ctx->pc = 0x1d539cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942484));
    // 0x1d53a0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1d53a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d53a4: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1d53a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x1d53a8: 0x269efffc  addiu       $fp, $s4, -0x4
    ctx->pc = 0x1d53a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x1d53ac: 0x0  nop
    ctx->pc = 0x1d53acu;
    // NOP
    ctx->pc = 0x1d53b0u;
}
