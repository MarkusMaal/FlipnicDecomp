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

// Function: entry_0010f214
// Address: 0x10f214 - 0x10f248
void entry_0010f214_0x10f214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f214_0x10f214");
#endif

    ctx->pc = 0x10f214u;

    // 0x10f214: 0x92440230  lbu         $a0, 0x230($s2)
    ctx->pc = 0x10f214u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
    // 0x10f218: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x10f218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x10f21c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10F21Cu;
    {
        const bool branch_taken_0x10f21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F21Cu;
        // 0x10f220: 0x416bc  dsll32      $v0, $a0, 26 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f21c) {
            ctx->pc = 0x10F260u;
            return;
        }
    }
    ctx->pc = 0x10F224u;
    // 0x10f224: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x10f224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x10f228: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F228u;
    {
        const bool branch_taken_0x10f228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f228) {
            ctx->pc = 0x10F248u;
            return;
        }
    }
    ctx->pc = 0x10F230u;
    // 0x10f230: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x10f230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x10f234: 0x64030008  daddiu      $v1, $zero, 0x8
    ctx->pc = 0x10f234u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x10f238: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x10f238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10f23c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10f23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10f240: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10F240u;
    {
        const bool branch_taken_0x10f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F240u;
        // 0x10f244: 0xa2420230  sb          $v0, 0x230($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 560), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f240) {
            ctx->pc = 0x10F27Cu;
            return;
        }
    }
    ctx->pc = 0x10F248u;
}
