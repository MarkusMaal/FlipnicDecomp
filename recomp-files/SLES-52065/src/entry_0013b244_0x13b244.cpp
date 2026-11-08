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

// Function: entry_0013b244
// Address: 0x13b244 - 0x13b2ac
void entry_0013b244_0x13b244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b244_0x13b244");
#endif

    ctx->pc = 0x13b244u;

    // 0x13b244: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x13b244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b248: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x13b248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13b24c: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x13b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x13b250: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x13b250u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13b254: 0x142000a7  bnez        $at, . + 4 + (0xA7 << 2)
    ctx->pc = 0x13B254u;
    {
        const bool branch_taken_0x13b254 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b254) {
            ctx->pc = 0x13B4F4u;
            return;
        }
    }
    ctx->pc = 0x13B25Cu;
    // 0x13b25c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x13b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13b260: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x13b260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13b264: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x13b264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b268: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x13b268u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x13b26c: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x13b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x13b270: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x13b270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x13b274: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13b274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13b278: 0x942823  subu        $a1, $a0, $s4
    ctx->pc = 0x13b278u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x13b27c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x13b27cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13b280: 0x0  nop
    ctx->pc = 0x13b280u;
    // NOP
    // 0x13b284: 0x0  nop
    ctx->pc = 0x13b284u;
    // NOP
    // 0x13b288: 0x1810  mfhi        $v1
    ctx->pc = 0x13b288u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x13b28c: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x13b28cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x13b290: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x13b290u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x13b294: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13b294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b298: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x13b298u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x13b29c: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x13B29Cu;
    {
        const bool branch_taken_0x13b29c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B29Cu;
        // 0x13b2a0: 0x73082b  sltu        $at, $v1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b29c) {
            ctx->pc = 0x13B374u;
            return;
        }
    }
    ctx->pc = 0x13B2A4u;
    // 0x13b2a4: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x13B2A4u;
    {
        const bool branch_taken_0x13b2a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2A4u;
        // 0x13b2a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2a4) {
            ctx->pc = 0x13B304u;
            return;
        }
    }
    ctx->pc = 0x13B2ACu;
}
