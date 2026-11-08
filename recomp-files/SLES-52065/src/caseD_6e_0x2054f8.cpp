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

// Function: caseD_6e
// Address: 0x2054f8 - 0x205524
void caseD_6e_0x2054f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6e_0x2054f8");
#endif

    ctx->pc = 0x2054f8u;

    // 0x2054f8: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x2054f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
    // 0x2054fc: 0x5440ff69  bnel        $v0, $zero, . + 4 + (-0x97 << 2)
    ctx->pc = 0x2054FCu;
    {
        const bool branch_taken_0x2054fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2054fc) {
            ctx->pc = 0x205500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2054FCu;
            // 0x205500: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2052A4u;
            return;
        }
    }
    ctx->pc = 0x205504u;
    // 0x205504: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x205504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x205508: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x205508u;
    {
        const bool branch_taken_0x205508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205508u;
        // 0x20550c: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205508) {
            ctx->pc = 0x205524u;
            return;
        }
    }
    ctx->pc = 0x205510u;
    // 0x205510: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x205510u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x205514: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x205514u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x205518: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x205518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x20551c: 0x1000ff61  b           . + 4 + (-0x9F << 2)
    ctx->pc = 0x20551Cu;
    {
        const bool branch_taken_0x20551c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20551Cu;
        // 0x205520: 0xa49e0000  sh          $fp, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20551c) {
            ctx->pc = 0x2052A4u;
            return;
        }
    }
    ctx->pc = 0x205524u;
}
