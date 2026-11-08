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

// Function: entry_00136244
// Address: 0x136244 - 0x136264
void entry_00136244_0x136244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136244_0x136244");
#endif

    ctx->pc = 0x136244u;

    // 0x136244: 0x0  nop
    ctx->pc = 0x136244u;
    // NOP
    // 0x136248: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x136248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13624c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13624cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x136250: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x136250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x136254: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x136254u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x136258: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x136258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13625c: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x13625Cu;
    {
        const bool branch_taken_0x13625c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x136260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13625Cu;
        // 0x136260: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13625c) {
            ctx->pc = 0x136234u;
            return;
        }
    }
    ctx->pc = 0x136264u;
}
