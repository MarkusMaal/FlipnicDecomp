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

// Function: entry_00125a10
// Address: 0x125a10 - 0x125a64
void entry_00125a10_0x125a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125a10_0x125a10");
#endif

    ctx->pc = 0x125a10u;

    // 0x125a10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x125a10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a14: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x125a14u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a18: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x125a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x125a1c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x125a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x125a20: 0x3c090800  lui         $t1, 0x800
    ctx->pc = 0x125a20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)2048 << 16));
    // 0x125a24: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x125a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x125a28: 0x344e0040  ori         $t6, $v0, 0x40
    ctx->pc = 0x125a28u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x125a2c: 0x9583c  dsll32      $t3, $t1, 0
    ctx->pc = 0x125a2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
    // 0x125a30: 0x34098040  ori         $t1, $zero, 0x8040
    ctx->pc = 0x125a30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    // 0x125a34: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x125a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x125a38: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x125a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x125a3c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x125a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x125a40: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x125a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x125a44: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x125a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x125a48: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x125a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x125a4c: 0x2415f800  addiu       $s5, $zero, -0x800
    ctx->pc = 0x125a4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x125a50: 0x24190051  addiu       $t9, $zero, 0x51
    ctx->pc = 0x125a50u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x125a54: 0x30180003  andi        $t8, $zero, 0x3
    ctx->pc = 0x125a54u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x125a58: 0x2417fffc  addiu       $s7, $zero, -0x4
    ctx->pc = 0x125a58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x125a5c: 0x241e0053  addiu       $fp, $zero, 0x53
    ctx->pc = 0x125a5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x125a60: 0x12b7825  or          $t7, $t1, $t3
    ctx->pc = 0x125a60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    ctx->pc = 0x125a64u;
}
