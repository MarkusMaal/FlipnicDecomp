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

// Function: entry_0015d26c
// Address: 0x15d26c - 0x15d2cc
void entry_0015d26c_0x15d26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d26c_0x15d26c");
#endif

    ctx->pc = 0x15d26cu;

    // 0x15d26c: 0x2d42821  addu        $a1, $s6, $s4
    ctx->pc = 0x15d26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x15d270: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15d270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15d274: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x15d274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15d278: 0x14640026  bne         $v1, $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x15D278u;
    {
        const bool branch_taken_0x15d278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15d278) {
            ctx->pc = 0x15D314u;
            return;
        }
    }
    ctx->pc = 0x15D280u;
    // 0x15d280: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x15d280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x15d284: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15d284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15d288: 0x14640022  bne         $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15D288u;
    {
        const bool branch_taken_0x15d288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15d288) {
            ctx->pc = 0x15D314u;
            return;
        }
    }
    ctx->pc = 0x15D290u;
    // 0x15d290: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x15d290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x15d294: 0x17c3001f  bne         $fp, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x15D294u;
    {
        const bool branch_taken_0x15d294 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x15d294) {
            ctx->pc = 0x15D314u;
            return;
        }
    }
    ctx->pc = 0x15D29Cu;
    // 0x15d29c: 0x8ea22c1c  lw          $v0, 0x2C1C($s5)
    ctx->pc = 0x15d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15d2a0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x15d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x15d2a4: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x15d2a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x15d2a8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x15d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x15d2ac: 0x8443000c  lh          $v1, 0xC($v0)
    ctx->pc = 0x15d2acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15d2b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15d2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15d2b4: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x15d2b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15d2b8: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x15d2b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d2bc: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x15d2bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x15d2c0: 0x251082a  slt         $at, $s2, $s1
    ctx->pc = 0x15d2c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15d2c4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x15D2C4u;
    {
        const bool branch_taken_0x15d2c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2C4u;
        // 0x15d2c8: 0x129880  sll         $s3, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2c4) {
            ctx->pc = 0x15D308u;
            return;
        }
    }
    ctx->pc = 0x15D2CCu;
}
