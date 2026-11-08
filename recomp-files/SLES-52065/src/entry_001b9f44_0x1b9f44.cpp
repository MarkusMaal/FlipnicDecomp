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

// Function: entry_001b9f44
// Address: 0x1b9f44 - 0x1b9fcc
void entry_001b9f44_0x1b9f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9f44_0x1b9f44");
#endif

    ctx->pc = 0x1b9f44u;

    // 0x1b9f44: 0x30090003  andi        $t1, $zero, 0x3
    ctx->pc = 0x1b9f44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1b9f48: 0x902af4a0  lbu         $t2, -0xB60($at)
    ctx->pc = 0x1b9f48u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
    // 0x1b9f4c: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x1b9f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1b9f50: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1b9f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1b9f54: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1b9f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1b9f58: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x1b9f58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b9f5c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1b9f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1b9f60: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1b9f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1b9f64: 0x2404ffcf  addiu       $a0, $zero, -0x31
    ctx->pc = 0x1b9f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1b9f68: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x1b9f68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1b9f6c: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x1b9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x1b9f70: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x1b9f70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1b9f74: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9f78: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1b9f78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1b9f7c: 0xa028f4a0  sb          $t0, -0xB60($at)
    ctx->pc = 0x1b9f7cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x36F4A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F4A0u, _value); } while (0);
    // 0x1b9f80: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9f84: 0x9028f4a0  lbu         $t0, -0xB60($at)
    ctx->pc = 0x1b9f84u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x36F4A0u));
    // 0x1b9f88: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1b9f88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1b9f8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9f90: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b9f90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1b9f94: 0xa026f4a0  sb          $a2, -0xB60($at)
    ctx->pc = 0x1b9f94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x36F4A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F4A0u, _value); } while (0);
    // 0x1b9f98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9f9c: 0x9026f4a0  lbu         $a2, -0xB60($at)
    ctx->pc = 0x1b9f9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x36F4A0u));
    // 0x1b9fa0: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1b9fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1b9fa4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9fa8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1b9fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1b9fac: 0xa024f4a0  sb          $a0, -0xB60($at)
    ctx->pc = 0x1b9facu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F4A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F4A0u, _value); } while (0);
    // 0x1b9fb0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9fb4: 0x9024f4a0  lbu         $a0, -0xB60($at)
    ctx->pc = 0x1b9fb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x36F4A0u));
    // 0x1b9fb8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1b9fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1b9fbc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9fc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b9fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b9fc4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1B9FC4u;
    {
        const bool branch_taken_0x1b9fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FC4u;
        // 0x1b9fc8: 0xa022f4a0  sb          $v0, -0xB60($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fc4) {
            ctx->pc = 0x1BA0D0u;
            return;
        }
    }
    ctx->pc = 0x1B9FCCu;
}
