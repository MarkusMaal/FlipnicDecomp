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

// Function: entry_002060c0
// Address: 0x2060c0 - 0x2060dc
void entry_002060c0_0x2060c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002060c0_0x2060c0");
#endif

    ctx->pc = 0x2060c0u;

    // 0x2060c0: 0x2402ffdb  addiu       $v0, $zero, -0x25
    ctx->pc = 0x2060c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
    // 0x2060c4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2060c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2060c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2060c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2060cc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2060ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2060d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2060d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2060d4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2060d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2060d8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2060d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x2060dcu;
}
