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

// Function: entry_0015e834
// Address: 0x15e834 - 0x15e898
void entry_0015e834_0x15e834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e834_0x15e834");
#endif

    ctx->pc = 0x15e834u;

    // 0x15e834: 0x0  nop
    ctx->pc = 0x15e834u;
    // NOP
    // 0x15e838: 0x8ec40320  lw          $a0, 0x320($s6)
    ctx->pc = 0x15e838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 800)));
    // 0x15e83c: 0x8fc52c1c  lw          $a1, 0x2C1C($fp)
    ctx->pc = 0x15e83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11292)));
    // 0x15e840: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15e840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15e844: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15e848: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15e848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15e84c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15e850: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x15e850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x15e854: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x15e854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x15e858: 0x4800027  bltz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x15E858u;
    {
        const bool branch_taken_0x15e858 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x15E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E858u;
        // 0x15e85c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e858) {
            ctx->pc = 0x15E8F8u;
            return;
        }
    }
    ctx->pc = 0x15E860u;
    // 0x15e860: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15e864: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15e864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15e868: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x15e868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15e86c: 0x9083003d  lbu         $v1, 0x3D($a0)
    ctx->pc = 0x15e86cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
    // 0x15e870: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x15E870u;
    {
        const bool branch_taken_0x15e870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e870) {
            ctx->pc = 0x15E8F8u;
            return;
        }
    }
    ctx->pc = 0x15E878u;
    // 0x15e878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15e878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e87c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x15e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x15e880: 0x8c940030  lw          $s4, 0x30($a0)
    ctx->pc = 0x15e880u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x15e884: 0x8483000a  lh          $v1, 0xA($a0)
    ctx->pc = 0x15e884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x15e888: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x15e888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x15e88c: 0x291082a  slt         $at, $s4, $s1
    ctx->pc = 0x15e88cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15e890: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x15E890u;
    {
        const bool branch_taken_0x15e890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E890u;
        // 0x15e894: 0x149080  sll         $s2, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e890) {
            ctx->pc = 0x15E8F8u;
            return;
        }
    }
    ctx->pc = 0x15E898u;
}
