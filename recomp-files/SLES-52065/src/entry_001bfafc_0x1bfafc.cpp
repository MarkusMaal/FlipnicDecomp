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

// Function: entry_001bfafc
// Address: 0x1bfafc - 0x1bfb28
void entry_001bfafc_0x1bfafc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfafc_0x1bfafc");
#endif

    ctx->pc = 0x1bfafcu;

    // 0x1bfafc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfb00: 0x8022f538  lb          $v0, -0xAC8($at)
    ctx->pc = 0x1bfb00u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F538u));
    // 0x1bfb04: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BFB04u;
    {
        const bool branch_taken_0x1bfb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfb04) {
            ctx->pc = 0x1BFB28u;
            return;
        }
    }
    ctx->pc = 0x1BFB0Cu;
    // 0x1bfb0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bfb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfb10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfb14: 0xa022f538  sb          $v0, -0xAC8($at)
    ctx->pc = 0x1bfb14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F538u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F538u, _value); } while (0);
    // 0x1bfb18: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1bfb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1bfb1c: 0x34623333  ori         $v0, $v1, 0x3333
    ctx->pc = 0x1bfb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1bfb20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfb24: 0xac22f530  sw          $v0, -0xAD0($at)
    ctx->pc = 0x1bfb24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F530u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F530u, _value); } while (0);
    ctx->pc = 0x1bfb28u;
}
