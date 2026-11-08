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

// Function: entry_00190724
// Address: 0x190724 - 0x1907a0
void entry_00190724_0x190724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190724_0x190724");
#endif

    ctx->pc = 0x190724u;

label_190724:
    // 0x190724: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x190724u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190728: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19072c: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x19072cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x190730: 0xa3302a  slt         $a2, $a1, $v1
    ctx->pc = 0x190730u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x190734: 0xc4080  sll         $t0, $t4, 2
    ctx->pc = 0x190734u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x190738: 0xc39c0  sll         $a3, $t4, 7
    ctx->pc = 0x190738u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 7));
    // 0x19073c: 0x2085821  addu        $t3, $s0, $t0
    ctx->pc = 0x19073cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x190740: 0x2074821  addu        $t1, $s0, $a3
    ctx->pc = 0x190740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x190744: 0x8d6d0044  lw          $t5, 0x44($t3)
    ctx->pc = 0x190744u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 68)));
    // 0x190748: 0xc3980  sll         $a3, $t4, 6
    ctx->pc = 0x190748u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
    // 0x19074c: 0x2074021  addu        $t0, $s0, $a3
    ctx->pc = 0x19074cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x190750: 0xc3940  sll         $a3, $t4, 5
    ctx->pc = 0x190750u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x190754: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x190754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x190758: 0xed6021  addu        $t4, $a3, $t5
    ctx->pc = 0x190758u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x19075c: 0xd3880  sll         $a3, $t5, 2
    ctx->pc = 0x19075cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x190760: 0x1274821  addu        $t1, $t1, $a3
    ctx->pc = 0x190760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x190764: 0xad2a0084  sw          $t2, 0x84($t1)
    ctx->pc = 0x190764u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 132), GPR_U32(ctx, 10));
    // 0x190768: 0xd3840  sll         $a3, $t5, 1
    ctx->pc = 0x190768u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x19076c: 0x84890004  lh          $t1, 0x4($a0)
    ctx->pc = 0x19076cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190770: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x190770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x190774: 0x25a70001  addiu       $a3, $t5, 0x1
    ctx->pc = 0x190774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x190778: 0xa5090884  sh          $t1, 0x884($t0)
    ctx->pc = 0x190778u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2180), (uint16_t)GPR_U32(ctx, 9));
    // 0x19077c: 0x90880006  lbu         $t0, 0x6($a0)
    ctx->pc = 0x19077cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x190780: 0xa1880c84  sb          $t0, 0xC84($t4)
    ctx->pc = 0x190780u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3204), (uint8_t)GPR_U32(ctx, 8));
    // 0x190784: 0x90880007  lbu         $t0, 0x7($a0)
    ctx->pc = 0x190784u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x190788: 0xa1880e84  sb          $t0, 0xE84($t4)
    ctx->pc = 0x190788u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3716), (uint8_t)GPR_U32(ctx, 8));
    // 0x19078c: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x19078cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x190790: 0xa1801084  sb          $zero, 0x1084($t4)
    ctx->pc = 0x190790u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 4228), (uint8_t)GPR_U32(ctx, 0));
    // 0x190794: 0xa1801284  sb          $zero, 0x1284($t4)
    ctx->pc = 0x190794u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 4740), (uint8_t)GPR_U32(ctx, 0));
    // 0x190798: 0x14c0ffe2  bnez        $a2, . + 4 + (-0x1E << 2)
    ctx->pc = 0x190798u;
    {
        const bool branch_taken_0x190798 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190798u;
        // 0x19079c: 0xad670044  sw          $a3, 0x44($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 68), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190798) {
            ctx->pc = 0x190724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190724;
        }
    }
    ctx->pc = 0x1907A0u;
}
