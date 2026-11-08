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

// Function: entry_00140b48
// Address: 0x140b48 - 0x140b78
void entry_00140b48_0x140b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140b48_0x140b48");
#endif

    ctx->pc = 0x140b48u;

    // 0x140b48: 0x10e0004f  beqz        $a3, . + 4 + (0x4F << 2)
    ctx->pc = 0x140B48u;
    {
        const bool branch_taken_0x140b48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B48u;
        // 0x140b4c: 0x188082b  sltu        $at, $t4, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b48) {
            ctx->pc = 0x140C88u;
            return;
        }
    }
    ctx->pc = 0x140B50u;
    // 0x140b50: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x140B50u;
    {
        const bool branch_taken_0x140b50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140b50) {
            ctx->pc = 0x140B78u;
            return;
        }
    }
    ctx->pc = 0x140B58u;
    // 0x140b58: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x140b58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x140b5c: 0xc4080  sll         $t0, $t4, 2
    ctx->pc = 0x140b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x140b60: 0x27af0040  addiu       $t7, $sp, 0x40
    ctx->pc = 0x140b60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x140b64: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x140b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x140b68: 0xafa90044  sw          $t1, 0x44($sp)
    ctx->pc = 0x140b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 9));
    // 0x140b6c: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x140b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x140b70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x140B70u;
    {
        const bool branch_taken_0x140b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B70u;
        // 0x140b74: 0xafa50040  sw          $a1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140b70) {
            ctx->pc = 0x140B98u;
            return;
        }
    }
    ctx->pc = 0x140B78u;
}
