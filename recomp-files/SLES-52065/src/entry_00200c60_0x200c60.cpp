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

// Function: entry_00200c60
// Address: 0x200c60 - 0x200c8c
void entry_00200c60_0x200c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200c60_0x200c60");
#endif

    ctx->pc = 0x200c60u;

    // 0x200c60: 0xd31821  addu        $v1, $a2, $s3
    ctx->pc = 0x200c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x200c64: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x200c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x200c68: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x200C68u;
    {
        const bool branch_taken_0x200c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200c68) {
            ctx->pc = 0x200C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200C68u;
            // 0x200c6c: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200C94u;
            return;
        }
    }
    ctx->pc = 0x200C70u;
    // 0x200c70: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x200c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x200c74: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x200c74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200c78: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x200c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x200c7c: 0x26b20008  addiu       $s2, $s5, 0x8
    ctx->pc = 0x200c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x200c80: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x200c80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x200c84: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x200C84u;
    {
        const bool branch_taken_0x200c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C84u;
        // 0x200c88: 0xac460008  sw          $a2, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c84) {
            ctx->pc = 0x201008u;
            return;
        }
    }
    ctx->pc = 0x200C8Cu;
}
