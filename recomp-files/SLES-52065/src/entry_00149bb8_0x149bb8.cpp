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

// Function: entry_00149bb8
// Address: 0x149bb8 - 0x149bf8
void entry_00149bb8_0x149bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149bb8_0x149bb8");
#endif

    ctx->pc = 0x149bb8u;

    // 0x149bb8: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x149bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x149bbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x149bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x149bc0: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x149bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x149bc4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x149bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149bc8: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x149bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x149bcc: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x149bccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x149bd0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x149bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x149bd4: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x149BD4u;
    {
        const bool branch_taken_0x149bd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x149BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BD4u;
        // 0x149bd8: 0x27be0428  addiu       $fp, $sp, 0x428 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149bd4) {
            ctx->pc = 0x149C18u;
            return;
        }
    }
    ctx->pc = 0x149BDCu;
    // 0x149bdc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x149bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x149be0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149be4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x149be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149be8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149BE8u;
    {
        const bool branch_taken_0x149be8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x149BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BE8u;
        // 0x149bec: 0x28883  sra         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149be8) {
            ctx->pc = 0x149BF8u;
            return;
        }
    }
    ctx->pc = 0x149BF0u;
    // 0x149bf0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x149bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x149bf4: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x149bf4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x149bf8u;
}
