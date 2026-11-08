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

// Function: entry_0013f1f8
// Address: 0x13f1f8 - 0x13f24c
void entry_0013f1f8_0x13f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f1f8_0x13f1f8");
#endif

    ctx->pc = 0x13f1f8u;

    // 0x13f1f8: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x13f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x13f1fc: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x13f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x13f200: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x13f200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x13f204: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x13f204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x13f208: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13f208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13f20c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13f210: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x13f210u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x13f214: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f218: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13f218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13f21c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13f220: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x13f220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13f224: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13f224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13f228: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x13f228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13f22c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13F22Cu;
    {
        const bool branch_taken_0x13f22c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F22Cu;
        // 0x13f230: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f22c) {
            ctx->pc = 0x13F24Cu;
            return;
        }
    }
    ctx->pc = 0x13F234u;
    // 0x13f234: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x13f234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13f238: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13f238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f23c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x13f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13f240: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f248: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x13f248u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x13f24cu;
}
