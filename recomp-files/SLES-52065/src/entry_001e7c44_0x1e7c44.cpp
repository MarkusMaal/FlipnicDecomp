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

// Function: entry_001e7c44
// Address: 0x1e7c44 - 0x1e7cac
void entry_001e7c44_0x1e7c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7c44_0x1e7c44");
#endif

    ctx->pc = 0x1e7c44u;

    // 0x1e7c44: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1e7c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e7c48: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e7c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e7c4c: 0xd12021  addu        $a0, $a2, $s1
    ctx->pc = 0x1e7c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1e7c50: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1e7c50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e7c54: 0x14200083  bnez        $at, . + 4 + (0x83 << 2)
    ctx->pc = 0x1E7C54u;
    {
        const bool branch_taken_0x1e7c54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7c54) {
            ctx->pc = 0x1E7E64u;
            return;
        }
    }
    ctx->pc = 0x1E7C5Cu;
    // 0x1e7c5c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1e7c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e7c60: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1e7c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1e7c64: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1e7c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e7c68: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x1e7c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x1e7c6c: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x1e7c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e7c70: 0x3464aaab  ori         $a0, $v1, 0xAAAB
    ctx->pc = 0x1e7c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x1e7c74: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1e7c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e7c78: 0x722823  subu        $a1, $v1, $s2
    ctx->pc = 0x1e7c78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e7c7c: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x1e7c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e7c80: 0x0  nop
    ctx->pc = 0x1e7c80u;
    // NOP
    // 0x1e7c84: 0x0  nop
    ctx->pc = 0x1e7c84u;
    // NOP
    // 0x1e7c88: 0x2010  mfhi        $a0
    ctx->pc = 0x1e7c88u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1e7c8c: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1e7c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1e7c90: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x1e7c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e7c94: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x1e7c94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e7c98: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1E7C98u;
    {
        const bool branch_taken_0x1e7c98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C98u;
        // 0x1e7c9c: 0x112040  sll         $a0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c98) {
            ctx->pc = 0x1E7D54u;
            return;
        }
    }
    ctx->pc = 0x1E7CA0u;
    // 0x1e7ca0: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x1e7ca0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e7ca4: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E7CA4u;
    {
        const bool branch_taken_0x1e7ca4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CA4u;
        // 0x1e7ca8: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ca4) {
            ctx->pc = 0x1E7CF4u;
            return;
        }
    }
    ctx->pc = 0x1E7CACu;
}
