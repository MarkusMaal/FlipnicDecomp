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

// Function: entry_001fa4c0
// Address: 0x1fa4c0 - 0x1fa4f8
void entry_001fa4c0_0x1fa4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa4c0_0x1fa4c0");
#endif

    ctx->pc = 0x1fa4c0u;

    // 0x1fa4c0: 0x24c6ff81  addiu       $a2, $a2, -0x7F
    ctx->pc = 0x1fa4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x1fa4c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fa4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fa4c8: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x1fa4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1fa4cc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1fa4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1fa4d0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1fa4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1fa4d4: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1fa4d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x1fa4d8: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x1fa4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fa4dc: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x1fa4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x1fa4e0: 0x645c0  sll         $t0, $a2, 23
    ctx->pc = 0x1fa4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x1fa4e4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1fa4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fa4e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fa4e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa4ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fa4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa4f0: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1fa4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x1fa4f4: 0x0  nop
    ctx->pc = 0x1fa4f4u;
    // NOP
    ctx->pc = 0x1fa4f8u;
}
