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

// Function: entry_001b8d4c
// Address: 0x1b8d4c - 0x1b8dcc
void entry_001b8d4c_0x1b8d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8d4c_0x1b8d4c");
#endif

    ctx->pc = 0x1b8d4cu;

    // 0x1b8d4c: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x1b8d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1b8d50: 0x902bf430  lbu         $t3, -0xBD0($at)
    ctx->pc = 0x1b8d50u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
    // 0x1b8d54: 0x2409fffc  addiu       $t1, $zero, -0x4
    ctx->pc = 0x1b8d54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1b8d58: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1b8d58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1b8d5c: 0x640a0002  daddiu      $t2, $zero, 0x2
    ctx->pc = 0x1b8d5cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x1b8d60: 0x2407fff3  addiu       $a3, $zero, -0xD
    ctx->pc = 0x1b8d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1b8d64: 0x64080008  daddiu      $t0, $zero, 0x8
    ctx->pc = 0x1b8d64u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x1b8d68: 0x2405ffcf  addiu       $a1, $zero, -0x31
    ctx->pc = 0x1b8d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1b8d6c: 0x64060020  daddiu      $a2, $zero, 0x20
    ctx->pc = 0x1b8d6cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x1b8d70: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x1b8d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x1b8d74: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1b8d74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1b8d78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8d7c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1b8d7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1b8d80: 0xa029f430  sb          $t1, -0xBD0($at)
    ctx->pc = 0x1b8d80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x36F430u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F430u, _value); } while (0);
    // 0x1b8d84: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8d88: 0x9029f430  lbu         $t1, -0xBD0($at)
    ctx->pc = 0x1b8d88u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)FAST_READ8(0x36F430u));
    // 0x1b8d8c: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1b8d8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1b8d90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8d94: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1b8d94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1b8d98: 0xa027f430  sb          $a3, -0xBD0($at)
    ctx->pc = 0x1b8d98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x36F430u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F430u, _value); } while (0);
    // 0x1b8d9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8da0: 0x9027f430  lbu         $a3, -0xBD0($at)
    ctx->pc = 0x1b8da0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x36F430u));
    // 0x1b8da4: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1b8da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1b8da8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8dac: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1b8dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1b8db0: 0xa025f430  sb          $a1, -0xBD0($at)
    ctx->pc = 0x1b8db0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x36F430u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F430u, _value); } while (0);
    // 0x1b8db4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8db8: 0x9025f430  lbu         $a1, -0xBD0($at)
    ctx->pc = 0x1b8db8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x36F430u));
    // 0x1b8dbc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b8dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1b8dc0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8dc4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b8dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b8dc8: 0xa023f430  sb          $v1, -0xBD0($at)
    ctx->pc = 0x1b8dc8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F430u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F430u, _value); } while (0);
    ctx->pc = 0x1b8dccu;
}
