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

// Function: entry_00132cc0
// Address: 0x132cc0 - 0x132d10
void entry_00132cc0_0x132cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132cc0_0x132cc0");
#endif

    ctx->pc = 0x132cc0u;

    // 0x132cc0: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x132cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x132cc4: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x132cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x132cc8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x132cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x132ccc: 0x3c03fc00  lui         $v1, 0xFC00
    ctx->pc = 0x132cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64512 << 16));
    // 0x132cd0: 0xde070090  ld          $a3, 0x90($s0)
    ctx->pc = 0x132cd0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x132cd4: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x132cd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x132cd8: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x132cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x132cdc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x132cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x132ce0: 0x34c3ffef  ori         $v1, $a2, 0xFFEF
    ctx->pc = 0x132ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65519);
    // 0x132ce4: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x132ce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x132ce8: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x132ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x132cec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x132cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x132cf0: 0x721b8  dsll        $a0, $a3, 6
    ctx->pc = 0x132cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 6);
    // 0x132cf4: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x132cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x132cf8: 0x4257e  dsrl32      $a0, $a0, 21
    ctx->pc = 0x132cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 21));
    // 0x132cfc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x132cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x132d00: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x132d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x132d04: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x132d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x132d08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x132d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x132d0c: 0xfe030090  sd          $v1, 0x90($s0)
    ctx->pc = 0x132d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 3));
    ctx->pc = 0x132d10u;
}
