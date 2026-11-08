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

// Function: entry_001b9ec0
// Address: 0x1b9ec0 - 0x1b9f44
void entry_001b9ec0_0x1b9ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9ec0_0x1b9ec0");
#endif

    ctx->pc = 0x1b9ec0u;

    // 0x1b9ec0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1b9ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1b9ec4: 0x902af4a0  lbu         $t2, -0xB60($at)
    ctx->pc = 0x1b9ec4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
    // 0x1b9ec8: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x1b9ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1b9ecc: 0x30090003  andi        $t1, $zero, 0x3
    ctx->pc = 0x1b9eccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1b9ed0: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1b9ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1b9ed4: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x1b9ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b9ed8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1b9ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1b9edc: 0x2404ffcf  addiu       $a0, $zero, -0x31
    ctx->pc = 0x1b9edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1b9ee0: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x1b9ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1b9ee4: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x1b9ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x1b9ee8: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x1b9ee8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1b9eec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9ef0: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1b9ef0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1b9ef4: 0xa028f4a0  sb          $t0, -0xB60($at)
    ctx->pc = 0x1b9ef4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x36F4A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F4A0u, _value); } while (0);
    // 0x1b9ef8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9efc: 0x9028f4a0  lbu         $t0, -0xB60($at)
    ctx->pc = 0x1b9efcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x36F4A0u));
    // 0x1b9f00: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1b9f00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1b9f04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9f08: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b9f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1b9f0c: 0xa026f4a0  sb          $a2, -0xB60($at)
    ctx->pc = 0x1b9f0cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x36F4A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F4A0u, _value); } while (0);
    // 0x1b9f10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9f14: 0x9026f4a0  lbu         $a2, -0xB60($at)
    ctx->pc = 0x1b9f14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x36F4A0u));
    // 0x1b9f18: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1b9f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1b9f1c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9f20: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1b9f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1b9f24: 0xa024f4a0  sb          $a0, -0xB60($at)
    ctx->pc = 0x1b9f24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F4A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F4A0u, _value); } while (0);
    // 0x1b9f28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9f2c: 0x9024f4a0  lbu         $a0, -0xB60($at)
    ctx->pc = 0x1b9f2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x36F4A0u));
    // 0x1b9f30: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1b9f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1b9f34: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9f38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b9f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b9f3c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1B9F3Cu;
    {
        const bool branch_taken_0x1b9f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F3Cu;
        // 0x1b9f40: 0xa022f4a0  sb          $v0, -0xB60($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f3c) {
            ctx->pc = 0x1BA0D0u;
            return;
        }
    }
    ctx->pc = 0x1B9F44u;
}
