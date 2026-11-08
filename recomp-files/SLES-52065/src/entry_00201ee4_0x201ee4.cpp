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

// Function: entry_00201ee4
// Address: 0x201ee4 - 0x201f40
void entry_00201ee4_0x201ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201ee4_0x201ee4");
#endif

    ctx->pc = 0x201ee4u;

label_201ee4:
    // 0x201ee4: 0x10c0ffde  beqz        $a2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x201EE4u;
    {
        const bool branch_taken_0x201ee4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x201ee4) {
            ctx->pc = 0x201E60u;
            return;
        }
    }
    ctx->pc = 0x201EECu;
    // 0x201eec: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x201eecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x201ef0: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x201ef0u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x201ef4: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x201ef4u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x201ef8: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x201ef8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x201efc: 0x70491c89  pand        $v1, $v0, $t1
    ctx->pc = 0x201efcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x201f00: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x201f00u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x201f04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x201f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201f08: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x201F08u;
    {
        const bool branch_taken_0x201f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F08u;
        // 0x201f0c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f08) {
            ctx->pc = 0x201E60u;
            return;
        }
    }
    ctx->pc = 0x201F10u;
    // 0x201f10: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x201f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x201f14: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x201f14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x201f18: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x201F18u;
    {
        const bool branch_taken_0x201f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F18u;
        // 0x201f1c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f18) {
            ctx->pc = 0x201FB8u;
            return;
        }
    }
    ctx->pc = 0x201F20u;
    // 0x201f20: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x201f20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x201f24: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x201f24u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x201f28: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x201f28u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x201f2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x201f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201f30: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x201F30u;
    {
        const bool branch_taken_0x201f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201f30) {
            ctx->pc = 0x201F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201F30u;
            // 0x201f34: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201EE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201ee4;
        }
    }
    ctx->pc = 0x201F38u;
    // 0x201f38: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x201F38u;
    {
        const bool branch_taken_0x201f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F38u;
        // 0x201f3c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f38) {
            ctx->pc = 0x201FBCu;
            return;
        }
    }
    ctx->pc = 0x201F40u;
}
