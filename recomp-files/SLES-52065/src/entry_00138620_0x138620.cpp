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

// Function: entry_00138620
// Address: 0x138620 - 0x138668
void entry_00138620_0x138620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138620_0x138620");
#endif

    ctx->pc = 0x138620u;

    // 0x138620: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x138620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x138624: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x138624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x138628: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x138628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13862c: 0x8c650080  lw          $a1, 0x80($v1)
    ctx->pc = 0x13862cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x138630: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x138630u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x138634: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x138634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x138638: 0x26b500a0  addiu       $s5, $s5, 0xA0
    ctx->pc = 0x138638u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
    // 0x13863c: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x13863cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x138640: 0x256182b  sltu        $v1, $s2, $s6
    ctx->pc = 0x138640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x138644: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x138644u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x138648: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x138648u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x13864c: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x13864cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x138650: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x138650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x138654: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x138654u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x138658: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x138658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13865c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x13865cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x138660: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x138660u;
    {
        const bool branch_taken_0x138660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138660u;
        // 0x138664: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138660) {
            ctx->pc = 0x1385F8u;
            return;
        }
    }
    ctx->pc = 0x138668u;
}
