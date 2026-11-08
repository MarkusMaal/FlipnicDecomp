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

// Function: entry_001e2814
// Address: 0x1e2814 - 0x1e2870
void entry_001e2814_0x1e2814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2814_0x1e2814");
#endif

    ctx->pc = 0x1e2814u;

label_1e2814:
    // 0x1e2814: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x1e2814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e2818: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e2818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e281c: 0x24e8000e  addiu       $t0, $a3, 0xE
    ctx->pc = 0x1e281cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 14));
    // 0x1e2820: 0x24c9000e  addiu       $t1, $a2, 0xE
    ctx->pc = 0x1e2820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 14));
    // 0x1e2824: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1e2824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e2828: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x1e2828u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e282c: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x1e282cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1e2830: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x1e2830u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e2834: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x1e2834u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1e2838: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x1e2838u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e283c: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x1e283cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x1e2840: 0xa4c30006  sh          $v1, 0x6($a2)
    ctx->pc = 0x1e2840u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e2844: 0x94e30008  lhu         $v1, 0x8($a3)
    ctx->pc = 0x1e2844u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1e2848: 0xa4c30008  sh          $v1, 0x8($a2)
    ctx->pc = 0x1e2848u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e284c: 0x94e3000a  lhu         $v1, 0xA($a3)
    ctx->pc = 0x1e284cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x1e2850: 0xa4c3000a  sh          $v1, 0xA($a2)
    ctx->pc = 0x1e2850u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e2854: 0x94e3000c  lhu         $v1, 0xC($a3)
    ctx->pc = 0x1e2854u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1e2858: 0xa4c3000c  sh          $v1, 0xC($a2)
    ctx->pc = 0x1e2858u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e285c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1e285cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1e2860: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x1e2860u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e2864: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1e2864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1e2868: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1E2868u;
    {
        const bool branch_taken_0x1e2868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2868u;
        // 0x1e286c: 0xa5230000  sh          $v1, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2868) {
            ctx->pc = 0x1E2814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2814;
        }
    }
    ctx->pc = 0x1E2870u;
}
