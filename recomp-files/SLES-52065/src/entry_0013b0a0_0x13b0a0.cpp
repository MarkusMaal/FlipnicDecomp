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

// Function: entry_0013b0a0
// Address: 0x13b0a0 - 0x13b0f4
void entry_0013b0a0_0x13b0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b0a0_0x13b0a0");
#endif

    ctx->pc = 0x13b0a0u;

    // 0x13b0a0: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x13b0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13b0a4: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x13b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x13b0a8: 0x3443aaab  ori         $v1, $v0, 0xAAAB
    ctx->pc = 0x13b0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x13b0ac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13b0b0: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x13b0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x13b0b4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x13b0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x13b0b8: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x13b0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x13b0bc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x13b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13b0c0: 0x463823  subu        $a3, $v0, $a2
    ctx->pc = 0x13b0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13b0c4: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x13b0c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13b0c8: 0x0  nop
    ctx->pc = 0x13b0c8u;
    // NOP
    // 0x13b0cc: 0x0  nop
    ctx->pc = 0x13b0ccu;
    // NOP
    // 0x13b0d0: 0x1810  mfhi        $v1
    ctx->pc = 0x13b0d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x13b0d4: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x13b0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x13b0d8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x13b0d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x13b0dc: 0x675821  addu        $t3, $v1, $a3
    ctx->pc = 0x13b0dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13b0e0: 0x1160001b  beqz        $t3, . + 4 + (0x1B << 2)
    ctx->pc = 0x13B0E0u;
    {
        const bool branch_taken_0x13b0e0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0E0u;
        // 0x13b0e4: 0xc2082b  sltu        $at, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b0e0) {
            ctx->pc = 0x13B150u;
            return;
        }
    }
    ctx->pc = 0x13B0E8u;
    // 0x13b0e8: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x13b0e8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b0ec: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x13B0ECu;
    {
        const bool branch_taken_0x13b0ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0ECu;
        // 0x13b0f0: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b0ec) {
            ctx->pc = 0x13B150u;
            return;
        }
    }
    ctx->pc = 0x13B0F4u;
}
