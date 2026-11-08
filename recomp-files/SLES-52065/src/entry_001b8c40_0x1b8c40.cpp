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

// Function: entry_001b8c40
// Address: 0x1b8c40 - 0x1b8cc8
void entry_001b8c40_0x1b8c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8c40_0x1b8c40");
#endif

    ctx->pc = 0x1b8c40u;

    // 0x1b8c40: 0x300a0003  andi        $t2, $zero, 0x3
    ctx->pc = 0x1b8c40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1b8c44: 0x902bf430  lbu         $t3, -0xBD0($at)
    ctx->pc = 0x1b8c44u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964272)));
    // 0x1b8c48: 0x2409fffc  addiu       $t1, $zero, -0x4
    ctx->pc = 0x1b8c48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1b8c4c: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x1b8c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1b8c50: 0x2407fff3  addiu       $a3, $zero, -0xD
    ctx->pc = 0x1b8c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1b8c54: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x1b8c54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b8c58: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1b8c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1b8c5c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1b8c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1b8c60: 0x2405ffcf  addiu       $a1, $zero, -0x31
    ctx->pc = 0x1b8c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1b8c64: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x1b8c64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1b8c68: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x1b8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x1b8c6c: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x1b8c6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1b8c70: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8c74: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1b8c74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1b8c78: 0xa029f430  sb          $t1, -0xBD0($at)
    ctx->pc = 0x1b8c78u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x36F430u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F430u, _value); } while (0);
    // 0x1b8c7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8c80: 0x9029f430  lbu         $t1, -0xBD0($at)
    ctx->pc = 0x1b8c80u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)FAST_READ8(0x36F430u));
    // 0x1b8c84: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1b8c84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1b8c88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8c8c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1b8c8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1b8c90: 0xa027f430  sb          $a3, -0xBD0($at)
    ctx->pc = 0x1b8c90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x36F430u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F430u, _value); } while (0);
    // 0x1b8c94: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8c98: 0x9027f430  lbu         $a3, -0xBD0($at)
    ctx->pc = 0x1b8c98u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x36F430u));
    // 0x1b8c9c: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1b8c9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1b8ca0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8ca4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1b8ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1b8ca8: 0xa025f430  sb          $a1, -0xBD0($at)
    ctx->pc = 0x1b8ca8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x36F430u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F430u, _value); } while (0);
    // 0x1b8cac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8cb0: 0x9025f430  lbu         $a1, -0xBD0($at)
    ctx->pc = 0x1b8cb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x36F430u));
    // 0x1b8cb4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b8cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1b8cb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8cbc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b8cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b8cc0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1B8CC0u;
    {
        const bool branch_taken_0x1b8cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CC0u;
        // 0x1b8cc4: 0xa023f430  sb          $v1, -0xBD0($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964272), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8cc0) {
            ctx->pc = 0x1B8DCCu;
            return;
        }
    }
    ctx->pc = 0x1B8CC8u;
}
