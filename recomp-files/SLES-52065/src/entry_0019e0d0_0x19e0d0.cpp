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

// Function: entry_0019e0d0
// Address: 0x19e0d0 - 0x19e0f0
void entry_0019e0d0_0x19e0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e0d0_0x19e0d0");
#endif

    ctx->pc = 0x19e0d0u;

    // 0x19e0d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19e0d4: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E0D4u;
    {
        const bool branch_taken_0x19e0d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e0d4) {
            ctx->pc = 0x19E0F0u;
            return;
        }
    }
    ctx->pc = 0x19E0DCu;
    // 0x19e0dc: 0xaea00984  sw          $zero, 0x984($s5)
    ctx->pc = 0x19e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2436), GPR_U32(ctx, 0));
    // 0x19e0e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19e0e4: 0xaea00988  sw          $zero, 0x988($s5)
    ctx->pc = 0x19e0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2440), GPR_U32(ctx, 0));
    // 0x19e0e8: 0xaea0098c  sw          $zero, 0x98C($s5)
    ctx->pc = 0x19e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2444), GPR_U32(ctx, 0));
    // 0x19e0ec: 0xaea2032c  sw          $v0, 0x32C($s5)
    ctx->pc = 0x19e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 812), GPR_U32(ctx, 2));
    ctx->pc = 0x19e0f0u;
}
