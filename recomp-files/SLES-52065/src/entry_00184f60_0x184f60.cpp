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

// Function: entry_00184f60
// Address: 0x184f60 - 0x184fe0
void entry_00184f60_0x184f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184f60_0x184f60");
#endif

    ctx->pc = 0x184f60u;

    // 0x184f60: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x184f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x184f64: 0x94289110  lhu         $t0, -0x6EF0($at)
    ctx->pc = 0x184f64u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938896)));
    // 0x184f68: 0x304a3fff  andi        $t2, $v0, 0x3FFF
    ctx->pc = 0x184f68u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x184f6c: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x184f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x184f70: 0x24a22000  addiu       $v0, $a1, 0x2000
    ctx->pc = 0x184f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
    // 0x184f74: 0x2409c000  addiu       $t1, $zero, -0x4000
    ctx->pc = 0x184f74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x184f78: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x184f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x184f7c: 0x30673fff  andi        $a3, $v1, 0x3FFF
    ctx->pc = 0x184f7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x184f80: 0x64052000  daddiu      $a1, $zero, 0x2000
    ctx->pc = 0x184f80u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8192);
    // 0x184f84: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x184f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x184f88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f8c: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x184f8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x184f90: 0x94269112  lhu         $a2, -0x6EEE($at)
    ctx->pc = 0x184f90u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938898)));
    // 0x184f94: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x184f94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x184f98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f9c: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x184f9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x184fa0: 0x94249130  lhu         $a0, -0x6ED0($at)
    ctx->pc = 0x184fa0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938928)));
    // 0x184fa4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x184fa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x184fa8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184fac: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x184facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x184fb0: 0x94229132  lhu         $v0, -0x6ECE($at)
    ctx->pc = 0x184fb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938930)));
    // 0x184fb4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x184fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x184fb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184fbc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x184fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x184fc0: 0xa4289110  sh          $t0, -0x6EF0($at)
    ctx->pc = 0x184fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938896), (uint16_t)GPR_U32(ctx, 8));
    // 0x184fc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x184fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x184fc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184fcc: 0xa4269112  sh          $a2, -0x6EEE($at)
    ctx->pc = 0x184fccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x369112u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369112u, _value); } while (0);
    // 0x184fd0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184fd4: 0xa4249130  sh          $a0, -0x6ED0($at)
    ctx->pc = 0x184fd4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x369130u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369130u, _value); } while (0);
    // 0x184fd8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184fdc: 0xa4229132  sh          $v0, -0x6ECE($at)
    ctx->pc = 0x184fdcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x369132u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369132u, _value); } while (0);
    ctx->pc = 0x184fe0u;
}
