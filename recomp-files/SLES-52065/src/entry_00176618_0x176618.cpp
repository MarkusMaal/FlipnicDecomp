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

// Function: entry_00176618
// Address: 0x176618 - 0x17665c
void entry_00176618_0x176618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176618_0x176618");
#endif

    ctx->pc = 0x176618u;

    // 0x176618: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x176618u;
    {
        const bool branch_taken_0x176618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176618) {
            ctx->pc = 0x1769DCu;
            return;
        }
    }
    ctx->pc = 0x176620u;
    // 0x176620: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x176620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x176624: 0x8e650c20  lw          $a1, 0xC20($s3)
    ctx->pc = 0x176624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
    // 0x176628: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x176628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17662c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17662cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176630: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x176630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x176634: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x176634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x176638: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x176638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x17663c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17663cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x176640: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x176640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x176644: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x176644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x176648: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x176648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x17664c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17664Cu;
    {
        const bool branch_taken_0x17664c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17664Cu;
        // 0x176650: 0x24920020  addiu       $s2, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17664c) {
            ctx->pc = 0x17665Cu;
            return;
        }
    }
    ctx->pc = 0x176654u;
    // 0x176654: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x176654u;
    {
        const bool branch_taken_0x176654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176654u;
        // 0x176658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176654) {
            ctx->pc = 0x1767E4u;
            return;
        }
    }
    ctx->pc = 0x17665Cu;
}
