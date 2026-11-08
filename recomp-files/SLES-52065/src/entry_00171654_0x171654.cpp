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

// Function: entry_00171654
// Address: 0x171654 - 0x17168c
void entry_00171654_0x171654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171654_0x171654");
#endif

    ctx->pc = 0x171654u;

    // 0x171654: 0x0  nop
    ctx->pc = 0x171654u;
    // NOP
    // 0x171658: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x171658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x17165c: 0x29240003  slti        $a0, $t1, 0x3
    ctx->pc = 0x17165cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x171660: 0x1480ffe0  bnez        $a0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x171660u;
    {
        const bool branch_taken_0x171660 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x171664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171660u;
        // 0x171664: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171660) {
            ctx->pc = 0x1715E4u;
            return;
        }
    }
    ctx->pc = 0x171668u;
    // 0x171668: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x171668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17166c: 0x28640003  slti        $a0, $v1, 0x3
    ctx->pc = 0x17166cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x171670: 0x1480ffd9  bnez        $a0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x171670u;
    {
        const bool branch_taken_0x171670 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x171674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171670u;
        // 0x171674: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171670) {
            ctx->pc = 0x1715D8u;
            return;
        }
    }
    ctx->pc = 0x171678u;
    // 0x171678: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17167c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17167cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171684: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x171684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171688: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x171688u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    ctx->pc = 0x17168cu;
}
