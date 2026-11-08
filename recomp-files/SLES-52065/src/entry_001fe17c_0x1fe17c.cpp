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

// Function: entry_001fe17c
// Address: 0x1fe17c - 0x1fe198
void entry_001fe17c_0x1fe17c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe17c_0x1fe17c");
#endif

    ctx->pc = 0x1fe17cu;

    // 0x1fe17c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1fe17cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fe180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe184: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1fe184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fe188: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x1fe188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
    // 0x1fe18c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1fe18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1fe190: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x1fe190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fe194: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1fe194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x1fe198u;
}
