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

// Function: entry_00184ecc
// Address: 0x184ecc - 0x184f60
void entry_00184ecc_0x184ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184ecc_0x184ecc");
#endif

    ctx->pc = 0x184eccu;

    // 0x184ecc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x184eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x184ed0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x184ED0u;
    {
        const bool branch_taken_0x184ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184ED0u;
        // 0x184ed4: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ed0) {
            ctx->pc = 0x184F60u;
            return;
        }
    }
    ctx->pc = 0x184ED8u;
    // 0x184ed8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184edc: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x184edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x184ee0: 0x94289110  lhu         $t0, -0x6EF0($at)
    ctx->pc = 0x184ee0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x369110u));
    // 0x184ee4: 0x304a3fff  andi        $t2, $v0, 0x3FFF
    ctx->pc = 0x184ee4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x184ee8: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x184ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x184eec: 0x24822000  addiu       $v0, $a0, 0x2000
    ctx->pc = 0x184eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8192));
    // 0x184ef0: 0x2409c000  addiu       $t1, $zero, -0x4000
    ctx->pc = 0x184ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x184ef4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x184ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x184ef8: 0x30673fff  andi        $a3, $v1, 0x3FFF
    ctx->pc = 0x184ef8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x184efc: 0x64052000  daddiu      $a1, $zero, 0x2000
    ctx->pc = 0x184efcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8192);
    // 0x184f00: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x184f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x184f04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f08: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x184f08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x184f0c: 0x94269112  lhu         $a2, -0x6EEE($at)
    ctx->pc = 0x184f0cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938898)));
    // 0x184f10: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x184f10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x184f14: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f18: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x184f18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x184f1c: 0x94249130  lhu         $a0, -0x6ED0($at)
    ctx->pc = 0x184f1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938928)));
    // 0x184f20: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x184f20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x184f24: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f28: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x184f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x184f2c: 0x94229132  lhu         $v0, -0x6ECE($at)
    ctx->pc = 0x184f2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938930)));
    // 0x184f30: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x184f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x184f34: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f38: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x184f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x184f3c: 0xa4289110  sh          $t0, -0x6EF0($at)
    ctx->pc = 0x184f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938896), (uint16_t)GPR_U32(ctx, 8));
    // 0x184f40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x184f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x184f44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f48: 0xa4269112  sh          $a2, -0x6EEE($at)
    ctx->pc = 0x184f48u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x369112u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369112u, _value); } while (0);
    // 0x184f4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f50: 0xa4249130  sh          $a0, -0x6ED0($at)
    ctx->pc = 0x184f50u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x369130u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x369130u, _value); } while (0);
    // 0x184f54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x184f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x184f58: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x184F58u;
    {
        const bool branch_taken_0x184f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F58u;
        // 0x184f5c: 0xa4229132  sh          $v0, -0x6ECE($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294938930), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f58) {
            ctx->pc = 0x184FE0u;
            return;
        }
    }
    ctx->pc = 0x184F60u;
}
