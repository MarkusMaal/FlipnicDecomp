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

// Function: entry_001237d4
// Address: 0x1237d4 - 0x123848
void entry_001237d4_0x1237d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001237d4_0x1237d4");
#endif

    ctx->pc = 0x1237d4u;

    // 0x1237d4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1237d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1237d8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1237d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1237dc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1237dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1237e0: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1237e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1237e4: 0x14870033  bne         $a0, $a3, . + 4 + (0x33 << 2)
    ctx->pc = 0x1237E4u;
    {
        const bool branch_taken_0x1237e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x1237e4) {
            ctx->pc = 0x1238B4u;
            return;
        }
    }
    ctx->pc = 0x1237ECu;
    // 0x1237ec: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x1237ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1237f0: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1237F0u;
    {
        const bool branch_taken_0x1237f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1237f0) {
            ctx->pc = 0x123848u;
            return;
        }
    }
    ctx->pc = 0x1237F8u;
    // 0x1237f8: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x1237f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1237fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1237fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123800: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x123800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x123804: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x123804u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x123808: 0x14c5000f  bne         $a2, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x123808u;
    {
        const bool branch_taken_0x123808 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x123808) {
            ctx->pc = 0x123848u;
            return;
        }
    }
    ctx->pc = 0x123810u;
    // 0x123810: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x123810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123814: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x123814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x123818: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x123818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x12381c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x12381cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x123820: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x123820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x123824: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x123824u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x123828: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x123828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12382c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x12382cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x123830: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x123830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123834: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x123834u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x123838: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x123838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12383c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x12383cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x123840: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x123840u;
    {
        const bool branch_taken_0x123840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123840u;
        // 0x123844: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123840) {
            ctx->pc = 0x123974u;
            return;
        }
    }
    ctx->pc = 0x123848u;
}
