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

// Function: entry_0015e808
// Address: 0x15e808 - 0x15e834
void entry_0015e808_0x15e808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e808_0x15e808");
#endif

    ctx->pc = 0x15e808u;

    // 0x15e808: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15e808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15e80c: 0x3c3b021  addu        $s6, $fp, $v1
    ctx->pc = 0x15e80cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x15e810: 0x86c40228  lh          $a0, 0x228($s6)
    ctx->pc = 0x15e810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 552)));
    // 0x15e814: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15e814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15e818: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x15E818u;
    {
        const bool branch_taken_0x15e818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E818u;
        // 0x15e81c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e818) {
            ctx->pc = 0x15E940u;
            return;
        }
    }
    ctx->pc = 0x15E820u;
    // 0x15e820: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x15E820u;
    {
        const bool branch_taken_0x15e820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e820) {
            ctx->pc = 0x15E940u;
            return;
        }
    }
    ctx->pc = 0x15E828u;
    // 0x15e828: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x15e828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x15e82c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15e82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e830: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15e830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15e834u;
}
