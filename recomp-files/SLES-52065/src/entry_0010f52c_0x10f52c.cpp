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

// Function: entry_0010f52c
// Address: 0x10f52c - 0x10f558
void entry_0010f52c_0x10f52c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f52c_0x10f52c");
#endif

    ctx->pc = 0x10f52cu;

    // 0x10f52c: 0x92030225  lbu         $v1, 0x225($s0)
    ctx->pc = 0x10f52cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 549)));
    // 0x10f530: 0x31fbc  dsll32      $v1, $v1, 30
    ctx->pc = 0x10f530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 30));
    // 0x10f534: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x10f534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x10f538: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F538u;
    {
        const bool branch_taken_0x10f538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f538) {
            ctx->pc = 0x10F558u;
            return;
        }
    }
    ctx->pc = 0x10F540u;
    // 0x10f540: 0x92050224  lbu         $a1, 0x224($s0)
    ctx->pc = 0x10f540u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x10f544: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x10f544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x10f548: 0x30040007  andi        $a0, $zero, 0x7
    ctx->pc = 0x10f548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x10f54c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x10f550: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10f554: 0xa2030224  sb          $v1, 0x224($s0)
    ctx->pc = 0x10f554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 548), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x10f558u;
}
