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

// Function: entry_0015cb78
// Address: 0x15cb78 - 0x15cba4
void entry_0015cb78_0x15cb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cb78_0x15cb78");
#endif

    ctx->pc = 0x15cb78u;

    // 0x15cb78: 0x2b4b821  addu        $s7, $s5, $s4
    ctx->pc = 0x15cb78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x15cb7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15cb80: 0x86e40228  lh          $a0, 0x228($s7)
    ctx->pc = 0x15cb80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 552)));
    // 0x15cb84: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x15CB84u;
    {
        const bool branch_taken_0x15cb84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB84u;
        // 0x15cb88: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb84) {
            ctx->pc = 0x15CC0Cu;
            return;
        }
    }
    ctx->pc = 0x15CB8Cu;
    // 0x15cb8c: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x15CB8Cu;
    {
        const bool branch_taken_0x15cb8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB8Cu;
        // 0x15cb90: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb8c) {
            ctx->pc = 0x15CC0Cu;
            return;
        }
    }
    ctx->pc = 0x15CB94u;
    // 0x15cb94: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x15CB94u;
    {
        const bool branch_taken_0x15cb94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB94u;
        // 0x15cb98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb94) {
            ctx->pc = 0x15CC0Cu;
            return;
        }
    }
    ctx->pc = 0x15CB9Cu;
    // 0x15cb9c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15cb9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cba0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15cba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15cba4u;
}
