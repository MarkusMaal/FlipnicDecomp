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

// Function: entry_0014d448
// Address: 0x14d448 - 0x14d4b4
void entry_0014d448_0x14d448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d448_0x14d448");
#endif

    ctx->pc = 0x14d448u;

    // 0x14d448: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x14d448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d44c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x14d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14d450: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x14d450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x14d454: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x14d454u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14d458: 0x1420006e  bnez        $at, . + 4 + (0x6E << 2)
    ctx->pc = 0x14D458u;
    {
        const bool branch_taken_0x14d458 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d458) {
            ctx->pc = 0x14D614u;
            return;
        }
    }
    ctx->pc = 0x14D460u;
    // 0x14d460: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x14d460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14d464: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x14d464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14d468: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x14d468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14d46c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14d46cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14d470: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x14d470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x14d474: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x14d474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x14d478: 0x85b021  addu        $s6, $a0, $a1
    ctx->pc = 0x14d478u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14d47c: 0x2d42023  subu        $a0, $s6, $s4
    ctx->pc = 0x14d47cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x14d480: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x14d480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14d484: 0x0  nop
    ctx->pc = 0x14d484u;
    // NOP
    // 0x14d488: 0x0  nop
    ctx->pc = 0x14d488u;
    // NOP
    // 0x14d48c: 0x1810  mfhi        $v1
    ctx->pc = 0x14d48cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x14d490: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x14d490u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x14d494: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x14d494u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x14d498: 0x64b821  addu        $s7, $v1, $a0
    ctx->pc = 0x14d498u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14d49c: 0x2f3082b  sltu        $at, $s7, $s3
    ctx->pc = 0x14d49cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14d4a0: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x14D4A0u;
    {
        const bool branch_taken_0x14d4a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4A0u;
        // 0x14d4a4: 0x131840  sll         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4a0) {
            ctx->pc = 0x14D52Cu;
            return;
        }
    }
    ctx->pc = 0x14D4A8u;
    // 0x14d4a8: 0x2f3082b  sltu        $at, $s7, $s3
    ctx->pc = 0x14d4a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14d4ac: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14D4ACu;
    {
        const bool branch_taken_0x14d4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4ACu;
        // 0x14d4b0: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4ac) {
            ctx->pc = 0x14D4E4u;
            return;
        }
    }
    ctx->pc = 0x14D4B4u;
}
