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

// Function: entry_002053a0
// Address: 0x2053a0 - 0x2053d8
void entry_002053a0_0x2053a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002053a0_0x2053a0");
#endif

    ctx->pc = 0x2053a0u;

    // 0x2053a0: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x2053a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2053a4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2053a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2053a8: 0x1443025e  bne         $v0, $v1, . + 4 + (0x25E << 2)
    ctx->pc = 0x2053A8u;
    {
        const bool branch_taken_0x2053a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2053ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053A8u;
        // 0x2053ac: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053a8) {
            ctx->pc = 0x205D24u;
            return;
        }
    }
    ctx->pc = 0x2053B0u;
    // 0x2053b0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2053b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2053b4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2053b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2053b8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2053b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2053bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2053bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2053c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2053c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2053c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2053c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2053c8: 0x1a00ffed  blez        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2053C8u;
    {
        const bool branch_taken_0x2053c8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2053CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053C8u;
        // 0x2053cc: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053c8) {
            ctx->pc = 0x205380u;
            return;
        }
    }
    ctx->pc = 0x2053D0u;
    // 0x2053d0: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
    ctx->pc = 0x2053D0u;
    {
        const bool branch_taken_0x2053d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2053D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053D0u;
        // 0x2053d4: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053d0) {
            ctx->pc = 0x2052A4u;
            return;
        }
    }
    ctx->pc = 0x2053D8u;
}
