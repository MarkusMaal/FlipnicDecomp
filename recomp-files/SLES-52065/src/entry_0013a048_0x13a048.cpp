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

// Function: entry_0013a048
// Address: 0x13a048 - 0x13a084
void entry_0013a048_0x13a048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a048_0x13a048");
#endif

    ctx->pc = 0x13a048u;

    // 0x13a048: 0x8f878594  lw          $a3, -0x7A6C($gp)
    ctx->pc = 0x13a048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x13a04c: 0x34180  sll         $t0, $v1, 6
    ctx->pc = 0x13a04cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x13a050: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x13a050u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13a054: 0x8caa0008  lw          $t2, 0x8($a1)
    ctx->pc = 0x13a054u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13a058: 0x8cab0004  lw          $t3, 0x4($a1)
    ctx->pc = 0x13a058u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13a05c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x13a05cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x13a060: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x13a060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x13a064: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x13a064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x13a068: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x13a068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x13a06c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x13a06cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13a070: 0xd8e50010  lqc2        $vf5, 0x10($a3)
    ctx->pc = 0x13a070u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x13a074: 0xd8e60020  lqc2        $vf6, 0x20($a3)
    ctx->pc = 0x13a074u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x13a078: 0xd8e70030  lqc2        $vf7, 0x30($a3)
    ctx->pc = 0x13a078u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x13a07c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x13A07Cu;
    {
        const bool branch_taken_0x13a07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A07Cu;
        // 0x13a080: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a07c) {
            ctx->pc = 0x13A0DCu;
            return;
        }
    }
    ctx->pc = 0x13A084u;
}
