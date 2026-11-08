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

// Function: entry_0017fa60
// Address: 0x17fa60 - 0x17fa88
void entry_0017fa60_0x17fa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fa60_0x17fa60");
#endif

    ctx->pc = 0x17fa60u;

    // 0x17fa60: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x17FA60u;
    {
        const bool branch_taken_0x17fa60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA60u;
        // 0x17fa64: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa60) {
            ctx->pc = 0x17FADCu;
            return;
        }
    }
    ctx->pc = 0x17FA68u;
    // 0x17fa68: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x17fa68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17fa6c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x17fa6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17fa70: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FA70u;
    {
        const bool branch_taken_0x17fa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17fa70) {
            ctx->pc = 0x17FA88u;
            return;
        }
    }
    ctx->pc = 0x17FA78u;
    // 0x17fa78: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x17fa78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x17fa7c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FA7Cu;
    {
        const bool branch_taken_0x17fa7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17fa7c) {
            ctx->pc = 0x17FA88u;
            return;
        }
    }
    ctx->pc = 0x17FA84u;
    // 0x17fa84: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x17fa84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x17fa88u;
}
