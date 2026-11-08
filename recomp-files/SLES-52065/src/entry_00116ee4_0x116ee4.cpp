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

// Function: entry_00116ee4
// Address: 0x116ee4 - 0x116f0c
void entry_00116ee4_0x116ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116ee4_0x116ee4");
#endif

    ctx->pc = 0x116ee4u;

    // 0x116ee4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x116ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x116ee8: 0xc31826  xor         $v1, $a2, $v1
    ctx->pc = 0x116ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x116eec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x116eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x116ef0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x116ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x116ef4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x116ef4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x116ef8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x116ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x116efc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x116efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116f00: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x116f00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116f04: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x116f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x116f08: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x116f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x116f0cu;
}
