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

// Function: entry_00138c74
// Address: 0x138c74 - 0x138cf0
void entry_00138c74_0x138c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138c74_0x138c74");
#endif

    ctx->pc = 0x138c74u;

    // 0x138c74: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x138c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x138c78: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x138c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138c7c: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x138c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x138c80: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x138c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x138c84: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x138c84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138c88: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x138c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x138c8c: 0x8c8600a4  lw          $a2, 0xA4($a0)
    ctx->pc = 0x138c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x138c90: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x138c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x138c94: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x138c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x138c98: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x138c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x138c9c: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x138c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x138ca0: 0xafa50180  sw          $a1, 0x180($sp)
    ctx->pc = 0x138ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 5));
    // 0x138ca4: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x138ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x138ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138cac: 0xafa50184  sw          $a1, 0x184($sp)
    ctx->pc = 0x138cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 5));
    // 0x138cb0: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x138cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x138cb4: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x138cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    // 0x138cb8: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x138cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x138cbc: 0x8c8600ac  lw          $a2, 0xAC($a0)
    ctx->pc = 0x138cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x138cc0: 0x8c450044  lw          $a1, 0x44($v0)
    ctx->pc = 0x138cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x138cc4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x138cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x138cc8: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x138cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x138ccc: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x138cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x138cd0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x138cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x138cd4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x138cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x138cd8: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x138cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x138cdc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x138cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138ce0: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x138CE0u;
    {
        const bool branch_taken_0x138ce0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x138CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CE0u;
        // 0x138ce4: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ce0) {
            ctx->pc = 0x138CF0u;
            return;
        }
    }
    ctx->pc = 0x138CE8u;
    // 0x138ce8: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x138CE8u;
    {
        const bool branch_taken_0x138ce8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x138CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CE8u;
        // 0x138cec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ce8) {
            ctx->pc = 0x138CFCu;
            return;
        }
    }
    ctx->pc = 0x138CF0u;
}
