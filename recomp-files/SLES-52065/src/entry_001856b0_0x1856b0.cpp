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

// Function: entry_001856b0
// Address: 0x1856b0 - 0x185744
void entry_001856b0_0x1856b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001856b0_0x1856b0");
#endif

    ctx->pc = 0x1856b0u;

    // 0x1856b0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1856b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1856b4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1856B4u;
    {
        const bool branch_taken_0x1856b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1856B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856B4u;
        // 0x1856b8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856b4) {
            ctx->pc = 0x185744u;
            return;
        }
    }
    ctx->pc = 0x1856BCu;
    // 0x1856bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1856bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1856c0: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x1856c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1856c4: 0x942891d0  lhu         $t0, -0x6E30($at)
    ctx->pc = 0x1856c4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x3691D0u));
    // 0x1856c8: 0x304a3fff  andi        $t2, $v0, 0x3FFF
    ctx->pc = 0x1856c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1856cc: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1856ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1856d0: 0x24822000  addiu       $v0, $a0, 0x2000
    ctx->pc = 0x1856d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8192));
    // 0x1856d4: 0x2409c000  addiu       $t1, $zero, -0x4000
    ctx->pc = 0x1856d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1856d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1856d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1856dc: 0x30673fff  andi        $a3, $v1, 0x3FFF
    ctx->pc = 0x1856dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1856e0: 0x64052800  daddiu      $a1, $zero, 0x2800
    ctx->pc = 0x1856e0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10240);
    // 0x1856e4: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x1856e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1856e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1856e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1856ec: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x1856ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x1856f0: 0x942691d2  lhu         $a2, -0x6E2E($at)
    ctx->pc = 0x1856f0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939090)));
    // 0x1856f4: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x1856f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x1856f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1856f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1856fc: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x1856fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x185700: 0x942491f0  lhu         $a0, -0x6E10($at)
    ctx->pc = 0x185700u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939120)));
    // 0x185704: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x185704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x185708: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18570c: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x18570cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x185710: 0x942291f2  lhu         $v0, -0x6E0E($at)
    ctx->pc = 0x185710u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939122)));
    // 0x185714: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x185714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x185718: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18571c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x18571cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x185720: 0xa42891d0  sh          $t0, -0x6E30($at)
    ctx->pc = 0x185720u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294939088), (uint16_t)GPR_U32(ctx, 8));
    // 0x185724: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x185724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x185728: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18572c: 0xa42691d2  sh          $a2, -0x6E2E($at)
    ctx->pc = 0x18572cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3691D2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3691D2u, _value); } while (0);
    // 0x185730: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x185734: 0xa42491f0  sh          $a0, -0x6E10($at)
    ctx->pc = 0x185734u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3691F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3691F0u, _value); } while (0);
    // 0x185738: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x185738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18573c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x18573Cu;
    {
        const bool branch_taken_0x18573c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18573Cu;
        // 0x185740: 0xa42291f2  sh          $v0, -0x6E0E($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294939122), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18573c) {
            ctx->pc = 0x1857C4u;
            return;
        }
    }
    ctx->pc = 0x185744u;
}
