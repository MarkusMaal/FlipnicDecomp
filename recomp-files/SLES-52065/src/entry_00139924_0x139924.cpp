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

// Function: entry_00139924
// Address: 0x139924 - 0x13998c
void entry_00139924_0x139924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139924_0x139924");
#endif

    ctx->pc = 0x139924u;

    // 0x139924: 0x908d0010  lbu         $t5, 0x10($a0)
    ctx->pc = 0x139924u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x139928: 0x240bfffc  addiu       $t3, $zero, -0x4
    ctx->pc = 0x139928u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x13992c: 0x300c0003  andi        $t4, $zero, 0x3
    ctx->pc = 0x13992cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x139930: 0x2409fff3  addiu       $t1, $zero, -0xD
    ctx->pc = 0x139930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x139934: 0x640a0004  daddiu      $t2, $zero, 0x4
    ctx->pc = 0x139934u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x139938: 0x2407ffcf  addiu       $a3, $zero, -0x31
    ctx->pc = 0x139938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x13993c: 0xc4100  sll         $t0, $t4, 4
    ctx->pc = 0x13993cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x139940: 0x2405ff3f  addiu       $a1, $zero, -0xC1
    ctx->pc = 0x139940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x139944: 0x64060040  daddiu      $a2, $zero, 0x40
    ctx->pc = 0x139944u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x139948: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x139948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13994c: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x13994cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x139950: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x139950u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x139954: 0xa08b0010  sb          $t3, 0x10($a0)
    ctx->pc = 0x139954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 11));
    // 0x139958: 0x908b0010  lbu         $t3, 0x10($a0)
    ctx->pc = 0x139958u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13995c: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x13995cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x139960: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x139960u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x139964: 0xa0890010  sb          $t1, 0x10($a0)
    ctx->pc = 0x139964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 9));
    // 0x139968: 0x90890010  lbu         $t1, 0x10($a0)
    ctx->pc = 0x139968u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13996c: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x13996cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x139970: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x139970u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x139974: 0xa0870010  sb          $a3, 0x10($a0)
    ctx->pc = 0x139974u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x139978: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x139978u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13997c: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x13997cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x139980: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x139980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x139984: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x139984u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x139988: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x139988u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x13998cu;
}
