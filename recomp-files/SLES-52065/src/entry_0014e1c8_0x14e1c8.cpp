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

// Function: entry_0014e1c8
// Address: 0x14e1c8 - 0x14e234
void entry_0014e1c8_0x14e1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e1c8_0x14e1c8");
#endif

    ctx->pc = 0x14e1c8u;

    // 0x14e1c8: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x14e1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14e1cc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x14e1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14e1d0: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x14e1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x14e1d4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x14e1d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14e1d8: 0x142000aa  bnez        $at, . + 4 + (0xAA << 2)
    ctx->pc = 0x14E1D8u;
    {
        const bool branch_taken_0x14e1d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e1d8) {
            ctx->pc = 0x14E484u;
            return;
        }
    }
    ctx->pc = 0x14E1E0u;
    // 0x14e1e0: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x14e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14e1e4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x14e1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14e1e8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x14e1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14e1ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14e1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14e1f0: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x14e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x14e1f4: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x14e1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x14e1f8: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x14e1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14e1fc: 0x2342023  subu        $a0, $s1, $s4
    ctx->pc = 0x14e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x14e200: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x14e200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14e204: 0x0  nop
    ctx->pc = 0x14e204u;
    // NOP
    // 0x14e208: 0x0  nop
    ctx->pc = 0x14e208u;
    // NOP
    // 0x14e20c: 0x1810  mfhi        $v1
    ctx->pc = 0x14e20cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x14e210: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x14e210u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x14e214: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x14e214u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x14e218: 0x64b821  addu        $s7, $v1, $a0
    ctx->pc = 0x14e218u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e21c: 0x2f3082b  sltu        $at, $s7, $s3
    ctx->pc = 0x14e21cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14e220: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x14E220u;
    {
        const bool branch_taken_0x14e220 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E220u;
        // 0x14e224: 0x131840  sll         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e220) {
            ctx->pc = 0x14E32Cu;
            return;
        }
    }
    ctx->pc = 0x14E228u;
    // 0x14e228: 0x2f3082b  sltu        $at, $s7, $s3
    ctx->pc = 0x14e228u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14e22c: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x14E22Cu;
    {
        const bool branch_taken_0x14e22c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E22Cu;
        // 0x14e230: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e22c) {
            ctx->pc = 0x14E2A4u;
            return;
        }
    }
    ctx->pc = 0x14E234u;
}
