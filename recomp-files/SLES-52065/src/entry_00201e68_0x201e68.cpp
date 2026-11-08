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

// Function: entry_00201e68
// Address: 0x201e68 - 0x201ee4
void entry_00201e68_0x201e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201e68_0x201e68");
#endif

    ctx->pc = 0x201e68u;

    // 0x201e68: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x201e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x201e6c: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x201E6Cu;
    {
        const bool branch_taken_0x201e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E6Cu;
        // 0x201e70: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e6c) {
            ctx->pc = 0x201FC4u;
            return;
        }
    }
    ctx->pc = 0x201E74u;
    // 0x201e74: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x201e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x201e78: 0x2cc70010  sltiu       $a3, $a2, 0x10
    ctx->pc = 0x201e78u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x201e7c: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x201e7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
    // 0x201e80: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x201e80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x201e84: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x201e84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x201e88: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x201e88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x201e8c: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x201e8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x201e90: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x201e90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x201e94: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x201e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x201e98: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x201E98u;
    {
        const bool branch_taken_0x201e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E98u;
        // 0x201e9c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e98) {
            ctx->pc = 0x201F40u;
            return;
        }
    }
    ctx->pc = 0x201EA0u;
    // 0x201ea0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x201ea0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201ea4: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x201ea4u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x201ea8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x201ea8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201eac: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x201eacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
    // 0x201eb0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x201eb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x201eb4: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x201eb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x201eb8: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x201eb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x201ebc: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x201ebcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x201ec0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x201ec0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x201ec4: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x201ec4u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x201ec8: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x201ec8u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x201ecc: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x201eccu;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x201ed0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x201ed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ed4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x201ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201ed8: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x201ED8u;
    {
        const bool branch_taken_0x201ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x201EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201ED8u;
        // 0x201edc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ed8) {
            ctx->pc = 0x201FC4u;
            return;
        }
    }
    ctx->pc = 0x201EE0u;
    // 0x201ee0: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x201ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    ctx->pc = 0x201ee4u;
}
