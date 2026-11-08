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

// Function: caseD_58
// Address: 0x205480 - 0x2054a0
void caseD_58_0x205480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_58_0x205480");
#endif

    ctx->pc = 0x205480u;

    // 0x205480: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x205480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x205484: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x205484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x205488: 0x24423628  addiu       $v0, $v0, 0x3628
    ctx->pc = 0x205488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13864));
    // 0x20548c: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x20548cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
    // 0x205490: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x205490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
    // 0x205494: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x205494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205498: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x205498u;
    {
        const bool branch_taken_0x205498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205498u;
        // 0x20549c: 0xafa40260  sw          $a0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205498) {
            ctx->pc = 0x205584u;
            return;
        }
    }
    ctx->pc = 0x2054A0u;
}
