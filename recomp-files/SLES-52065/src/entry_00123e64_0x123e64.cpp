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

// Function: entry_00123e64
// Address: 0x123e64 - 0x123e88
void entry_00123e64_0x123e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123e64_0x123e64");
#endif

    ctx->pc = 0x123e64u;

    // 0x123e64: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x123e64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x123e68: 0x202a821  addu        $s5, $s0, $v0
    ctx->pc = 0x123e68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x123e6c: 0xae950080  sw          $s5, 0x80($s4)
    ctx->pc = 0x123e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 21));
    // 0x123e70: 0x8e9e008c  lw          $fp, 0x8C($s4)
    ctx->pc = 0x123e70u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x123e74: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x123e74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x123e78: 0x10200092  beqz        $at, . + 4 + (0x92 << 2)
    ctx->pc = 0x123E78u;
    {
        const bool branch_taken_0x123e78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E78u;
        // 0x123e7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e78) {
            ctx->pc = 0x1240C4u;
            return;
        }
    }
    ctx->pc = 0x123E80u;
    // 0x123e80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x123e80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e84: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x123e84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x123e88u;
}
