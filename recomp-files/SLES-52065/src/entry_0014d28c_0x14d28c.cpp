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

// Function: entry_0014d28c
// Address: 0x14d28c - 0x14d2e0
void entry_0014d28c_0x14d28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d28c_0x14d28c");
#endif

    ctx->pc = 0x14d28cu;

    // 0x14d28c: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x14d28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x14d290: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x14d290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x14d294: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x14d294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x14d298: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x14d298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x14d29c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14d2a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14d2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14d2a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14d2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14d2a8: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x14d2a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14d2ac: 0x2741823  subu        $v1, $s3, $s4
    ctx->pc = 0x14d2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x14d2b0: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x14d2b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14d2b4: 0x0  nop
    ctx->pc = 0x14d2b4u;
    // NOP
    // 0x14d2b8: 0x0  nop
    ctx->pc = 0x14d2b8u;
    // NOP
    // 0x14d2bc: 0x1010  mfhi        $v0
    ctx->pc = 0x14d2bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14d2c0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x14d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x14d2c4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x14d2c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x14d2c8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x14d2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d2cc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x14D2CCu;
    {
        const bool branch_taken_0x14d2cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D2CCu;
        // 0x14d2d0: 0x293082b  sltu        $at, $s4, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d2cc) {
            ctx->pc = 0x14D308u;
            return;
        }
    }
    ctx->pc = 0x14D2D4u;
    // 0x14d2d4: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x14d2d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2d8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x14D2D8u;
    {
        const bool branch_taken_0x14d2d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D2D8u;
        // 0x14d2dc: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d2d8) {
            ctx->pc = 0x14D308u;
            return;
        }
    }
    ctx->pc = 0x14D2E0u;
}
