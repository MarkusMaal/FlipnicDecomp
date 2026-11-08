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

// Function: entry_001ba050
// Address: 0x1ba050 - 0x1ba0d0
void entry_001ba050_0x1ba050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba050_0x1ba050");
#endif

    ctx->pc = 0x1ba050u;

    // 0x1ba050: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1ba050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1ba054: 0x902af4a0  lbu         $t2, -0xB60($at)
    ctx->pc = 0x1ba054u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
    // 0x1ba058: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x1ba058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1ba05c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1ba05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1ba060: 0x64090002  daddiu      $t1, $zero, 0x2
    ctx->pc = 0x1ba060u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x1ba064: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1ba064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1ba068: 0x64070008  daddiu      $a3, $zero, 0x8
    ctx->pc = 0x1ba068u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x1ba06c: 0x2404ffcf  addiu       $a0, $zero, -0x31
    ctx->pc = 0x1ba06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1ba070: 0x64050020  daddiu      $a1, $zero, 0x20
    ctx->pc = 0x1ba070u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x1ba074: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x1ba074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x1ba078: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x1ba078u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1ba07c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ba080: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1ba080u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1ba084: 0xa028f4a0  sb          $t0, -0xB60($at)
    ctx->pc = 0x1ba084u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x36F4A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F4A0u, _value); } while (0);
    // 0x1ba088: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ba08c: 0x9028f4a0  lbu         $t0, -0xB60($at)
    ctx->pc = 0x1ba08cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x36F4A0u));
    // 0x1ba090: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1ba090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1ba094: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ba098: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1ba098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1ba09c: 0xa026f4a0  sb          $a2, -0xB60($at)
    ctx->pc = 0x1ba09cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x36F4A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F4A0u, _value); } while (0);
    // 0x1ba0a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ba0a4: 0x9026f4a0  lbu         $a2, -0xB60($at)
    ctx->pc = 0x1ba0a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x36F4A0u));
    // 0x1ba0a8: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1ba0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1ba0ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ba0b0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ba0b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1ba0b4: 0xa024f4a0  sb          $a0, -0xB60($at)
    ctx->pc = 0x1ba0b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F4A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F4A0u, _value); } while (0);
    // 0x1ba0b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ba0bc: 0x9024f4a0  lbu         $a0, -0xB60($at)
    ctx->pc = 0x1ba0bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x36F4A0u));
    // 0x1ba0c0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ba0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ba0c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ba0c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ba0cc: 0xa022f4a0  sb          $v0, -0xB60($at)
    ctx->pc = 0x1ba0ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F4A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F4A0u, _value); } while (0);
    ctx->pc = 0x1ba0d0u;
}
