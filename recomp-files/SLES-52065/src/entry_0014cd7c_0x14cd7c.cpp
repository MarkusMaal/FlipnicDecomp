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

// Function: entry_0014cd7c
// Address: 0x14cd7c - 0x14cdc0
void entry_0014cd7c_0x14cd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cd7c_0x14cd7c");
#endif

    ctx->pc = 0x14cd7cu;

    // 0x14cd7c: 0x0  nop
    ctx->pc = 0x14cd7cu;
    // NOP
    // 0x14cd80: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x14cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x14cd84: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x14cd84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x14cd88: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14cd88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14cd8c: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x14CD8Cu;
    {
        const bool branch_taken_0x14cd8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cd8c) {
            ctx->pc = 0x14CE34u;
            return;
        }
    }
    ctx->pc = 0x14CD94u;
    // 0x14cd94: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x14cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x14cd98: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14cd9c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14cda0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14cda0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14cda4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14cda8: 0x8c740008  lw          $s4, 0x8($v1)
    ctx->pc = 0x14cda8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14cdac: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14cdb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14cdb4: 0x2839021  addu        $s2, $s4, $v1
    ctx->pc = 0x14cdb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x14cdb8: 0x1292001e  beq         $s4, $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x14CDB8u;
    {
        const bool branch_taken_0x14cdb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 18));
        ctx->pc = 0x14CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CDB8u;
        // 0x14cdbc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cdb8) {
            ctx->pc = 0x14CE34u;
            return;
        }
    }
    ctx->pc = 0x14CDC0u;
}
