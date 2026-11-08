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

// Function: entry_001d0a50
// Address: 0x1d0a50 - 0x1d0af4
void entry_001d0a50_0x1d0a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0a50_0x1d0a50");
#endif

    ctx->pc = 0x1d0a50u;

    // 0x1d0a50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0a54: 0x300c0003  andi        $t4, $zero, 0x3
    ctx->pc = 0x1d0a54u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1d0a58: 0x902dfc60  lbu         $t5, -0x3A0($at)
    ctx->pc = 0x1d0a58u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x36FC60u));
    // 0x1d0a5c: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x1d0a5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1d0a60: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x1d0a60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1d0a64: 0x64090004  daddiu      $t1, $zero, 0x4
    ctx->pc = 0x1d0a64u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x1d0a68: 0x2406ffcf  addiu       $a2, $zero, -0x31
    ctx->pc = 0x1d0a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1d0a6c: 0xc3900  sll         $a3, $t4, 4
    ctx->pc = 0x1d0a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x1d0a70: 0x2404ff3f  addiu       $a0, $zero, -0xC1
    ctx->pc = 0x1d0a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x1d0a74: 0x64050040  daddiu      $a1, $zero, 0x40
    ctx->pc = 0x1d0a74u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1d0a78: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1d0a78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0a7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0a80: 0x1aa5024  and         $t2, $t5, $t2
    ctx->pc = 0x1d0a80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) & GPR_U64(ctx, 10));
    // 0x1d0a84: 0x8023fc78  lb          $v1, -0x388($at)
    ctx->pc = 0x1d0a84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966392)));
    // 0x1d0a88: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x1d0a88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x1d0a8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0a90: 0xa02afc60  sb          $t2, -0x3A0($at)
    ctx->pc = 0x1d0a90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x36FC60u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FC60u, _value); } while (0);
    // 0x1d0a94: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0a98: 0x902afc60  lbu         $t2, -0x3A0($at)
    ctx->pc = 0x1d0a98u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)FAST_READ8(0x36FC60u));
    // 0x1d0a9c: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x1d0a9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1d0aa0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0aa4: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1d0aa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1d0aa8: 0xa028fc60  sb          $t0, -0x3A0($at)
    ctx->pc = 0x1d0aa8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x36FC60u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FC60u, _value); } while (0);
    // 0x1d0aac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0ab0: 0x9028fc60  lbu         $t0, -0x3A0($at)
    ctx->pc = 0x1d0ab0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x36FC60u));
    // 0x1d0ab4: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1d0ab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1d0ab8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0abc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1d0abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1d0ac0: 0xa026fc60  sb          $a2, -0x3A0($at)
    ctx->pc = 0x1d0ac0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x36FC60u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FC60u, _value); } while (0);
    // 0x1d0ac4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0ac8: 0x9026fc60  lbu         $a2, -0x3A0($at)
    ctx->pc = 0x1d0ac8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x36FC60u));
    // 0x1d0acc: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1d0accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1d0ad0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0ad4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1d0ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1d0ad8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0AD8u;
    {
        const bool branch_taken_0x1d0ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AD8u;
        // 0x1d0adc: 0xa024fc60  sb          $a0, -0x3A0($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294966368), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ad8) {
            ctx->pc = 0x1D0AF4u;
            return;
        }
    }
    ctx->pc = 0x1D0AE0u;
    // 0x1d0ae0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0ae4: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x1d0ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
    // 0x1d0ae8: 0xa02bfc78  sb          $t3, -0x388($at)
    ctx->pc = 0x1d0ae8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x36FC78u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FC78u, _value); } while (0);
    // 0x1d0aec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0af0: 0xac23fc70  sw          $v1, -0x390($at)
    ctx->pc = 0x1d0af0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FC70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FC70u, _value); } while (0);
    ctx->pc = 0x1d0af4u;
}
