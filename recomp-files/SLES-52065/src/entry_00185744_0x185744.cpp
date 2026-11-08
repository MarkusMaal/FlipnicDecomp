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

// Function: entry_00185744
// Address: 0x185744 - 0x1857c4
void entry_00185744_0x185744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185744_0x185744");
#endif

    ctx->pc = 0x185744u;

    // 0x185744: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x185744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x185748: 0x942891d0  lhu         $t0, -0x6E30($at)
    ctx->pc = 0x185748u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939088)));
    // 0x18574c: 0x304a3fff  andi        $t2, $v0, 0x3FFF
    ctx->pc = 0x18574cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x185750: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x185750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x185754: 0x24a22000  addiu       $v0, $a1, 0x2000
    ctx->pc = 0x185754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
    // 0x185758: 0x2409c000  addiu       $t1, $zero, -0x4000
    ctx->pc = 0x185758u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x18575c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x18575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x185760: 0x30673fff  andi        $a3, $v1, 0x3FFF
    ctx->pc = 0x185760u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x185764: 0x64052800  daddiu      $a1, $zero, 0x2800
    ctx->pc = 0x185764u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10240);
    // 0x185768: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x185768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x18576c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18576cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185770: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x185770u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x185774: 0x942691d2  lhu         $a2, -0x6E2E($at)
    ctx->pc = 0x185774u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939090)));
    // 0x185778: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x185778u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x18577c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18577cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185780: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x185780u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x185784: 0x942491f0  lhu         $a0, -0x6E10($at)
    ctx->pc = 0x185784u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939120)));
    // 0x185788: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x185788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x18578c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18578cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185790: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x185790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x185794: 0x942291f2  lhu         $v0, -0x6E0E($at)
    ctx->pc = 0x185794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939122)));
    // 0x185798: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x185798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x18579c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18579cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1857a0: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1857a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1857a4: 0xa42891d0  sh          $t0, -0x6E30($at)
    ctx->pc = 0x1857a4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939088), (uint16_t)GPR_U32(ctx, 8));
    // 0x1857a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1857a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1857ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1857acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1857b0: 0xa42691d2  sh          $a2, -0x6E2E($at)
    ctx->pc = 0x1857b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3691D2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3691D2u, _value); } while (0);
    // 0x1857b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1857b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1857b8: 0xa42491f0  sh          $a0, -0x6E10($at)
    ctx->pc = 0x1857b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3691F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3691F0u, _value); } while (0);
    // 0x1857bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1857bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1857c0: 0xa42291f2  sh          $v0, -0x6E0E($at)
    ctx->pc = 0x1857c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3691F2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3691F2u, _value); } while (0);
    ctx->pc = 0x1857c4u;
}
